void EventFortificationListViewItemDraw___ctor(EventFortificationListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_593252C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1391/*"1B2FA5"*/);
    sub_21FFC50(&StringLiteral_1385/*"11814B"*/);
    sub_21FFC50(&StringLiteral_1917/*"A51B1B"*/);
    byte_593252C = 1;
  }
  v9 = StringLiteral_1917/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1917/*"A51B1B"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.colorCodeMilitsry, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1391/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1391/*"1B2FA5"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.colorCodeInternal, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1385/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1385/*"11814B"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.colorCodeFarmming, v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *appointmentLabel; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t eventId; // w21
  UISprite_o *lineUpeer; // x22
  const MethodInfo *v13; // x6
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_593252B & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6751/*"FORTIFICATION_APPOINTMENT"*/);
    sub_21FFC50(&StringLiteral_17842/*"bg_white"*/);
    byte_593252B = 1;
  }
  *(_QWORD *)&v14.fields.r = 0;
  *(_QWORD *)&v14.fields.b = 0;
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
      teamNameLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6751/*"FORTIFICATION_APPOINTMENT"*/, 0);
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
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
                AtlasManager__SetEventUI_47538316(eventId, lineUpeer, (System_String_o *)StringLiteral_17842/*"bg_white"*/, 0);
                AtlasManager__SetEventUI_47538316(
                  item->fields.eventId,
                  this->fields.lineBottom,
                  (System_String_o *)StringLiteral_17842/*"bg_white"*/,
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
                        AtlasManager__SetEventUI_47538316(
                          item->fields.eventId,
                          this->fields.fortificationMaskSprite,
                          (System_String_o *)StringLiteral_17842/*"bg_white"*/,
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
                                    &v14,
                                    this->fields.colorCodeMilitsry,
                                    this->fields.colorCodeInternal,
                                    this->fields.colorCodeFarmming,
                                    this->fields.colorCodeA,
                                    item->fields.myWorkType,
                                    v13) )
                              return;
                            teamNameLabel = (UILabel_o *)this->fields.fortificationMaskSprite;
                            if ( teamNameLabel )
                            {
                              UIWidget__set_color((UIWidget_o *)teamNameLabel, v14, 0);
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
    sub_21FFECC(teamNameLabel, item);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *getPointLabel; // x21
  System_String_o *v11; // x0
  UserServantEntity_o *userServantEntity; // x8
  int32_t eventId; // w1
  System_String_o *v14; // x20
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x0
  int32_t Point; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593252A & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6767/*"FORTIFICATION_GET_POINT_TEXT"*/);
    sub_21FFC50(&StringLiteral_12006/*"SELECT_CANNOT"*/);
    byte_593252A = 1;
  }
  if ( item )
  {
    if ( item->fields.isCanNotSelect && item->fields.isHeroineSvt )
    {
      statusLabel = this->fields.statusLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
      maskObject = LocalizationManager__Get((System_String_o *)StringLiteral_12006/*"SELECT_CANNOT"*/, 0);
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
      sub_21FFECC(maskObject, item);
    }
    maskObject = (System_String_o *)this->fields.maskObject;
    if ( !maskObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, item->fields.isCanNotSelect, 0);
    getPointLabel = this->fields.getPointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6767/*"FORTIFICATION_GET_POINT_TEXT"*/, 0);
    userServantEntity = item->fields.userServantEntity;
    eventId = item->fields.eventId;
    v14 = v11;
    Point = EventFortificationDataLogic__CalculationGetPoint(userServantEntity, eventId, v15);
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Point);
    maskObject = System_String__Format(v14, v16, 0);
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
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t eventId; // w21
  UISprite_o *guestSprite; // x22
  __int64 v16; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *touchPress; // x21
  __int64 v24; // x2
  UnityEngine_Object_o *fortificationInfoRootObj; // x20
  __int64 v26; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s8
  float fortificationInfoRootObjOffsetY; // s10
  UnityEngine_Object_o *getPointLabelRootObj; // x20
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  float v33; // s9
  float v34; // s8
  float getPointLabelOffsetY; // s10
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5932529 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21141/*"icon_guest"*/);
    byte_5932529 = 1;
  }
  if ( !item || !mode )
    return;
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_73;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
  if ( !lockImg )
    goto LABEL_73;
  v8 = item->fields.isSwapLock ? !item->fields.isLock : item->fields.isLock;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, v8, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.choiceImg;
  if ( !lockImg )
    goto LABEL_73;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
  if ( !lockImg )
    goto LABEL_73;
  v9 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, v9, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.maskObject;
  if ( !lockImg )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !lockImg )
    goto LABEL_73;
  ServantFaceIconComponent__Set_48018228(
    (ServantFaceIconComponent_o *)lockImg,
    item->fields.userServantEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    1,
    0);
  lockImg = (UnityEngine_Component_o *)this->fields.partyIcon;
  if ( item->fields.isParty )
  {
    if ( !lockImg )
      goto LABEL_73;
    FlashingIconComponent__Set((FlashingIconComponent_o *)lockImg, 0);
  }
  else
  {
    if ( !lockImg )
      goto LABEL_73;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)lockImg, 0);
  }
  lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !lockImg )
    goto LABEL_73;
  gameObject = UnityEngine_Component__get_gameObject(lockImg, 0);
  lockImg = (UnityEngine_Component_o *)EventFortificationListViewItem__get_IsBaseSvt(item, v11);
  if ( !gameObject )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)lockImg & 1, 0);
  eventId = item->fields.eventId;
  guestSprite = this->fields.guestSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
  AtlasManager__SetEventUI_47538316(eventId, guestSprite, (System_String_o *)StringLiteral_21141/*"icon_guest"*/, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.guestSprite;
  if ( !lockImg || (lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0)) == 0 )
