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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B155C5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCharaGraphEquipFilterLogic_TypeInfo, method, v2);
    byte_4B155C5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantCharaGraphEquipFilterLogic_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (CharaGraphFilterLogicBase_o *)v4;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantEquip__CreateSortLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantEquipCharaGraphSortLogic_o *v4; // x19

  if ( (byte_4B155C4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantEquipCharaGraphSortLogic_TypeInfo, method, v2);
    byte_4B155C4 = 1;
  }
  v4 = (ServantEquipCharaGraphSortLogic_o *)sub_1BCAA2C(ServantEquipCharaGraphSortLogic_TypeInfo, method, v2, v3);
  ServantEquipCharaGraphSortLogic___ctor(v4, 0LL);
  return (CharaGraphSortLogicBase_o *)v4;
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
  __int64 v2; // x2

  if ( (byte_4B155C3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1409/*"2"*/, method, v2);
    byte_4B155C3 = 1;
  }
  return (System_String_o *)StringLiteral_1409/*"2"*/;
}