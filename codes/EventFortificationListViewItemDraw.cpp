void __fastcall EventFortificationListViewItemDraw___ctor(
        EventFortificationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0280D & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1412/*"1B2FA5"*/, method);
    sub_1B64A00(&StringLiteral_1407/*"11814B"*/, v5);
    sub_1B64A00(&StringLiteral_1966/*"A51B1B"*/, v6);
    byte_4A0280D = 1;
  }
  v7 = StringLiteral_1966/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1966/*"A51B1B"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeMilitsry, v7, v2, v3);
  v8 = StringLiteral_1412/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1412/*"1B2FA5"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeInternal, v8, v9, v10);
  v11 = StringLiteral_1407/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1407/*"11814B"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeFarmming, v11, v12, v13);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *teamNameLabel; // x0
  UILabel_o *appointmentLabel; // x21
  int32_t eventId; // w21
  UISprite_o *lineUpeer; // x22
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4A0280C & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, item);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_6419/*"FORTIFICATION_APPOINTMENT"*/, v6);
    sub_1B64A00(&StringLiteral_17107/*"bg_white"*/, v7);
    byte_4A0280C = 1;
  }
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  if ( item )
  {
    if ( item->fields.isAppointment )
    {
      teamNameLabel = this->fields.teamNameLabel;
      if ( !teamNameLabel )
        goto LABEL_31;
      UILabel__set_text(teamNameLabel, item->fields.myTeamName, 0LL);
      teamNameLabel = this->fields.detailNameLabel;
      if ( !teamNameLabel )
        goto LABEL_31;
      UILabel__set_text(teamNameLabel, item->fields.myDetailName, 0LL);
      appointmentLabel = this->fields.appointmentLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      teamNameLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6419/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
      if ( !appointmentLabel )
        goto LABEL_31;
      UILabel__set_text(appointmentLabel, (System_String_o *)teamNameLabel, 0LL);
      teamNameLabel = this->fields.teamNameLabel;
      if ( !teamNameLabel )
        goto LABEL_31;
      UILabel__UpdateCondensedScaleComponent(teamNameLabel, 0LL);
      teamNameLabel = this->fields.detailNameLabel;
      if ( !teamNameLabel )
        goto LABEL_31;
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
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEventUI_37549424(eventId, lineUpeer, (System_String_o *)StringLiteral_17107/*"bg_white"*/, 0LL);
                AtlasManager__SetEventUI_37549424(
                  item->fields.eventId,
                  this->fields.lineBottom,
                  (System_String_o *)StringLiteral_17107/*"bg_white"*/,
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
                        AtlasManager__SetEventUI_37549424(
                          item->fields.eventId,
                          this->fields.fortificationMaskSprite,
                          (System_String_o *)StringLiteral_17107/*"bg_white"*/,
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
                                    &v12,
                                    this->fields.colorCodeMilitsry,
                                    this->fields.colorCodeInternal,
                                    this->fields.colorCodeFarmming,
                                    this->fields.colorCodeA,
                                    item->fields.myWorkType,
                                    0LL) )
                              return;
                            teamNameLabel = (UILabel_o *)this->fields.fortificationMaskSprite;
                            if ( teamNameLabel )
                            {
                              UIWidget__set_color((UIWidget_o *)teamNameLabel, v12, 0LL);
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
    sub_1B64C5C(teamNameLabel, item);
  }
}


void __fastcall EventFortificationListViewItemDraw__SetFortificationPoint(
        EventFortificationListViewItemDraw_o *this,
        EventFortificationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *statusLabel; // x20
  System_String_o *maskObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *getPointLabel; // x21
  System_String_o *v12; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  int32_t AddPoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A0280B & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, item);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_6435/*"FORTIFICATION_GET_POINT_TEXT"*/, v6);
    sub_1B64A00(&StringLiteral_11445/*"SELECT_CANNOT"*/, v7);
    byte_4A0280B = 1;
  }
  if ( item )
  {
    if ( item->fields.isCanNotSelect && item->fields.isHeroineSvt )
    {
      statusLabel = this->fields.statusLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      maskObject = LocalizationManager__Get((System_String_o *)StringLiteral_11445/*"SELECT_CANNOT"*/, 0LL);
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
LABEL_22:
      sub_1B64C5C(maskObject, item);
    }
    maskObject = (System_String_o *)this->fields.maskObject;
    if ( !maskObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, item->fields.isCanNotSelect, 0LL);
    getPointLabel = this->fields.getPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6435/*"FORTIFICATION_GET_POINT_TEXT"*/, 0LL);
    AddPoint = EventFortificationListViewItem__get_AddPoint(item, 0LL);
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &AddPoint, v13, v14, v15);
    maskObject = System_String__Format(v12, v16, 0LL);
    if ( !getPointLabel )
      goto LABEL_22;
    UILabel__set_text(getPointLabel, maskObject, 0LL);
    maskObject = (System_String_o *)this->fields.getPointLabel;
    if ( !maskObject )
      goto LABEL_22;
    maskObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskObject, 0LL);
    if ( !maskObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 1, 0LL);
  }
}


