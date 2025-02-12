void __fastcall ApRecoverConfirmDlgComponent___ctor(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BAF3C1 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BAF3C1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ApRecoverConfirmDlgComponent__AssertionCheck(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ApRecoverConfirmDlgComponent__CallOnClose(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_onClose; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v3 = onClose;
  if ( onClose )
  {
    *p_onClose = 0LL;
    sub_1C13CC8(p_onClose);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__Close(
        ApRecoverConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4BAF3BC & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_ApRecoverConfirmDlgComponent_EndClose__, v5);
    byte_4BAF3BC = 1;
  }
  this->fields.onClose = callback;
  sub_1C13CC8(&this->fields.onClose);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ApRecoverConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall ApRecoverConfirmDlgComponent__EndClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ApRecoverConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ApRecoverConfirmDlgComponent__CallOnClose(this, v5);
}


void __fastcall ApRecoverConfirmDlgComponent__EndOpen(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall ApRecoverConfirmDlgComponent__GetItemSliderMax(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t RecoverVal; // w20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  int num; // w22
  UILabel_o *currentNumLb; // x21
  Il2CppObject *v16; // x0
  int32_t userMaxAp; // w8
  int32_t userCurrentAp; // w9
  int v19; // w10
  int v20; // w8
  int v22; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BAF3BB & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1C13D24(&int_TypeInfo, v3);
    sub_1C13D24(&NetworkManager_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C13D24(&StringLiteral_25371/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v6);
    byte_4BAF3BB = 1;
  }
  entity = 0LL;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v9);
    byte_4BAF1E5 = 1;
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
    0LL);
  if ( entity )
  {
    num = entity->fields.num;
    currentNumLb = this->fields.currentNumLb;
    v22 = num;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v11, v12, v13);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25371/*"{0:D2}:{1:D2}:{2:D2}[-]"*/, v16, 0LL);
    if ( currentNumLb )
    {
      UILabel__set_text(currentNumLb, (System_String_o *)Instance, 0LL);
      goto LABEL_15;
    }
LABEL_22:
    sub_1C13F80(Instance, v9);
  }
  num = 0;
