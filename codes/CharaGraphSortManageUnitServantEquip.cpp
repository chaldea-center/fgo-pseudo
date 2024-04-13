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
  int v2; // w2
  __int64 v3; // x3
  ServantCharaGraphEquipFilterLogic_o *v4; // x19

  if ( (byte_42E9701 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCharaGraphEquipFilterLogic_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9701 = 1;
  }
  v4 = (ServantCharaGraphEquipFilterLogic_o *)sub_B5D694(ServantCharaGraphEquipFilterLogic_TypeInfo);
  ServantCharaGraphEquipFilterLogic___ctor(v4, 0LL);
  return (CharaGraphFilterLogicBase_o *)v4;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServantEquip__CreateSortLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantEquipCharaGraphSortLogic_o *v4; // x19

  if ( (byte_42E9700 & 1) == 0 )
  {
    sub_B5D5C4(&ServantEquipCharaGraphSortLogic_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9700 = 1;
  }
  v4 = (ServantEquipCharaGraphSortLogic_o *)sub_B5D694(ServantEquipCharaGraphSortLogic_TypeInfo);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96FF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1124/*"2"*/, (_DWORD)method, v2, v3);
    byte_42E96FF = 1;
  }
  return (System_String_o *)StringLiteral_1124/*"2"*/;
}