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

  if ( (byte_4A2D33B & 1) == 0 )
  {
    sub_1B761C0(&ServantCharaGraphFilterLogic_TypeInfo, method);
    byte_4A2D33B = 1;
  }
  v2 = (ServantCharaGraphFilterLogic_o *)sub_1B7640C(ServantCharaGraphFilterLogic_TypeInfo);
  ServantCharaGraphFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServant__CreateSortLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4A2D33A & 1) == 0 )
  {
    sub_1B761C0(&ServantCharaGraphSortLogic_TypeInfo, method);
    byte_4A2D33A = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1B7640C(ServantCharaGraphSortLogic_TypeInfo);
  CharaGraphSortLogicBase___ctor(v2, v3);
  return v2;
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
  if ( (byte_4A2D339 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1266/*"1"*/, method);
    byte_4A2D339 = 1;
  }
  return (System_String_o *)StringLiteral_1266/*"1"*/;
}