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
  const MethodInfo *v15; // x2
  UILabel_o *v16; // x20
  __int64 *v17; // x8
  UnityEngine_GameObject_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  int64_t v22; // x21
  const MethodInfo *v23; // x2
  int64_t v24; // x20
  System_String_o *v25; // x0
  UILabel_o *v26; // x21
  Il2CppObject *v27; // x20
  UILabel_o *statusLabelTime; // x19
  __int64 *v29; // x8
  int64_t fatigueTime; // x21
  const MethodInfo *v31; // x2
  int64_t v32; // x20
  System_String_o *RestTime4; // x0
  UILabel_o *v34; // x21
  System_String_o *v35; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  UILabel_o *v39; // x20
  System_String_o *v40; // x1

  if ( (byte_4A02D10 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, item);
    sub_1B64A00(&NetworkManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_11588/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/, v6);
    sub_1B64A00(&StringLiteral_11590/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/, v7);
    sub_1B64A00(&StringLiteral_11591/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v8);
    sub_1B64A00(&StringLiteral_11445/*"SELECT_CANNOT"*/, v9);
    sub_1B64A00(&StringLiteral_11464/*"SELECT_NO_SORTIE_TITLE"*/, v10);
    sub_1B64A00(&StringLiteral_11488/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/, v11);
    sub_1B64A00(&StringLiteral_1/*""*/, v12);
    byte_4A02D10 = 1;
  }
  if ( item )
  {
    statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
    if ( !statusLabel )
      goto LABEL_67;
    gameObject = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 36.0, 0LL);
    if ( item->fields.isHeroineSvt && item->fields.isCanNotSelect )
    {
      statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
      if ( !statusLabel )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
      statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
      if ( !statusLabel )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v15);
      v16 = this->fields.statusLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = &StringLiteral_11445/*"SELECT_CANNOT"*/;
LABEL_22:
      statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v17, 0LL);
      if ( v16 )
      {
        UILabel__set_text(v16, (System_String_o *)statusLabel, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
        if ( statusLabel )
        {
          UILabel__set_text((UILabel_o *)statusLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
          if ( statusLabel )
          {
            v20 = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
            GameObjectExtensions__SetLocalPositionY(v20, 0.0, 0LL);
            return;
          }
        }
      }
LABEL_67:
      sub_1B64C5C(statusLabel, item);
    }
    statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
    if ( !statusLabel )
      goto LABEL_67;
    if ( item->fields.isFatigueRecover )
    {
      UILabel__set_spacingY((UILabel_o *)statusLabel, 0, 0LL);
      statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
      if ( !statusLabel )
        goto LABEL_67;
      statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(statusLabel, 0LL);
      if ( !statusLabel )
        goto LABEL_67;
      v18 = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v18, 24.0, 0LL);
      if ( item->fields.isCanNotSelect )
      {
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v19);
        v16 = this->fields.statusLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v17 = &StringLiteral_11588/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/;
        goto LABEL_22;
      }
      fatigueTime = item->fields.fatigueTime;
      if ( (fatigueTime & 0x8000000000000000LL) != 0 )
        goto LABEL_54;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( fatigueTime - NetworkManager__getTime(0LL) < 1 )
      {
LABEL_54:
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v37);
        statusLabel = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsBaseSvt(item, v38);
        v39 = this->fields.statusLabel;
        if ( ((unsigned __int8)statusLabel & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_67;
          v40 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11588/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/, 0LL);
          if ( !v39 )
            goto LABEL_67;
          v40 = (System_String_o *)statusLabel;
        }
        UILabel__set_text(v39, v40, 0LL);
        statusLabelTime = this->fields.statusLabelTime;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11488/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/, 0LL);
        if ( !statusLabelTime )
          goto LABEL_67;
        goto LABEL_66;
      }
      statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
      if ( !statusLabel )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
      statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
      if ( !statusLabel )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v31);
      v32 = item->fields.fatigueTime;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      RestTime4 = LocalizationManager__GetRestTime4(v32, -1LL, 0LL);
      v34 = this->fields.statusLabel;
      v27 = (Il2CppObject *)RestTime4;
      statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11464/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
      if ( !v34 )
        goto LABEL_67;
      UILabel__set_text(v34, (System_String_o *)statusLabel, 0LL);
      statusLabelTime = this->fields.statusLabelTime;
      v29 = &StringLiteral_11591/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
LABEL_49:
      v35 = LocalizationManager__Get((System_String_o *)*v29, 0LL);
      statusLabel = (UnityEngine_Component_o *)System_String__Format(v35, v27, 0LL);
      if ( !statusLabelTime )
        goto LABEL_67;
