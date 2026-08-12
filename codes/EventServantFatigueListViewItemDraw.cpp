void EventServantFatigueListViewItemDraw___ctor(EventServantFatigueListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventServantFatigueListViewItemDraw__SetFatigueMask(
        EventServantFatigueListViewItemDraw_o *this,
        EventServantFatigueListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *statusLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *v10; // x20
  __int64 *v11; // x8
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x2
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x2
  int64_t v20; // x21
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x20
  Il2CppObject *RestTime4; // x20
  UILabel_o *v26; // x21
  __int64 *v27; // x8
  int64_t fatigueTime; // x21
  const MethodInfo *v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  int64_t v32; // x20
  UILabel_o *v33; // x21
  UILabel_o *statusLabelTime; // x19
  System_String_o *v35; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  __int64 v39; // x2
  UILabel_o *v40; // x20
  System_String_o *v41; // x1
  __int64 v42; // x1
  __int64 v43; // x2

  if ( (byte_596AC7C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_12180/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/);
    sub_2213A60(&StringLiteral_12182/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/);
    sub_2213A60(&StringLiteral_12183/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/);
    sub_2213A60(&StringLiteral_12029/*"SELECT_CANNOT"*/);
    sub_2213A60(&StringLiteral_12056/*"SELECT_NO_SORTIE_TITLE"*/);
    sub_2213A60(&StringLiteral_12080/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AC7C = 1;
  }
  if ( item )
  {
    statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
    if ( !statusLabel )
      goto LABEL_68;
    gameObject = UnityEngine_Component__get_gameObject(statusLabel, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, 36.0, 0);
    if ( item->fields.isHeroineSvt && item->fields.isCanNotSelect )
    {
      statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
      if ( !statusLabel )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0);
      statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
      if ( !statusLabel )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0);
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v7);
      v10 = this->fields.statusLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
      v11 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
LABEL_22:
      statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v11, 0);
      if ( v10 )
      {
        UILabel__set_text(v10, (System_String_o *)statusLabel, 0);
        statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
        if ( statusLabel )
        {
          UILabel__set_text((UILabel_o *)statusLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
          statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
          if ( statusLabel )
          {
            v17 = UnityEngine_Component__get_gameObject(statusLabel, 0);
            GameObjectExtensions__SetLocalPositionY(v17, 0.0, 0);
            return;
          }
        }
      }
LABEL_68:
      sub_2213CDC(statusLabel, item);
    }
    statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
    if ( item->fields.isFatigueRecover )
    {
      if ( !statusLabel )
        goto LABEL_68;
      UILabel__set_spacingY((UILabel_o *)statusLabel, 0, 0);
      statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
      if ( !statusLabel )
        goto LABEL_68;
      statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(statusLabel, 0);
      if ( !statusLabel )
        goto LABEL_68;
      v12 = UnityEngine_Component__get_gameObject(statusLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v12, 24.0, 0);
      if ( item->fields.isCanNotSelect )
      {
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_68;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0);
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_68;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v14);
        v10 = this->fields.statusLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
        v11 = &StringLiteral_12180/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/;
        goto LABEL_22;
      }
      fatigueTime = item->fields.fatigueTime;
      if ( fatigueTime < 0 )
        goto LABEL_55;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v13);
      if ( fatigueTime - NetworkManager__getTime(0) < 1 )
      {
LABEL_55:
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_68;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0);
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_68;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v37);
        statusLabel = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsBaseSvt(item, v38);
        v40 = this->fields.statusLabel;
        if ( ((unsigned __int8)statusLabel & 1) != 0 )
        {
          if ( !v40 )
            goto LABEL_68;
          v41 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v39);
          statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12180/*"SERVANT_RECOVER_CAN_NOT_SELECT"*/, 0);
          if ( !v40 )
            goto LABEL_68;
          v41 = (System_String_o *)statusLabel;
        }
        UILabel__set_text(v40, v41, 0);
        statusLabelTime = this->fields.statusLabelTime;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
        statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12080/*"SERVANT_ALREADY_RECOVER_NOT_SELECT"*/, 0);
        if ( !statusLabelTime )
          goto LABEL_68;
        goto LABEL_67;
      }
      statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
      if ( !statusLabel )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0);
      statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
      if ( !statusLabel )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0);
      EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v29);
      v32 = item->fields.fatigueTime;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
      RestTime4 = (Il2CppObject *)LocalizationManager__GetRestTime4(v32, -1, 0);
      v33 = this->fields.statusLabel;
      statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12056/*"SELECT_NO_SORTIE_TITLE"*/, 0);
      if ( !v33 )
        goto LABEL_68;
      UILabel__set_text(v33, (System_String_o *)statusLabel, 0);
      v27 = &StringLiteral_12183/*"SERVANT_SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
LABEL_50:
      statusLabelTime = this->fields.statusLabelTime;
      v35 = LocalizationManager__Get((System_String_o *)*v27, 0);
      statusLabel = (UnityEngine_Component_o *)System_String__Format(v35, RestTime4, 0);
      if ( !statusLabelTime )
        goto LABEL_68;
LABEL_67:
      UILabel__set_text(statusLabelTime, (System_String_o *)statusLabel, 0);
      return;
    }
    if ( !statusLabel )
      goto LABEL_68;
    UILabel__set_spacingY((UILabel_o *)statusLabel, 11, 0);
    statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime;
    if ( !statusLabel )
      goto LABEL_68;
    statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(statusLabel, 0);
    if ( !statusLabel )
      goto LABEL_68;
    v18 = UnityEngine_Component__get_gameObject(statusLabel, 0);
    GameObjectExtensions__SetLocalPositionY(v18, 18.0, 0);
    v20 = item->fields.fatigueTime;
    if ( (v20 & 0x8000000000000000LL) == 0 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v19);
      if ( v20 - NetworkManager__getTime(0) >= 1 )
      {
        statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
        if ( !statusLabel )
          goto LABEL_68;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 1, 0);
        statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
        if ( !statusLabel )
          goto LABEL_68;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0);
        EventServantFatigueListViewItemDraw__SetStatusLabel(this, 1, v21);
        v24 = item->fields.fatigueTime;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
        RestTime4 = (Il2CppObject *)LocalizationManager__GetRestTime4(v24, -1, 0);
        v26 = this->fields.statusLabel;
        statusLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12056/*"SELECT_NO_SORTIE_TITLE"*/, 0);
        if ( !v26 )
          goto LABEL_68;
        UILabel__set_text(v26, (System_String_o *)statusLabel, 0);
        v27 = &StringLiteral_12182/*"SERVANT_SELECT_NO_SORTIE_FATIGURE"*/;
        goto LABEL_50;
      }
    }
    statusLabel = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
    if ( !statusLabel )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0);
    statusLabel = (UnityEngine_Component_o *)this->fields.maskObject;
    if ( !statusLabel )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, 0, 0);
    EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v36);
  }
}


