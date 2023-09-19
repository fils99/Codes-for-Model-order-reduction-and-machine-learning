#print(root_H_sole)
#print(dynComp.getFloatingBase() )
#print(len(jac))

#print(dynComp.getCenterOfMassBiasAcc()) # bias?
#print(dynComp.getNrOfFrames())
#print(dynComp.model().getTotalMass())
#print(root_H_sole.asHomogeneousTransform()) # to put H in 4x4 matrix form
# print(dynComp.getDescriptionOfDegreeOfFreedom(12)) # it counts as dofs also the sensors; so in ergocub we have 57 + 8 = 65 dofs

# trav = iDynTree.Traversal()
# base_link = dynComp.getFloatingBase()
# print(base_link)
#print(dynComp.model().getLinkName(base_link))
#print( dynComp.model().getNrOfNeighbors(base_link))

#print(dynComp.model().computeFullTreeTraversal(trav, base_link))

# print(dynComp.model().getLinkName(17))

# new_base_link = dynComp.setFloatingBase('l_ankle_2')
# print(dynComp.getFloatingBase()) # verify the changement of base

# newbase_H_sole = dynComp.getRelativeTransform(dynComp.getFloatingBase(), "l_sole");
# print(newbase_H_sole)
# print(dynComp.getCenterOfMassVelocity())