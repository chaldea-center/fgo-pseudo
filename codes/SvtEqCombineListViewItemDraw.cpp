void __fastcall SvtEqCombineListViewItemDraw___ctor(SvtEqCombineListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewItemDraw__SetInput(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t type; // w8
  bool CanNotSelect; // w8
  UnityEngine_Object_o *baseButton; // x21
  const MethodInfo *v13; // x2
  struct UICommonButton_o *v14; // x0
  struct UICommonButton_o *v15; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *maskLabel; // x21
  __int64 *v19; // x8
  struct UICommonButton_o *v20; // x0
  struct UICommonButton_o *v21; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Object_o *v24; // x21
  struct UICommonButton_o *v25; // x0
  struct UICommonButton_o *v26; // x0
  UnityEngine_Component_o *statusTextLabel; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x1
  UILabel_o *v33; // x0
  struct UICommonButton_o *v34; // x0
  struct UICommonButton_o *v35; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0

  if ( (byte_40FD617 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_9286, v7);
    sub_B16FFC(&StringLiteral_9287, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40FD617 = 1;
  }
  if ( !item )
    goto LABEL_9;
  type = item->fields.type;
  if ( type == 1 )
  {
    CanNotSelect = SvtEqCombineListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item);
    goto LABEL_12;
  }
  if ( type )
  {
LABEL_9:
    CanNotSelect = 0;
    goto LABEL_12;
  }
  CanNotSelect = item->fields.isLvMax && item->fields.isLimitCntMax || item->fields.isSvtEqMaterial;
LABEL_12:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( CanNotSelect )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v14 = this->fields.baseButton;
      if ( !v14 )
        goto LABEL_71;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._5_set_isEnabled.method)(
        v14,
        1LL,
        v14->klass->vtable._6_OnInit.methodPtr);
      v15 = this->fields.baseButton;
      if ( !v15 )
        goto LABEL_71;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v15->klass->vtable._14_SetState.method)(
        v15,
        0LL,
        1LL,
        v15->klass->vtable._15_OnPress.methodPtr);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_71;
      gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !gameObject )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      if ( !item )
        goto LABEL_71;
      if ( item->fields.isMaxNextLv
        && item->fields.isSwapLock == item->fields.isLock
        && item->fields.isSwapChoice == item->fields.isChoice
        && !item->fields.isNotSelection )
      {
        maskLabel = this->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_9287;
LABEL_55:
        v31 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
        if ( maskLabel )
        {
          v32 = v31;
          v33 = maskLabel;
LABEL_69:
          UILabel__set_text(v33, v32, 0LL);
          goto LABEL_70;
        }
        goto LABEL_71;
      }
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v20 = this->fields.baseButton;
      if ( !v20 )
        goto LABEL_71;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v20->klass->vtable._5_set_isEnabled.method)(
        v20,
        1LL,
        v20->klass->vtable._6_OnInit.methodPtr);
      v21 = this->fields.baseButton;
      if ( !v21 )
        goto LABEL_71;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v21->klass->vtable._14_SetState.method)(
        v21,
        0LL,
        1LL,
        v21->klass->vtable._15_OnPress.methodPtr);
      v22 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !v22 )
        goto LABEL_71;
      v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !v23 )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive(v23, 0, 0LL);
    }
    if ( item )
    {
      v24 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( item->fields.isMaxSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
        {
          v25 = this->fields.baseButton;
          if ( !v25 )
            goto LABEL_71;
          ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v25->klass->vtable._5_set_isEnabled.method)(
            v25,
            1LL,
            v25->klass->vtable._6_OnInit.methodPtr);
          v26 = this->fields.baseButton;
          if ( !v26 )
            goto LABEL_71;
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v26->klass->vtable._14_SetState.method)(
            v26,
            0LL,
            1LL,
            v26->klass->vtable._15_OnPress.methodPtr);
          statusTextLabel = (UnityEngine_Component_o *)this->fields.statusTextLabel;
          if ( !statusTextLabel )
            goto LABEL_71;
          v28 = UnityEngine_Component__get_gameObject(statusTextLabel, 0LL);
          if ( !v28 )
            goto LABEL_71;
          UnityEngine_GameObject__SetActive(v28, 0, 0LL);
          v29 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v29 )
            goto LABEL_71;
          v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
          if ( !v30 )
            goto LABEL_71;
          UnityEngine_GameObject__SetActive(v30, 1, 0LL);
          maskLabel = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v19 = &StringLiteral_9286;
          goto LABEL_55;
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
        {
          v34 = this->fields.baseButton;
          if ( v34 )
          {
            ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v34->klass->vtable._5_set_isEnabled.method)(
              v34,
              1LL,
              v34->klass->vtable._6_OnInit.methodPtr);
            v35 = this->fields.baseButton;
            if ( v35 )
            {
              ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v35->klass->vtable._14_SetState.method)(
                v35,
                0LL,
                1LL,
                v35->klass->vtable._15_OnPress.methodPtr);
              v36 = (UnityEngine_Component_o *)this->fields.statusTextLabel;
              if ( v36 )
              {
                v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
                if ( v37 )
                {
                  UnityEngine_GameObject__SetActive(v37, 1, 0LL);
                  v38 = (UnityEngine_Component_o *)this->fields.maskSprite;
                  if ( v38 )
                  {
                    v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
                    if ( v39 )
                    {
                      UnityEngine_GameObject__SetActive(v39, 0, 0LL);
                      v33 = this->fields.maskLabel;
                      if ( v33 )
                      {
                        v32 = (System_String_o *)StringLiteral_1;
                        goto LABEL_69;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_71:
          sub_B170D4();
        }
      }
    }
  }
LABEL_70:
  SvtEqCombineListViewItemDraw__SetSelectDisp(this, item, v13);
}


void __fastcall SvtEqCombineListViewItemDraw__SetItem(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        int32_t mode,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  ServantFaceIconComponent_o *servantface; // x22
  __int128 v20; // q1
  int64_t v21; // x0
  struct UserServantEntity_o *v22; // x8
  UIIconLabel_o *subIconLabel; // x0
  __int128 v24; // q1
  int64_t v25; // x0
  IconLabelInfo_o *iconLabelInfo2; // x0
  bool IsClear; // w0
  UIIconLabel_o *v28; // x8
  struct UserServantEntity_o *v29; // x9
  UnityEngine_Component_o *lockImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  FlashingIconComponent_o *partyIcon; // x0
  UnityEngine_Component_o *removeImg; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *statusTextLabel; // x0
  UnityEngine_GameObject_o *v38; // x0
  UILabel_o *v39; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v41; // x0
  UILabel_o *maskLabel; // x0
  LimitCountIconComponent_o *limitCountIcon; // x0
  UnityEngine_Component_o *choiceImg; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *friendShipImg; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *chocolateSprite; // x0
  UnityEngine_GameObject_o *v49; // x0
  int32_t type; // w8
  LimitCountIconComponent_o *v51; // x0
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  _BOOL4 v56; // w8
  UnityEngine_Object_o *v57; // x22
  struct UICommonButton_o *v58; // x0
  struct UICommonButton_o *v59; // x0
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  struct UILabel_o *v62; // x22
  System_String_o *v63; // x0
  System_String_o *v64; // x1
  UILabel_o *v65; // x0
  struct UICommonButton_o *v66; // x0
  struct UICommonButton_o *v67; // x0
  UnityEngine_Component_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  LimitCountIconComponent_o *v72; // x0
  const MethodInfo *v73; // x2
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UILabel_o *v76; // x22
  System_String_o *v77; // x0
  UnityEngine_Component_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Component_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_Component_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  UILabel_o *v84; // x22
  System_String_o *v85; // x0
  UnityEngine_Component_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x0
  UILabel_o *v88; // x22
  System_String_o *v89; // x0
  UnityEngine_Component_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UILabel_o *v92; // x22
  System_String_o *v93; // x0
  UnityEngine_Component_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  const MethodInfo *v96; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x22
  struct UICommonButton_o *v99; // x0
  struct UICommonButton_o *v100; // x0
  UnityEngine_Component_o *v101; // x0
  UnityEngine_GameObject_o *v102; // x0
  struct UILabel_o *v103; // x22
  __int64 *v104; // x8
  struct UICommonButton_o *v105; // x0
  struct UICommonButton_o *v106; // x0
  UnityEngine_Component_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  UnityEngine_Object_o *v109; // x22
  struct UICommonButton_o *v110; // x0
  struct UICommonButton_o *v111; // x0
  UnityEngine_Component_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  UnityEngine_Component_o *v114; // x0
  UnityEngine_GameObject_o *v115; // x0
  System_String_o *v116; // x0
  System_String_o *v117; // x1
  UILabel_o *v118; // x0
  struct UICommonButton_o *v119; // x0
  struct UICommonButton_o *v120; // x0
  UnityEngine_Component_o *v121; // x0
  UnityEngine_GameObject_o *v122; // x0
  UnityEngine_Component_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_Component_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  System_String_o *v127; // x1
  UILabel_o *v128; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+50h] [xbp-50h]

  if ( (byte_40FD616 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_9286, v11);
    sub_B16FFC(&StringLiteral_9287, v12);
    sub_B16FFC(&StringLiteral_8801, v13);
    sub_B16FFC(&StringLiteral_8402, v14);
    sub_B16FFC(&StringLiteral_2972, v15);
    sub_B16FFC(&StringLiteral_1, v16);
    sub_B16FFC(&StringLiteral_8403, v17);
    byte_40FD616 = 1;
  }
  if ( item && mode )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_203;
    servantface = this->fields.servantface;
    if ( item->fields.type )
    {
      v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v131.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v131.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v129 = v131;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v129, 0LL);
      if ( !servantface )
        goto LABEL_203;
      ServantFaceIconComponent__Set_30705604(
        servantface,
        v21,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        0LL);
      v22 = item->fields.userSvtEntity;
      if ( !v22 )
        goto LABEL_203;
      subIconLabel = this->fields.subIconLabel;
      if ( !subIconLabel )
        goto LABEL_203;
      UIIconLabel__Set_40377052(subIconLabel, 36, item->fields.rarity, v22->fields.exceedCount, 0, 0LL, 0, 0, 0, 0LL);
    }
    else
    {
      v24 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v131.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v131.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v130 = v131;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v130, 0LL);
      if ( !servantface )
        goto LABEL_203;
      ServantFaceIconComponent__Set_30705604(servantface, v25, item->fields.iconLabelInfo1, 0LL, 0LL);
      iconLabelInfo2 = item->fields.iconLabelInfo2;
      if ( !iconLabelInfo2 )
        goto LABEL_203;
      IsClear = IconLabelInfo__IsClear(iconLabelInfo2, 0LL);
      v28 = this->fields.subIconLabel;
      if ( IsClear )
      {
        v29 = item->fields.userSvtEntity;
        if ( !v29 || !v28 )
          goto LABEL_203;
        UIIconLabel__Set_40377052(v28, 36, item->fields.rarity, v29->fields.exceedCount, 0, 0LL, 0, 0, 0, 0LL);
      }
      else
      {
        if ( !v28 )
          goto LABEL_203;
        UIIconLabel__Set(this->fields.subIconLabel, item->fields.iconLabelInfo2, 0LL);
      }
    }
    lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( !lockImg )
      goto LABEL_203;
    gameObject = UnityEngine_Component__get_gameObject(lockImg, 0LL);
    if ( !gameObject )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    partyIcon = this->fields.partyIcon;
    if ( !partyIcon )
      goto LABEL_203;
    FlashingIconComponent__Clear(partyIcon, 0LL);
    removeImg = (UnityEngine_Component_o *)this->fields.removeImg;
    if ( !removeImg )
      goto LABEL_203;
    v34 = UnityEngine_Component__get_gameObject(removeImg, 0LL);
    if ( !v34 )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive(v34, 0, 0LL);
    equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !equipSprite )
      goto LABEL_203;
    v36 = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
    if ( !v36 )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive(v36, 0, 0LL);
    statusTextLabel = (UnityEngine_Component_o *)this->fields.statusTextLabel;
    if ( !statusTextLabel )
      goto LABEL_203;
    v38 = UnityEngine_Component__get_gameObject(statusTextLabel, 0LL);
    if ( !v38 )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive(v38, 0, 0LL);
    v39 = this->fields.statusTextLabel;
    if ( !v39 )
      goto LABEL_203;
    UILabel__set_text(v39, (System_String_o *)StringLiteral_1, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_203;
    v41 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !v41 )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive(v41, 0, 0LL);
    maskLabel = this->fields.maskLabel;
    if ( !maskLabel )
      goto LABEL_203;
    UILabel__set_text(maskLabel, (System_String_o *)StringLiteral_1, 0LL);
    limitCountIcon = this->fields.limitCountIcon;
    if ( !limitCountIcon )
      goto LABEL_203;
    LimitCountIconComponent__Clear(limitCountIcon, 0LL);
    choiceImg = (UnityEngine_Component_o *)this->fields.choiceImg;
    if ( !choiceImg )
      goto LABEL_203;
    v45 = UnityEngine_Component__get_gameObject(choiceImg, 0LL);
    if ( !v45 )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive(v45, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
    friendShipImg = (UnityEngine_Component_o *)this->fields.friendShipImg;
    if ( !friendShipImg )
      goto LABEL_203;
    v47 = UnityEngine_Component__get_gameObject(friendShipImg, 0LL);
    if ( !v47 )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive(v47, item->fields.isFriendShipSvtEq, 0LL);
    chocolateSprite = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !chocolateSprite )
      goto LABEL_203;
    v49 = UnityEngine_Component__get_gameObject(chocolateSprite, 0LL);
    if ( !v49 )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive(v49, item->fields.isChocolateSvtEquip, 0LL);
    type = item->fields.type;
    if ( type )
    {
LABEL_91:
      if ( type != 1 )
        goto LABEL_191;
      v72 = this->fields.limitCountIcon;
      if ( !v72 )
        goto LABEL_203;
      LimitCountIconComponent__Set(v72, item->fields.currentLimitCnt, item->fields.maxLimitCnt, 0LL);
      if ( item->fields.isLimitCntTarget )
      {
        v74 = (UnityEngine_Component_o *)this->fields.statusTextLabel;
        if ( !v74 )
          goto LABEL_203;
        v75 = UnityEngine_Component__get_gameObject(v74, 0LL);
        if ( !v75 )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive(v75, 1, 0LL);
        v76 = this->fields.statusTextLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v77 = LocalizationManager__Get((System_String_o *)StringLiteral_8801, 0LL);
        if ( !v76 )
          goto LABEL_203;
        UILabel__set_text(v76, v77, 0LL);
      }
      if ( item->fields.isEquiped || item->fields.isUseSupportEquip )
      {
        v78 = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( !v78 )
          goto LABEL_203;
        v79 = UnityEngine_Component__get_gameObject(v78, 0LL);
        if ( !v79 )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive(v79, 1, 0LL);
        v80 = (UnityEngine_Component_o *)this->fields.statusTextLabel;
        if ( !v80 )
          goto LABEL_203;
        v81 = UnityEngine_Component__get_gameObject(v80, 0LL);
        if ( !v81 )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive(v81, 0, 0LL);
      }
      if ( item->fields.isSwapLock != item->fields.isLock )
      {
        v82 = (UnityEngine_Component_o *)this->fields.lockImg;
        if ( !v82 )
          goto LABEL_203;
        v83 = UnityEngine_Component__get_gameObject(v82, 0LL);
        if ( !v83 )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive(v83, 1, 0LL);
        v84 = this->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_8403, 0LL);
        if ( !v84 )
          goto LABEL_203;
        UILabel__set_text(v84, v85, 0LL);
        v86 = (UnityEngine_Component_o *)this->fields.statusTextLabel;
        if ( !v86 )
          goto LABEL_203;
        v87 = UnityEngine_Component__get_gameObject(v86, 0LL);
        if ( !v87 )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive(v87, 0, 0LL);
      }
      if ( item->fields.isNotSelection )
      {
        v88 = this->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_9286, 0LL);
        if ( !v88 )
          goto LABEL_203;
        UILabel__set_text(v88, v89, 0LL);
        v90 = (UnityEngine_Component_o *)this->fields.statusTextLabel;
        if ( !v90 )
          goto LABEL_203;
        v91 = UnityEngine_Component__get_gameObject(v90, 0LL);
        if ( !v91 )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive(v91, 0, 0LL);
      }
      if ( item->fields.isSwapChoice != item->fields.isChoice )
      {
        v92 = this->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v93 = LocalizationManager__Get((System_String_o *)StringLiteral_2972, 0LL);
        if ( !v92 )
          goto LABEL_203;
        UILabel__set_text(v92, v93, 0LL);
        v94 = (UnityEngine_Component_o *)this->fields.statusTextLabel;
        if ( !v94 )
          goto LABEL_203;
        v95 = UnityEngine_Component__get_gameObject(v94, 0LL);
        if ( !v95 )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive(v95, 0, 0LL);
      }
      SvtEqCombineListViewItemDraw__SetSelectDisp(this, item, v73);
      CanNotSelect = SvtEqCombineListViewItem__get_IsCanNotSelect(item, v96);
      baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( CanNotSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
          goto LABEL_191;
        v99 = this->fields.baseButton;
        if ( !v99 )
          goto LABEL_203;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v99->klass->vtable._5_set_isEnabled.method)(
          v99,
          1LL,
          v99->klass->vtable._6_OnInit.methodPtr);
        v100 = this->fields.baseButton;
        if ( !v100 )
          goto LABEL_203;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v100->klass->vtable._14_SetState.method)(
          v100,
          0LL,
          1LL,
          v100->klass->vtable._15_OnPress.methodPtr);
        v101 = (UnityEngine_Component_o *)this->fields.maskSprite;
        if ( !v101 )
          goto LABEL_203;
        v102 = UnityEngine_Component__get_gameObject(v101, 0LL);
        if ( !v102 )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive(v102, 1, 0LL);
        if ( !item->fields.isMaxNextLv && !item->fields.isBaseLvMax )
          goto LABEL_191;
        if ( item->fields.isSwapLock != item->fields.isLock
          || item->fields.isSwapChoice != item->fields.isChoice
          || item->fields.isNotSelection )
        {
          goto LABEL_191;
        }
        v103 = this->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v104 = &StringLiteral_9287;
        goto LABEL_176;
      }
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
      {
        v105 = this->fields.baseButton;
        if ( !v105 )
          goto LABEL_203;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v105->klass->vtable._5_set_isEnabled.method)(
          v105,
          1LL,
          v105->klass->vtable._6_OnInit.methodPtr);
        v106 = this->fields.baseButton;
        if ( !v106 )
          goto LABEL_203;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v106->klass->vtable._14_SetState.method)(
          v106,
          0LL,
          1LL,
          v106->klass->vtable._15_OnPress.methodPtr);
        v107 = (UnityEngine_Component_o *)this->fields.maskSprite;
        if ( !v107 )
          goto LABEL_203;
        v108 = UnityEngine_Component__get_gameObject(v107, 0LL);
        if ( !v108 )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive(v108, 0, 0LL);
      }
      v109 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( item->fields.isMaxSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL) )
        {
          v110 = this->fields.baseButton;
          if ( !v110 )
            goto LABEL_203;
          ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v110->klass->vtable._5_set_isEnabled.method)(
            v110,
            1LL,
            v110->klass->vtable._6_OnInit.methodPtr);
          v111 = this->fields.baseButton;
          if ( !v111 )
            goto LABEL_203;
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v111->klass->vtable._14_SetState.method)(
            v111,
            0LL,
            1LL,
            v111->klass->vtable._15_OnPress.methodPtr);
          v112 = (UnityEngine_Component_o *)this->fields.statusTextLabel;
          if ( !v112 )
            goto LABEL_203;
          v113 = UnityEngine_Component__get_gameObject(v112, 0LL);
          if ( !v113 )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive(v113, 0, 0LL);
          v114 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v114 )
            goto LABEL_203;
          v115 = UnityEngine_Component__get_gameObject(v114, 0LL);
          if ( !v115 )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive(v115, 1, 0LL);
          v103 = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v104 = &StringLiteral_9286;
