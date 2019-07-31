#pragma once
#ifndef __COMPUTATIONALGRAPH_HPP__
#define __COMPUTATIONALGRAPH_HPP__

#include <Arbiter/Core/Common/Base.hpp>
#include <Arbiter/Core/Graph/Graph.hpp>
#include <Arbiter/Core/Graph/ComputationalGraph.hpp>

ARBITER_NAMESPACE_BEGIN

class ComputationalGraph : public Graph {
private:
protected:
public:
    ComputationalGraph();
    virtual ~ComputationalGraph();

};

ARBITER_NAMESPACE_END

#endif  // __COMPUTATIONALGRAPH_HPP__
