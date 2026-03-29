void BattleCharaChangeConfirmListViewItem___ctor(
        BattleCharaChangeConfirmListViewItem_o *this,
        int32_t svtId,
        int32_t limitCount,
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *nowData,
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *nextData,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SvtId_k__BackingField = svtId;
  this->fields._LimitCount_k__BackingField = limitCount;
  this->fields._NowData_k__BackingField = nowData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._NowData_k__BackingField,
    (int32_t)nowData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._NextData_k__BackingField = nextData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._NextData_k__BackingField,
    (int32_t)nextData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


int32_t BattleCharaChangeConfirmListViewItem__get_LimitCount(
        BattleCharaChangeConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._LimitCount_k__BackingField;
}


BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *BattleCharaChangeConfirmListViewItem__get_NextData(
        BattleCharaChangeConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._NextData_k__BackingField;
}


BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *BattleCharaChangeConfirmListViewItem__get_NowData(
        BattleCharaChangeConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._NowData_k__BackingField;
}


int32_t BattleCharaChangeConfirmListViewItem__get_SvtId(
        BattleCharaChangeConfirmListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


void BattleCharaChangeConfirmListViewItem_DispLimitCountData___ctor(
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *this,
        int32_t dispLimitCount,
        TreasureDvcInfo_o *tdInfo,
        SkillInfo_array *skillInfoArray,
        ServantOverwriteStatus_o *status,
        System_Int32_array *classSkillArray,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._DispLimitCount_k__BackingField = dispLimitCount;
  this->fields._TreasureDeviceInfo_k__BackingField = tdInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._TreasureDeviceInfo_k__BackingField,
    (int32_t)tdInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._SkillInfoArray_k__BackingField = skillInfoArray;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SkillInfoArray_k__BackingField,
    (int32_t)skillInfoArray,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._Status_k__BackingField = status;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._Status_k__BackingField,
    (int32_t)status,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields._ClassPassiveSkillArray_k__BackingField = classSkillArray;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClassPassiveSkillArray_k__BackingField,
    (int32_t)classSkillArray,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


System_Int32_array *BattleCharaChangeConfirmListViewItem_DispLimitCountData__get_ClassPassiveSkillArray(
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassPassiveSkillArray_k__BackingField;
}


int32_t BattleCharaChangeConfirmListViewItem_DispLimitCountData__get_DispLimitCount(
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *this,
        const MethodInfo *method)
{
  return this->fields._DispLimitCount_k__BackingField;
}


SkillInfo_array *BattleCharaChangeConfirmListViewItem_DispLimitCountData__get_SkillInfoArray(
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillInfoArray_k__BackingField;
}


ServantOverwriteStatus_o *BattleCharaChangeConfirmListViewItem_DispLimitCountData__get_Status(
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *this,
        const MethodInfo *method)
{
  return this->fields._Status_k__BackingField;
}


TreasureDvcInfo_o *BattleCharaChangeConfirmListViewItem_DispLimitCountData__get_TreasureDeviceInfo(
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *this,
        const MethodInfo *method)
{
  return this->fields._TreasureDeviceInfo_k__BackingField;
}