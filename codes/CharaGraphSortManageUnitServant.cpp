void CharaGraphSortManageUnitServant___ctor(CharaGraphSortManageUnitServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CharaGraphFilterLogicBase_o *CharaGraphSortManageUnitServant__CreateFilterLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4CC670B & 1) == 0 )
  {
    sub_1C713B0(&ServantCharaGraphFilterLogic_TypeInfo);
    byte_4CC670B = 1;
  }
  v2 = (Il2CppObject *)sub_1C715FC(ServantCharaGraphFilterLogic_TypeInfo);
  System_Object___ctor(v2, 0);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *CharaGraphSortManageUnitServant__CreateSortLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4CC670A & 1) == 0 )
  {
    sub_1C713B0(&ServantCharaGraphSortLogic_TypeInfo);
    byte_4CC670A = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1C715FC(ServantCharaGraphSortLogic_TypeInfo);
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
  if ( (byte_4CC6709 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1165/*"1"*/);
    byte_4CC6709 = 1;
  }
  return (System_String_o *)StringLiteral_1165/*"1"*/;
}