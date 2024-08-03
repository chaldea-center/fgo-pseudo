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
  ServantCollectionCharaGraphFilterLogic_o *v3; // x19

  if ( (byte_49F888B & 1) == 0 )
  {
    sub_1B640C8(&ServantMissionCharaGraphFilterLogic_TypeInfo, method);
    byte_49F888B = 1;
  }
  v3 = (ServantCollectionCharaGraphFilterLogic_o *)sub_1B64314(ServantMissionCharaGraphFilterLogic_TypeInfo, method, v2);
  ServantCollectionCharaGraphFilterLogic___ctor(v3, 0LL);
  return (CharaGraphFilterLogicBase_o *)v3;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantMission__CreateSortLogic(
        CharaGraphSortManageUnitServantMission_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCollectionCharaGraphSortLogic_o *v3; // x19

  if ( (byte_49F888A & 1) == 0 )
  {
    sub_1B640C8(&ServantMissionCharaGraphSortLogic_TypeInfo, method);
    byte_49F888A = 1;
  }
  v3 = (ServantCollectionCharaGraphSortLogic_o *)sub_1B64314(ServantMissionCharaGraphSortLogic_TypeInfo, method, v2);
  ServantCollectionCharaGraphSortLogic___ctor(v3, 0LL);
  return (CharaGraphSortLogicBase_o *)v3;
}