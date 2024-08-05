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
  CharaGraphFilterLogicBase_o *v2; // x19

  if ( (byte_49FD922 & 1) == 0 )
  {
    sub_1B64870(&ServantCollectionCharaGraphFilterLogic_TypeInfo, method);
    byte_49FD922 = 1;
  }
  v2 = (CharaGraphFilterLogicBase_o *)sub_1B64ABC(ServantCollectionCharaGraphFilterLogic_TypeInfo);
  CharaGraphFilterLogicBase___ctor(v2, 0LL);
  return v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitSvtCollection__CreateSortLogic(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_49FD921 & 1) == 0 )
  {
    sub_1B64870(&ServantCollectionCharaGraphSortLogic_TypeInfo, method);
    byte_49FD921 = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1B64ABC(ServantCollectionCharaGraphSortLogic_TypeInfo);
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
  if ( (byte_49FD920 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1509/*"5"*/, method);
    byte_49FD920 = 1;
  }
  return (System_String_o *)StringLiteral_1509/*"5"*/;
}