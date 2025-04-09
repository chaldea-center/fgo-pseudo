void __fastcall CharaGraphSortOwnerServantMission___ctor(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitSvtCollection_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B70C8 & 1) == 0 )
  {
    sub_1B4CF90(&CharaGraphSortManageUnitServantMission_TypeInfo, method);
    byte_49B70C8 = 1;
  }
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
  v3 = (CharaGraphSortManageUnitSvtCollection_o *)sub_1B4D1DC(CharaGraphSortManageUnitServantMission_TypeInfo);
  CharaGraphSortManageUnitSvtCollection___ctor(v3, 0LL);
  this->fields._ServantCollectionSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)v3,
    v4,
    v5);
}


System_String_o *__fastcall CharaGraphSortOwnerServantMission__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B70C7 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_4351/*"CharaGraphSort_SvtMission_"*/, method);
    byte_49B70C7 = 1;
  }
  return (System_String_o *)StringLiteral_4351/*"CharaGraphSort_SvtMission_"*/;
}