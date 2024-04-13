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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_Component_o *statusLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v32; // x2
  UILabel_o *v33; // x20
  __int64 *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x2
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  int64_t v39; // x21
  const MethodInfo *v40; // x2
  int64_t v41; // x20
  System_String_o *v42; // x0
  UILabel_o *v43; // x21
  Il2CppObject *v44; // x20
  UILabel_o *statusLabelTime; // x19
  __int64 *v46; // x8
  int64_t fatigueTime; // x21
  const MethodInfo *v48; // x2
  int64_t v49; // x20
  System_String_o *RestTime4; // x0
  UILabel_o *v51; // x21
  System_String_o *v52; // x0
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x1
  UILabel_o *v56; // x20
  System_String_o *v57; // x1

  if ( (byte_42EC045 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11893/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11895/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11896/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11771/*"SELECT_NO_SORTIE_TITLE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11793/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1/*""*/, v27, v28, v29);
    byte_42EC045 = 1;
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
      statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
      if ( !statusLabel )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
      statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
      if ( !statusLabel )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v32);
      v33 = this->fields.statusLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v34 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
LABEL_24:
      statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v34, 0LL);
      if ( v33 )
      {
        UILabel__set_text(v33, (System_String_o *)statusLabel, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
        if ( statusLabel )
        {
          UILabel__set_text((UILabel_o *)statusLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
          if ( statusLabel )
          {
            v37 = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
            GameObjectExtensions__SetLocalPositionY(v37, 0.0, 0LL);
            return;
          }
        }
      }
LABEL_75:
      sub_B5D69C(statusLabel, item);
    }
    statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
    if ( !statusLabel )
      goto LABEL_75;
    if ( item->fields.isFatigueRecover )
    {
      UILabel__set_spacingY((UILabel_o *)statusLabel, 0, 0LL);
      statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
      if ( !statusLabel )
        goto LABEL_75;
      statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(statusLabel, 0LL);
      if ( !statusLabel )
        goto LABEL_75;
      v35 = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v35, 24.0, 0LL);
      if ( item->fields.isCanNotSelect )
      {
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v36);
        v33 = this->fields.statusLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v34 = &StringLiteral_11893/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/;
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
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v54);
        statusLabel = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsBaseSvt(item, v55);
        v56 = this->fields.statusLabel;
        if ( ((unsigned __int8)statusLabel & 1) != 0 )
        {
          if ( !v56 )
            goto LABEL_75;
          v57 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/, 0LL);
          if ( !v56 )
            goto LABEL_75;
          v57 = (System_String_o *)statusLabel;
        }
        UILabel__set_text(v56, v57, 0LL);
        statusLabelTime = this->fields.statusLabelTime;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11793/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/, 0LL);
        if ( !statusLabelTime )
          goto LABEL_75;
        goto LABEL_74;
      }
      statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
      if ( !statusLabel )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
      statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
      if ( !statusLabel )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v48);
      v49 = item->fields.fatigueTime;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      RestTime4 = LocalizationManager__GetRestTime4(v49, -1LL, 0LL);
      v51 = this->fields.statusLabel;
      v44 = (Il2CppObject *)RestTime4;
      statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11771/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
      if ( !v51 )
        goto LABEL_75;
      UILabel__set_text(v51, (System_String_o *)statusLabel, 0LL);
      statusLabelTime = this->fields.statusLabelTime;
      v46 = &StringLiteral_11896/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
LABEL_55:
      v52 = LocalizationManager__Get((System_String_o *)*v46, 0LL);
      statusLabel = (UnityEngine_Component_o *)System_String__Format(v52, v44, 0LL);
      if ( !statusLabelTime )
        goto LABEL_75;
LABEL_74:
      UILabel__set_text(statusLabelTime, (System_String_o *)statusLabel, 0LL);
      return;
    }
    UILabel__set_spacingY((UILabel_o *)statusLabel, 11, 0LL);
    statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
    if ( !statusLabel )
      goto LABEL_75;
    statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(statusLabel, 0LL);
    if ( !statusLabel )
      goto LABEL_75;
    v38 = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v38, 18.0, 0LL);
    v39 = item->fields.fatigueTime;
    if ( (v39 & 0x8000000000000000LL) == 0 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v39 - NetworkManager__getTime(0LL) >= 1 )
      {
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v40);
        v41 = item->fields.fatigueTime;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v42 = LocalizationManager__GetRestTime4(v41, -1LL, 0LL);
        v43 = this->fields.statusLabel;
        v44 = (Il2CppObject *)v42;
        statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11771/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
        if ( !v43 )
          goto LABEL_75;
        UILabel__set_text(v43, (System_String_o *)statusLabel, 0LL);
        statusLabelTime = this->fields.statusLabelTime;
        v46 = &StringLiteral_11895/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/;
        goto LABEL_55;
      }
    }
    statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
    if ( !statusLabel )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
    statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
    if ( !statusLabel )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
    EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v53);
  }
}


