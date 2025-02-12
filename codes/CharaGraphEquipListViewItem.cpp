// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphEquipListViewItem___ctor(
        CharaGraphEquipListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserEquipList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  int64_t v12; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v15; // q1
  int64_t v16; // x21
  struct System_Int32_array *EquipCategoryIdList; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-60h]

  if ( (byte_4BC6E1C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Contains_long___, *(_QWORD *)&index);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_4BC6E1C = 1;
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
  v15 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v24 = v25;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v24, 0LL);
  if ( !this->fields._UserServantEntity_k__BackingField )
LABEL_10:
    sub_1C1AE30(v12, v13);
  v16 = v12;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(
                          this->fields._UserServantEntity_k__BackingField,
                          1,
                          0LL);
  this->fields._EquipCategoryIdArray_k__BackingField = EquipCategoryIdList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._EquipCategoryIdArray_k__BackingField,
    (int64_t)EquipCategoryIdList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( System_Linq_Enumerable__Contains_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)partyUserEquipList,
         v16,
         (const MethodInfo_2FB7684 *)Method_System_Linq_Enumerable_Contains_long___) )
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EquipCategoryIdArray_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._EquipCategoryIdArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}