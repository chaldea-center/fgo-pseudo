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
  Il2CppObject *v2; // x19

  if ( (byte_4BB3A9E & 1) == 0 )
  {
    sub_1C13D24(&CommandCodeCharaGraphFilterLogic_TypeInfo, method);
    byte_4BB3A9E = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(CommandCodeCharaGraphFilterLogic_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitCommandCode__CreateSortLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  CommandCodeCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4BB3A9D & 1) == 0 )
  {
    sub_1C13D24(&CommandCodeCharaGraphSortLogic_TypeInfo, method);
    byte_4BB3A9D = 1;
  }
  v2 = (CommandCodeCharaGraphSortLogic_o *)sub_1C13F70(CommandCodeCharaGraphSortLogic_TypeInfo);
  CommandCodeCharaGraphSortLogic___ctor(v2, 0LL);
  return (CharaGraphSortLogicBase_o *)v2;
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
  if ( (byte_4BB3A9C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1492/*"3rd Attack"*/, method);
    byte_4BB3A9C = 1;
  }
  return (System_String_o *)StringLiteral_1492/*"3rd Attack"*/;
}