LABEL_73:
    sub_21FFECC(lockImg, item);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, item->fields.isNpc, 0);
  if ( item->fields.isNpc )
  {
    userServantEntity = item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_73;
    lockImg = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !lockImg )
      goto LABEL_73;
    UIIconLabel__Set_48040364((UIIconLabel_o *)lockImg, 2, userServantEntity->fields.lv, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v16);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0, 0) )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.pushImg;
    if ( !lockImg )
      goto LABEL_73;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
    if ( !lockImg )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, item->fields.isPush, 0);
  }
  EventFortificationListViewItemDraw__SetFortificationPoint(this, item, v19);
  EventFortificationListViewItemDraw__SetFatigueMask(this, item, v20);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( !UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
  {
    if ( item->fields.isNpc )
      goto LABEL_48;
LABEL_44:
    if ( item->fields.svtTypeSetInMaster )
      goto LABEL_48;
    goto LABEL_45;
  }
  if ( !item->fields.isNpc )
    goto LABEL_44;
LABEL_45:
  lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !lockImg )
    goto LABEL_73;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
  if ( !lockImg )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0);
LABEL_48:
  fortificationInfoRootObj = (UnityEngine_Object_o *)this->fields.fortificationInfoRootObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v24);
  if ( UnityEngine_Object__op_Inequality(fortificationInfoRootObj, 0, 0) )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !lockImg )
      goto LABEL_73;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
    if ( !lockImg )
      goto LABEL_73;
    fortificationInfoRootObjOffsetY = 0.0;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)lockImg, 0) )
      fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
    lockImg = (UnityEngine_Component_o *)this->fields.fortificationInfoRootObj;
    if ( !lockImg )
      goto LABEL_73;
    lockImg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)lockImg, 0);
    if ( !lockImg )
      goto LABEL_73;
    v36.fields.x = x;
    v36.fields.y = fortificationInfoRootObjOffsetY;
    v36.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v36, 0);
  }
  getPointLabelRootObj = (UnityEngine_Object_o *)this->fields.getPointLabelRootObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v26);
  if ( UnityEngine_Object__op_Inequality(getPointLabelRootObj, 0, 0) )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( lockImg )
    {
      v32 = UnityEngine_Vector3_TypeInfo->static_fields;
      v33 = v32->zeroVector.fields.x;
      v34 = v32->zeroVector.fields.z;
      lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
      if ( lockImg )
      {
        getPointLabelOffsetY = 0.0;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)lockImg, 0) )
          getPointLabelOffsetY = this->fields.getPointLabelOffsetY;
        lockImg = (UnityEngine_Component_o *)this->fields.getPointLabelRootObj;
        if ( lockImg )
        {
          lockImg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)lockImg,
                                                 0);
          if ( lockImg )
          {
            v37.fields.x = v33;
            v37.fields.z = v34;
            v37.fields.y = getPointLabelOffsetY;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v37, 0);
            return;
          }
        }
      }
    }
    goto LABEL_73;
  }
}