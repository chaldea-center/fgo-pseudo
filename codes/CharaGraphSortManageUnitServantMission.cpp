void CharaGraphSortManageUnitServantMission___ctor(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitSvtCollection___ctor((CharaGraphSortManageUnitSvtCollection_o *)this, 0);
}


CharaGraphFilterLogicBase_o *CharaGraphSortManageUnitServantMission__CreateFilterLogic(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  ServantCollectionCharaGraphFilterLogic_o *v2; // x19

  if ( (byte_4C23360 & 1) == 0 )
  {
    sub_1C2D490(&ServantMissionCharaGraphFilterLogic_TypeInfo);
    byte_4C23360 = 1;
  }
  v2 = (ServantCollectionCharaGraphFilterLogic_o *)sub_1C2D6DC(ServantMissionCharaGraphFilterLogic_TypeInfo);
  ServantCollectionCharaGraphFilterLogic___ctor(v2, 0);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *CharaGraphSortManageUnitServantMission__CreateSortLogic(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  ServantCollectionCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4C2335F & 1) == 0 )
  {
    sub_1C2D490(&ServantMissionCharaGraphSortLogic_TypeInfo);
    byte_4C2335F = 1;
  }
  v2 = (ServantCollectionCharaGraphSortLogic_o *)sub_1C2D6DC(ServantMissionCharaGraphSortLogic_TypeInfo);
  ServantCollectionCharaGraphSortLogic___ctor(v2, 0);
  return (CharaGraphSortLogicBase_o *)v2;
}