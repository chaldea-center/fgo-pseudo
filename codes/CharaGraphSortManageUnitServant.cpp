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
  ServantCharaGraphFilterLogic_o *v3; // x19

  if ( (byte_49FB821 & 1) == 0 )
  {
    sub_1B640C8(&ServantCharaGraphFilterLogic_TypeInfo, method);
    byte_49FB821 = 1;
  }
  v3 = (ServantCharaGraphFilterLogic_o *)sub_1B64314(ServantCharaGraphFilterLogic_TypeInfo, method, v2);
  ServantCharaGraphFilterLogic___ctor(v3, 0LL);
  return (CharaGraphFilterLogicBase_o *)v3;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitServant__CreateSortLogic(
        CharaGraphSortManageUnitServant_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphSortLogicBase_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FB820 & 1) == 0 )
  {
    sub_1B640C8(&ServantCharaGraphSortLogic_TypeInfo, method);
    byte_49FB820 = 1;
  }
  v3 = (CharaGraphSortLogicBase_o *)sub_1B64314(ServantCharaGraphSortLogic_TypeInfo, method, v2);
  CharaGraphSortLogicBase___ctor(v3, v4);
  return v3;
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
  if ( (byte_49FB81F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1267/*"1"*/, method);
    byte_49FB81F = 1;
  }
  return (System_String_o *)StringLiteral_1267/*"1"*/;
}