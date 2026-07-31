void CharaGraphEquipListViewItem___ctor(
        CharaGraphEquipListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserEquipList,
        const MethodInfo *method)
{
  int64_t v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v15; // q1
  int64_t v16; // x21
  struct System_Int32_array *EquipCategoryIdList; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-60h]

  if ( (byte_5937933 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_long___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5937933 = 1;
  }
  CharaGraphServantListViewItemBase___ctor(
    (CharaGraphServantListViewItemBase_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    (const MethodInfo *)partyUserEquipList);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_10;
  v15 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v15;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
  v24 = v25;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v24, 0);
  if ( !this->fields._UserServantEntity_k__BackingField )
LABEL_10:
    sub_21FFECC(v11, v12);
  v16 = v11;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(this->fields._UserServantEntity_k__BackingField, 1, 0);
  this->fields._EquipCategoryIdArray_k__BackingField = EquipCategoryIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EquipCategoryIdArray_k__BackingField,
    (int32_t)EquipCategoryIdList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( System_Linq_Enumerable__Contains_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)partyUserEquipList,
         v16,
         (const MethodInfo_3843378 *)Method_System_Linq_Enumerable_Contains_long___) )
  {
    this->fields._IsUse_k__BackingField = 1;
  }
}


System_Int32_array *CharaGraphEquipListViewItem__get_EquipCategoryIdArray(
        CharaGraphEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipCategoryIdArray_k__BackingField;
}


void CharaGraphEquipListViewItem__set_EquipCategoryIdArray(
        CharaGraphEquipListViewItem_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EquipCategoryIdArray_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EquipCategoryIdArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}