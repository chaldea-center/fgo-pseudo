void __fastcall EventServantFatigueListViewItemDraw___ctor(
        EventServantFatigueListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventServantFatigueListViewItemDraw__SetFatigueMask(
        EventServantFatigueListViewItemDraw_o *this,
        EventServantFatigueListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *statusLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *maskObject; // x0
  UnityEngine_GameObject_o *fatigueMaskObject; // x0
  const MethodInfo *v17; // x2
  UILabel_o *v18; // x20
  __int64 *v19; // x8
  UILabel_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  const MethodInfo *v26; // x2
  System_String_o *v27; // x0
  UILabel_o *statusLabelTime; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Component_o *v31; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  int64_t v34; // x21
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  const MethodInfo *v37; // x2
  int64_t v38; // x20
  System_String_o *v39; // x0
  UILabel_o *v40; // x21
  Il2CppObject *v41; // x20
  System_String_o *v42; // x0
  UILabel_o *v43; // x19
  __int64 *v44; // x8
  int64_t fatigueTime; // x21
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x2
  int64_t v49; // x20
  System_String_o *RestTime4; // x0
  UILabel_o *v51; // x21
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  const MethodInfo *v57; // x2
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x1
  bool IsBaseSvt; // w0
  UILabel_o *v63; // x20
  System_String_o *v64; // x1
  System_String_o *v65; // x0

  if ( (byte_40FD170 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11713, v6);
    sub_B16FFC(&StringLiteral_11715, v7);
    sub_B16FFC(&StringLiteral_11716, v8);
    sub_B16FFC(&StringLiteral_11584, v9);
    sub_B16FFC(&StringLiteral_11602, v10);
    sub_B16FFC(&StringLiteral_11622, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FD170 = 1;
  }
  if ( item )
  {
    statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
    if ( !statusLabel )
      goto LABEL_75;
    gameObject = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 36.0, 0LL);
    if ( item->fields.isHeroineSvt && item->fields.isCanNotSelect )
    {
      maskObject = this->fields.maskObject;
      if ( !maskObject )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
      fatigueMaskObject = this->fields.fatigueMaskObject;
      if ( !fatigueMaskObject )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive(fatigueMaskObject, 0, 0LL);
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v17);
      v18 = this->fields.statusLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11584;
LABEL_24:
      v27 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
      if ( v18 )
      {
        UILabel__set_text(v18, v27, 0LL);
        statusLabelTime = this->fields.statusLabelTime;
        if ( statusLabelTime )
        {
          UILabel__set_text(statusLabelTime, (System_String_o *)StringLiteral_1, 0LL);
          v29 = (UnityEngine_Component_o *)this->fields.statusLabel;
          if ( v29 )
          {
            v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
            GameObjectExtensions__SetLocalPositionY(v30, 0.0, 0LL);
            return;
          }
        }
      }
LABEL_75:
      sub_B170D4();
    }
    v20 = this->fields.statusLabelTime;
    if ( !v20 )
      goto LABEL_75;
    if ( item->fields.isFatigueRecover )
    {
      UILabel__set_spacingY(v20, 0, 0LL);
      v21 = (UnityEngine_Component_o *)this->fields.statusLabelTime;
      if ( !v21 )
        goto LABEL_75;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v21, 0LL);
      if ( !transform )
        goto LABEL_75;
      v23 = UnityEngine_Component__get_gameObject(transform, 0LL);
      GameObjectExtensions__SetLocalPositionY(v23, 24.0, 0LL);
      if ( item->fields.isCanNotSelect )
      {
        v24 = this->fields.maskObject;
        if ( !v24 )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive(v24, 1, 0LL);
        v25 = this->fields.fatigueMaskObject;
        if ( !v25 )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive(v25, 0, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v26);
        v18 = this->fields.statusLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_11713;
        goto LABEL_24;
      }
      fatigueTime = item->fields.fatigueTime;
      if ( (fatigueTime & 0x8000000000000000LL) != 0 )
        goto LABEL_60;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( fatigueTime - NetworkManager__getTime(0LL) < 1 )
      {
LABEL_60:
        v58 = this->fields.fatigueMaskObject;
        if ( !v58 )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive(v58, 0, 0LL);
        v59 = this->fields.maskObject;
        if ( !v59 )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive(v59, 1, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v60);
        IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(item, v61);
        v63 = this->fields.statusLabel;
        if ( IsBaseSvt )
        {
          if ( !v63 )
            goto LABEL_75;
          v64 = (System_String_o *)StringLiteral_1;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11713, 0LL);
          if ( !v63 )
            goto LABEL_75;
          v64 = v65;
        }
        UILabel__set_text(v63, v64, 0LL);
        v43 = this->fields.statusLabelTime;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11622, 0LL);
        if ( !v43 )
          goto LABEL_75;
        goto LABEL_74;
      }
      v46 = this->fields.fatigueMaskObject;
      if ( !v46 )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive(v46, 1, 0LL);
      v47 = this->fields.maskObject;
      if ( !v47 )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive(v47, 0, 0LL);
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v48);
      v49 = item->fields.fatigueTime;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime4 = LocalizationManager__GetRestTime4(v49, -1LL, 0LL);
      v51 = this->fields.statusLabel;
      v41 = (Il2CppObject *)RestTime4;
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11602, 0LL);
      if ( !v51 )
        goto LABEL_75;
      UILabel__set_text(v51, v52, 0LL);
      v43 = this->fields.statusLabelTime;
      v44 = &StringLiteral_11716;