void EventServantFatigueListViewItemDraw__SetItem(
        EventServantFatigueListViewItemDraw_o *this,
        EventServantFatigueListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Component_o *lockImg; // x0
  bool v8; // w1
  bool v9; // w1
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *individualityText; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v18; // x22
  __int64 v19; // x23
  LimitCountIconComponent_o *limitCountIcon; // x21
  int32_t v21; // w22
  struct UserServantEntity_o *v22; // x8
  UnityEngine_GameObject_o *v23; // x21
  const MethodInfo *v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *pushImg; // x21
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_596AC7B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_12177/*"SERVANT_RECOVERY_FATIGUE_LIST_INDIVIDUALITY"*/);
    byte_596AC7B = 1;
  }
  if ( item && mode )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( lockImg )
    {
      lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
      if ( lockImg )
      {
        v8 = item->fields.isSwapLock ? !item->fields.isLock : item->fields.isLock;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, v8, 0);
        lockImg = (UnityEngine_Component_o *)this->fields.choiceImg;
        if ( lockImg )
        {
          lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
          if ( lockImg )
          {
            v9 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, v9, 0);
            lockImg = (UnityEngine_Component_o *)this->fields.fatigueMaskObject;
            if ( lockImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0);
              lockImg = (UnityEngine_Component_o *)this->fields.maskObject;
              if ( lockImg )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0);
                EventServantFatigueListViewItemDraw__SetStatusLabel(this, 0, v10);
                individualityText = this->fields.individualityText;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
                lockImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12177/*"SERVANT_RECOVERY_FATIGUE_LIST_INDIVIDUALITY"*/, 0);
                if ( individualityText )
                {
                  UILabel__set_text(individualityText, (System_String_o *)lockImg, 0);
                  lockImg = (UnityEngine_Component_o *)this->fields.individualityText;
                  if ( lockImg )
                  {
                    gameObject = UnityEngine_Component__get_gameObject(lockImg, 0);
                    lockImg = (UnityEngine_Component_o *)EventServantFatigueListViewItem__IsMatchIndividuality(
                                                           item,
                                                           v15);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)lockImg & 1, 0);
                      lockImg = (UnityEngine_Component_o *)this->fields.limitCountIcon;
                      if ( lockImg )
                      {
                        LimitCountIconComponent__Clear((LimitCountIconComponent_o *)lockImg, 0);
                        lockImg = (UnityEngine_Component_o *)this->fields.servantIcon;
                        if ( lockImg )
                        {
                          ServantFaceIconComponent__Set_48049524(
                            (ServantFaceIconComponent_o *)lockImg,
                            item->fields.userServantEntity,
                            item->fields.iconLabelInfo1,
                            item->fields.iconLabelInfo2,
                            1,
                            0);
                          userServantEntity = item->fields.userServantEntity;
                          if ( userServantEntity )
                          {
                            v18 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                            v19 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                            limitCountIcon = this->fields.limitCountIcon;
                            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(
                                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                item,
                                v16);
                            *(_QWORD *)&v29.fields.currentCryptoKey = v18;
                            *(_QWORD *)&v29.fields.fakeValue = v19;
                            lockImg = (UnityEngine_Component_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                   v29,
                                                                   0);
                            if ( item->fields.userServantEntity )
                            {
                              v21 = (int)lockImg;
                              lockImg = (UnityEngine_Component_o *)UserServantEntity__getLimitCntMax(
                                                                     item->fields.userServantEntity,
                                                                     0);
                              if ( limitCountIcon )
                              {
                                LimitCountIconComponent__Set(limitCountIcon, v21, (int32_t)lockImg, 0);
                                v22 = item->fields.userServantEntity;
                                if ( v22 )
                                {
                                  lockImg = (UnityEngine_Component_o *)this->fields.subIconLabel;
                                  if ( lockImg )
                                  {
                                    UIIconLabel__Set_48071660(
                                      (UIIconLabel_o *)lockImg,
                                      36,
                                      item->fields.rarity,
                                      v22->fields.exceedCount,
                                      0,
                                      0,
                                      0,
                                      0,
                                      v22->fields.lv,
                                      0,
                                      0);
                                    lockImg = (UnityEngine_Component_o *)this->fields.partyIcon;
                                    if ( item->fields.isParty )
                                    {
                                      if ( !lockImg )
                                        goto LABEL_46;
                                      FlashingIconComponent__Set((FlashingIconComponent_o *)lockImg, 0);
                                    }
                                    else
                                    {
                                      if ( !lockImg )
                                        goto LABEL_46;
                                      FlashingIconComponent__Clear((FlashingIconComponent_o *)lockImg, 0);
                                    }
                                    lockImg = (UnityEngine_Component_o *)this->fields.removeImg;
                                    if ( lockImg )
                                    {
                                      v23 = UnityEngine_Component__get_gameObject(lockImg, 0);
                                      lockImg = (UnityEngine_Component_o *)EventServantFatigueListViewItem__get_IsBaseSvt(
                                                                             item,
                                                                             v24);
                                      if ( v23 )
                                      {
                                        UnityEngine_GameObject__SetActive(v23, (unsigned __int8)lockImg & 1, 0);
                                        pushImg = (UnityEngine_Object_o *)this->fields.pushImg;
                                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
                                        if ( !UnityEngine_Object__op_Inequality(pushImg, 0, 0) )
                                          goto LABEL_45;
                                        lockImg = (UnityEngine_Component_o *)this->fields.pushImg;
                                        if ( lockImg )
                                        {
                                          lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 lockImg,
                                                                                 0);
                                          if ( lockImg )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)lockImg,
                                              item->fields.isPush,
                                              0);
LABEL_45:
                                            EventServantFatigueListViewItemDraw__SetFatigueMask(this, item, v28);
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
LABEL_46:
    sub_2213CDC(lockImg, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewItemDraw__SetStatusLabel(
        EventServantFatigueListViewItemDraw_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *statusLabel; // x0

  statusLabel = (UnityEngine_Component_o *)this->fields.statusLabel;
  if ( !statusLabel
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, enable, 0),
        (statusLabel = (UnityEngine_Component_o *)this->fields.statusLabelTime) == 0)
    || (statusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(statusLabel, 0)) == 0 )
  {
    sub_2213CDC(statusLabel, enable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusLabel, enable, 0);
}