void __fastcall EventServantFatigueListViewItemDraw__SetItem(
        EventServantFatigueListViewItemDraw_o *this,
        EventServantFatigueListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_Component_o *lockImg; // x0
  const MethodInfo *v17; // x2
  UILabel_o *individualityText; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v20; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  LimitCountIconComponent_o *limitCountIcon; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  int32_t v25; // w22
  struct UserServantEntity_o *v26; // x8
  UnityEngine_GameObject_o *v27; // x21
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v30; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42EC044 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_11890/*"SERVANT_RECOVERY_FATIGUE_LIST_INDIVIDUALITY"*/, v13, v14, v15);
    byte_42EC044 = 1;
  }
  if ( item && mode )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( lockImg )
    {
      lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
      if ( lockImg )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)lockImg,
          item->fields.isSwapLock != item->fields.isLock,
          0LL);
        lockImg = (UnityEngine_Component_o *)this->fields.choiceImg;
        if ( lockImg )
        {
          lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
          if ( lockImg )
          {
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)lockImg,
              item->fields.isSwapChoice != item->fields.isChoice,
              0LL);
            lockImg = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
            if ( lockImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
              lockImg = (UnityEngine_Component_o *)this->fields.maskObject;
              if ( lockImg )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
                EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v17);
                individualityText = this->fields.individualityText;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                lockImg = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11890/*"SERVANT_RECOVERY_FATIGUE_LIST_INDIVIDUALITY"*/,
                                                       0LL);
                if ( individualityText )
                {
                  UILabel__set_text(individualityText, (System_String_o *)lockImg, 0LL);
                  lockImg = (UnityEngine_Component_o *)this->fields.individualityText;
                  if ( lockImg )
                  {
                    gameObject = UnityEngine_Component__get_gameObject(lockImg, 0LL);
                    lockImg = (UnityEngine_Component_o *)EventServantFatigueListViewItem__IsMatchIndividuality(
                                                           item,
                                                           v20);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)lockImg & 1, 0LL);
                      lockImg = (UnityEngine_Component_o *)this->fields.limitCountIcon;
                      if ( lockImg )
                      {
                        LimitCountIconComponent__Clear((LimitCountIconComponent_o *)lockImg, 0LL);
                        lockImg = (UnityEngine_Component_o *)this->fields.servantIcon;
                        if ( lockImg )
                        {
                          ServantFaceIconComponent__Set_30775392(
                            (ServantFaceIconComponent_o *)lockImg,
                            item->fields.userServantEntity,
                            item->fields.iconLabelInfo1,
                            item->fields.iconLabelInfo2,
                            0LL);
                          userServantEntity = item->fields.userServantEntity;
                          if ( userServantEntity )
                          {
                            limitCountIcon = this->fields.limitCountIcon;
                            v24 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                            v23 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            }
                            *(_QWORD *)&v31.fields.currentCryptoKey = v24;
                            *(_QWORD *)&v31.fields.fakeValue = v23;
                            lockImg = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                   v31,
                                                                   0LL);
                            if ( item->fields.userServantEntity )
                            {
                              v25 = (int)lockImg;
                              lockImg = (UnityEngine_Component_o *)UserServantEntity__getLimitCntMax(
                                                                     item->fields.userServantEntity,
                                                                     0LL);
                              if ( limitCountIcon )
                              {
                                LimitCountIconComponent__Set(limitCountIcon, v25, (int32_t)lockImg, 0LL);
                                v26 = item->fields.userServantEntity;
                                if ( v26 )
                                {
                                  lockImg = (UnityEngine_Component_o *)this->fields.subIconLabel;
                                  if ( lockImg )
                                  {
                                    UIIconLabel__Set_41886452(
                                      (UIIconLabel_o *)lockImg,
                                      36,
                                      item->fields.rarity,
                                      v26->fields.exceedCount,
                                      0,
                                      0LL,
                                      0,
                                      0,
                                      v26->fields.lv,
                                      0LL);
                                    lockImg = (UnityEngine_Component_o *)this->fields.partyIcon;
                                    if ( lockImg )
                                    {
                                      if ( item->fields.isParty )
                                        FlashingIconComponent__Set((FlashingIconComponent_o *)lockImg, 0LL);
                                      else
                                        FlashingIconComponent__Clear((FlashingIconComponent_o *)lockImg, 0LL);
                                      lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
                                      if ( lockImg )
                                      {
                                        v27 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
                                        lockImg = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsBaseSvt(
                                                                               item,
                                                                               v28);
                                        if ( v27 )
                                        {
                                          UnityEngine_GameObject__SetActive(v27, (unsigned __int8)lockImg & 1, 0LL);
                                          pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
                                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                          }
                                          if ( !UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
                                            goto LABEL_41;
                                          lockImg = (UnityEngine_Component_o *)this->fields.pushImg;
                                          if ( lockImg )
                                          {
                                            lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                   lockImg,
                                                                                   0LL);
                                            if ( lockImg )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)lockImg,
                                                item->fields.isPush,
                                                0LL);
LABEL_41:
                                              EventServantFatigueListViewItemDraw__SetFatigueMask(this, item, v30);
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
    sub_B5D69C(lockImg, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantFatigueListViewItemDraw__SetStatusLabel(
        EventServantFatigueListViewItemDraw_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *statusLabel; // x0

  statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
  if ( !statusLabel
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, enable, 0LL),
        (statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime) == 0LL)
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0LL)) == 0LL )
  {
    sub_B5D69C(statusLabel, enable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, enable, 0LL);
}