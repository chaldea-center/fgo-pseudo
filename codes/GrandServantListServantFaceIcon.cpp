void __fastcall GrandServantListServantFaceIcon___ctor(
        GrandServantListServantFaceIcon_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandServantListServantFaceIcon__Setup(
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

  if ( (byte_4AFCF2C & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, userServantEntity);
    byte_4AFCF2C = 1;
  }
  skillInfoList = 0LL;
  tdInfo = 0LL;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_12;
  ServantFaceIconComponent__Set_40035864(servantFaceIcon, userServantEntity, 0LL, 0LL, 0LL);
  if ( !userServantEntity )
    goto LABEL_12;
  iconLabelLevel = this->fields.iconLabelLevel;
  lv = userServantEntity->fields.lv;
  servantFaceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !iconLabelLevel )
    goto LABEL_12;
  UIIconLabel__Set_40054380(iconLabelLevel, 2, lv, (int32_t)servantFaceIcon, 0, 0LL, 0, 0, 0, 0, 0LL);
  iconLabelFriendRank = this->fields.iconLabelFriendRank;
  servantFaceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getFriendshipRank(userServantEntity, 0LL);
  if ( !iconLabelFriendRank )
    goto LABEL_12;
  UIIconLabel__Set_40054380(iconLabelFriendRank, 32, (int32_t)servantFaceIcon, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  UserServantEntity__getSkillInfo(userServantEntity, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, -1, 0, 0LL);
  skillListTreasureDevice = this->fields.skillListTreasureDevice;
  v10 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__GetLevelList_40303600(v10, 0LL);
  if ( !tdInfo || !skillListTreasureDevice )
LABEL_12:
    sub_1BC3264(servantFaceIcon, userServantEntity);
  SkillListTreasureDeviceComponent__SetWithoutAdjustPosition(
    skillListTreasureDevice,
    (System_String_o *)servantFaceIcon,
    tdInfo->fields.lv,
    tdInfo->fields.strengthStatus,
    tdInfo->fields.treasureDeviceNum,
    0,
    0LL);
}