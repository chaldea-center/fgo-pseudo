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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E9F07 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1122/*"1B2FA5"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1117/*"11814B"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1638/*"A51B1B"*/, v12, v13, v14);
    byte_42E9F07 = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_1638/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1638/*"A51B1B"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_1122/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1122/*"1B2FA5"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_1117/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1117/*"11814B"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v23, v24, v25, v26, v27, v28, v29);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UILabel_o *teamNameLabel; // x0
  UILabel_o *appointmentLabel; // x21
  int32_t eventId; // w21
  UISprite_o *lineUpeer; // x22
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_42E9F06 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_6492/*"FORTIFICATION_APPOINTMENT"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16909/*"bg_white"*/, v12, v13, v14);
    byte_42E9F06 = 1;
  }
  *(_QWORD *)&v19.fields.r = 0LL;
  *(_QWORD *)&v19.fields.b = 0LL;
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
      teamNameLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6492/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
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
                AtlasManager__SetEventUI_31190412(eventId, lineUpeer, (System_String_o *)StringLiteral_16909/*"bg_white"*/, 0LL);
                AtlasManager__SetEventUI_31190412(
                  item->fields.eventId,
                  this->fields.lineBottom,
                  (System_String_o *)StringLiteral_16909/*"bg_white"*/,
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
                        AtlasManager__SetEventUI_31190412(
                          item->fields.eventId,
                          this->fields.fortificationMaskSprite,
                          (System_String_o *)StringLiteral_16909/*"bg_white"*/,
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
                                    &v19,
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
                              UIWidget__set_color((UIWidget_o *)teamNameLabel, v19, 0LL);
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
    sub_B5D69C(teamNameLabel, item);
  }
}


void __fastcall EventFortificationListViewItemDraw__SetFortificationPoint(
        EventFortificationListViewItemDraw_o *this,
        EventFortificationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UILabel_o *statusLabel; // x20
  System_String_o *maskObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *getPointLabel; // x21
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  int32_t AddPoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9F05 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_6508/*"FORTIFICATION_GET_POINT_TEXT"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v12, v13, v14);
    byte_42E9F05 = 1;
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
      maskObject = LocalizationManager__Get((System_String_o *)StringLiteral_11753/*"SELECT_CANNOT"*/, 0LL);
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
      sub_B5D69C(maskObject, item);
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
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6508/*"FORTIFICATION_GET_POINT_TEXT"*/, 0LL);
    AddPoint = EventFortificationListViewItem__get_AddPoint(item, 0LL);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &AddPoint);
    maskObject = System_String__Format(v19, v20, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Component_o *lockImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_GameObject_o *v16; // x21
  int32_t eventId; // w21
  UISprite_o *guestSprite; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *touchPress; // x21
  UnityEngine_Object_o *fortificationInfoRootObj; // x20
  float v25; // s0
  float v26; // s2
  float v27; // s8
  float v28; // s9
  float fortificationInfoRootObjOffsetY; // s10
  UnityEngine_Object_o *getPointLabelRootObj; // x20
  float v31; // s0
  float v32; // s2
  float v33; // s8
  float v34; // s9
  float getPointLabelOffsetY; // s10
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9F04 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19589/*"icon_guest"*/, v10, v11, v12);
    byte_42E9F04 = 1;
  }
  if ( !item || !mode )
    return;
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_67;
  gameObject = UnityEngine_Component__get_gameObject(lockImg, 0LL);
  lockImg = (UnityEngine_Component_o *)EventFortificationListViewItem__get_IsDispLock(item, 0LL);
  if ( !gameObject )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)lockImg & 1, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.choiceImg;
  if ( !lockImg )
    goto LABEL_67;
  v15 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
  lockImg = (UnityEngine_Component_o *)EventFortificationListViewItem__get_IsDispChoice(item, 0LL);
  if ( !v15 )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(v15, (unsigned __int8)lockImg & 1, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.maskObject;
  if ( !lockImg )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.servantIcon;
  if ( !lockImg )
    goto LABEL_67;
  ServantFaceIconComponent__Set_30775392(
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
  v16 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
  lockImg = (UnityEngine_Component_o *)EventFortificationListViewItem__get_IsBaseSvt(item, 0LL);
  if ( !v16 )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(v16, (unsigned __int8)lockImg & 1, 0LL);
  eventId = item->fields.eventId;
  guestSprite = this->fields.guestSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, guestSprite, (System_String_o *)StringLiteral_19589/*"icon_guest"*/, 0LL);
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
    UIIconLabel__Set_41886452((UIIconLabel_o *)lockImg, 2, userServantEntity->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
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
  EventFortificationListViewItemDraw__SetFortificationPoint(this, item, v21);
  EventFortificationListViewItemDraw__SetFatigueMask(this, item, v22);
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
    *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !lockImg )
      goto LABEL_67;
    v27 = v25;
    v28 = v26;
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
    v36.fields.x = v27;
    v36.fields.y = fortificationInfoRootObjOffsetY;
    v36.fields.z = v28;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v36, 0LL);
  }
  getPointLabelRootObj = (UnityEngine_Object_o *)this->fields.getPointLabelRootObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(getPointLabelRootObj, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( lockImg )
    {
      v33 = v31;
      v34 = v32;
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
            v37.fields.x = v33;
            v37.fields.y = getPointLabelOffsetY;
            v37.fields.z = v34;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)lockImg, v37, 0LL);
            return;
          }
        }
      }
    }
LABEL_67:
    sub_B5D69C(lockImg, item);
  }
}