LABEL_55:
      v53 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
      v54 = System_String__Format(v53, v41, 0LL);
      if ( !v43 )
        goto LABEL_75;
LABEL_74:
      UILabel__set_text(v43, v54, 0LL);
      return;
    }
    UILabel__set_spacingY(v20, 11, 0LL);
    v31 = (UnityEngine_Component_o *)this->fields.statusLabelTime;
    if ( !v31 )
      goto LABEL_75;
    v32 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v31, 0LL);
    if ( !v32 )
      goto LABEL_75;
    v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
    GameObjectExtensions__SetLocalPositionY(v33, 18.0, 0LL);
    v34 = item->fields.fatigueTime;
    if ( (v34 & 0x8000000000000000LL) == 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v34 - NetworkManager__getTime(0LL) >= 1 )
      {
        v35 = this->fields.fatigueMaskObject;
        if ( !v35 )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive(v35, 1, 0LL);
        v36 = this->fields.maskObject;
        if ( !v36 )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive(v36, 0, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v37);
        v38 = item->fields.fatigueTime;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v39 = LocalizationManager__GetRestTime4(v38, -1LL, 0LL);
        v40 = this->fields.statusLabel;
        v41 = (Il2CppObject *)v39;
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11602, 0LL);
        if ( !v40 )
          goto LABEL_75;
        UILabel__set_text(v40, v42, 0LL);
        v43 = this->fields.statusLabelTime;
        v44 = &StringLiteral_11715;
        goto LABEL_55;
      }
    }
    v55 = this->fields.fatigueMaskObject;
    if ( !v55 )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive(v55, 0, 0LL);
    v56 = this->fields.maskObject;
    if ( !v56 )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive(v56, 0, 0LL);
    EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v57);
  }
}


