void CharaGraphSortManageUnitServantEquip___ctor(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CharaGraphFilterLogicBase_o *CharaGraphSortManageUnitServantEquip__CreateFilterLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4C2661D & 1) == 0 )
  {
    sub_1C2D490(&ServantCharaGraphEquipFilterLogic_TypeInfo);
    byte_4C2661D = 1;
  }
  v2 = (Il2CppObject *)sub_1C2D6DC(ServantCharaGraphEquipFilterLogic_TypeInfo);
  System_Object___ctor(v2, 0);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *CharaGraphSortManageUnitServantEquip__CreateSortLogic(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4C2661C & 1) == 0 )
  {
    sub_1C2D490(&ServantEquipCharaGraphSortLogic_TypeInfo);
    byte_4C2661C = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1C2D6DC(ServantEquipCharaGraphSortLogic_TypeInfo);
  CharaGraphSortLogicBase___ctor(v2, v3);
  return v2;
}


int32_t CharaGraphSortManageUnitServantEquip__get_FilterKind(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  return 5;
}


int32_t CharaGraphSortManageUnitServantEquip__get_ListKind(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  return 1;
}


int32_t CharaGraphSortManageUnitServantEquip__get_ListViewSortKind(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  return 3;
}


int32_t CharaGraphSortManageUnitServantEquip__get_SortKind(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  return 4;
}


System_String_o *CharaGraphSortManageUnitServantEquip__get_SortSaveKeySuffix(
        CharaGraphSortManageUnitServantEquip_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2661B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1317/*"2"*/);
    byte_4C2661B = 1;
  }
  return (System_String_o *)StringLiteral_1317/*"2"*/;
}