void EventFortificationListViewItemDraw___ctor(EventFortificationListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4CC16D7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1308/*"1B2FA5"*/);
    sub_1C713B0(&StringLiteral_1302/*"11814B"*/);
    sub_1C713B0(&StringLiteral_1831/*"A51B1B"*/);
    byte_4CC16D7 = 1;
  }
  v3 = StringLiteral_1831/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1831/*"A51B1B"*/;
  sub_1C71354(&this->fields.colorCodeMilitsry, v3);
  v4 = StringLiteral_1308/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1308/*"1B2FA5"*/;
  sub_1C71354(&this->fields.colorCodeInternal, v4);
  v5 = StringLiteral_1302/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1302/*"11814B"*/;
  sub_1C71354(&this->fields.colorCodeFarmming, v5);
  this->fields.colorCodeA = 156;
  *(_QWORD *)&this->fields.fortificationInfoRootObjOffsetY = 0x4100000041900000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventFortificationListViewItemDraw__SerializeFieldNotNullCheck(
        EventFortificationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void EventFortificationListViewItemDraw__SetFatigueMask(
        EventFortificationListViewItemDraw_o *this,
        EventFortificationListViewItem_o *item,
        const MethodInfo *method)
{
  UILabel_o *teamNameLabel; // x0
  UILabel_o *appointmentLabel; // x21
  int32_t eventId; // w21
  UISprite_o *lineUpeer; // x22
  const MethodInfo *v9; // x6
  UnityEngine_Color_o v10; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4CC16D6 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_6472/*"FORTIFICATION_APPOINTMENT"*/);
    sub_1C713B0(&StringLiteral_17165/*"bg_white"*/);
    byte_4CC16D6 = 1;
  }
  *(_QWORD *)&v10.fields.r = 0;
  *(_QWORD *)&v10.fields.b = 0;
  if ( item )
  {
    if ( item->fields.isAppointment )
    {
      teamNameLabel = this->fields.teamNameLabel;
      if ( !teamNameLabel )
        goto LABEL_31;
      UILabel__set_text(teamNameLabel, item->fields.myTeamName, 0);
      teamNameLabel = this->fields.detailNameLabel;
      if ( !teamNameLabel )
        goto LABEL_31;
      UILabel__set_text(teamNameLabel, item->fields.myDetailName, 0);
      appointmentLabel = this->fields.appointmentLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      teamNameLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FORTIFICATION_APPOINTMENT"*/, 0);
      if ( !appointmentLabel )
        goto LABEL_31;
      UILabel__set_text(appointmentLabel, (System_String_o *)teamNameLabel, 0);
      teamNameLabel = this->fields.teamNameLabel;
      if ( !teamNameLabel )
        goto LABEL_31;
      UILabel__UpdateCondensedScaleComponent(teamNameLabel, 0);
      teamNameLabel = this->fields.detailNameLabel;
      if ( !teamNameLabel )
        goto LABEL_31;
      UILabel__UpdateCondensedScaleComponent(teamNameLabel, 0);
    }
    teamNameLabel = this->fields.teamNameLabel;
    if ( teamNameLabel )
    {
      teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)teamNameLabel, 0);
      if ( teamNameLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)teamNameLabel, item->fields.isAppointment, 0);
        teamNameLabel = this->fields.detailNameLabel;
        if ( teamNameLabel )
        {
          teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)teamNameLabel,
                                         0);
          if ( teamNameLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)teamNameLabel, item->fields.isAppointment, 0);
            teamNameLabel = this->fields.appointmentLabel;
            if ( teamNameLabel )
            {
              teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)teamNameLabel,
                                             0);
              if ( teamNameLabel )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)teamNameLabel,
                  item->fields.isAppointment,
                  0);
                eventId = item->fields.eventId;
                lineUpeer = this->fields.lineUpeer;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEventUI_40880344(eventId, lineUpeer, (System_String_o *)StringLiteral_17165/*"bg_white"*/, 0);
                AtlasManager__SetEventUI_40880344(
                  item->fields.eventId,
                  this->fields.lineBottom,
                  (System_String_o *)StringLiteral_17165/*"bg_white"*/,
                  0);
                teamNameLabel = (UILabel_o *)this->fields.lineUpeer;
                if ( teamNameLabel )
                {
                  teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)teamNameLabel,
                                                 0);
                  if ( teamNameLabel )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)teamNameLabel,
                      item->fields.isAppointment,
                      0);
                    teamNameLabel = (UILabel_o *)this->fields.lineBottom;
                    if ( teamNameLabel )
                    {
                      teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)teamNameLabel,
                                                     0);
                      if ( teamNameLabel )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)teamNameLabel,
                          item->fields.isAppointment,
                          0);
                        AtlasManager__SetEventUI_40880344(
                          item->fields.eventId,
                          this->fields.fortificationMaskSprite,
                          (System_String_o *)StringLiteral_17165/*"bg_white"*/,
                          0);
                        teamNameLabel = (UILabel_o *)this->fields.fortificationMaskSprite;
                        if ( teamNameLabel )
                        {
                          teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)teamNameLabel,
                                                         0);
                          if ( teamNameLabel )
                          {
                            UnityEngine_GameObject__SetActive(
                              (UnityEngine_GameObject_o *)teamNameLabel,
                              item->fields.isAppointment,
                              0);
                            if ( !EventFortificationDataLogic__TryGetColorByWorkType(
                                    &v10,
                                    this->fields.colorCodeMilitsry,
                                    this->fields.colorCodeInternal,
                                    this->fields.colorCodeFarmming,
                                    this->fields.colorCodeA,
                                    item->fields.myWorkType,
                                    v9) )
                              return;
                            teamNameLabel = (UILabel_o *)this->fields.fortificationMaskSprite;
                            if ( teamNameLabel )
                            {
                              UIWidget__set_color((UIWidget_o *)teamNameLabel, v10, 0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1C71608(teamNameLabel, item);
  }
}


void EventFortificationListViewItemDraw__SetFortificationPoint(
        EventFortificationListViewItemDraw_o *this,
        EventFortificationListViewItem_o *item,
        const MethodInfo *method)
{
  UILabel_o *statusLabel; // x20
  System_String_o *maskObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *getPointLabel; // x21
  System_String_o *v9; // x0
  UserServantEntity_o *userServantEntity; // x8
  int32_t eventId; // w1
  System_String_o *v12; // x20
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x0
  int32_t Point; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC16D5 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_6488/*"FORTIFICATION_GET_POINT_TEXT"*/);
    sub_1C713B0(&StringLiteral_11526/*"SELECT_CANNOT"*/);
    byte_4CC16D5 = 1;
  }
  if ( item )
  {
    if ( item->fields.isCanNotSelect && item->fields.isHeroineSvt )
    {
      statusLabel = this->fields.statusLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      maskObject = LocalizationManager__Get((System_String_o *)StringLiteral_11526/*"SELECT_CANNOT"*/, 0);
      if ( statusLabel )
      {
        UILabel__set_text(statusLabel, maskObject, 0);
        maskObject = (System_String_o *)this->fields.statusLabel;
        if ( maskObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskObject, 0);
          GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
          maskObject = (System_String_o *)this->fields.maskObject;
          if ( maskObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 1, 0);
            maskObject = (System_String_o *)this->fields.getPointLabel;
            if ( maskObject )
            {
              maskObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)maskObject,
                                                0);
              if ( maskObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0);
                return;
              }
            }
          }
        }
      }
