void BattleCharaChangeConfirmListViewItem___ctor(
        BattleCharaChangeConfirmListViewItem_o *this,
        int32_t svtId,
        int32_t limitCount,
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *nowData,
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *nextData,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SvtId_k__BackingField = svtId;
  this->fields._LimitCount_k__BackingField = limitCount;
  this->fields._NowData_k__BackingField = nowData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NowData_k__BackingField,
    (int32_t)nowData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._NextData_k__BackingField = nextData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NextData_k__BackingField,
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._DispLimitCount_k__BackingField = dispLimitCount;
  this->fields._TreasureDeviceInfo_k__BackingField = tdInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TreasureDeviceInfo_k__BackingField,
    (int32_t)tdInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._SkillInfoArray_k__BackingField = skillInfoArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SkillInfoArray_k__BackingField,
    (int32_t)skillInfoArray,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._Status_k__BackingField = status;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Status_k__BackingField,
    (int32_t)status,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields._ClassPassiveSkillArray_k__BackingField = classSkillArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClassPassiveSkillArray_k__BackingField,
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