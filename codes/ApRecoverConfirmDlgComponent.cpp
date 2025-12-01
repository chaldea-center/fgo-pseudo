void ApRecoverConfirmDlgComponent___ctor(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CC1325 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC1325 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ApRecoverConfirmDlgComponent__AssertionCheck(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void ApRecoverConfirmDlgComponent__CallOnClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o *onClose; // x19
  struct System_Action_o **p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = &this->fields.onClose;
    *p_onClose = 0;
    sub_1C71354(p_onClose, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void ApRecoverConfirmDlgComponent__Close(
        ApRecoverConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CC1320 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ApRecoverConfirmDlgComponent_EndClose__);
    byte_4CC1320 = 1;
  }
  this->fields.onClose = callback;
  sub_1C71354(&this->fields.onClose, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ApRecoverConfirmDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void ApRecoverConfirmDlgComponent__EndClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ApRecoverConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ApRecoverConfirmDlgComponent__CallOnClose(this, v5);
}


void ApRecoverConfirmDlgComponent__EndOpen(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t ApRecoverConfirmDlgComponent__GetItemSliderMax(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  int32_t RecoverVal; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w22
  UILabel_o *currentNumLb; // x21
  Il2CppObject *v9; // x0
  int32_t userMaxAp; // w8
  int32_t userCurrentAp; // w9
  int v12; // w10
  int32_t v13; // w8
  int32_t v15; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC131F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_25222/*"{0:N0}"*/);
    byte_4CC131F = 1;
  }
  entity = 0;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_22;
  UserItemMaster__TryGetEntity(
    (UserItemMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    this->fields.recoverItemId,
    0);
  if ( entity )
  {
    num = entity->fields.num;
    currentNumLb = this->fields.currentNumLb;
    v15 = num;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v9, 0);
    if ( currentNumLb )
    {
      UILabel__set_text(currentNumLb, (System_String_o *)Instance, 0);
      goto LABEL_15;
    }
LABEL_22:
    sub_1C71608(Instance, v5);
  }
  num = 0;
LABEL_15:
  userMaxAp = this->fields.userMaxAp;
  userCurrentAp = this->fields.userCurrentAp;
  v12 = (userMaxAp - userCurrentAp) / RecoverVal;
  if ( userMaxAp <= userCurrentAp + v12 * RecoverVal )
    v13 = (userMaxAp - userCurrentAp) / RecoverVal;
  else
    v13 = v12 + 1;
  if ( v13 <= num )
    return v13;
  else
    return num;
}


// local variable allocation has failed, the output may be wrong!
int32_t ApRecoverConfirmDlgComponent__GetItemSliderMin(
        ApRecoverConfirmDlgComponent_o *this,
        int32_t needAp,
        const MethodInfo *method)
{
  float v3; // s8
  float v4; // s8
  int32_t v5; // w9

  if ( needAp < 1 )
    return 1;
  v3 = (float)(needAp - this->fields.userCurrentAp)
     / (float)ApRecoverConfirmDlgComponent__GetRecoverVal(this, *(const MethodInfo **)&needAp);
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  v4 = fmaxf(v3, 1.0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = vcvtps_s32_f32(v4);
  if ( ceilf(v4) == INFINITY )
    return 0x80000000;
  else
    return v5;
}


int32_t ApRecoverConfirmDlgComponent__GetRecoverVal(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *recovItemEnt; // x9
  int32_t result; // w0
  float v5; // s8
  float userMaxAp; // s9
  float v7; // s8
  int32_t v8; // w9

  recovItemEnt = this->fields.recovItemEnt;
  if ( !recovItemEnt )
    return 1;
  result = recovItemEnt->fields.value;
  if ( recovItemEnt->fields.type == 3 )
  {
    v5 = (float)result / 1000.0;
    userMaxAp = (float)this->fields.userMaxAp;
    if ( !byte_4CC13B2 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC13B2 = 1;
    }
    v7 = v5 * userMaxAp;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v8 = vcvtps_s32_f32(v7);
    if ( ceilf(v7) == INFINITY )
      return 0x80000000;
    else
      return v8;
  }
  return result;
}


void ApRecoverConfirmDlgComponent__Init(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


int64_t ApRecoverConfirmDlgComponent__ItemMaxOverCheck(
        ApRecoverConfirmDlgComponent_o *this,
        int64_t count,
        int64_t max,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  if ( (byte_4CC1323 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC1323 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( max * count > UserItemMax )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    return UserItemMax / max;
  }
  return count;
}


void ApRecoverConfirmDlgComponent__OnClickCancel(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  struct System_Action_bool__int__o *v7; // x8
  struct System_Action_bool__int__o **p_clickFunc; // x19
  struct System_Action_bool__int__o *clickFunc; // t1

  if ( (byte_4CC1322 & 1) == 0 )
  {
    sub_1C713B0(&Method_ApRecoverConfirmDlgComponent_OnClickCancel__);
    byte_4CC1322 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ApRecoverConfirmDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C71608(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = &this->fields.clickFunc;
    v7 = clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v7->fields.invoke_impl)(
        v7->fields.method_code,
        0,
        0,
        v7->fields.method);
      *p_clickFunc = 0;
      sub_1C71354(p_clickFunc, 0);
    }
  }
}


void ApRecoverConfirmDlgComponent__OnClickDecide(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct UISliderWithButton_o *itemSlider; // x8
  struct System_Action_bool__int__o *clickFunc; // x8

  if ( (byte_4CC1321 & 1) == 0 )
  {
    sub_1C713B0(&Method_ApRecoverConfirmDlgComponent_OnClickDecide__);
    byte_4CC1321 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ApRecoverConfirmDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C71608(v5, v6);
    itemSlider->fields.isTouchEnable = 0;
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        (unsigned int)this->fields.useCount,
        clickFunc->fields.method);
      this->fields.clickFunc = 0;
      sub_1C71354(&this->fields.clickFunc, 0);
    }
  }
}


void ApRecoverConfirmDlgComponent__Open(
        ApRecoverConfirmDlgComponent_o *this,
        int32_t recoverId,
        int32_t needAp,
        System_Action_bool__int__o *clickFunc,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  struct ItemEntity_o *recovItemEnt; // x8
  struct ItemEntity_o *v12; // x8
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *v14; // x21
  const MethodInfo *v15; // x1
  int32_t ItemSliderMax; // w0
  const MethodInfo *v17; // x2
  int32_t ItemSliderMin; // w0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  UILabel_o *titleLb; // x20
  UILabel_o *currentInfoLb; // x20
  UILabel_o *maxLabel; // x20
  UILabel_o *minLabel; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v28; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC131B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ApRecoverConfirmDlgComponent_EndOpen__);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_1C713B0(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_2030/*"AP_RECOVER_TITLE"*/);
    sub_1C713B0(&StringLiteral_3931/*"CURRENT_NUM_TXT"*/);
    sub_1C713B0(&StringLiteral_12056/*"SHOP_BULK_WINDOW_MIN_LABEL"*/);
    sub_1C713B0(&StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_12055/*"SHOP_BULK_WINDOW_MAX_LABEL"*/);
    byte_4CC131B = 1;
  }
  entity = 0;
  if ( !this->fields.state )
  {
    this->fields.clickFunc = clickFunc;
    sub_1C71354(&this->fields.clickFunc, clickFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
      this->fields.useCount = 1;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_RecoverMaster___);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                     &entity,
                                                     recoverId,
                                                     (const MethodInfo_3408ECC *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_29;
            this->fields.recoverItemId = (int32_t)entity[2].klass;
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)gameObject,
                                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                         (Il2CppObject **)&this->fields.recovItemEnt,
                                                         this->fields.recoverItemId,
                                                         (const MethodInfo_3408ECC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                recovItemEnt = this->fields.recovItemEnt;
                if ( !recovItemEnt )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                if ( !gameObject )
                  goto LABEL_29;
                ItemIconComponent__SetItemImage_41193944(
                  (ItemIconComponent_o *)gameObject,
                  recovItemEnt->fields.imageId,
                  recovItemEnt->fields.bgImageId,
                  recovItemEnt->fields.type,
                  0,
                  1,
                  0);
                v12 = this->fields.recovItemEnt;
                if ( !v12 )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
                if ( !gameObject )
                  goto LABEL_29;
                UILabel__set_text((UILabel_o *)gameObject, v12->fields.name, 0);
                ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v13);
              }
              gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
              if ( gameObject )
              {
                v14 = gameObject;
                this->fields.userCurrentAp = UserGameEntity__getAct((UserGameEntity_o *)gameObject, 0);
                this->fields.userMaxAp = v14[1].fields.m_CachedPtr;
                ItemSliderMax = ApRecoverConfirmDlgComponent__GetItemSliderMax(this, v15);
                this->fields.maxCount = ItemSliderMax;
                this->fields.useCount = ItemSliderMax;
                ItemSliderMin = ApRecoverConfirmDlgComponent__GetItemSliderMin(this, needAp, v17);
                ApRecoverConfirmDlgComponent__SetItemSlider(this, ItemSliderMin, v19);
                ApRecoverConfirmDlgComponent__SetResultApLb(this, v20);
                ApRecoverConfirmDlgComponent__SetItemDetailLb(this, v21);
                titleLb = this->fields.titleLb;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_2030/*"AP_RECOVER_TITLE"*/,
                                                           0);
                if ( titleLb )
                {
                  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
                  currentInfoLb = this->fields.currentInfoLb;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3931/*"CURRENT_NUM_TXT"*/,
                                                             0);
                  if ( currentInfoLb )
                  {
                    UILabel__set_text(currentInfoLb, (System_String_o *)gameObject, 0);
                    maxLabel = this->fields.maxLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12055/*"SHOP_BULK_WINDOW_MAX_LABEL"*/,
                                                               0);
                    if ( maxLabel )
                    {
                      UILabel__set_text(maxLabel, (System_String_o *)gameObject, 0);
                      minLabel = this->fields.minLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12056/*"SHOP_BULK_WINDOW_MIN_LABEL"*/,
                                                                 0);
                      if ( minLabel )
                      {
                        UILabel__set_text(minLabel, (System_String_o *)gameObject, 0);
                        decideButtonLb = this->fields.decideButtonLb;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/,
                                                                   0);
                        if ( decideButtonLb )
                        {
                          UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0);
                          cancelButtonLb = this->fields.cancelButtonLb;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/,
                                                                     0);
                          if ( cancelButtonLb )
                          {
                            UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0);
                            this->fields.state = 1;
                            v28 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                            System_Action___ctor(
                              v28,
                              (Il2CppObject *)this,
                              Method_ApRecoverConfirmDlgComponent_EndOpen__,
                              0);
                            BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0, 0);
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
LABEL_29:
    sub_1C71608(gameObject, v10);
  }
}


