void CharaGraphGrandEquipListViewItem___ctor(
        CharaGraphGrandEquipListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        GrandServantListSlotData_o *grandSvtSlotData,
        const MethodInfo *method)
{
  __int64 v13; // x0
  __int64 v14; // x1
  __int128 v15; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h]

  if ( (byte_4C220A7 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C220A7 = 1;
  }
  CharaGraphEquipListViewItem___ctor(
    (CharaGraphEquipListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    partyUserServantList,
    0);
  this->fields.grandServantData = grandSvtSlotData;
  v13 = sub_1C2D434(&this->fields.grandServantData);
  if ( !userSvtEntity )
    sub_1C2D6EC(v13, v14);
  v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  this->fields.equipUserServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v16, 0);
}