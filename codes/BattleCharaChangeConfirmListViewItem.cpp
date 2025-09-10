void BattleCharaChangeConfirmListViewItem___ctor(
        BattleCharaChangeConfirmListViewItem_o *this,
        int32_t svtId,
        int32_t limitCount,
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *nowData,
        BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *nextData,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SvtId_k__BackingField = svtId;
  this->fields._LimitCount_k__BackingField = limitCount;
  this->fields._NowData_k__BackingField = nowData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NowData_k__BackingField, (int32_t)nowData, v11, v12);
  this->fields._NextData_k__BackingField = nextData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NextData_k__BackingField, (int32_t)nextData, v13, v14);
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
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._DispLimitCount_k__BackingField = dispLimitCount;
  this->fields._TreasureDeviceInfo_k__BackingField = tdInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._TreasureDeviceInfo_k__BackingField, (int32_t)tdInfo, v13, v14);
  this->fields._SkillInfoArray_k__BackingField = skillInfoArray;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._SkillInfoArray_k__BackingField, (int32_t)skillInfoArray, v15, v16);
  this->fields._Status_k__BackingField = status;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._Status_k__BackingField, (int32_t)status, v17, v18);
  this->fields._ClassPassiveSkillArray_k__BackingField = classSkillArray;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._ClassPassiveSkillArray_k__BackingField,
    (int32_t)classSkillArray,
    v19,
    v20);
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