void CharaGraphSortManageUnitServant___ctor(CharaGraphSortManageUnitServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CharaGraphFilterLogicBase_o *CharaGraphSortManageUnitServant__CreateFilterLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4CED9C5 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantCharaGraphFilterLogic_TypeInfo);
    byte_4CED9C5 = 1;
  }
  v2 = (Il2CppObject *)sub_1C7BD34(ServantCharaGraphFilterLogic_TypeInfo);
  System_Object___ctor(v2, 0);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *CharaGraphSortManageUnitServant__CreateSortLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4CED9C4 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantCharaGraphSortLogic_TypeInfo);
    byte_4CED9C4 = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1C7BD34(ServantCharaGraphSortLogic_TypeInfo);
  CharaGraphSortLogicBase___ctor(v2, v3);
  return v2;
}


int32_t CharaGraphSortManageUnitServant__get_FilterKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t CharaGraphSortManageUnitServant__get_ListKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t CharaGraphSortManageUnitServant__get_ListViewSortKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 3;
}


int32_t CharaGraphSortManageUnitServant__get_SortKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 3;
}


System_String_o *CharaGraphSortManageUnitServant__get_SortSaveKeySuffix(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CED9C3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1166/*"1"*/);
    byte_4CED9C3 = 1;
  }
  return (System_String_o *)StringLiteral_1166/*"1"*/;
}