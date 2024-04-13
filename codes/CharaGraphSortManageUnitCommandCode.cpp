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
  int v2; // w2
  __int64 v3; // x3
  CommandCodeCharaGraphFilterLogic_o *v4; // x19

  if ( (byte_42E96FB & 1) == 0 )
  {
    sub_B5D5C4(&CommandCodeCharaGraphFilterLogic_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96FB = 1;
  }
  v4 = (CommandCodeCharaGraphFilterLogic_o *)sub_B5D694(CommandCodeCharaGraphFilterLogic_TypeInfo);
  CommandCodeCharaGraphFilterLogic___ctor(v4, 0LL);
  return (CharaGraphFilterLogicBase_o *)v4;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitCommandCode__CreateSortLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommandCodeCharaGraphSortLogic_o *v4; // x19

  if ( (byte_42E96FA & 1) == 0 )
  {
    sub_B5D5C4(&CommandCodeCharaGraphSortLogic_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96FA = 1;
  }
  v4 = (CommandCodeCharaGraphSortLogic_o *)sub_B5D694(CommandCodeCharaGraphSortLogic_TypeInfo);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96F9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1192/*"4"*/, (_DWORD)method, v2, v3);
    byte_42E96F9 = 1;
  }
  return (System_String_o *)StringLiteral_1192/*"4"*/;
}