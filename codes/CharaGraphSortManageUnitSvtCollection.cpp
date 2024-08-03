void __fastcall CharaGraphSortManageUnitSvtCollection___ctor(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CharaGraphFilterLogicBase_o *__fastcall CharaGraphSortManageUnitSvtCollection__CreateFilterLogic(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphFilterLogicBase_o *v3; // x19

  if ( (byte_49FB82A & 1) == 0 )
  {
    sub_1B640C8(&ServantCollectionCharaGraphFilterLogic_TypeInfo, method);
    byte_49FB82A = 1;
  }
  v3 = (CharaGraphFilterLogicBase_o *)sub_1B64314(ServantCollectionCharaGraphFilterLogic_TypeInfo, method, v2);
  CharaGraphFilterLogicBase___ctor(v3, 0LL);
  return v3;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitSvtCollection__CreateSortLogic(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphSortLogicBase_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FB829 & 1) == 0 )
  {
    sub_1B640C8(&ServantCollectionCharaGraphSortLogic_TypeInfo, method);
    byte_49FB829 = 1;
  }
  v3 = (CharaGraphSortLogicBase_o *)sub_1B64314(ServantCollectionCharaGraphSortLogic_TypeInfo, method, v2);
  CharaGraphSortLogicBase___ctor(v3, v4);
  return v3;
}


int32_t __fastcall CharaGraphSortManageUnitSvtCollection__get_FilterKind(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall CharaGraphSortManageUnitSvtCollection__get_ListKind(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall CharaGraphSortManageUnitSvtCollection__get_ListViewSortKind(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  return 13;
}


int32_t __fastcall CharaGraphSortManageUnitSvtCollection__get_SortKind(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  return 3;
}


System_String_o *__fastcall CharaGraphSortManageUnitSvtCollection__get_SortSaveKeySuffix(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FB828 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1510/*"5"*/, method);
    byte_49FB828 = 1;
  }
  return (System_String_o *)StringLiteral_1510/*"5"*/;
}