LABEL_22:
      sub_1C71608(maskObject, item);
    }
    maskObject = (System_String_o *)this->fields.maskObject;
    if ( !maskObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, item->fields.isCanNotSelect, 0);
    getPointLabel = this->fields.getPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_6488/*"FORTIFICATION_GET_POINT_TEXT"*/, 0);
    userServantEntity = item->fields.userServantEntity;
    eventId = item->fields.eventId;
    v12 = v9;
    Point = EventFortificationDataLogic__CalculationGetPoint(userServantEntity, eventId, v13);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Point);
    maskObject = System_String__Format(v12, v14, 0);
    if ( !getPointLabel )
      goto LABEL_22;
    UILabel__set_text(getPointLabel, maskObject, 0);
    maskObject = (System_String_o *)this->fields.getPointLabel;
    if ( !maskObject )
      goto LABEL_22;
    maskObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskObject, 0);
    if ( !maskObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 1, 0);
  }
}


void EventFortificationListViewItemDraw__SetItem(
        EventFortificationListViewItemDraw_o *this,
        EventFortificationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Component_o *lockImg; // x0
  bool v8; // w1
  bool v9; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v11; // x1
  int32_t eventId; // w21
  UISprite_o *guestSprite; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *touchPress; // x21
  UnityEngine_Object_o *fortificationInfoRootObj; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s8
  bool activeSelf; // w0
  float fortificationInfoRootObjOffsetY; // s0
  UnityEngine_Object_o *getPointLabelRootObj; // x20
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  float v27; // s9
  float v28; // s8
  bool v29; // w0
  float getPointLabelOffsetY; // s0
  float v31; // [xsp+38h] [xbp-28h]
  float value; // [xsp+3Ch] [xbp-24h]
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC16D4 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_20282/*"icon_guest"*/);
    byte_4CC16D4 = 1;
  }
  if ( !item || !mode )
    return;
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_72;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
  if ( !lockImg )
    goto LABEL_72;
  v8 = item->fields.isSwapLock ? !item->fields.isLock : item->fields.isLock;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, v8, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.choiceImg;
  if ( !lockImg )
    goto LABEL_72;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
  if ( !lockImg )
    goto LABEL_72;
  v9 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, v9, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.maskObject;
  if ( !lockImg )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !lockImg )
    goto LABEL_72;
  ServantFaceIconComponent__Set_41281864(
    (ServantFaceIconComponent_o *)lockImg,
    item->fields.userServantEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0);
  lockImg = (UnityEngine_Component_o *)this->fields.partyIcon;
  if ( !lockImg )
    goto LABEL_72;
  if ( item->fields.isParty )
    FlashingIconComponent__Set((FlashingIconComponent_o *)lockImg, 0);
  else
    FlashingIconComponent__Clear((FlashingIconComponent_o *)lockImg, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !lockImg )
    goto LABEL_72;
  gameObject = UnityEngine_Component__get_gameObject(lockImg, 0);
  lockImg = (UnityEngine_Component_o *)EventFortificationListViewItem__get_IsBaseSvt(item, v11);
  if ( !gameObject )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)lockImg & 1, 0);
  eventId = item->fields.eventId;
  guestSprite = this->fields.guestSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40880344(eventId, guestSprite, (System_String_o *)StringLiteral_20282/*"icon_guest"*/, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.guestSprite;
  if ( !lockImg )
    goto LABEL_72;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
  if ( !lockImg )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, item->fields.isNpc, 0);
  if ( item->fields.isNpc )
  {
    userServantEntity = item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_72;
    lockImg = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !lockImg )
      goto LABEL_72;
    UIIconLabel__Set_41387288((UIIconLabel_o *)lockImg, 2, userServantEntity->fields.lv, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0, 0) )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.pushImg;
    if ( !lockImg )
      goto LABEL_72;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
    if ( !lockImg )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, item->fields.isPush, 0);
  }
  EventFortificationListViewItemDraw__SetFortificationPoint(this, item, v16);
  EventFortificationListViewItemDraw__SetFatigueMask(this, item, v17);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
  {
    if ( item->fields.isNpc )
      goto LABEL_47;
LABEL_43:
    if ( item->fields.svtTypeSetInMaster )
      goto LABEL_47;
    goto LABEL_44;
  }
  if ( !item->fields.isNpc )
    goto LABEL_43;
