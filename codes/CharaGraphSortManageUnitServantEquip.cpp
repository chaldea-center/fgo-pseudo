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
  ServantCharaGraphFilterLogic_o *v3; // x19

  if ( (byte_49FB824 & 1) == 0 )
  {
    sub_1B640C8(&ServantCharaGraphEquipFilterLogic_TypeInfo, method);
    byte_49FB824 = 1;
  }
  v3 = (ServantCharaGraphFilterLogic_o *)sub_1B64314(ServantCharaGraphEquipFilterLogic_TypeInfo, method, v2);
  ServantCharaGraphFilterLogic___ctor(v3, 0LL);
  return (CharaGraphFilterLogicBase_o *)v3;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantEquip__CreateSortLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphSortLogicBase_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FB823 & 1) == 0 )
  {
    sub_1B640C8(&ServantEquipCharaGraphSortLogic_TypeInfo, method);
    byte_49FB823 = 1;
  }
  v3 = (CharaGraphSortLogicBase_o *)sub_1B64314(ServantEquipCharaGraphSortLogic_TypeInfo, method, v2);
  CharaGraphSortLogicBase___ctor(v3, v4);
  return v3;
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
  if ( (byte_49FB822 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1414/*"2"*/, method);
    byte_49FB822 = 1;
  }
  return (System_String_o *)StringLiteral_1414/*"2"*/;
}