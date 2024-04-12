void __fastcall EventFortificationListViewItemDraw___ctor(
        EventFortificationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42B2883 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1118/*"1B2FA5"*/);
    sub_B52984(&StringLiteral_1113/*"11814B"*/);
    sub_B52984(&StringLiteral_1633/*"A51B1B"*/);
    byte_42B2883 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1633/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1633/*"A51B1B"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1118/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1118/*"1B2FA5"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_1113/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1113/*"11814B"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v17, v18, v19, v20, v21, v22, v23);
  this->fields.colorCodeA = 156;
  *(_QWORD *)&this->fields.fortificationInfoRootObjOffsetY = 0x4100000041900000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationListViewItemDraw__SerializeFieldNotNullCheck(
        EventFortificationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventFortificationListViewItemDraw__SetFatigueMask(
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

  if ( (byte_42B2882 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_6456/*"FORTIFICATION_APPOINTMENT"*/);
    sub_B52984(&StringLiteral_16818/*"bg_white"*/);
    byte_42B2882 = 1;
  }
  *(_QWORD *)&v10.fields.r = 0LL;
  *(_QWORD *)&v10.fields.b = 0LL;
  if ( item )
  {
    if ( item->fields.isAppointment )
    {
      teamNameLabel = this->fields.teamNameLabel;
      if ( !teamNameLabel )
        goto LABEL_33;
      UILabel__set_text(teamNameLabel, item->fields.myTeamName, 0LL);
      teamNameLabel = this->fields.detailNameLabel;
      if ( !teamNameLabel )
        goto LABEL_33;
      UILabel__set_text(teamNameLabel, item->fields.myDetailName, 0LL);
      appointmentLabel = this->fields.appointmentLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      teamNameLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6456/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
      if ( !appointmentLabel )
        goto LABEL_33;
      UILabel__set_text(appointmentLabel, (System_String_o *)teamNameLabel, 0LL);
      teamNameLabel = this->fields.teamNameLabel;
      if ( !teamNameLabel )
        goto LABEL_33;
      UILabel__UpdateCondensedScaleComponent(teamNameLabel, 0LL);
      teamNameLabel = this->fields.detailNameLabel;
      if ( !teamNameLabel )
        goto LABEL_33;
      UILabel__UpdateCondensedScaleComponent(teamNameLabel, 0LL);
    }
    teamNameLabel = this->fields.teamNameLabel;
    if ( teamNameLabel )
    {
      teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)teamNameLabel, 0LL);
      if ( teamNameLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)teamNameLabel, item->fields.isAppointment, 0LL);
        teamNameLabel = this->fields.detailNameLabel;
        if ( teamNameLabel )
        {
          teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)teamNameLabel,
                                         0LL);
          if ( teamNameLabel )
          {
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)teamNameLabel,
              item->fields.isAppointment,
              0LL);
            teamNameLabel = this->fields.appointmentLabel;
            if ( teamNameLabel )
            {
              teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)teamNameLabel,
                                             0LL);
              if ( teamNameLabel )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)teamNameLabel,
                  item->fields.isAppointment,
                  0LL);
                eventId = item->fields.eventId;
                lineUpeer = this->fields.lineUpeer;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventUI_28377220(eventId, lineUpeer, (System_String_o *)StringLiteral_16818/*"bg_white"*/, 0LL);
                AtlasManager__SetEventUI_28377220(
                  item->fields.eventId,
                  this->fields.lineBottom,
                  (System_String_o *)StringLiteral_16818/*"bg_white"*/,
                  0LL);
                teamNameLabel = (UILabel_o *)this->fields.lineUpeer;
                if ( teamNameLabel )
                {
                  teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)teamNameLabel,
                                                 0LL);
                  if ( teamNameLabel )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)teamNameLabel,
                      item->fields.isAppointment,
                      0LL);
                    teamNameLabel = (UILabel_o *)this->fields.lineBottom;
                    if ( teamNameLabel )
                    {
                      teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)teamNameLabel,
                                                     0LL);
                      if ( teamNameLabel )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)teamNameLabel,
                          item->fields.isAppointment,
                          0LL);
                        AtlasManager__SetEventUI_28377220(
                          item->fields.eventId,
                          this->fields.fortificationMaskSprite,
                          (System_String_o *)StringLiteral_16818/*"bg_white"*/,
                          0LL);
                        teamNameLabel = (UILabel_o *)this->fields.fortificationMaskSprite;
                        if ( teamNameLabel )
                        {
                          teamNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)teamNameLabel,
                                                         0LL);
                          if ( teamNameLabel )
                          {
                            UnityEngine_GameObject__SetActive(
                              (UnityEngine_GameObject_o *)teamNameLabel,
                              item->fields.isAppointment,
                              0LL);
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
                              UIWidget__set_color((UIWidget_o *)teamNameLabel, v10, 0LL);
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
LABEL_33:
    sub_B52A5C(teamNameLabel, item);
  }
}


