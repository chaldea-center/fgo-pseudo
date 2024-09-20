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
  Il2CppObject *v2; // x19

  if ( (byte_4A5A556 & 1) == 0 )
  {
    sub_1B885B0(&ServantCharaGraphFilterLogic_TypeInfo);
    byte_4A5A556 = 1;
  }
  v2 = (Il2CppObject *)sub_1B887FC(ServantCharaGraphFilterLogic_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServant__CreateSortLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  ServantCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4A5A555 & 1) == 0 )
  {
    sub_1B885B0(&ServantCharaGraphSortLogic_TypeInfo);
    byte_4A5A555 = 1;
  }
  v2 = (ServantCharaGraphSortLogic_o *)sub_1B887FC(ServantCharaGraphSortLogic_TypeInfo);
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
  if ( (byte_4A5A554 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    byte_4A5A554 = 1;
  }
  return (System_String_o *)StringLiteral_1266/*"1"*/;
}