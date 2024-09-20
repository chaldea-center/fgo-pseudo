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
  UnityEngine_Component_o *statusLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x2
  UILabel_o *v8; // x20
  __int64 *v9; // x8
  UnityEngine_GameObject_o *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  int64_t v14; // x21
  const MethodInfo *v15; // x2
  int64_t v16; // x20
  System_String_o *v17; // x0
  UILabel_o *v18; // x21
  Il2CppObject *v19; // x20
  UILabel_o *statusLabelTime; // x19
  __int64 *v21; // x8
  int64_t fatigueTime; // x21
  const MethodInfo *v23; // x2
  int64_t v24; // x20
  System_String_o *RestTime4; // x0
  UILabel_o *v26; // x21
  System_String_o *v27; // x0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  UILabel_o *v30; // x20
  System_String_o *v31; // x1

  if ( (byte_4A5F3D9 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11639/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/);
    sub_1B885B0(&StringLiteral_11641/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/);
    sub_1B885B0(&StringLiteral_11642/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/);
    sub_1B885B0(&StringLiteral_11496/*"SELECT_CANNOT"*/);
    sub_1B885B0(&StringLiteral_11515/*"SELECT_NO_SORTIE_TITLE"*/);
    sub_1B885B0(&StringLiteral_11539/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F3D9 = 1;
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
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v7);
      v8 = this->fields.statusLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_11496/*"SELECT_CANNOT"*/;
LABEL_22:
      statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v9, 0LL);
      if ( v8 )
      {
        UILabel__set_text(v8, (System_String_o *)statusLabel, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
        if ( statusLabel )
        {
          UILabel__set_text((UILabel_o *)statusLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
          if ( statusLabel )
          {
            v12 = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
            GameObjectExtensions__SetLocalPositionY(v12, 0.0, 0LL);
            return;
          }
        }
      }
LABEL_67:
      sub_1B8880C(statusLabel, item);
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
      v10 = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v10, 24.0, 0LL);
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
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v11);
        v8 = this->fields.statusLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_11639/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/;
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
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v29);
        statusLabel = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsBaseSvt(item, 0LL);
        v30 = this->fields.statusLabel;
        if ( ((unsigned __int8)statusLabel & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_67;
          v31 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11639/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/, 0LL);
          if ( !v30 )
            goto LABEL_67;
          v31 = (System_String_o *)statusLabel;
        }
        UILabel__set_text(v30, v31, 0LL);
        statusLabelTime = this->fields.statusLabelTime;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11539/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/, 0LL);
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
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v23);
      v24 = item->fields.fatigueTime;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      RestTime4 = LocalizationManager__GetRestTime4(v24, -1LL, 0LL);
      v26 = this->fields.statusLabel;
      v19 = (Il2CppObject *)RestTime4;
      statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11515/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
      if ( !v26 )
        goto LABEL_67;
      UILabel__set_text(v26, (System_String_o *)statusLabel, 0LL);
      statusLabelTime = this->fields.statusLabelTime;
      v21 = &StringLiteral_11642/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
LABEL_49:
      v27 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
      statusLabel = (UnityEngine_Component_o *)System_String__Format(v27, v19, 0LL);
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
    v13 = UnityEngine_Component__get_gameObject(statusLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v13, 18.0, 0LL);
    v14 = item->fields.fatigueTime;
    if ( (v14 & 0x8000000000000000LL) == 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v14 - NetworkManager__getTime(0LL) >= 1 )
      {
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0LL);
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0LL);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v15);
        v16 = item->fields.fatigueTime;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v17 = LocalizationManager__GetRestTime4(v16, -1LL, 0LL);
        v18 = this->fields.statusLabel;
        v19 = (Il2CppObject *)v17;
        statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11515/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
        if ( !v18 )
          goto LABEL_67;
        UILabel__set_text(v18, (System_String_o *)statusLabel, 0LL);
        statusLabelTime = this->fields.statusLabelTime;
        v21 = &StringLiteral_11641/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/;
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
    EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v28);
  }
}


