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
  ServantCollectionCharaGraphFilterLogic_o *v2; // x19

  if ( (byte_4B43DFF & 1) == 0 )
  {
    sub_1BDB878(&ServantCollectionCharaGraphFilterLogic_TypeInfo, method);
    byte_4B43DFF = 1;
  }
  v2 = (ServantCollectionCharaGraphFilterLogic_o *)sub_1BDBAC4(ServantCollectionCharaGraphFilterLogic_TypeInfo);
  ServantCollectionCharaGraphFilterLogic___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitSvtCollection__CreateSortLogic(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4B43DFE & 1) == 0 )
  {
    sub_1BDB878(&ServantCollectionCharaGraphSortLogic_TypeInfo, method);
    byte_4B43DFE = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1BDBAC4(ServantCollectionCharaGraphSortLogic_TypeInfo);
  CharaGraphSortLogicBase___ctor(v2, v3);
  return v2;
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
  if ( (byte_4B43DFD & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1443/*"5"*/, method);
    byte_4B43DFD = 1;
  }
  return (System_String_o *)StringLiteral_1443/*"5"*/;
}