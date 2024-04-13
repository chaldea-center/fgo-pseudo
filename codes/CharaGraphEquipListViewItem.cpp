void __fastcall CharaGraphEquipListViewItem___ctor(
        CharaGraphEquipListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserEquipList,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t v14; // x0
  __int64 v15; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v17; // q1
  int64_t v18; // x21
  struct System_Int32_array *EquipCategoryIdList; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]

  if ( (byte_42E9649 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_long___, index, (_DWORD)listViewPattern, userSvtEntity);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12, v13);
    byte_42E9649 = 1;
  }
  CharaGraphServantListViewItem___ctor(
    (CharaGraphServantListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    (const MethodInfo *)partyUserEquipList);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_11;
  v17 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v26 = v27;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v26, 0LL);
  if ( !this->fields._UserServantEntity_k__BackingField )
LABEL_11:
    sub_B5D69C(v14, v15);
  v18 = v14;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(
                          this->fields._UserServantEntity_k__BackingField,
                          1,
                          0LL);
  this->fields._EquipCategoryIdArray_k__BackingField = EquipCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._EquipCategoryIdArray_k__BackingField,
    (System_Int32_array **)EquipCategoryIdList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( System_Linq_Enumerable__Contains_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)partyUserEquipList,
         v18,
         (const MethodInfo_1CA5084 *)Method_System_Linq_Enumerable_Contains_long___) )
  {
    this->fields._IsUse_k__BackingField = 1;
  }
}


System_Int32_array *__fastcall CharaGraphEquipListViewItem__get_EquipCategoryIdArray(
        CharaGraphEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipCategoryIdArray_k__BackingField;
}


void __fastcall CharaGraphEquipListViewItem__set_EquipCategoryIdArray(
        CharaGraphEquipListViewItem_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EquipCategoryIdArray_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._EquipCategoryIdArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}