LABEL_176:
          v116 = LocalizationManager__Get((System_String_o *)*v104, 0LL);
          if ( !v103 )
            goto LABEL_203;
          v117 = v116;
          v118 = v103;
LABEL_190:
          UILabel__set_text(v118, v117, 0LL);
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL) )
        {
          v119 = this->fields.baseButton;
          if ( !v119 )
            goto LABEL_203;
          ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v119->klass->vtable._5_set_isEnabled.method)(
            v119,
            1LL,
            v119->klass->vtable._6_OnInit.methodPtr);
          v120 = this->fields.baseButton;
          if ( !v120 )
            goto LABEL_203;
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v120->klass->vtable._14_SetState.method)(
            v120,
            0LL,
            1LL,
            v120->klass->vtable._15_OnPress.methodPtr);
          v121 = (UnityEngine_Component_o *)this->fields.statusTextLabel;
          if ( !v121 )
            goto LABEL_203;
          v122 = UnityEngine_Component__get_gameObject(v121, 0LL);
          if ( !v122 )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive(v122, 1, 0LL);
          v123 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v123 )
            goto LABEL_203;
          v124 = UnityEngine_Component__get_gameObject(v123, 0LL);
          if ( !v124 )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive(v124, 0, 0LL);
          v118 = this->fields.maskLabel;
          if ( !v118 )
            goto LABEL_203;
          v117 = (System_String_o *)StringLiteral_1;
          goto LABEL_190;
        }
      }
