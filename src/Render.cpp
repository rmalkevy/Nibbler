/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Render.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrassokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:51:01 by mrassokh          #+#    #+#             */
/*   Updated: 2018/06/01 13:51:02 by mrassokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Render.hpp"

Render	&Render::Instance()
{
	static Render instance;
	return instance;
}

Render::Render()
{

}

Render::~Render()
{

}

void 			Render::drawSnake(Snake  & snake, IWindow *window) const
{
	auto squareSnake = snake.getSnake()->begin();
	while (squareSnake != snake.getSnake()->end())
	{
		window->drawSquare((*squareSnake)->getGridX(),(*squareSnake)->getGridY(),
													(*squareSnake)->getType());
		squareSnake++;
	}
}

void 			Render::drawFood(std::shared_ptr<std::vector<std::shared_ptr<FoodSegment>>> foodList,
						IWindow *window) const
{
	auto squareFood = foodList->begin();
	while (squareFood != foodList->end())
	{
		window->drawSquare((*squareFood)->getGridX(),(*squareFood)->getGridY(),
													(*squareFood)->getType());
		squareFood++;
	}
}


void 			Render::drawObstacles(std::shared_ptr<std::vector<std::shared_ptr<Obstacle>>> obstacleList,
						IWindow *window) const
{
	auto obstacle = obstacleList->begin();
	while (obstacle != obstacleList->end())
	{
		(*obstacle)->drawObstacle(window);
		obstacle++;
	}
}
