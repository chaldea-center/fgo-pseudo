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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B155CB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCollectionCharaGraphFilterLogic_TypeInfo, method, v2);
    byte_4B155CB = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantCollectionCharaGraphFilterLogic_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (CharaGraphFilterLogicBase_o *)v4;
}


CharaGraphSortLogicBase_o *__fastcall CharaGraphSortManageUnitSvtCollection__CreateSortLogic(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantCollectionCharaGraphSortLogic_o *v4; // x19

  if ( (byte_4B155CA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCollectionCharaGraphSortLogic_TypeInfo, method, v2);
    byte_4B155CA = 1;
  }
  v4 = (ServantCollectionCharaGraphSortLogic_o *)sub_1BCAA2C(
                                                   ServantCollectionCharaGraphSortLogic_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  ServantCollectionCharaGraphSortLogic___ctor(v4, 0LL);
  return (CharaGraphSortLogicBase_o *)v4;
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
  __int64 v2; // x2

  if ( (byte_4B155C9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1505/*"5"*/, method, v2);
    byte_4B155C9 = 1;
  }
  return (System_String_o *)StringLiteral_1505/*"5"*/;
}