LABEL_15:
  userMaxAp = this->fields.userMaxAp;
  userCurrentAp = this->fields.userCurrentAp;
  v19 = (userMaxAp - userCurrentAp) / RecoverVal;
  if ( userMaxAp <= userCurrentAp + v19 * RecoverVal )
    v20 = (userMaxAp - userCurrentAp) / RecoverVal;
  else
    v20 = v19 + 1;
  if ( v20 <= num )
    return v20;
  else
    return num;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ApRecoverConfirmDlgComponent__GetItemSliderMin(
        ApRecoverConfirmDlgComponent_o *this,
        int32_t needAp,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float v4; // s8
  float v5; // s8
  int32_t v6; // w9

  if ( needAp < 1 )
    return 1;
  v4 = (float)(needAp - this->fields.userCurrentAp)
     / (float)ApRecoverConfirmDlgComponent__GetRecoverVal(this, *(const MethodInfo **)&needAp);
  if ( !byte_4BAF44E )
  {
    sub_1C13D24(&System_Math_TypeInfo, v3);
    byte_4BAF44E = 1;
  }
  v5 = fmaxf(v4, 1.0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = vcvtps_s32_f32(v5);
  if ( ceilf(v5) == INFINITY )
    return 0x80000000;
  else
    return v6;
}


int32_t __fastcall ApRecoverConfirmDlgComponent__GetRecoverVal(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
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
    if ( !byte_4BAF44E )
    {
      sub_1C13D24(&System_Math_TypeInfo, method);
      byte_4BAF44E = 1;
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


void __fastcall ApRecoverConfirmDlgComponent__Init(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


int64_t __fastcall ApRecoverConfirmDlgComponent__ItemMaxOverCheck(
        ApRecoverConfirmDlgComponent_o *this,
        int64_t count,
        int64_t max,
        const MethodInfo *method)
{
  int64_t v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  v5 = count;
  if ( (byte_4BAF3BF & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, count);
    byte_4BAF3BF = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( max * v5 > UserItemMax )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    return UserItemMax / max;
  }
  return v5;
}


void __fastcall ApRecoverConfirmDlgComponent__OnClickCancel(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  struct System_Action_bool__int__o *v7; // x8
  struct System_Action_bool__int__o **p_clickFunc; // x19
  struct System_Action_bool__int__o *clickFunc; // t1

  if ( (byte_4BAF3BE & 1) == 0 )
  {
    sub_1C13D24(&Method_ApRecoverConfirmDlgComponent_OnClickCancel__, method);
    byte_4BAF3BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C();
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C13F80(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = &this->fields.clickFunc;
    v7 = clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v7->fields.m_target)(
        v7->fields.original_method_info,
        0LL,
        0LL,
        *(_QWORD *)&v7->fields.extra_arg);
      *p_clickFunc = 0LL;
      sub_1C13CC8(p_clickFunc);
    }
  }
}


void __fastcall ApRecoverConfirmDlgComponent__OnClickDecide(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct UISliderWithButton_o *itemSlider; // x8
  struct System_Action_bool__int__o *clickFunc; // x8

  if ( (byte_4BAF3BD & 1) == 0 )
  {
    sub_1C13D24(&Method_ApRecoverConfirmDlgComponent_OnClickDecide__, method);
    byte_4BAF3BD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C();
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C13F80(v5, v6);
    itemSlider->fields.isTouchEnable = 0;
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        (unsigned int)this->fields.useCount,
        *(_QWORD *)&clickFunc->fields.extra_arg);
      this->fields.clickFunc = 0LL;
      sub_1C13CC8(&this->fields.clickFunc);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ApRecoverConfirmDlgComponent__Open(
        ApRecoverConfirmDlgComponent_o *this,
        int32_t recoverId,
        int32_t needAp,
        System_Action_bool__int__o *clickFunc,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  struct ItemEntity_o *recovItemEnt; // x8
  struct ItemEntity_o *v25; // x8
  const MethodInfo *v26; // x1
  UnityEngine_GameObject_o *v27; // x21
  const MethodInfo *v28; // x1
  int32_t ItemSliderMax; // w0
  const MethodInfo *v30; // x2
  int32_t ItemSliderMin; // w0
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  UILabel_o *titleLb; // x20
  UILabel_o *currentInfoLb; // x20
  UILabel_o *maxLabel; // x20
  UILabel_o *minLabel; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v41; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BAF3B7 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&recoverId);
    sub_1C13D24(&Method_ApRecoverConfirmDlgComponent_EndOpen__, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_RecoverMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__, v12);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1C13D24(&LocalizationManager_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C13D24(&StringLiteral_2158/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, v16);
    sub_1C13D24(&StringLiteral_4029/*"CTS is not supported"*/, v17);
    sub_1C13D24(&StringLiteral_12189/*"SHOP_AFTER_ACTION_DIALOG_CLOSE"*/, v18);
    sub_1C13D24(&StringLiteral_3800/*"COMMON"*/, v19);
    sub_1C13D24(&StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/, v20);
    sub_1C13D24(&StringLiteral_12188/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/, v21);
    byte_4BAF3B7 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    this->fields.clickFunc = clickFunc;
    sub_1C13CC8(&this->fields.clickFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
      this->fields.useCount = 1;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_RecoverMaster___);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                     &entity,
                                                     recoverId,
                                                     (const MethodInfo_3238670 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_29;
            this->fields.recoverItemId = (int32_t)entity[2].klass;
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)gameObject,
                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                         (Il2CppObject **)&this->fields.recovItemEnt,
                                                         this->fields.recoverItemId,
                                                         (const MethodInfo_3238670 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                recovItemEnt = this->fields.recovItemEnt;
                if ( !recovItemEnt )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                if ( !gameObject )
                  goto LABEL_29;
                ItemIconComponent__SetItemImage_39284260(
                  (ItemIconComponent_o *)gameObject,
                  recovItemEnt->fields.imageId,
                  recovItemEnt->fields.bgImageId,
                  recovItemEnt->fields.type,
                  0,
                  1,
                  0LL);
                v25 = this->fields.recovItemEnt;
                if ( !v25 )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
                if ( !gameObject )
                  goto LABEL_29;
                UILabel__set_text((UILabel_o *)gameObject, v25->fields.name, 0LL);
                ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v26);
              }
              gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( gameObject )
              {
                v27 = gameObject;
                this->fields.userCurrentAp = UserGameEntity__getAct((UserGameEntity_o *)gameObject, 0LL);
                this->fields.userMaxAp = v27[1].fields.m_CachedPtr;
                ItemSliderMax = ApRecoverConfirmDlgComponent__GetItemSliderMax(this, v28);
                this->fields.maxCount = ItemSliderMax;
                this->fields.useCount = ItemSliderMax;
                ItemSliderMin = ApRecoverConfirmDlgComponent__GetItemSliderMin(this, needAp, v30);
                ApRecoverConfirmDlgComponent__SetItemSlider(this, ItemSliderMin, v32);
                ApRecoverConfirmDlgComponent__SetResultApLb(this, v33);
                ApRecoverConfirmDlgComponent__SetItemDetailLb(this, v34);
                titleLb = this->fields.titleLb;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_2158/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/,
                                                           0LL);
                if ( titleLb )
                {
                  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
                  currentInfoLb = this->fields.currentInfoLb;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_4029/*"CTS is not supported"*/,
                                                             0LL);
                  if ( currentInfoLb )
                  {
                    UILabel__set_text(currentInfoLb, (System_String_o *)gameObject, 0LL);
                    maxLabel = this->fields.maxLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12188/*"SHOP_ACHIEVEMENT_PAID_EXCHANGE_CONDITIONS"*/,
                                                               0LL);
                    if ( maxLabel )
                    {
                      UILabel__set_text(maxLabel, (System_String_o *)gameObject, 0LL);
                      minLabel = this->fields.minLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12189/*"SHOP_AFTER_ACTION_DIALOG_CLOSE"*/,
                                                                 0LL);
                      if ( minLabel )
                      {
                        UILabel__set_text(minLabel, (System_String_o *)gameObject, 0LL);
                        decideButtonLb = this->fields.decideButtonLb;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3800/*"COMMON"*/,
                                                                   0LL);
                        if ( decideButtonLb )
                        {
                          UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
                          cancelButtonLb = this->fields.cancelButtonLb;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/,
                                                                     0LL);
                          if ( cancelButtonLb )
                          {
                            UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
                            this->fields.state = 1;
                            v41 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                            System_Action___ctor(
                              v41,
                              (Il2CppObject *)this,
                              Method_ApRecoverConfirmDlgComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
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
    sub_1C13F80(gameObject, v23);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetConfirmMessageLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *confirmMessageLb; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  struct ItemEntity_o *recovItemEnt; // x8

  if ( (byte_4BAF3B9 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_2153/*"AP_RECOVER_CONFIRM_MSG_OVER"*/, v3);
    byte_4BAF3B9 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    confirmMessageLb = this->fields.confirmMessageLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2153/*"AP_RECOVER_CONFIRM_MSG_OVER"*/, 0LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt
      || (v5 = System_String__Format(v5, (Il2CppObject *)recovItemEnt->fields.name, 0LL), !confirmMessageLb) )
    {
      sub_1C13F80(v5, v6);
    }
    UILabel__set_text(confirmMessageLb, v5, 0LL);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetItemDetailLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t RecoverVal; // w19
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  struct ItemEntity_o *recovItemEnt; // x8
  Il2CppObject *v15; // x21
  UILabel_o *itemDetailLb; // x20
  float v17; // s0
  int v18; // w23
  System_String_o *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  int32_t v35; // [xsp+8h] [xbp-38h] BYREF
  int v36; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BAF3BA & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, method);
    sub_1C13D24(&LocalizationManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_15035/*"UISkin/UISkin02TerminalBG2Atlas"*/, v4);
    sub_1C13D24(&StringLiteral_2052/*"ADD_RECOVER_CMDSPELL_TXT"*/, v5);
    sub_1C13D24(&StringLiteral_2154/*"AP_RECOVER_CONFIRM_TXT"*/, v6);
    byte_4BAF3BA = 1;
  }
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15035/*"UISkin/UISkin02TerminalBG2Atlas"*/, 0LL);
  v36 = 1;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v9, v10, v11);
  v13 = System_String__Format(v8, v12, 0LL);
  recovItemEnt = this->fields.recovItemEnt;
  if ( recovItemEnt )
  {
    v15 = (Il2CppObject *)v13;
    if ( recovItemEnt->fields.type == 3 )
    {
      itemDetailLb = this->fields.itemDetailLb;
      v17 = (float)((float)recovItemEnt->fields.value / 1000.0) * 100.0;
      if ( v17 == INFINITY )
        v18 = 0x80000000;
      else
        v18 = (int)v17;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2154/*"AP_RECOVER_CONFIRM_TXT"*/, 0LL);
      v36 = v18;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v20, v21, v22);
      v35 = RecoverVal;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v24, v25, v26);
      v28 = System_String__Format_62982384(v19, v15, v23, v27, 0LL);
      if ( !itemDetailLb )
        goto LABEL_13;
    }
    else
    {
      itemDetailLb = this->fields.itemDetailLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2052/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
      v36 = RecoverVal;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v31, v32, v33);
      v28 = System_String__Format_62982316(v30, v15, v34, 0LL);
      if ( !itemDetailLb )
