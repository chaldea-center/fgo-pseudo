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
  UIIconLabel_o *iconLabelLevel; // x23
  int32_t lv; // w22
  UIIconLabel_o *iconLabelFriendRank; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x21
  SkillInfo_array *v14; // x22
  __int64 v15; // x2
  int32_t strengthStatus; // w24
  int32_t treasureDeviceNum; // w25
  int32_t v18; // w23
  System_String_o *v19; // x22
  __int64 v20; // x20
  __int64 v21; // x26
  int32_t v22; // w0
  int32_t v23; // w6
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_5933288 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933288 = 1;
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  skillInfoList = 0;
  tdInfo = 0;
  if ( questRestrictionInfo )
  {
    if ( !servantFaceIcon )
      goto LABEL_20;
    ServantFaceIconComponent__Set(servantFaceIcon, userServantEntity, 0, questRestrictionInfo, 0, 0, 0, 0, 0, 1, 0);
    if ( !userServantEntity )
      goto LABEL_20;
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_20;
    ServantFaceIconComponent__Set_48018228(servantFaceIcon, userServantEntity, 0, 0, 1, 0);
    if ( !userServantEntity )
      goto LABEL_20;
  }
  iconLabelLevel = this->fields.iconLabelLevel;
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !iconLabelLevel )
    goto LABEL_20;
  UIIconLabel__Set_48040364(iconLabelLevel, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0, 0);
  iconLabelFriendRank = this->fields.iconLabelFriendRank;
  servantFaceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getFriendshipRank(userServantEntity, 0);
  if ( !iconLabelFriendRank )
    goto LABEL_20;
  UIIconLabel__Set_48040364(iconLabelFriendRank, 32, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  UserServantEntity__getSkillInfo(userServantEntity, &skillInfoList, -1, -1, 1, 0, -1, 0);
  UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, -1, 0, 0);
  skillListTreasureDevice = this->fields.skillListTreasureDevice;
  v14 = skillInfoList;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__GetLevelList_48215212(v14, 0);
  if ( !tdInfo )
LABEL_20:
    sub_21FFECC(servantFaceIcon, userServantEntity);
  strengthStatus = tdInfo->fields.strengthStatus;
  treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
  v18 = tdInfo->fields.lv;
  v19 = (System_String_o *)servantFaceIcon;
  if ( questRestrictionInfo )
  {
    v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity, v15);
    *(_QWORD *)&v26.fields.currentCryptoKey = v21;
    *(_QWORD *)&v26.fields.fakeValue = v20;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v26, 0);
    servantFaceIcon = (ServantFaceIconComponent_o *)QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(
                                                      questRestrictionInfo,
                                                      v22,
                                                      0);
    v23 = (int)servantFaceIcon;
    if ( skillListTreasureDevice )
      goto LABEL_18;
    goto LABEL_20;
  }
  v23 = 0;
  if ( !skillListTreasureDevice )
    goto LABEL_20;
LABEL_18:
  SkillListTreasureDeviceComponent__SetWithoutAdjustPosition(
    skillListTreasureDevice,
    v19,
    v18,
    strengthStatus,
    treasureDeviceNum,
    0,
    v23,
    0);
}