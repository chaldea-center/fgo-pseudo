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
  Il2CppObject *v2; // x19

  if ( (byte_4A4D84D & 1) == 0 )
  {
    sub_1B863B8(&ServantCharaGraphEquipFilterLogic_TypeInfo, method);
    byte_4A4D84D = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(ServantCharaGraphEquipFilterLogic_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantEquip__CreateSortLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  ServantEquipCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4A4D84C & 1) == 0 )
  {
    sub_1B863B8(&ServantEquipCharaGraphSortLogic_TypeInfo, method);
    byte_4A4D84C = 1;
  }
  v2 = (ServantEquipCharaGraphSortLogic_o *)sub_1B86604(ServantEquipCharaGraphSortLogic_TypeInfo);
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
  if ( (byte_4A4D84B & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1336/*"2"*/, method);
    byte_4A4D84B = 1;
  }
  return (System_String_o *)StringLiteral_1336/*"2"*/;
}