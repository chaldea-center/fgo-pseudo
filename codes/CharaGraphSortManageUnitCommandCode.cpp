void __fastcall CharaGraphSortManageUnitCommandCode___ctor(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CharaGraphFilterLogicBase_o *__fastcall CharaGraphSortManageUnitCommandCode__CreateFilterLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  CharaGraphFilterLogicBase_o *v2; // x19

  if ( (byte_48E1C55 & 1) == 0 )
  {
    sub_1B00CCC(&CommandCodeCharaGraphFilterLogic_TypeInfo, method);
    byte_48E1C55 = 1;
  }
  v2 = (CharaGraphFilterLogicBase_o *)sub_1B00F18(CommandCodeCharaGraphFilterLogic_TypeInfo);
  CharaGraphFilterLogicBase___ctor(v2, 0LL);
  return v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitCommandCode__CreateSortLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_48E1C54 & 1) == 0 )
  {
    sub_1B00CCC(&CommandCodeCharaGraphSortLogic_TypeInfo, method);
    byte_48E1C54 = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1B00F18(CommandCodeCharaGraphSortLogic_TypeInfo);
  CharaGraphSortLogicBase___ctor(v2, v3);
  return v2;
}


int32_t __fastcall CharaGraphSortManageUnitCommandCode__get_FilterKind(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  return 6;
}


int32_t __fastcall CharaGraphSortManageUnitCommandCode__get_ListKind(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  return 3;
}


int32_t __fastcall CharaGraphSortManageUnitCommandCode__get_ListViewSortKind(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  return 2;
}


int32_t __fastcall CharaGraphSortManageUnitCommandCode__get_SortKind(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  return 6;
}


System_String_o *__fastcall CharaGraphSortManageUnitCommandCode__get_SortSaveKeySuffix(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E1C53 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1488/*"4"*/, method);
    byte_48E1C53 = 1;
  }
  return (System_String_o *)StringLiteral_1488/*"4"*/;
}