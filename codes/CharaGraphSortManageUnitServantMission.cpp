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

  if ( (byte_4AB20D2 & 1) == 0 )
  {
    sub_1BAB41C(&ServantMissionCharaGraphFilterLogic_TypeInfo, method);
    byte_4AB20D2 = 1;
  }
  v2 = (ServantCollectionCharaGraphFilterLogic_o *)sub_1BAB668(ServantMissionCharaGraphFilterLogic_TypeInfo);
  ServantCollectionCharaGraphFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantMission__CreateSortLogic(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  ServantCollectionCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4AB20D1 & 1) == 0 )
  {
    sub_1BAB41C(&ServantMissionCharaGraphSortLogic_TypeInfo, method);
    byte_4AB20D1 = 1;
  }
  v2 = (ServantCollectionCharaGraphSortLogic_o *)sub_1BAB668(ServantMissionCharaGraphSortLogic_TypeInfo);
  ServantCollectionCharaGraphSortLogic___ctor(v2, 0LL);
  return (CharaGraphSortLogicBase_o *)v2;
}