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

  if ( (byte_4C52DAC & 1) == 0 )
  {
    sub_1C3E564(&ServantMissionCharaGraphFilterLogic_TypeInfo);
    byte_4C52DAC = 1;
  }
  v2 = (ServantCollectionCharaGraphFilterLogic_o *)sub_1C3E7B0(ServantMissionCharaGraphFilterLogic_TypeInfo);
  ServantCollectionCharaGraphFilterLogic___ctor(v2, 0);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *CharaGraphSortManageUnitServantMission__CreateSortLogic(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  ServantCollectionCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4C52DAB & 1) == 0 )
  {
    sub_1C3E564(&ServantMissionCharaGraphSortLogic_TypeInfo);
    byte_4C52DAB = 1;
  }
  v2 = (ServantCollectionCharaGraphSortLogic_o *)sub_1C3E7B0(ServantMissionCharaGraphSortLogic_TypeInfo);
  ServantCollectionCharaGraphSortLogic___ctor(v2, 0);
  return (CharaGraphSortLogicBase_o *)v2;
}