void __fastcall EventFortificationListViewItemDraw__SetItem(
        EventFortificationListViewItemDraw_o *this,
        EventFortificationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *lockImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_GameObject_o *v12; // x21
  int32_t eventId; // w21
  UISprite_o *guestSprite; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *touchPress; // x21
  UnityEngine_Object_o *fortificationInfoRootObj; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s8
  bool activeSelf; // w0
  float fortificationInfoRootObjOffsetY; // s0
  UnityEngine_Object_o *getPointLabelRootObj; // x20
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  float v28; // s9
  float v29; // s8
  bool v30; // w0
  float getPointLabelOffsetY; // s0
  float v32; // [xsp+28h] [xbp-28h]
  float value; // [xsp+2Ch] [xbp-24h]
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0280A & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, item);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_20078/*"icon_guest"*/, v8);
    byte_4A0280A = 1;
  }
  if ( !item || !mode )
    return;
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_66;
  gameObject = UnityEngine_Component__get_gameObject(lockImg, 0LL);
  lockImg = (UnityEngine_Component_o *)EventFortificationListViewItem__get_IsDispLock(item, 0LL);
  if ( !gameObject )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)lockImg & 1, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.choiceImg;
  if ( !lockImg )
    goto LABEL_66;
  v11 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
  lockImg = (UnityEngine_Component_o *)EventFortificationListViewItem__get_IsDispChoice(item, 0LL);
  if ( !v11 )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(v11, (unsigned __int8)lockImg & 1, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.maskObject;
  if ( !lockImg )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !lockImg )
    goto LABEL_66;
  ServantFaceIconComponent__Set_37909632(
    (ServantFaceIconComponent_o *)lockImg,
    item->fields.userServantEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.partyIcon;
  if ( !lockImg )
    goto LABEL_66;
  if ( item->fields.isParty )
    FlashingIconComponent__Set((FlashingIconComponent_o *)lockImg, 0LL);
  else
    FlashingIconComponent__Clear((FlashingIconComponent_o *)lockImg, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !lockImg )
    goto LABEL_66;
  v12 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
  lockImg = (UnityEngine_Component_o *)EventFortificationListViewItem__get_IsBaseSvt(item, 0LL);
  if ( !v12 )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(v12, (unsigned __int8)lockImg & 1, 0LL);
  eventId = item->fields.eventId;
  guestSprite = this->fields.guestSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37549424(eventId, guestSprite, (System_String_o *)StringLiteral_20078/*"icon_guest"*/, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.guestSprite;
  if ( !lockImg )
    goto LABEL_66;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, item->fields.isNpc, 0LL);
  if ( item->fields.isNpc )
  {
    userServantEntity = item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_66;
    lockImg = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !lockImg )
      goto LABEL_66;
    UIIconLabel__Set_37925880((UIIconLabel_o *)lockImg, 2, userServantEntity->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.pushImg;
    if ( !lockImg )
      goto LABEL_66;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
    if ( !lockImg )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, item->fields.isPush, 0LL);
  }
  EventFortificationListViewItemDraw__SetFortificationPoint(this, item, v17);
  EventFortificationListViewItemDraw__SetFatigueMask(this, item, v18);
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
  {
    if ( item->fields.isNpc )
      goto LABEL_41;
LABEL_37:
    if ( item->fields.svtTypeSetInMaster )
      goto LABEL_41;
    goto LABEL_38;
  }
  if ( !item->fields.isNpc )
    goto LABEL_37;
LABEL_38:
  lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !lockImg )
    goto LABEL_66;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
LABEL_41:
  fortificationInfoRootObj = (UnityEngine_Object_o *)this->fields.fortificationInfoRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fortificationInfoRootObj, 0LL, 0LL) )
  {
    if ( !byte_49F9821 )
    {
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, item);
      byte_49F9821 = 1;
    }
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !lockImg )
      goto LABEL_66;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
    if ( !lockImg )
      goto LABEL_66;
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)lockImg, 0LL);
    fortificationInfoRootObjOffsetY = 0.0;
    if ( activeSelf )
      fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
    value = fortificationInfoRootObjOffsetY;
    lockImg = (UnityEngine_Component_o *)this->fields.fortificationInfoRootObj;
    if ( !lockImg )
      goto LABEL_66;
    lockImg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)lockImg, 0LL);
    if ( !lockImg )
      goto LABEL_66;
    v34.fields.y = value;
    v34.fields.x = x;
    v34.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v34, 0LL);
  }
  getPointLabelRootObj = (UnityEngine_Object_o *)this->fields.getPointLabelRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(getPointLabelRootObj, 0LL, 0LL) )
  {
    if ( !byte_49F9821 )
    {
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, item);
      byte_49F9821 = 1;
    }
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( lockImg )
    {
      v27 = UnityEngine_Vector3_TypeInfo->static_fields;
      v28 = v27->zeroVector.fields.x;
      v29 = v27->zeroVector.fields.z;
      lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
      if ( lockImg )
      {
        v30 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)lockImg, 0LL);
        getPointLabelOffsetY = 0.0;
        if ( v30 )
          getPointLabelOffsetY = this->fields.getPointLabelOffsetY;
        v32 = getPointLabelOffsetY;
        lockImg = (UnityEngine_Component_o *)this->fields.getPointLabelRootObj;
        if ( lockImg )
        {
          lockImg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)lockImg,
                                                 0LL);
          if ( lockImg )
          {
            v35.fields.y = v32;
            v35.fields.x = v28;
            v35.fields.z = v29;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v35, 0LL);
            return;
          }
        }
      }
    }
LABEL_66:
    sub_1B64C5C(lockImg, item);
  }
}