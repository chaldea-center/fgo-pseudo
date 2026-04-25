void CharaGraphSortManageUnitCommandCode___ctor(CharaGraphSortManageUnitCommandCode_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CharaGraphFilterLogicBase_o *CharaGraphSortManageUnitCommandCode__CreateFilterLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4E03D5F & 1) == 0 )
  {
    sub_1CE6700(&CommandCodeCharaGraphFilterLogic_TypeInfo);
    byte_4E03D5F = 1;
  }
  v2 = (Il2CppObject *)sub_1CE694C(CommandCodeCharaGraphFilterLogic_TypeInfo);
  System_Object___ctor(v2, 0);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *CharaGraphSortManageUnitCommandCode__CreateSortLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4E03D5E & 1) == 0 )
  {
    sub_1CE6700(&CommandCodeCharaGraphSortLogic_TypeInfo);
    byte_4E03D5E = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1CE694C(CommandCodeCharaGraphSortLogic_TypeInfo);
  CharaGraphSortLogicBase___ctor(v2, v3);
  return v2;
}


int32_t CharaGraphSortManageUnitCommandCode__get_FilterKind(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  return 6;
}


int32_t CharaGraphSortManageUnitCommandCode__get_ListKind(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  return 3;
}


int32_t CharaGraphSortManageUnitCommandCode__get_ListViewSortKind(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  return 2;
}


int32_t CharaGraphSortManageUnitCommandCode__get_SortKind(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  return 6;
}


System_String_o *CharaGraphSortManageUnitCommandCode__get_SortSaveKeySuffix(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E03D5D & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1399/*"4"*/);
    byte_4E03D5D = 1;
  }
  return (System_String_o *)StringLiteral_1399/*"4"*/;
}