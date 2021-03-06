/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DotObstacleBuilder.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrassokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 11:19:47 by mrassokh          #+#    #+#             */
/*   Updated: 2018/06/03 11:19:48 by mrassokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOT_OBSTACLE_BUILDER_HPP
# define DOT_OBSTACLE_BUILDER_HPP
# include "ObstacleBuilder.hpp"

class DotObstacleBuilder : public ObstacleBuilder {
public:
	DotObstacleBuilder();
	virtual ~DotObstacleBuilder();

	virtual int 		checkObstacleToGameField(GameField *gamefield,
												int const & x, int const & y);
	virtual void 		setFirstX(int const & x);
	virtual void 		setFirstY(int const & y);
	virtual void 		setSize();
	virtual void 		setObstacleSegments(GameField *gamefield,
												int const & x, int const & y);
};

#endif
