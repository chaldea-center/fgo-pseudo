void __fastcall CharaGraphSortManageUnitServantEquip___ctor(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CharaGraphFilterLogicBase_o *__fastcall CharaGraphSortManageUnitServantEquip__CreateFilterLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCharaGraphEquipFilterLogic_o *v3; // x19

  if ( (byte_421424B & 1) == 0 )
  {
    sub_B0D8A4(&ServantCharaGraphEquipFilterLogic_TypeInfo, method);
    byte_421424B = 1;
  }
  v3 = (ServantCharaGraphEquipFilterLogic_o *)sub_B0D974(ServantCharaGraphEquipFilterLogic_TypeInfo, method, v2);
  ServantCharaGraphEquipFilterLogic___ctor(v3, 0LL);
  return (CharaGraphFilterLogicBase_o *)v3;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantEquip__CreateSortLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantEquipCharaGraphSortLogic_o *v3; // x19

  if ( (byte_421424A & 1) == 0 )
  {
    sub_B0D8A4(&ServantEquipCharaGraphSortLogic_TypeInfo, method);
    byte_421424A = 1;
  }
  v3 = (ServantEquipCharaGraphSortLogic_o *)sub_B0D974(ServantEquipCharaGraphSortLogic_TypeInfo, method, v2);
  ServantEquipCharaGraphSortLogic___ctor(v3, 0LL);
  return (CharaGraphSortLogicBase_o *)v3;
}


int32_t __fastcall CharaGraphSortManageUnitServantEquip__get_FilterKind(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  return 5;
}


int32_t __fastcall CharaGraphSortManageUnitServantEquip__get_ListKind(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall CharaGraphSortManageUnitServantEquip__get_ListViewSortKind(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  return 3;
}


int32_t __fastcall CharaGraphSortManageUnitServantEquip__get_SortKind(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  return 4;
}


System_String_o *__fastcall CharaGraphSortManageUnitServantEquip__get_SortSaveKeySuffix(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214249 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1111/*"2"*/, method);
    byte_4214249 = 1;
  }
  return (System_String_o *)StringLiteral_1111/*"2"*/;
}