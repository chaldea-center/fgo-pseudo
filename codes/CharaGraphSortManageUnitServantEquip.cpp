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
  ServantCharaGraphFilterLogic_o *v2; // x19

  if ( (byte_49FDF3C & 1) == 0 )
  {
    sub_1B64A00(&ServantCharaGraphEquipFilterLogic_TypeInfo, method);
    byte_49FDF3C = 1;
  }
  v2 = (ServantCharaGraphFilterLogic_o *)sub_1B64C4C(ServantCharaGraphEquipFilterLogic_TypeInfo);
  ServantCharaGraphFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantEquip__CreateSortLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_49FDF3B & 1) == 0 )
  {
    sub_1B64A00(&ServantEquipCharaGraphSortLogic_TypeInfo, method);
    byte_49FDF3B = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1B64C4C(ServantEquipCharaGraphSortLogic_TypeInfo);
  CharaGraphSortLogicBase___ctor(v2, v3);
  return v2;
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
  if ( (byte_49FDF3A & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1414/*"2"*/, method);
    byte_49FDF3A = 1;
  }
  return (System_String_o *)StringLiteral_1414/*"2"*/;
}