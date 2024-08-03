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
  __int64 v2; // x2
  CharaGraphFilterLogicBase_o *v3; // x19

  if ( (byte_49FB827 & 1) == 0 )
  {
    sub_1B640C8(&CommandCodeCharaGraphFilterLogic_TypeInfo, method);
    byte_49FB827 = 1;
  }
  v3 = (CharaGraphFilterLogicBase_o *)sub_1B64314(CommandCodeCharaGraphFilterLogic_TypeInfo, method, v2);
  CharaGraphFilterLogicBase___ctor(v3, 0LL);
  return v3;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitCommandCode__CreateSortLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphSortLogicBase_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FB826 & 1) == 0 )
  {
    sub_1B640C8(&CommandCodeCharaGraphSortLogic_TypeInfo, method);
    byte_49FB826 = 1;
  }
  v3 = (CharaGraphSortLogicBase_o *)sub_1B64314(CommandCodeCharaGraphSortLogic_TypeInfo, method, v2);
  CharaGraphSortLogicBase___ctor(v3, v4);
  return v3;
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
  if ( (byte_49FB825 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1494/*"4"*/, method);
    byte_49FB825 = 1;
  }
  return (System_String_o *)StringLiteral_1494/*"4"*/;
}