void __fastcall EventServantFatigueListViewItemDraw__SetItem(
        EventServantFatigueListViewItemDraw_o *this,
        EventServantFatigueListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *lockImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *choiceImg; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *fatigueMaskObject; // x0
  UnityEngine_GameObject_o *maskObject; // x0
  const MethodInfo *v16; // x2
  UILabel_o *individualityText; // x21
  System_String_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x21
  const MethodInfo *v21; // x1
  bool IsMatchIndividuality; // w0
  LimitCountIconComponent_o *limitCountIcon; // x0
  ServantFaceIconComponent_o *servantIcon; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  LimitCountIconComponent_o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w0
  int32_t v30; // w22
  int32_t LimitCntMax; // w0
  struct UserServantEntity_o *v32; // x8
  UIIconLabel_o *subIconLabel; // x0
  FlashingIconComponent_o *partyIcon; // x0
  UnityEngine_Component_o *removeImg; // x0
  UnityEngine_GameObject_o *v36; // x21
  const MethodInfo *v37; // x1
  bool IsBaseSvt; // w0
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v40; // x2
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_40FD16F & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11710, v9);
    byte_40FD16F = 1;
  }
  if ( item && mode )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( lockImg )
    {
      gameObject = UnityEngine_Component__get_gameObject(lockImg, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, item->fields.isSwapLock != item->fields.isLock, 0LL);
        choiceImg = (UnityEngine_Component_o *)this->fields.choiceImg;
        if ( choiceImg )
        {
          v13 = UnityEngine_Component__get_gameObject(choiceImg, 0LL);
          if ( v13 )
          {
            UnityEngine_GameObject__SetActive(v13, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
            fatigueMaskObject = this->fields.fatigueMaskObject;
            if ( fatigueMaskObject )
            {
              UnityEngine_GameObject__SetActive(fatigueMaskObject, 0, 0LL);
              maskObject = this->fields.maskObject;
              if ( maskObject )
              {
                UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
                EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v16);
                individualityText = this->fields.individualityText;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11710, 0LL);
                if ( individualityText )
                {
                  UILabel__set_text(individualityText, v18, 0LL);
                  v19 = (UnityEngine_Component_o *)this->fields.individualityText;
                  if ( v19 )
                  {
                    v20 = UnityEngine_Component__get_gameObject(v19, 0LL);
                    IsMatchIndividuality = EventServantFatigueListViewItem__IsMatchIndividuality(item, v21);
                    if ( v20 )
                    {
                      UnityEngine_GameObject__SetActive(v20, IsMatchIndividuality, 0LL);
                      limitCountIcon = this->fields.limitCountIcon;
                      if ( limitCountIcon )
                      {
                        LimitCountIconComponent__Clear(limitCountIcon, 0LL);
                        servantIcon = this->fields.servantIcon;
                        if ( servantIcon )
                        {
                          ServantFaceIconComponent__Set_30631556(
                            servantIcon,
                            item->fields.userServantEntity,
                            item->fields.iconLabelInfo1,
                            item->fields.iconLabelInfo2,
                            0LL);
                          userServantEntity = item->fields.userServantEntity;
                          if ( userServantEntity )
                          {
                            v26 = this->fields.limitCountIcon;
                            v28 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                            v27 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            }
                            *(_QWORD *)&v43.fields.currentCryptoKey = v28;
                            *(_QWORD *)&v43.fields.fakeValue = v27;
                            v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v43, 0LL);
                            if ( item->fields.userServantEntity )
                            {
                              v30 = v29;
                              LimitCntMax = UserServantEntity__getLimitCntMax(item->fields.userServantEntity, 0LL);
                              if ( v26 )
                              {
                                LimitCountIconComponent__Set(v26, v30, LimitCntMax, 0LL);
                                v32 = item->fields.userServantEntity;
                                if ( v32 )
                                {
                                  subIconLabel = this->fields.subIconLabel;
                                  if ( subIconLabel )
                                  {
                                    UIIconLabel__Set_40377052(
                                      subIconLabel,
                                      36,
                                      item->fields.rarity,
                                      v32->fields.exceedCount,
                                      0,
                                      0LL,
                                      0,
                                      0,
                                      v32->fields.lv,
                                      0LL);
                                    partyIcon = this->fields.partyIcon;
                                    if ( partyIcon )
                                    {
                                      if ( item->fields.isParty )
                                        FlashingIconComponent__Set(partyIcon, 0LL);
                                      else
                                        FlashingIconComponent__Clear(partyIcon, 0LL);
                                      removeImg = (UnityEngine_Component_o *)this->fields.removeImg;
                                      if ( removeImg )
                                      {
                                        v36 = UnityEngine_Component__get_gameObject(removeImg, 0LL);
                                        IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(item, v37);
                                        if ( v36 )
                                        {
                                          UnityEngine_GameObject__SetActive(v36, IsBaseSvt, 0LL);
                                          pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
                                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                          }
                                          if ( !UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
                                            goto LABEL_41;
                                          v41 = (UnityEngine_Component_o *)this->fields.pushImg;
                                          if ( v41 )
                                          {
                                            v42 = UnityEngine_Component__get_gameObject(v41, 0LL);
                                            if ( v42 )
                                            {
                                              UnityEngine_GameObject__SetActive(v42, item->fields.isPush, 0LL);
LABEL_41:
                                              EventServantFatigueListViewItemDraw__SetFatigueMask(this, item, v40);
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
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall EventServantFatigueListViewItemDraw__SetStatusLabel(
        EventServantFatigueListViewItemDraw_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *statusLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *statusLabelTime; // x0
  UnityEngine_GameObject_o *v8; // x0

  statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
  if ( !statusLabel
    || (gameObject = UnityEngine_Component__get_gameObject(statusLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, enable, 0LL),
        (statusLabelTime = (UnityEngine_Component_o *)this->fields.statusLabelTime) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(statusLabelTime, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, enable, 0LL);
}