void ApRecoverConfirmDlgComponent__SetConfirmMessageLb(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *confirmMessageLb; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct ItemEntity_o *recovItemEnt; // x8

  if ( (byte_4CC131D & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_2025/*"AP_RECOVER_CONFIRM_TXT"*/);
    byte_4CC131D = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    confirmMessageLb = this->fields.confirmMessageLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2025/*"AP_RECOVER_CONFIRM_TXT"*/, 0);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt
      || (v4 = System_String__Format(v4, (Il2CppObject *)recovItemEnt->fields.name, 0), !confirmMessageLb) )
    {
      sub_1C71608(v4, v5);
    }
    UILabel__set_text(confirmMessageLb, v4, 0);
  }
}


void ApRecoverConfirmDlgComponent__SetItemDetailLb(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  int32_t RecoverVal; // w19
  System_String_o *v4; // x21
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  struct ItemEntity_o *recovItemEnt; // x8
  Il2CppObject *v8; // x21
  UILabel_o *itemDetailLb; // x20
  float v10; // s0
  int v11; // w23
  System_String_o *v12; // x22
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x22
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC131E & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_14820/*"UNIT_INFO"*/);
    sub_1C713B0(&StringLiteral_1915/*"ADD_RECOVER_NUM_TXT"*/);
    sub_1C713B0(&StringLiteral_2026/*"AP_RECOVER_NUM_TXT"*/);
    byte_4CC131E = 1;
  }
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_14820/*"UNIT_INFO"*/, 0);
  v20 = 1;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v6 = System_String__Format(v4, v5, 0);
  recovItemEnt = this->fields.recovItemEnt;
  if ( recovItemEnt )
  {
    v8 = (Il2CppObject *)v6;
    if ( recovItemEnt->fields.type == 3 )
    {
      itemDetailLb = this->fields.itemDetailLb;
      v10 = (float)((float)recovItemEnt->fields.value / 1000.0) * 100.0;
      if ( v10 == INFINITY )
        v11 = 0x80000000;
      else
        v11 = (int)v10;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2026/*"AP_RECOVER_NUM_TXT"*/, 0);
      v20 = v11;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v19 = RecoverVal;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
      v15 = System_String__Format_64073100(v12, v8, v13, v14, 0);
      if ( !itemDetailLb )
        goto LABEL_13;
    }
    else
    {
      itemDetailLb = this->fields.itemDetailLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_1915/*"ADD_RECOVER_NUM_TXT"*/, 0);
      v20 = RecoverVal;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v15 = System_String__Format_64073032(v17, v8, v18, 0);
      if ( !itemDetailLb )
