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
  __int64 v2; // x2
  __int64 v3; // x3
  ServantCollectionCharaGraphFilterLogic_o *v4; // x19

  if ( (byte_4B12536 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantMissionCharaGraphFilterLogic_TypeInfo, method, v2);
    byte_4B12536 = 1;
  }
  v4 = (ServantCollectionCharaGraphFilterLogic_o *)sub_1BCAA2C(
                                                     ServantMissionCharaGraphFilterLogic_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  ServantCollectionCharaGraphFilterLogic___ctor(v4, 0LL);
  return (CharaGraphFilterLogicBase_o *)v4;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantMission__CreateSortLogic(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantCollectionCharaGraphSortLogic_o *v4; // x19

  if ( (byte_4B12535 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantMissionCharaGraphSortLogic_TypeInfo, method, v2);
    byte_4B12535 = 1;
  }
  v4 = (ServantCollectionCharaGraphSortLogic_o *)sub_1BCAA2C(ServantMissionCharaGraphSortLogic_TypeInfo, method, v2, v3);
  ServantCollectionCharaGraphSortLogic___ctor(v4, 0LL);
  return (CharaGraphSortLogicBase_o *)v4;
}