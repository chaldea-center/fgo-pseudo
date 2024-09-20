void __fastcall CharaGraphEquipListViewItem___ctor(
        CharaGraphEquipListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserEquipList,
        const MethodInfo *method)
{
  int64_t v11; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v14; // q1
  int64_t v15; // x21
  struct System_Int32_array *EquipCategoryIdList; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]

  if ( (byte_4A5A50C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_long___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5A50C = 1;
  }
  CharaGraphServantListViewItem___ctor(
    (CharaGraphServantListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    (const MethodInfo *)partyUserEquipList);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_10;
  v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v19, 0LL);
  if ( !this->fields._UserServantEntity_k__BackingField )
LABEL_10:
    sub_1B8880C(v11, v12);
  v15 = v11;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(
                          this->fields._UserServantEntity_k__BackingField,
                          1,
                          0LL);
  this->fields._EquipCategoryIdArray_k__BackingField = EquipCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EquipCategoryIdArray_k__BackingField,
    (int32_t)EquipCategoryIdList,
    v17,
    v18);
  if ( System_Linq_Enumerable__Contains_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)partyUserEquipList,
         v15,
         (const MethodInfo_2E99C0C *)Method_System_Linq_Enumerable_Contains_long___) )
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
  int32_t v3; // w3

  this->fields._EquipCategoryIdArray_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EquipCategoryIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}