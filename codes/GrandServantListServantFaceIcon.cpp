void GrandServantListServantFaceIcon___ctor(GrandServantListServantFaceIcon_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListServantFaceIcon__Setup(
        GrandServantListServantFaceIcon_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UIIconLabel_o *iconLabelLevel; // x21
  int32_t lv; // w22
  UIIconLabel_o *iconLabelFriendRank; // x21
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x19
  SkillInfo_array *v10; // x20
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C22135 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C22135 = 1;
  }
  skillInfoList = 0;
  tdInfo = 0;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_12;
  ServantFaceIconComponent__Set_40783748(servantFaceIcon, userServantEntity, 0, 0, 0);
  if ( !userServantEntity )
    goto LABEL_12;
  iconLabelLevel = this->fields.iconLabelLevel;
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !iconLabelLevel )
    goto LABEL_12;
  UIIconLabel__Set_40889008(iconLabelLevel, 2, lv, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0, 0);
  iconLabelFriendRank = this->fields.iconLabelFriendRank;
  servantFaceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getFriendshipRank(userServantEntity, 0);
  if ( !iconLabelFriendRank )
    goto LABEL_12;
  UIIconLabel__Set_40889008(iconLabelFriendRank, 32, (int32_t)servantFaceIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  UserServantEntity__getSkillInfo(userServantEntity, &skillInfoList, -1, -1, 1, 0, -1, 0);
  UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, -1, 0, 0);
  skillListTreasureDevice = this->fields.skillListTreasureDevice;
  v10 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__GetLevelList_41056784(v10, 0);
  if ( !tdInfo || !skillListTreasureDevice )
LABEL_12:
    sub_1C2D6EC(servantFaceIcon, userServantEntity);
  SkillListTreasureDeviceComponent__SetWithoutAdjustPosition(
    skillListTreasureDevice,
    (System_String_o *)servantFaceIcon,
    tdInfo->fields.lv,
    tdInfo->fields.strengthStatus,
    tdInfo->fields.treasureDeviceNum,
    0,
    0);
}