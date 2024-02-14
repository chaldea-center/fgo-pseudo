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
  CommandCodeCharaGraphFilterLogic_o *v3; // x19

  if ( (byte_4214245 & 1) == 0 )
  {
    sub_B0D8A4(&CommandCodeCharaGraphFilterLogic_TypeInfo, method);
    byte_4214245 = 1;
  }
  v3 = (CommandCodeCharaGraphFilterLogic_o *)sub_B0D974(CommandCodeCharaGraphFilterLogic_TypeInfo, method, v2);
  CommandCodeCharaGraphFilterLogic___ctor(v3, 0LL);
  return (CharaGraphFilterLogicBase_o *)v3;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitCommandCode__CreateSortLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommandCodeCharaGraphSortLogic_o *v3; // x19

  if ( (byte_4214244 & 1) == 0 )
  {
    sub_B0D8A4(&CommandCodeCharaGraphSortLogic_TypeInfo, method);
    byte_4214244 = 1;
  }
  v3 = (CommandCodeCharaGraphSortLogic_o *)sub_B0D974(CommandCodeCharaGraphSortLogic_TypeInfo, method, v2);
  CommandCodeCharaGraphSortLogic___ctor(v3, 0LL);
  return (CharaGraphSortLogicBase_o *)v3;
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
  if ( (byte_4214243 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1179/*"4"*/, method);
    byte_4214243 = 1;
  }
  return (System_String_o *)StringLiteral_1179/*"4"*/;
}