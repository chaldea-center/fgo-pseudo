void GrandServantListServantFaceIcon___ctor(GrandServantListServantFaceIcon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListServantFaceIcon__Setup(
        GrandServantListServantFaceIcon_o *this,
        UserServantEntity_o *userServantEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UIIconLabel_o *iconLabelLevel; // x22
  int32_t lv; // w23
  UIIconLabel_o *iconLabelFriendRank; // x22
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x21
  SkillInfo_array *v12; // x22
  int32_t v13; // w23
  int32_t strengthStatus; // w24
  int32_t treasureDeviceNum; // w25
  System_String_o *v16; // x22
  __int64 v17; // x20
  __int64 v18; // x26
  int32_t v19; // w0
  int32_t v20; // w6
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4CE9397 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CE9397 = 1;
  }
  skillInfoList = 0;
  tdInfo = 0;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_19;
  if ( questRestrictionInfo )
  {
    ServantFaceIconComponent__Set(servantFaceIcon, userServantEntity, 0, questRestrictionInfo, 0, 0, 0, 0, 0, 0);
    if ( !userServantEntity )
      goto LABEL_19;
  }
  else
  {
    ServantFaceIconComponent__Set_41658632(servantFaceIcon, userServantEntity, 0, 0, 0);
    if ( !userServantEntity )
      goto LABEL_19;
  }
  iconLabelLevel = this->fields.iconLabelLevel;
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !iconLabelLevel )
    goto LABEL_19;
  UIIconLabel__Set_41680724(iconLabelLevel, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0, 0);
  iconLabelFriendRank = this->fields.iconLabelFriendRank;
  servantFaceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getFriendshipRank(userServantEntity, 0);
  if ( !iconLabelFriendRank )
    goto LABEL_19;
  UIIconLabel__Set_41680724(iconLabelFriendRank, 32, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  UserServantEntity__getSkillInfo(userServantEntity, &skillInfoList, -1, -1, 1, 0, -1, 0);
  UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, -1, 0, 0);
  skillListTreasureDevice = this->fields.skillListTreasureDevice;
  v12 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__GetLevelList_41850208(v12, 0);
  if ( !tdInfo )
    goto LABEL_19;
  v13 = tdInfo->fields.lv;
  strengthStatus = tdInfo->fields.strengthStatus;
  treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
  v16 = (System_String_o *)servantFaceIcon;
  if ( questRestrictionInfo )
  {
    v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v23, 0);
    servantFaceIcon = (ServantFaceIconComponent_o *)QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(
                                                      questRestrictionInfo,
                                                      v19,
                                                      0);
    v20 = (int)servantFaceIcon;
    if ( skillListTreasureDevice )
      goto LABEL_17;
LABEL_19:
    sub_1C7BD40(servantFaceIcon, userServantEntity);
  }
  v20 = 0;
  if ( !skillListTreasureDevice )
    goto LABEL_19;
LABEL_17:
  SkillListTreasureDeviceComponent__SetWithoutAdjustPosition(
    skillListTreasureDevice,
    v16,
    v13,
    strengthStatus,
    treasureDeviceNum,
    0,
    v20,
    0);
}