LABEL_191:
      if ( (unsigned int)(modeKind - 1) > 1 )
        return;
      v125 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( v125 )
      {
        v126 = UnityEngine_Component__get_gameObject(v125, 0LL);
        if ( v126 )
        {
          UnityEngine_GameObject__SetActive(v126, item->fields.isCanNotLock, 0LL);
          if ( item->fields.isCanNotLock )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v127 = LocalizationManager__Get((System_String_o *)StringLiteral_8402, 0LL);
          }
          else
          {
            v127 = (System_String_o *)StringLiteral_1;
          }
          v128 = this->fields.maskLabel;
          if ( v128 )
          {
            UILabel__set_text(v128, v127, 0LL);
            return;
          }
        }
      }
LABEL_203:
      sub_B170D4();
    }
    v51 = this->fields.limitCountIcon;
    if ( !v51 )
      goto LABEL_203;
    LimitCountIconComponent__Set(v51, item->fields.currentLimitCnt, item->fields.maxLimitCnt, 0LL);
    if ( item->fields.isEquiped )
    {
      v52 = (UnityEngine_Component_o *)this->fields.equipSprite;
      if ( !v52 )
        goto LABEL_203;
      v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
      if ( !v53 )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive(v53, 1, 0LL);
    }
    if ( item->fields.isSwapLock != item->fields.isLock )
    {
      v54 = (UnityEngine_Component_o *)this->fields.lockImg;
      if ( !v54 )
        goto LABEL_203;
      v55 = UnityEngine_Component__get_gameObject(v54, 0LL);
      if ( !v55 )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive(v55, 1, 0LL);
    }
    if ( item->fields.type )
      v56 = 0;
    else
      v56 = item->fields.isLvMax && item->fields.isLimitCntMax || item->fields.isSvtEqMaterial;
    v57 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( v56 )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
        goto LABEL_86;
      v58 = this->fields.baseButton;
      if ( !v58 )
        goto LABEL_203;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v58->klass->vtable._5_set_isEnabled.method)(
        v58,
        1LL,
        v58->klass->vtable._6_OnInit.methodPtr);
      v59 = this->fields.baseButton;
      if ( !v59 )
        goto LABEL_203;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v59->klass->vtable._14_SetState.method)(
        v59,
        0LL,
        1LL,
        v59->klass->vtable._15_OnPress.methodPtr);
      v60 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !v60 )
        goto LABEL_203;
      v61 = UnityEngine_Component__get_gameObject(v60, 0LL);
      if ( !v61 )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive(v61, 1, 0LL);
      v62 = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9287, 0LL);
      if ( !v62 )
        goto LABEL_203;
      v64 = v63;
      v65 = v62;
    }
    else
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
        goto LABEL_86;
      v66 = this->fields.baseButton;
      if ( !v66 )
        goto LABEL_203;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v66->klass->vtable._5_set_isEnabled.method)(
        v66,
        1LL,
        v66->klass->vtable._6_OnInit.methodPtr);
      v67 = this->fields.baseButton;
      if ( !v67 )
        goto LABEL_203;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v67->klass->vtable._14_SetState.method)(
        v67,
        0LL,
        1LL,
        v67->klass->vtable._15_OnPress.methodPtr);
      v68 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !v68 )
        goto LABEL_203;
      v69 = UnityEngine_Component__get_gameObject(v68, 0LL);
      if ( !v69 )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive(v69, 0, 0LL);
      v65 = this->fields.maskLabel;
      if ( !v65 )
        goto LABEL_203;
      v64 = (System_String_o *)StringLiteral_1;
    }
    UILabel__set_text(v65, v64, 0LL);
LABEL_86:
    if ( item->fields.isBaseSvt )
    {
      v70 = (UnityEngine_Component_o *)this->fields.removeImg;
      if ( !v70 )
        goto LABEL_203;
      v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
      if ( !v71 )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive(v71, 1, 0LL);
    }
    type = item->fields.type;
    goto LABEL_91;
  }
}


void __fastcall SvtEqCombineListViewItemDraw__SetSelectDisp(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelect; // x21
  DragSelectComponent_o *v6; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_40FD618 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FD618 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v6 = this->fields.dragSelect;
    if ( item )
    {
      if ( v6 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_12:
        DragSelectComponent__Set(v6, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v6 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_12;
    }
    sub_B170D4();
  }
}