LABEL_44:
  lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !lockImg )
    goto LABEL_72;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
  if ( !lockImg )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0);
LABEL_47:
  fortificationInfoRootObj = (UnityEngine_Object_o *)this->fields.fortificationInfoRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationInfoRootObj, 0, 0) )
  {
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !lockImg )
      goto LABEL_72;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
    if ( !lockImg )
      goto LABEL_72;
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)lockImg, 0);
    fortificationInfoRootObjOffsetY = 0.0;
    if ( activeSelf )
      fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
    value = fortificationInfoRootObjOffsetY;
    lockImg = (UnityEngine_Component_o *)this->fields.fortificationInfoRootObj;
    if ( !lockImg )
      goto LABEL_72;
    lockImg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)lockImg, 0);
    if ( !lockImg )
      goto LABEL_72;
    v33.fields.y = value;
    v33.fields.x = x;
    v33.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v33, 0);
  }
  getPointLabelRootObj = (UnityEngine_Object_o *)this->fields.getPointLabelRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(getPointLabelRootObj, 0, 0) )
  {
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( lockImg )
    {
      v26 = UnityEngine_Vector3_TypeInfo->static_fields;
      v27 = v26->zeroVector.fields.x;
      v28 = v26->zeroVector.fields.z;
      lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
      if ( lockImg )
      {
        v29 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)lockImg, 0);
        getPointLabelOffsetY = 0.0;
        if ( v29 )
          getPointLabelOffsetY = this->fields.getPointLabelOffsetY;
        v31 = getPointLabelOffsetY;
        lockImg = (UnityEngine_Component_o *)this->fields.getPointLabelRootObj;
        if ( lockImg )
        {
          lockImg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)lockImg,
                                                 0);
          if ( lockImg )
          {
            v34.fields.y = v31;
            v34.fields.x = v27;
            v34.fields.z = v28;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v34, 0);
            return;
          }
        }
      }
    }
LABEL_72:
    sub_1C71608(lockImg, item);
  }
}