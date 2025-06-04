void __fastcall CharaGraphSortOwnerServantMission___ctor(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitSvtCollection_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4AFE126 & 1) == 0 )
  {
    sub_1BC3008(&CharaGraphSortManageUnitServantMission_TypeInfo, method);
    byte_4AFE126 = 1;
  }
  v3 = (CharaGraphSortManageUnitSvtCollection_o *)sub_1BC3254(CharaGraphSortManageUnitServantMission_TypeInfo);
  CharaGraphSortManageUnitSvtCollection___ctor(v3, 0LL);
  this->fields._ServantCollectionSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)v3,
    v4,
    v5);
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerServantMission__get_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantCollectionSortManageUnit_k__BackingField;
}


System_String_o *__fastcall CharaGraphSortOwnerServantMission__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFE125 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4357/*"CharaGraphSort_SvtMission_"*/, method);
    byte_4AFE125 = 1;
  }
  return (System_String_o *)StringLiteral_4357/*"CharaGraphSort_SvtMission_"*/;
}


void __fastcall CharaGraphSortOwnerServantMission__set_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerServantMission_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantCollectionSortManageUnit_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}