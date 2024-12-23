void __fastcall CharaGraphSortManageUnitServantMission___ctor(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitSvtCollection___ctor((CharaGraphSortManageUnitSvtCollection_o *)this, 0LL);
}


CharaGraphFilterLogicBase_o *__fastcall CharaGraphSortManageUnitServantMission__CreateFilterLogic(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  ServantCollectionCharaGraphFilterLogic_o *v2; // x19

  if ( (byte_4B62E93 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantMissionCharaGraphFilterLogic_TypeInfo, method);
    byte_4B62E93 = 1;
  }
  v2 = (ServantCollectionCharaGraphFilterLogic_o *)sub_1BE4D18(ServantMissionCharaGraphFilterLogic_TypeInfo);
  ServantCollectionCharaGraphFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantMission__CreateSortLogic(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  ServantCollectionCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4B62E92 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantMissionCharaGraphSortLogic_TypeInfo, method);
    byte_4B62E92 = 1;
  }
  v2 = (ServantCollectionCharaGraphSortLogic_o *)sub_1BE4D18(ServantMissionCharaGraphSortLogic_TypeInfo);
  ServantCollectionCharaGraphSortLogic___ctor(v2, 0LL);
  return (CharaGraphSortLogicBase_o *)v2;
}