void __fastcall EventFortificationListViewItemDraw__SetFortificationPoint(
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
  int32_t Point; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B2881 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_6472/*"FORTIFICATION_GET_POINT_TEXT"*/);
    sub_B52984(&StringLiteral_11707/*"SELECT_CANNOT"*/);
    byte_42B2881 = 1;
  }
  if ( item )
  {
    if ( item->fields.isCanNotSelect && item->fields.isHeroineSvt )
    {
      statusLabel = this->fields.statusLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      maskObject = LocalizationManager__Get((System_String_o *)StringLiteral_11707/*"SELECT_CANNOT"*/, 0LL);
      if ( statusLabel )
      {
        UILabel__set_text(statusLabel, maskObject, 0LL);
        maskObject = (System_String_o *)this->fields.statusLabel;
        if ( maskObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
          maskObject = (System_String_o *)this->fields.maskObject;
          if ( maskObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 1, 0LL);
            maskObject = (System_String_o *)this->fields.getPointLabel;
            if ( maskObject )
            {
              maskObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)maskObject,
                                                0LL);
              if ( maskObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_24:
      sub_B52A5C(maskObject, item);
    }
    maskObject = (System_String_o *)this->fields.maskObject;
    if ( !maskObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, item->fields.isCanNotSelect, 0LL);
    getPointLabel = this->fields.getPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FORTIFICATION_GET_POINT_TEXT"*/, 0LL);
    userServantEntity = item->fields.userServantEntity;
    eventId = item->fields.eventId;
    v12 = v9;
    Point = EventFortificationDataLogic__CalculationGetPoint(userServantEntity, eventId, v13);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Point);
    maskObject = System_String__Format(v12, v14, 0LL);
    if ( !getPointLabel )
      goto LABEL_24;
    UILabel__set_text(getPointLabel, maskObject, 0LL);
    maskObject = (System_String_o *)this->fields.getPointLabel;
    if ( !maskObject )
      goto LABEL_24;
    maskObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskObject, 0LL);
    if ( !maskObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewItemDraw__SetItem(
        EventFortificationListViewItemDraw_o *this,
        EventFortificationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Component_o *lockImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v9; // x1
  int32_t eventId; // w21
  UISprite_o *guestSprite; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *touchPress; // x21
  UnityEngine_Object_o *fortificationInfoRootObj; // x20
  float v18; // s0
  float v19; // s2
  float v20; // s8
  float v21; // s9
  float fortificationInfoRootObjOffsetY; // s10
  UnityEngine_Object_o *getPointLabelRootObj; // x20
  float v24; // s0
  float v25; // s2
  float v26; // s8
  float v27; // s9
  float getPointLabelOffsetY; // s10
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2880 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_19491/*"icon_guest"*/);
    byte_42B2880 = 1;
  }
  if ( !item || !mode )
    return;
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_67;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)lockImg,
    item->fields.isSwapLock != item->fields.isLock,
    0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.choiceImg;
  if ( !lockImg )
    goto LABEL_67;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)lockImg,
    item->fields.isSwapChoice != item->fields.isChoice,
    0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.maskObject;
  if ( !lockImg )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !lockImg )
    goto LABEL_67;
  ServantFaceIconComponent__Set_30396076(
    (ServantFaceIconComponent_o *)lockImg,
    item->fields.userServantEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.partyIcon;
  if ( !lockImg )
    goto LABEL_67;
  if ( item->fields.isParty )
    FlashingIconComponent__Set((FlashingIconComponent_o *)lockImg, 0LL);
  else
    FlashingIconComponent__Clear((FlashingIconComponent_o *)lockImg, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !lockImg )
    goto LABEL_67;
  gameObject = UnityEngine_Component__get_gameObject(lockImg, 0LL);
  lockImg = (UnityEngine_Component_o *)EventFortificationListViewItem__get_IsBaseSvt(item, v9);
  if ( !gameObject )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)lockImg & 1, 0LL);
  eventId = item->fields.eventId;
  guestSprite = this->fields.guestSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28377220(eventId, guestSprite, (System_String_o *)StringLiteral_19491/*"icon_guest"*/, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.guestSprite;
  if ( !lockImg )
    goto LABEL_67;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, item->fields.isNpc, 0LL);
  if ( item->fields.isNpc )
  {
    userServantEntity = item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_67;
    lockImg = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !lockImg )
      goto LABEL_67;
    UIIconLabel__Set_41786400((UIIconLabel_o *)lockImg, 2, userServantEntity->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.pushImg;
    if ( !lockImg )
      goto LABEL_67;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
    if ( !lockImg )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, item->fields.isPush, 0LL);
  }
  EventFortificationListViewItemDraw__SetFortificationPoint(this, item, v14);
  EventFortificationListViewItemDraw__SetFatigueMask(this, item, v15);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
  {
    if ( item->fields.isNpc )
      goto LABEL_44;
    goto LABEL_40;
  }
  if ( !item->fields.isNpc )
  {
LABEL_40:
    if ( item->fields.svtTypeSetInMaster )
      goto LABEL_44;
  }
  lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !lockImg )
    goto LABEL_67;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
