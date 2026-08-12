void CharaGraphGrandEquipListViewItem___ctor(
        CharaGraphGrandEquipListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        GrandServantListSlotData_o *grandSvtSlotData,
        const MethodInfo *method)
{
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int128 v22; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-60h]

  if ( (byte_596B301 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B301 = 1;
  }
  CharaGraphEquipListViewItem___ctor(
    (CharaGraphEquipListViewItem_o *)this,
    index,
    listViewPattern,
    userSvtEntity,
    partyUserServantList,
    0);
  this->fields.grandServantData = grandSvtSlotData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantData,
    (int32_t)grandSvtSlotData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !userSvtEntity )
    sub_2213CDC(v19, v20);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v22;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21);
  v23 = v24;
  this->fields.equipUserServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v23, 0);
}