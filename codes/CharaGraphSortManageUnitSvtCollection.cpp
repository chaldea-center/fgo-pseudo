void CharaGraphSortManageUnitSvtCollection___ctor(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CharaGraphFilterLogicBase_o *CharaGraphSortManageUnitSvtCollection__CreateFilterLogic(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4D2BB76 & 1) == 0 )
  {
    sub_1C94098(&ServantCollectionCharaGraphFilterLogic_TypeInfo);
    byte_4D2BB76 = 1;
  }
  v2 = (Il2CppObject *)sub_1C942E4(ServantCollectionCharaGraphFilterLogic_TypeInfo);
  System_Object___ctor(v2, 0);
  return (CharaGraphFilterLogicBase_o *)v2;
}


CharaGraphSortLogicBase_o *CharaGraphSortManageUnitSvtCollection__CreateSortLogic(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  CharaGraphSortLogicBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4D2BB75 & 1) == 0 )
  {
    sub_1C94098(&ServantCollectionCharaGraphSortLogic_TypeInfo);
    byte_4D2BB75 = 1;
  }
  v2 = (CharaGraphSortLogicBase_o *)sub_1C942E4(ServantCollectionCharaGraphSortLogic_TypeInfo);
  CharaGraphSortLogicBase___ctor(v2, v3);
  return v2;
}


int32_t CharaGraphSortManageUnitSvtCollection__get_FilterKind(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t CharaGraphSortManageUnitSvtCollection__get_ListKind(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  return 0;
}


int32_t CharaGraphSortManageUnitSvtCollection__get_ListViewSortKind(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  return 13;
}


int32_t CharaGraphSortManageUnitSvtCollection__get_SortKind(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  return 3;
}


System_String_o *CharaGraphSortManageUnitSvtCollection__get_SortSaveKeySuffix(
        CharaGraphSortManageUnitSvtCollection_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2BB74 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1414/*"5"*/);
    byte_4D2BB74 = 1;
  }
  return (System_String_o *)StringLiteral_1414/*"5"*/;
}