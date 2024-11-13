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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B155C8 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCodeCharaGraphFilterLogic_TypeInfo, method, v2);
    byte_4B155C8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CommandCodeCharaGraphFilterLogic_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (CharaGraphFilterLogicBase_o *)v4;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitCommandCode__CreateSortLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  CommandCodeCharaGraphSortLogic_o *v4; // x19

  if ( (byte_4B155C7 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCodeCharaGraphSortLogic_TypeInfo, method, v2);
    byte_4B155C7 = 1;
  }
  v4 = (CommandCodeCharaGraphSortLogic_o *)sub_1BCAA2C(CommandCodeCharaGraphSortLogic_TypeInfo, method, v2, v3);
  CommandCodeCharaGraphSortLogic___ctor(v4, 0LL);
  return (CharaGraphSortLogicBase_o *)v4;
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
  __int64 v2; // x2

  if ( (byte_4B155C6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1489/*"4"*/, method, v2);
    byte_4B155C6 = 1;
  }
  return (System_String_o *)StringLiteral_1489/*"4"*/;
}