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
  Il2CppObject *v2; // x19

  if ( (byte_4B65F7E & 1) == 0 )
  {
    sub_1BE4ACC(&ServantCollectionCharaGraphFilterLogic_TypeInfo, method);
    byte_4B65F7E = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantCollectionCharaGraphFilterLogic_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitSvtCollection__CreateSortLogic(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  ServantCollectionCharaGraphSortLogic_o *v2; // x19

  if ( (byte_4B65F7D & 1) == 0 )
  {
    sub_1BE4ACC(&ServantCollectionCharaGraphSortLogic_TypeInfo, method);
    byte_4B65F7D = 1;
  }
  v2 = (ServantCollectionCharaGraphSortLogic_o *)sub_1BE4D18(ServantCollectionCharaGraphSortLogic_TypeInfo);
  ServantCollectionCharaGraphSortLogic___ctor(v2, 0LL);
  return (CharaGraphSortLogicBase_o *)v2;
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
  if ( (byte_4B65F7C & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1506/*"5"*/, method);
    byte_4B65F7C = 1;
  }
  return (System_String_o *)StringLiteral_1506/*"5"*/;
}