LABEL_13:
        sub_1C71608(v15, v16);
    }
    UILabel__set_text(itemDetailLb, v15, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ApRecoverConfirmDlgComponent__SetItemSlider(
        ApRecoverConfirmDlgComponent_o *this,
        int32_t minCount,
        const MethodInfo *method)
{
  int32_t maxCount; // w8
  UISliderWithButton_o *itemSlider; // x0
  int32_t useCount; // w1
  int32_t v7; // w3

  maxCount = this->fields.maxCount;
  itemSlider = this->fields.itemSlider;
  if ( maxCount != 1 )
  {
    if ( itemSlider )
    {
      if ( maxCount == minCount )
        UISliderWithButton__SetGray(itemSlider, 0);
      else
        UISliderWithButton__normalMode(itemSlider, 0);
      itemSlider = this->fields.itemSlider;
      if ( itemSlider )
      {
        useCount = this->fields.useCount;
        v7 = minCount;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C71608(itemSlider, *(_QWORD *)&minCount);
  }
  if ( !itemSlider )
    goto LABEL_12;
  UISliderWithButton__SetGray(itemSlider, 0);
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_12;
  useCount = this->fields.useCount;
  v7 = 1;
LABEL_11:
  UISliderWithButton__init(itemSlider, useCount, 0, v7, 0);
}


void ApRecoverConfirmDlgComponent__SetResultApLb(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  int32_t RecoverVal; // w0
  int32_t userMaxAp; // w21
  UILabel_o *resultApLb2; // x20
  int v6; // w25
  __int64 *v7; // x8
  System_String_o *v8; // x21
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *resultApLb1; // x20
  System_String_o *v14; // x21
  struct ItemEntity_o *recovItemEnt; // x8
  System_String_o *v16; // x22
  struct System_String_o *name; // x23
  System_String_o *v18; // x23
  System_String_o *v19; // x23
  System_String_o *v20; // x19
  __int64 v21; // x0
  int32_t v22; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t userCurrentAp; // [xsp+8h] [xbp-48h] BYREF
  int32_t useCount; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CC131C & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&StringLiteral_2027/*"AP_RECOVER_RESULT"*/);
    sub_1C713B0(&StringLiteral_2031/*"AP_RECOVER_TXT"*/);
    sub_1C713B0(&StringLiteral_2028/*"AP_RECOVER_RESULT_OVER"*/);
    byte_4CC131C = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
    userMaxAp = this->fields.userMaxAp;
    resultApLb2 = this->fields.resultApLb2;
    v6 = this->fields.userCurrentAp + this->fields.useCount * RecoverVal;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v6 <= userMaxAp )
      v7 = &StringLiteral_2027/*"AP_RECOVER_RESULT"*/;
    else
      v7 = &StringLiteral_2028/*"AP_RECOVER_RESULT_OVER"*/;
    v8 = LocalizationManager__Get((System_String_o *)*v7, 0);
    useCount = this->fields.userMaxAp;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &useCount);
    userCurrentAp = v6;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
    v11 = System_String__Format_64073032(v8, v9, v10, 0);
    if ( !resultApLb2 )
      goto LABEL_30;
    UILabel__set_text(resultApLb2, v11, 0);
    resultApLb1 = this->fields.resultApLb1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2031/*"AP_RECOVER_TXT"*/, 0);
    v11 = (System_String_o *)sub_1C71458(object___TypeInfo, 4);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt )
      goto LABEL_30;
    v16 = v11;
    if ( !v11 )
      goto LABEL_30;
    name = recovItemEnt->fields.name;
    if ( !name || (v11 = (System_String_o *)sub_1C714EC(name, v11->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v16[1].klass) )
        goto LABEL_29;
      v16[1].monitor = name;
      sub_1C71354(&v16[1].monitor, name);
      useCount = this->fields.useCount;
      v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount);
      v18 = v11;
      if ( !v11 || (v11 = (System_String_o *)sub_1C714EC(v11, v16->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v16[1].klass) <= 1 )
          goto LABEL_29;
        v16[1].fields = (System_String_Fields)v18;
        sub_1C71354(&v16[1].fields, v18);
        userCurrentAp = this->fields.userCurrentAp;
        v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
        v19 = v11;
        if ( !v11 || (v11 = (System_String_o *)sub_1C714EC(v11, v16->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v16[1].klass) <= 2 )
            goto LABEL_29;
          v16[2].klass = (System_String_c *)v19;
          sub_1C71354(&v16[2], v19);
          v22 = this->fields.userMaxAp;
          v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
          v20 = v11;
          if ( !v11 || (v11 = (System_String_o *)sub_1C714EC(v11, v16->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v16[1].klass) > 3 )
            {
              v16[2].monitor = v20;
              sub_1C71354(&v16[2].monitor, v20);
              v11 = System_String__Format_64073168(v14, (System_Object_array *)v16, 0);
              if ( resultApLb1 )
              {
                UILabel__set_text(resultApLb1, v11, 0);
                return;
              }
LABEL_30:
              sub_1C71608(v11, v12);
            }
LABEL_29:
            sub_1C71610(v11);
          }
        }
      }
    }
    v21 = sub_1C7162C();
    sub_1C714D8(v21, 0);
  }
}


void ApRecoverConfirmDlgComponent__SliderValueChange(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  ApRecoverConfirmDlgComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_1C71608(0, method);
  v4 = (ApRecoverConfirmDlgComponent_o *)UISliderWithButton__sliderValueChange(itemSlider, 0);
  this->fields.useCount = ApRecoverConfirmDlgComponent__ItemMaxOverCheck(v4, (int)v4, this->fields.maxCount, v5);
  ApRecoverConfirmDlgComponent__SetResultApLb(this, v6);
  ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v7);
}


UnityEngine_GameObject_o *ApRecoverConfirmDlgComponent__get_closeBtnObject(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CC1324 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1324 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C71608(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}