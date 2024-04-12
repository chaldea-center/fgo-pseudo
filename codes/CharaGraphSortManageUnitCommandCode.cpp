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
  CommandCodeCharaGraphFilterLogic_o *v2; // x19

  if ( (byte_42AFDEE & 1) == 0 )
  {
    sub_B52984(&CommandCodeCharaGraphFilterLogic_TypeInfo);
    byte_42AFDEE = 1;
  }
  v2 = (CommandCodeCharaGraphFilterLogic_o *)sub_B52A54(CommandCodeCharaGraphFilterLogic_TypeInfo);
  CommandCodeCharaGraphFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitCommandCode__CreateSortLogic(
        CharaGraphSortManageUnitCommandCode_o *this,
        const MethodInfo *method)
{
  CommandCodeCharaGraphSortLogic_o *v2; // x19

  if ( (byte_42AFDED & 1) == 0 )
  {
    sub_B52984(&CommandCodeCharaGraphSortLogic_TypeInfo);
    byte_42AFDED = 1;
  }
  v2 = (CommandCodeCharaGraphSortLogic_o *)sub_B52A54(CommandCodeCharaGraphSortLogic_TypeInfo);
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
  if ( (byte_42AFDEC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1187/*"4"*/);
    byte_42AFDEC = 1;
  }
  return (System_String_o *)StringLiteral_1187/*"4"*/;
}