LABEL_66:
      UILabel__set_text(statusLabelTime, (System_String_o *)statusLabel, 0LL);
      return;
    }
    UILabel__set_spacingY((UILabel_o *)statusLabel, 11, 0LL);
    statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
    if ( !statusLabel )
      goto LABEL_67;
    statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(statusLabel, 0LL);
    if ( !statusLabel )
      goto LABEL_67;
    v21 = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v21, 18.0, 0LL);
    v22 = item->fields.fatigueTime;
    if ( (v22 & 0x8000000000000000LL) == 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v22 - NetworkManager__getTime(0LL) >= 1 )
      {
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v23);
        v24 = item->fields.fatigueTime;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = LocalizationManager__GetRestTime4(v24, -1LL, 0LL);
        v26 = this->fields.statusLabel;
        v27 = (Il2CppObject *)v25;
        statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11464/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
        if ( !v26 )
          goto LABEL_67;
        UILabel__set_text(v26, (System_String_o *)statusLabel, 0LL);
        statusLabelTime = this->fields.statusLabelTime;
        v29 = &StringLiteral_11590/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/;
        goto LABEL_49;
      }
    }
    statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
    if ( !statusLabel )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
    statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
    if ( !statusLabel )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
    EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v36);
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
  bool v11; // w1
  bool v12; // w1
  const MethodInfo *v13; // x2
  UILabel_o *individualityText; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v16; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  LimitCountIconComponent_o *limitCountIcon; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  int32_t v21; // w22
  struct UserServantEntity_o *v22; // x8
  UnityEngine_GameObject_o *v23; // x21
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4A02D0F & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, item);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_11585/*"SERVANT_RECOVERY_FATIGUE_LIST_INDIVIDUALITY"*/, v9);
    byte_4A02D0F = 1;
  }
  if ( item && mode )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( lockImg )
    {
      lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
      if ( lockImg )
      {
        v11 = item->fields.isSwapLock ? !item->fields.isLock : item->fields.isLock;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, v11, 0LL);
        lockImg = (UnityEngine_Component_o *)this->fields.choiceImg;
        if ( lockImg )
        {
          lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
          if ( lockImg )
          {
            v12 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, v12, 0LL);
            lockImg = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
            if ( lockImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
              lockImg = (UnityEngine_Component_o *)this->fields.maskObject;
              if ( lockImg )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
                EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v13);
                individualityText = this->fields.individualityText;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                lockImg = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11585/*"SERVANT_RECOVERY_FATIGUE_LIST_INDIVIDUALITY"*/,
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
                                                           v16);
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
                          ServantFaceIconComponent__Set_37909632(
                            (ServantFaceIconComponent_o *)lockImg,
                            item->fields.userServantEntity,
                            item->fields.iconLabelInfo1,
                            item->fields.iconLabelInfo2,
                            0LL);
                          userServantEntity = item->fields.userServantEntity;
                          if ( userServantEntity )
                          {
                            limitCountIcon = this->fields.limitCountIcon;
                            v20 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                            v19 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            *(_QWORD *)&v27.fields.currentCryptoKey = v20;
                            *(_QWORD *)&v27.fields.fakeValue = v19;
                            lockImg = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                                   v27,
                                                                   0LL);
                            if ( item->fields.userServantEntity )
                            {
                              v21 = (int)lockImg;
                              lockImg = (UnityEngine_Component_o *)UserServantEntity__getLimitCntMax(
                                                                     item->fields.userServantEntity,
                                                                     0LL);
                              if ( limitCountIcon )
                              {
                                LimitCountIconComponent__Set(limitCountIcon, v21, (int32_t)lockImg, 0LL);
                                v22 = item->fields.userServantEntity;
                                if ( v22 )
                                {
                                  lockImg = (UnityEngine_Component_o *)this->fields.subIconLabel;
                                  if ( lockImg )
                                  {
                                    UIIconLabel__Set_37925880(
                                      (UIIconLabel_o *)lockImg,
                                      36,
                                      item->fields.rarity,
                                      v22->fields.exceedCount,
                                      0,
                                      0LL,
                                      0,
                                      0,
                                      v22->fields.lv,
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
                                        v23 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
                                        lockImg = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsBaseSvt(
                                                                               item,
                                                                               v24);
                                        if ( v23 )
                                        {
                                          UnityEngine_GameObject__SetActive(v23, (unsigned __int8)lockImg & 1, 0LL);
                                          pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
                                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                          if ( !UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
                                            goto LABEL_44;
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
LABEL_44:
                                              EventServantFatigueListViewItemDraw__SetFatigueMask(this, item, v26);
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
    sub_1B64C5C(lockImg, item);
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
    sub_1B64C5C(statusLabel, enable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, enable, 0LL);
}