LABEL_13:
        sub_1C13F80(v28, v29);
    }
    UILabel__set_text(itemDetailLb, v28, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ApRecoverConfirmDlgComponent__SetItemSlider(
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
        UISliderWithButton__SetGray(itemSlider, 0LL);
      else
        UISliderWithButton__normalMode(itemSlider, 0LL);
      itemSlider = this->fields.itemSlider;
      if ( itemSlider )
      {
        useCount = this->fields.useCount;
        v7 = minCount;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C13F80(itemSlider, *(_QWORD *)&minCount);
  }
  if ( !itemSlider )
    goto LABEL_12;
  UISliderWithButton__SetGray(itemSlider, 0LL);
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_12;
  useCount = this->fields.useCount;
  v7 = 1;
LABEL_11:
  UISliderWithButton__init(itemSlider, useCount, 0, v7, 0LL);
}


void __fastcall ApRecoverConfirmDlgComponent__SetResultApLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t RecoverVal; // w0
  int32_t userMaxAp; // w21
  UILabel_o *resultApLb2; // x20
  int v11; // w25
  __int64 *v12; // x8
  System_String_o *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  UILabel_o *resultApLb1; // x20
  System_String_o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  struct ItemEntity_o *recovItemEnt; // x8
  System_Object_array *v29; // x22
  Il2CppObject *name; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x23
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x19
  __int64 v43; // x0
  int32_t v44; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t userCurrentAp; // [xsp+8h] [xbp-48h] BYREF
  int32_t useCount; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BAF3B8 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, method);
    sub_1C13D24(&LocalizationManager_TypeInfo, v3);
    sub_1C13D24(&object___TypeInfo, v4);
    sub_1C13D24(&StringLiteral_2155/*"AP_RECOVER_NUM_TXT"*/, v5);
    sub_1C13D24(&StringLiteral_2159/*"AP_RECOVER_TITLE"*/, v6);
    sub_1C13D24(&StringLiteral_2156/*"AP_RECOVER_RESULT"*/, v7);
    byte_4BAF3B8 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
    userMaxAp = this->fields.userMaxAp;
    resultApLb2 = this->fields.resultApLb2;
    v11 = this->fields.userCurrentAp + this->fields.useCount * RecoverVal;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v11 <= userMaxAp )
      v12 = &StringLiteral_2155/*"AP_RECOVER_NUM_TXT"*/;
    else
      v12 = &StringLiteral_2156/*"AP_RECOVER_RESULT"*/;
    v13 = LocalizationManager__Get((System_String_o *)*v12, 0LL);
    useCount = this->fields.userMaxAp;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &useCount, v14, v15, v16);
    userCurrentAp = v11;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp, v18, v19, v20);
    v22 = System_String__Format_62982316(v13, v17, v21, 0LL);
    if ( !resultApLb2 )
      goto LABEL_30;
    UILabel__set_text(resultApLb2, v22, 0LL);
    resultApLb1 = this->fields.resultApLb1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2159/*"AP_RECOVER_TITLE"*/, 0LL);
    v22 = (System_String_o *)sub_1C13DCC(object___TypeInfo, 4LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt )
      goto LABEL_30;
    v29 = (System_Object_array *)v22;
    if ( !v22 )
      goto LABEL_30;
    name = (Il2CppObject *)recovItemEnt->fields.name;
    if ( !name || (v22 = (System_String_o *)sub_1C13E60(name, v22->klass->_1.element_class)) != 0LL )
    {
      if ( !v29->max_length )
        goto LABEL_29;
      v29->m_Items[0] = name;
      sub_1C13CC8(v29->m_Items);
      useCount = this->fields.useCount;
      v22 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount, v31, v32, v33);
      v34 = (Il2CppObject *)v22;
      if ( !v22 || (v22 = (System_String_o *)sub_1C13E60(v22, v29->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v29->max_length <= 1 )
          goto LABEL_29;
        v29->m_Items[1] = v34;
        sub_1C13CC8(&v29->m_Items[1]);
        userCurrentAp = this->fields.userCurrentAp;
        v22 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp, v35, v36, v37);
        v38 = (Il2CppObject *)v22;
        if ( !v22 || (v22 = (System_String_o *)sub_1C13E60(v22, v29->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v29->max_length <= 2 )
            goto LABEL_29;
          v29->m_Items[2] = v38;
          sub_1C13CC8(&v29->m_Items[2]);
          v44 = this->fields.userMaxAp;
          v22 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v39, v40, v41);
          v42 = (Il2CppObject *)v22;
          if ( !v22 || (v22 = (System_String_o *)sub_1C13E60(v22, v29->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v29->max_length > 3 )
            {
              v29->m_Items[3] = v42;
              sub_1C13CC8(&v29->m_Items[3]);
              v22 = System_String__Format_62982452(v25, v29, 0LL);
              if ( resultApLb1 )
              {
                UILabel__set_text(resultApLb1, v22, 0LL);
                return;
              }
LABEL_30:
              sub_1C13F80(v22, v23);
            }
LABEL_29:
            sub_1C13F88(v22, v23, v26, v27);
          }
        }
      }
    }
    v43 = sub_1C13FA4();
    sub_1C13E4C(v43, 0LL);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SliderValueChange(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  ApRecoverConfirmDlgComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_1C13F80(0LL, method);
  v4 = (ApRecoverConfirmDlgComponent_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  this->fields.useCount = ApRecoverConfirmDlgComponent__ItemMaxOverCheck(v4, (int)v4, this->fields.maxCount, v5);
  ApRecoverConfirmDlgComponent__SetResultApLb(this, v6);
  ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v7);
}


UnityEngine_GameObject_o *__fastcall ApRecoverConfirmDlgComponent__get_closeBtnObject(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BAF3C0 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BAF3C0 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C13F80(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}