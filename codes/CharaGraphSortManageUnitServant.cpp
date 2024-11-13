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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B155C2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCharaGraphFilterLogic_TypeInfo, method, v2);
    byte_4B155C2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantCharaGraphFilterLogic_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (CharaGraphFilterLogicBase_o *)v4;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServant__CreateSortLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantCharaGraphSortLogic_o *v4; // x19

  if ( (byte_4B155C1 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCharaGraphSortLogic_TypeInfo, method, v2);
    byte_4B155C1 = 1;
  }
  v4 = (ServantCharaGraphSortLogic_o *)sub_1BCAA2C(ServantCharaGraphSortLogic_TypeInfo, method, v2, v3);
  ServantCharaGraphSortLogic___ctor(v4, 0LL);
  return (CharaGraphSortLogicBase_o *)v4;
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
  __int64 v2; // x2

  if ( (byte_4B155C0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, method, v2);
    byte_4B155C0 = 1;
  }
  return (System_String_o *)StringLiteral_1262/*"1"*/;
}