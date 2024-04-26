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

  if ( (byte_4354A85 & 1) == 0 )
  {
    sub_B70694(&ServantCharaGraphEquipFilterLogic_TypeInfo);
    byte_4354A85 = 1;
  }
  v2 = (ServantCharaGraphEquipFilterLogic_o *)sub_B70764(ServantCharaGraphEquipFilterLogic_TypeInfo);
  ServantCharaGraphEquipFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantEquip__CreateSortLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  ServantEquipCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4354A84 & 1) == 0 )
  {
    sub_B70694(&ServantEquipCharaGraphSortLogic_TypeInfo);
    byte_4354A84 = 1;
  }
  v2 = (ServantEquipCharaGraphSortLogic_o *)sub_B70764(ServantEquipCharaGraphSortLogic_TypeInfo);
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
  if ( (byte_4354A83 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1130/*"2"*/);
    byte_4354A83 = 1;
  }
  return (System_String_o *)StringLiteral_1130/*"2"*/;
}