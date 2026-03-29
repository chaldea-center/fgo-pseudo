void CharaGraphGrandEquipListViewItem___ctor(
        CharaGraphGrandEquipListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        GrandServantListSlotData_o *grandSvtSlotData,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x1
  __int128 v21; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-60h]

  if ( (byte_4D2B5DE & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2B5DE = 1;
  }
  CharaGraphEquipListViewItem___ctor(
    (CharaGraphEquipListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    partyUserServantList,
    0);
  this->fields.grandServantData = grandSvtSlotData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantData,
    (int32_t)grandSvtSlotData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !userSvtEntity )
    sub_1C93D2C(v19, v20);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v23.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v22 = v23;
  this->fields.equipUserServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v22, 0);
}