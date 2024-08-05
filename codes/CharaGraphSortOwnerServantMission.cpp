void __fastcall CharaGraphSortOwnerServantMission___ctor(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitSvtCollection_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA97C & 1) == 0 )
  {
    sub_1B64870(&CharaGraphSortManageUnitServantMission_TypeInfo, method);
    byte_49FA97C = 1;
  }
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
  v3 = (CharaGraphSortManageUnitSvtCollection_o *)sub_1B64ABC(CharaGraphSortManageUnitServantMission_TypeInfo);
  CharaGraphSortManageUnitSvtCollection___ctor(v3, 0LL);
  this->fields._ServantCollectionSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v3;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)v3,
    v4,
    v5);
}


System_String_o *__fastcall CharaGraphSortOwnerServantMission__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FA97B & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_4413/*"CharaGraphSort_SvtMission_"*/, method);
    byte_49FA97B = 1;
  }
  return (System_String_o *)StringLiteral_4413/*"CharaGraphSort_SvtMission_"*/;
}