LABEL_44:
  fortificationInfoRootObj = (UnityEngine_Object_o *)this->fields.fortificationInfoRootObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fortificationInfoRootObj, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !lockImg )
      goto LABEL_67;
    v20 = v18;
    v21 = v19;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
    if ( !lockImg )
      goto LABEL_67;
    fortificationInfoRootObjOffsetY = 0.0;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)lockImg, 0LL) )
      fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
    lockImg = (UnityEngine_Component_o *)this->fields.fortificationInfoRootObj;
    if ( !lockImg )
      goto LABEL_67;
    lockImg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)lockImg, 0LL);
    if ( !lockImg )
      goto LABEL_67;
    v29.fields.x = v20;
    v29.fields.y = fortificationInfoRootObjOffsetY;
    v29.fields.z = v21;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v29, 0LL);
  }
  getPointLabelRootObj = (UnityEngine_Object_o *)this->fields.getPointLabelRootObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(getPointLabelRootObj, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( lockImg )
    {
      v26 = v24;
      v27 = v25;
      lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
      if ( lockImg )
      {
        getPointLabelOffsetY = 0.0;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)lockImg, 0LL) )
          getPointLabelOffsetY = this->fields.getPointLabelOffsetY;
        lockImg = (UnityEngine_Component_o *)this->fields.getPointLabelRootObj;
        if ( lockImg )
        {
          lockImg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)lockImg,
                                                 0LL);
          if ( lockImg )
          {
            v30.fields.x = v26;
            v30.fields.y = getPointLabelOffsetY;
            v30.fields.z = v27;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v30, 0LL);
            return;
          }
        }
      }
    }
LABEL_67:
    sub_B52A5C(lockImg, item);
  }
}