#ifndef SEA_POPULAR_HRLQ_H
#define SEA_POPULAR_HRLQ_H

#include "MatchingAlgorithm.h"
#include "PreferenceList.h"
#include "VertexBookkeeping.h"
#include <queue>
#include <ostream>

// SEA Popular matching
class SEAPopularHRLQ : public MatchingAlgorithm {
private:
    // typedef queue for hospitals
    typedef std::queue<VertexPtr> FreeListType;

    // maximum level that a vertex can reach
    int max_level;

public:
    explicit SEAPopularHRLQ(std::shared_ptr<BipartiteGraph> G, bool A_proposing = false);
    ~SEAPopularHRLQ() override = default;
    std::shared_ptr<MatchedPairListType> compute_matching() override;
    
    std::pair<int,int> check_popularity(std::shared_ptr<BipartiteGraph> G, 
        std::shared_ptr<MatchingAlgorithm::MatchedPairListType> M, bool A_proposing, std::ostream& out) 
    { return {-1,-1};}
};

#endif
