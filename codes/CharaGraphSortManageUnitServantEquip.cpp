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
  ServantCharaGraphEquipFilterLogic_o *v2; // x19

  if ( (byte_438E344 & 1) == 0 )
  {
    sub_B775C4(&ServantCharaGraphEquipFilterLogic_TypeInfo);
    byte_438E344 = 1;
  }
  v2 = (ServantCharaGraphEquipFilterLogic_o *)sub_B77694(ServantCharaGraphEquipFilterLogic_TypeInfo);
  ServantCharaGraphEquipFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantEquip__CreateSortLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  ServantEquipCharaGraphSortLogic_o *v2; // x19

  if ( (byte_438E343 & 1) == 0 )
  {
    sub_B775C4(&ServantEquipCharaGraphSortLogic_TypeInfo);
    byte_438E343 = 1;
  }
  v2 = (ServantEquipCharaGraphSortLogic_o *)sub_B77694(ServantEquipCharaGraphSortLogic_TypeInfo);
  ServantEquipCharaGraphSortLogic___ctor(v2, 0LL);
  return (CharaGraphSortLogicBase_o *)v2;
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
  if ( (byte_438E342 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1131/*"2"*/);
    byte_438E342 = 1;
  }
  return (System_String_o *)StringLiteral_1131/*"2"*/;
}