void __fastcall EventServantFatigueListViewItemDraw__SetItem(
        EventServantFatigueListViewItemDraw_o *this,
        EventServantFatigueListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Component_o *lockImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v9; // x21
  const MethodInfo *v10; // x2
  UILabel_o *individualityText; // x21
  UnityEngine_GameObject_o *v12; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  LimitCountIconComponent_o *limitCountIcon; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  int32_t v17; // w22
  struct UserServantEntity_o *v18; // x8
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v21; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A5F3D8 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_11636/*"SERVANT_RECOVERY_FATIGUE_LIST_INDIVIDUALITY"*/);
    byte_4A5F3D8 = 1;
  }
  if ( item && mode )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( lockImg )
    {
      gameObject = UnityEngine_Component__get_gameObject(lockImg, 0LL);
      lockImg = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsDispLock(item, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)lockImg & 1, 0LL);
        lockImg = (UnityEngine_Component_o *)this->fields.choiceImg;
        if ( lockImg )
        {
          v9 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
          lockImg = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsDispChoice(item, 0LL);
          if ( v9 )
          {
            UnityEngine_GameObject__SetActive(v9, (unsigned __int8)lockImg & 1, 0LL);
            lockImg = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
            if ( lockImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
              lockImg = (UnityEngine_Component_o *)this->fields.maskObject;
              if ( lockImg )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
                EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v10);
                individualityText = this->fields.individualityText;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                lockImg = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11636/*"SERVANT_RECOVERY_FATIGUE_LIST_INDIVIDUALITY"*/,
                                                       0LL);
                if ( individualityText )
                {
                  UILabel__set_text(individualityText, (System_String_o *)lockImg, 0LL);
                  lockImg = (UnityEngine_Component_o *)this->fields.individualityText;
                  if ( lockImg )
                  {
                    v12 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
                    lockImg = (UnityEngine_Component_o *)EventServantFatigueListViewItem__IsMatchIndividuality(
                                                           item,
                                                           0LL);
                    if ( v12 )
                    {
                      UnityEngine_GameObject__SetActive(v12, (unsigned __int8)lockImg & 1, 0LL);
                      lockImg = (UnityEngine_Component_o *)this->fields.limitCountIcon;
                      if ( lockImg )
                      {
                        LimitCountIconComponent__Clear((LimitCountIconComponent_o *)lockImg, 0LL);
                        lockImg = (UnityEngine_Component_o *)this->fields.servantIcon;
                        if ( lockImg )
                        {
                          ServantFaceIconComponent__Set_38220260(
                            (ServantFaceIconComponent_o *)lockImg,
                            item->fields.userServantEntity,
                            item->fields.iconLabelInfo1,
                            item->fields.iconLabelInfo2,
                            0LL);
                          userServantEntity = item->fields.userServantEntity;
                          if ( userServantEntity )
                          {
                            limitCountIcon = this->fields.limitCountIcon;
                            v16 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                            v15 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            *(_QWORD *)&v22.fields.currentCryptoKey = v16;
                            *(_QWORD *)&v22.fields.fakeValue = v15;
                            lockImg = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                   v22,
                                                                   0LL);
                            if ( item->fields.userServantEntity )
                            {
                              v17 = (int)lockImg;
                              lockImg = (UnityEngine_Component_o *)UserServantEntity__getLimitCntMax(
                                                                     item->fields.userServantEntity,
                                                                     0LL);
                              if ( limitCountIcon )
                              {
                                LimitCountIconComponent__Set(limitCountIcon, v17, (int32_t)lockImg, 0LL);
                                v18 = item->fields.userServantEntity;
                                if ( v18 )
                                {
                                  lockImg = (UnityEngine_Component_o *)this->fields.subIconLabel;
                                  if ( lockImg )
                                  {
                                    UIIconLabel__Set_38235604(
                                      (UIIconLabel_o *)lockImg,
                                      36,
                                      item->fields.rarity,
                                      v18->fields.exceedCount,
                                      0,
                                      0LL,
                                      0,
                                      0,
                                      v18->fields.lv,
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
                                        v19 = UnityEngine_Component__get_gameObject(lockImg, 0LL);
                                        lockImg = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsBaseSvt(
                                                                               item,
                                                                               0LL);
                                        if ( v19 )
                                        {
                                          UnityEngine_GameObject__SetActive(v19, (unsigned __int8)lockImg & 1, 0LL);
                                          pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
                                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                          if ( !UnityEngine_Object__op_Inequality(pushImg, 0LL, 0LL) )
                                            goto LABEL_38;
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
LABEL_38:
                                              EventServantFatigueListViewItemDraw__SetFatigueMask(this, item, v21);
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
    sub_1B8880C(lockImg, item);
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
    sub_1B8880C(statusLabel, enable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, enable, 0LL);
}