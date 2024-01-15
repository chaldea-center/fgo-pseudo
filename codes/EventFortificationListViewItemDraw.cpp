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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FC6BE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1100/*"1B2FA5"*/, method);
    sub_B16FFC(&StringLiteral_1095/*"11814B"*/, v9);
    sub_B16FFC(&StringLiteral_1615/*"A51B1B"*/, v10);
    byte_40FC6BE = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_1615/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1615/*"A51B1B"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_1100/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1100/*"1B2FA5"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_1095/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1095/*"11814B"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v19, v20, v21, v22, v23, v24, v25);
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
  UILabel_o *detailNameLabel; // x0
  UILabel_o *appointmentLabel; // x21
  System_String_o *v11; // x0
  UILabel_o *v12; // x0
  UILabel_o *v13; // x0
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  int32_t eventId; // w21
  UISprite_o *lineUpeer; // x22
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Component_o *lineBottom; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *fortificationMaskSprite; // x0
  UnityEngine_GameObject_o *v27; // x0
  const MethodInfo *v28; // x6
  UIWidget_o *v29; // x0
  UnityEngine_Color_o v30; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_40FC6BD & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6395/*"FORTIFICATION_APPOINTMENT"*/, v6);
    sub_B16FFC(&StringLiteral_16639/*"bg_white"*/, v7);
    byte_40FC6BD = 1;
  }
  *(_QWORD *)&v30.fields.r = 0LL;
  *(_QWORD *)&v30.fields.b = 0LL;
  if ( item )
  {
    if ( item->fields.isAppointment )
    {
      teamNameLabel = this->fields.teamNameLabel;
      if ( !teamNameLabel )
        goto LABEL_33;
      UILabel__set_text(teamNameLabel, item->fields.myTeamName, 0LL);
      detailNameLabel = this->fields.detailNameLabel;
      if ( !detailNameLabel )
        goto LABEL_33;
      UILabel__set_text(detailNameLabel, item->fields.myDetailName, 0LL);
      appointmentLabel = this->fields.appointmentLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6395/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
      if ( !appointmentLabel )
        goto LABEL_33;
      UILabel__set_text(appointmentLabel, v11, 0LL);
      v12 = this->fields.teamNameLabel;
      if ( !v12 )
        goto LABEL_33;
      UILabel__UpdateCondensedScaleComponent(v12, 0LL);
      v13 = this->fields.detailNameLabel;
      if ( !v13 )
        goto LABEL_33;
      UILabel__UpdateCondensedScaleComponent(v13, 0LL);
    }
    v14 = (UnityEngine_Component_o *)this->fields.teamNameLabel;
    if ( v14 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, item->fields.isAppointment, 0LL);
        v16 = (UnityEngine_Component_o *)this->fields.detailNameLabel;
        if ( v16 )
        {
          v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
          if ( v17 )
          {
            UnityEngine_GameObject__SetActive(v17, item->fields.isAppointment, 0LL);
            v18 = (UnityEngine_Component_o *)this->fields.appointmentLabel;
            if ( v18 )
            {
              v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
              if ( v19 )
              {
                UnityEngine_GameObject__SetActive(v19, item->fields.isAppointment, 0LL);
                eventId = item->fields.eventId;
                lineUpeer = this->fields.lineUpeer;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventUI_28584872(eventId, lineUpeer, (System_String_o *)StringLiteral_16639/*"bg_white"*/, 0LL);
                AtlasManager__SetEventUI_28584872(
                  item->fields.eventId,
                  this->fields.lineBottom,
                  (System_String_o *)StringLiteral_16639/*"bg_white"*/,
                  0LL);
                v22 = (UnityEngine_Component_o *)this->fields.lineUpeer;
                if ( v22 )
                {
                  v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
                  if ( v23 )
                  {
                    UnityEngine_GameObject__SetActive(v23, item->fields.isAppointment, 0LL);
                    lineBottom = (UnityEngine_Component_o *)this->fields.lineBottom;
                    if ( lineBottom )
                    {
                      v25 = UnityEngine_Component__get_gameObject(lineBottom, 0LL);
                      if ( v25 )
                      {
                        UnityEngine_GameObject__SetActive(v25, item->fields.isAppointment, 0LL);
                        AtlasManager__SetEventUI_28584872(
                          item->fields.eventId,
                          this->fields.fortificationMaskSprite,
                          (System_String_o *)StringLiteral_16639/*"bg_white"*/,
                          0LL);
                        fortificationMaskSprite = (UnityEngine_Component_o *)this->fields.fortificationMaskSprite;
                        if ( fortificationMaskSprite )
                        {
                          v27 = UnityEngine_Component__get_gameObject(fortificationMaskSprite, 0LL);
                          if ( v27 )
                          {
                            UnityEngine_GameObject__SetActive(v27, item->fields.isAppointment, 0LL);
                            if ( !EventFortificationDataLogic__TryGetColorByWorkType(
                                    &v30,
                                    this->fields.colorCodeMilitsry,
                                    this->fields.colorCodeInternal,
                                    this->fields.colorCodeFarmming,
                                    this->fields.colorCodeA,
                                    item->fields.myWorkType,
                                    v28) )
                              return;
                            v29 = (UIWidget_o *)this->fields.fortificationMaskSprite;
                            if ( v29 )
                            {
                              UIWidget__set_color(v29, v30, 0LL);
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
    sub_B170D4();
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
  System_String_o *v9; // x0
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *maskObject; // x0
  UnityEngine_Component_o *getPointLabel; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UILabel_o *v16; // x21
  System_String_o *v17; // x0
  UserServantEntity_o *userServantEntity; // x8
  int32_t eventId; // w1
  System_String_o *v20; // x20
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  int32_t Point; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC6BC & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6411/*"FORTIFICATION_GET_POINT_TEXT"*/, v6);
    sub_B16FFC(&StringLiteral_11584/*"SELECT_CANNOT"*/, v7);
    byte_40FC6BC = 1;
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
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11584/*"SELECT_CANNOT"*/, 0LL);
      if ( statusLabel )
      {
        UILabel__set_text(statusLabel, v9, 0LL);
        v10 = (UnityEngine_Component_o *)this->fields.statusLabel;
        if ( v10 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
          maskObject = this->fields.maskObject;
          if ( maskObject )
          {
            UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
            getPointLabel = (UnityEngine_Component_o *)this->fields.getPointLabel;
            if ( getPointLabel )
            {
              v14 = UnityEngine_Component__get_gameObject(getPointLabel, 0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__SetActive(v14, 0, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_24:
      sub_B170D4();
    }
    v15 = this->fields.maskObject;
    if ( !v15 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(v15, item->fields.isCanNotSelect, 0LL);
    v16 = this->fields.getPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6411/*"FORTIFICATION_GET_POINT_TEXT"*/, 0LL);
    userServantEntity = item->fields.userServantEntity;
    eventId = item->fields.eventId;
    v20 = v17;
    Point = EventFortificationDataLogic__CalculationGetPoint(userServantEntity, eventId, v21);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Point);
    v23 = System_String__Format(v20, v22, 0LL);
    if ( !v16 )
      goto LABEL_24;
    UILabel__set_text(v16, v23, 0LL);
    v24 = (UnityEngine_Component_o *)this->fields.getPointLabel;
    if ( !v24 )
      goto LABEL_24;
    v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
    if ( !v25 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(v25, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewItemDraw__SetItem(
        EventFortificationListViewItemDraw_o *this,
        EventFortificationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *lockImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *choiceImg; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *maskObject; // x0
  ServantFaceIconComponent_o *servantIcon; // x0
  FlashingIconComponent_o *partyIcon; // x0
  UnityEngine_Component_o *removeImg; // x0
  UnityEngine_GameObject_o *v17; // x21
  const MethodInfo *v18; // x1
  bool IsBaseSvt; // w0
  int32_t eventId; // w21
  UISprite_o *guestSprite; // x22
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  UIIconLabel_o *iconLabel; // x0
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v27; // x2
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *touchPress; // x21
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Object_o *fortificationInfoRootObj; // x20
  float v35; // s0
  float v36; // s2
  UnityEngine_Component_o *v37; // x0
  float v38; // s8
  float v39; // s9
  UnityEngine_GameObject_o *v40; // x0
  float fortificationInfoRootObjOffsetY; // s10
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *getPointLabelRootObj; // x20
  float v45; // s0
  float v46; // s2
  UnityEngine_Component_o *v47; // x0
  float v48; // s8
  float v49; // s9
  UnityEngine_GameObject_o *v50; // x0
  float getPointLabelOffsetY; // s10
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Transform_o *v53; // x0
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC6BB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19271/*"icon_guest"*/, v8);
    byte_40FC6BB = 1;
  }
  if ( !item || !mode )
    return;
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_67;
  gameObject = UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !gameObject )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(gameObject, item->fields.isSwapLock != item->fields.isLock, 0LL);
  choiceImg = (UnityEngine_Component_o *)this->fields.choiceImg;
  if ( !choiceImg )
    goto LABEL_67;
  v12 = UnityEngine_Component__get_gameObject(choiceImg, 0LL);
  if ( !v12 )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(v12, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
  servantIcon = this->fields.servantIcon;
  if ( !servantIcon )
    goto LABEL_67;
  ServantFaceIconComponent__Set_30631556(
    servantIcon,
    item->fields.userServantEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0LL);
  partyIcon = this->fields.partyIcon;
  if ( !partyIcon )
    goto LABEL_67;
  if ( item->fields.isParty )
    FlashingIconComponent__Set(partyIcon, 0LL);
  else
    FlashingIconComponent__Clear(partyIcon, 0LL);
  removeImg = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !removeImg )
    goto LABEL_67;
  v17 = UnityEngine_Component__get_gameObject(removeImg, 0LL);
  IsBaseSvt = EventFortificationListViewItem__get_IsBaseSvt(item, v18);
  if ( !v17 )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(v17, IsBaseSvt, 0LL);
  eventId = item->fields.eventId;
  guestSprite = this->fields.guestSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, guestSprite, (System_String_o *)StringLiteral_19271/*"icon_guest"*/, 0LL);
  v22 = (UnityEngine_Component_o *)this->fields.guestSprite;
  if ( !v22 )
    goto LABEL_67;
  v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
  if ( !v23 )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(v23, item->fields.isNpc, 0LL);
  if ( item->fields.isNpc )
  {
    userServantEntity = item->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_67;
    iconLabel = this->fields.iconLabel;
    if ( !iconLabel )
      goto LABEL_67;
    UIIconLabel__Set_40377052(iconLabel, 2, userServantEntity->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
  {
    v28 = (UnityEngine_Component_o *)this->fields.pushImg;
    if ( !v28 )
      goto LABEL_67;
    v29 = UnityEngine_Component__get_gameObject(v28, 0LL);
    if ( !v29 )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive(v29, item->fields.isPush, 0LL);
  }
  EventFortificationListViewItemDraw__SetFortificationPoint(this, item, v27);
  EventFortificationListViewItemDraw__SetFatigueMask(this, item, v30);
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
  v32 = (UnityEngine_Component_o *)this->fields.removeImg;
  if ( !v32 )
    goto LABEL_67;
  v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
  if ( !v33 )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive(v33, 0, 0LL);
LABEL_44:
  fortificationInfoRootObj = (UnityEngine_Object_o *)this->fields.fortificationInfoRootObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fortificationInfoRootObj, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_zero(0LL);
    v37 = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !v37 )
      goto LABEL_67;
    v38 = v35;
    v39 = v36;
    v40 = UnityEngine_Component__get_gameObject(v37, 0LL);
    if ( !v40 )
      goto LABEL_67;
    fortificationInfoRootObjOffsetY = 0.0;
    if ( UnityEngine_GameObject__get_activeSelf(v40, 0LL) )
      fortificationInfoRootObjOffsetY = this->fields.fortificationInfoRootObjOffsetY;
    v42 = this->fields.fortificationInfoRootObj;
    if ( !v42 )
      goto LABEL_67;
    transform = UnityEngine_GameObject__get_transform(v42, 0LL);
    if ( !transform )
      goto LABEL_67;
    v54.fields.x = v38;
    v54.fields.y = fortificationInfoRootObjOffsetY;
    v54.fields.z = v39;
    UnityEngine_Transform__set_localPosition(transform, v54, 0LL);
  }
  getPointLabelRootObj = (UnityEngine_Object_o *)this->fields.getPointLabelRootObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(getPointLabelRootObj, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_zero(0LL);
    v47 = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( v47 )
    {
      v48 = v45;
      v49 = v46;
      v50 = UnityEngine_Component__get_gameObject(v47, 0LL);
      if ( v50 )
      {
        getPointLabelOffsetY = 0.0;
        if ( UnityEngine_GameObject__get_activeSelf(v50, 0LL) )
          getPointLabelOffsetY = this->fields.getPointLabelOffsetY;
        v52 = this->fields.getPointLabelRootObj;
        if ( v52 )
        {
          v53 = UnityEngine_GameObject__get_transform(v52, 0LL);
          if ( v53 )
          {
            v55.fields.x = v48;
            v55.fields.y = getPointLabelOffsetY;
            v55.fields.z = v49;
            UnityEngine_Transform__set_localPosition(v53, v55, 0LL);
            return;
          }
        }
      }
    }
LABEL_67:
    sub_B170D4();
  }
}