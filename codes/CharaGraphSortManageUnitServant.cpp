void __fastcall CharaGraphSortManageUnitServant___ctor(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CharaGraphFilterLogicBase_o *__fastcall CharaGraphSortManageUnitServant__CreateFilterLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphFilterLogic_o *v2; // x19

  if ( (byte_4354A82 & 1) == 0 )
  {
    sub_B70694(&ServantCharaGraphFilterLogic_TypeInfo);
    byte_4354A82 = 1;
  }
  v2 = (ServantCharaGraphFilterLogic_o *)sub_B70764(ServantCharaGraphFilterLogic_TypeInfo);
  ServantCharaGraphFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServant__CreateSortLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4354A81 & 1) == 0 )
  {
    sub_B70694(&ServantCharaGraphSortLogic_TypeInfo);
    byte_4354A81 = 1;
  }
  v2 = (ServantCharaGraphSortLogic_o *)sub_B70764(ServantCharaGraphSortLogic_TypeInfo);
  ServantCharaGraphSortLogic___ctor(v2, 0LL);
  return (CharaGraphSortLogicBase_o *)v2;
}


int32_t __fastcall CharaGraphSortManageUnitServant__get_FilterKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall CharaGraphSortManageUnitServant__get_ListKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall CharaGraphSortManageUnitServant__get_ListViewSortKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 3;
}


int32_t __fastcall CharaGraphSortManageUnitServant__get_SortKind(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  return 3;
}


System_String_o *__fastcall CharaGraphSortManageUnitServant__get_SortSaveKeySuffix(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  if ( (byte_4354A80 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1031/*"1"*/);
    byte_4354A80 = 1;
  }
  return (System_String_o *)StringLiteral_1031/*"1"*/;
}