void __fastcall CharaGraphSortOwnerServantMission___ctor(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  CharaGraphSortManageUnitSvtCollection_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F888D & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphSortManageUnitServantMission_TypeInfo, method);
    byte_49F888D = 1;
  }
  CharaGraphSortOwnerBase___ctor((CharaGraphSortOwnerBase_o *)this, 0LL);
  v5 = (CharaGraphSortManageUnitSvtCollection_o *)sub_1B64314(CharaGraphSortManageUnitServantMission_TypeInfo, v3, v4);
  CharaGraphSortManageUnitSvtCollection___ctor(v5, 0LL);
  this->fields._ServantCollectionSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)v5,
    v6,
    v7);
}


System_String_o *__fastcall CharaGraphSortOwnerServantMission__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerServantMission_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F888C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4413/*"CharaGraphSort_SvtMission_"*/, method);
    byte_49F888C = 1;
  }
  return (System_String_o *)StringLiteral_4413/*"CharaGraphSort_SvtMission_"*/;
}