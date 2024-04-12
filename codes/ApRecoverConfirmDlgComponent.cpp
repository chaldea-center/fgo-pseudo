void __fastcall ApRecoverConfirmDlgComponent___ctor(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B2D6D & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B2D6D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onClose; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_B52920(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__Close(
        ApRecoverConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B2D68 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ApRecoverConfirmDlgComponent_EndClose__);
    byte_42B2D68 = 1;
  }
  this->fields.onClose = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ApRecoverConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ApRecoverConfirmDlgComponent__EndClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ApRecoverConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
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
  int32_t RecoverVal; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int num; // w22
  UILabel_o *currentNumLb; // x21
  Il2CppObject *v9; // x0
  int32_t userMaxAp; // w8
  int32_t userCurrentAp; // w9
  int v12; // w10
  int v13; // w8
  int v15; // [xsp+4h] [xbp-2Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B2D67 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_23720/*"{0:N0}"*/);
    byte_42B2D67 = 1;
  }
  entity = 0LL;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  UserItemMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    (int64_t)Instance,
    this->fields.recoverItemId,
    0LL);
  if ( entity )
  {
    num = entity->fields.num;
    currentNumLb = this->fields.currentNumLb;
    v15 = num;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23720/*"{0:N0}"*/, v9, 0LL);
    if ( currentNumLb )
    {
      UILabel__set_text(currentNumLb, (System_String_o *)Instance, 0LL);
      goto LABEL_12;
    }
LABEL_19:
    sub_B52A5C(Instance, v5);
  }
  num = 0;
LABEL_12:
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
int32_t __fastcall ApRecoverConfirmDlgComponent__GetItemSliderMin(
        ApRecoverConfirmDlgComponent_o *this,
        int32_t needAp,
        const MethodInfo *method)
{
  float v3; // s0

  if ( needAp < 1 )
    return 1;
  v3 = fmaxf(
         (float)(needAp - this->fields.userCurrentAp)
       / (float)ApRecoverConfirmDlgComponent__GetRecoverVal(this, *(const MethodInfo **)&needAp),
         1.0);
  return UnityEngine_Mathf__CeilToInt(v3, 0LL);
}


int32_t __fastcall ApRecoverConfirmDlgComponent__GetRecoverVal(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *recovItemEnt; // x9
  int32_t result; // w0

  recovItemEnt = this->fields.recovItemEnt;
  if ( !recovItemEnt )
    return 1;
  result = recovItemEnt->fields.value;
  if ( recovItemEnt->fields.type == 3 )
    return UnityEngine_Mathf__CeilToInt((float)((float)result / 1000.0) * (float)this->fields.userMaxAp, 0LL);
  return result;
}


void __fastcall ApRecoverConfirmDlgComponent__Init(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
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
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  if ( (byte_42B2D6B & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B2D6B = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( max * count > UserItemMax )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    return UserItemMax / max;
  }
  return count;
}


void __fastcall ApRecoverConfirmDlgComponent__OnClickCancel(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISliderWithButton_o *itemSlider; // x0
  System_Action_bool__int__o *v5; // x0
  BattleServantConfConponent_o *p_clickFunc; // x19
  struct System_Action_bool__int__o *clickFunc; // t1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B2D6A & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool__int__Invoke__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2D6A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_B52A5C(0LL, v3);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (BattleServantConfConponent_o *)&this->fields.clickFunc;
    v5 = clickFunc;
    if ( clickFunc )
    {
      System_Action_bool__int___Invoke(v5, 0, 0, (const MethodInfo_26334FC *)Method_System_Action_bool__int__Invoke__);
      p_clickFunc->klass = 0LL;
      sub_B52920(p_clickFunc, 0LL, v8, v9, v10, v11, v12, v13);
    }
  }
}


void __fastcall ApRecoverConfirmDlgComponent__OnClickDecide(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct UISliderWithButton_o *itemSlider; // x8
  System_Action_bool__int__o *clickFunc; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B2D69 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool__int__Invoke__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2D69 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_B52A5C(v3, v4);
    itemSlider->fields.isTouchEnable = 0;
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      System_Action_bool__int___Invoke(
        clickFunc,
        1,
        this->fields.useCount,
        (const MethodInfo_26334FC *)Method_System_Action_bool__int__Invoke__);
      this->fields.clickFunc = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.clickFunc, 0LL, v7, v8, v9, v10, v11, v12);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  struct ItemEntity_o *recovItemEnt; // x8
  struct ItemEntity_o *v15; // x8
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *v17; // x21
  const MethodInfo *v18; // x1
  int32_t ItemSliderMax; // w0
  const MethodInfo *v20; // x2
  int32_t ItemSliderMin; // w0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UILabel_o *titleLb; // x20
  UILabel_o *currentInfoLb; // x20
  UILabel_o *maxLabel; // x20
  UILabel_o *minLabel; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v31; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B2D63 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ApRecoverConfirmDlgComponent_EndOpen__);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1755/*"AP_RECOVER_TITLE"*/);
    sub_B52984(&StringLiteral_3486/*"CURRENT_NUM_TXT"*/);
    sub_B52984(&StringLiteral_12188/*"SHOP_BULK_WINDOW_MIN_LABEL"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_12187/*"SHOP_BULK_WINDOW_MAX_LABEL"*/);
    byte_42B2D63 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    this->fields.clickFunc = clickFunc;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.clickFunc,
      (System_Int32_array **)clickFunc,
      *(System_String_array ***)&needAp,
      (System_String_array **)clickFunc,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
      this->fields.useCount = 1;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_RecoverMaster___);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                     &entity,
                                                     recoverId,
                                                     (const MethodInfo_23E2334 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_30;
            this->fields.recoverItemId = (int32_t)entity->fields.name;
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)gameObject,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                         (WarEntity_o **)&this->fields.recovItemEnt,
                                                         this->fields.recoverItemId,
                                                         (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                recovItemEnt = this->fields.recovItemEnt;
                if ( !recovItemEnt )
                  goto LABEL_30;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                if ( !gameObject )
                  goto LABEL_30;
                ItemIconComponent__SetItemImage_28308164(
                  (ItemIconComponent_o *)gameObject,
                  recovItemEnt->fields.imageId,
                  recovItemEnt->fields.bgImageId,
                  recovItemEnt->fields.type,
                  0,
                  0LL);
                v15 = this->fields.recovItemEnt;
                if ( !v15 )
                  goto LABEL_30;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
                if ( !gameObject )
                  goto LABEL_30;
                UILabel__set_text((UILabel_o *)gameObject, v15->fields.name, 0LL);
                ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v16);
              }
              gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( gameObject )
              {
                v17 = gameObject;
                this->fields.userCurrentAp = UserGameEntity__getAct((UserGameEntity_o *)gameObject, 0LL);
                this->fields.userMaxAp = v17[1].fields.m_CachedPtr;
                ItemSliderMax = ApRecoverConfirmDlgComponent__GetItemSliderMax(this, v18);
                this->fields.maxCount = ItemSliderMax;
                this->fields.useCount = ItemSliderMax;
                ItemSliderMin = ApRecoverConfirmDlgComponent__GetItemSliderMin(this, needAp, v20);
                ApRecoverConfirmDlgComponent__SetItemSlider(this, ItemSliderMin, v22);
                ApRecoverConfirmDlgComponent__SetResultApLb(this, v23);
                ApRecoverConfirmDlgComponent__SetItemDetailLb(this, v24);
                titleLb = this->fields.titleLb;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_1755/*"AP_RECOVER_TITLE"*/,
                                                           0LL);
                if ( titleLb )
                {
                  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
                  currentInfoLb = this->fields.currentInfoLb;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3486/*"CURRENT_NUM_TXT"*/,
                                                             0LL);
                  if ( currentInfoLb )
                  {
                    UILabel__set_text(currentInfoLb, (System_String_o *)gameObject, 0LL);
                    maxLabel = this->fields.maxLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12187/*"SHOP_BULK_WINDOW_MAX_LABEL"*/,
                                                               0LL);
                    if ( maxLabel )
                    {
                      UILabel__set_text(maxLabel, (System_String_o *)gameObject, 0LL);
                      minLabel = this->fields.minLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12188/*"SHOP_BULK_WINDOW_MIN_LABEL"*/,
                                                                 0LL);
                      if ( minLabel )
                      {
                        UILabel__set_text(minLabel, (System_String_o *)gameObject, 0LL);
                        decideButtonLb = this->fields.decideButtonLb;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/,
                                                                   0LL);
                        if ( decideButtonLb )
                        {
                          UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
                          cancelButtonLb = this->fields.cancelButtonLb;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/,
                                                                     0LL);
                          if ( cancelButtonLb )
                          {
                            UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
                            this->fields.state = 1;
                            v31 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                            System_Action___ctor(
                              v31,
                              (Il2CppObject *)this,
                              Method_ApRecoverConfirmDlgComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
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
LABEL_30:
    sub_B52A5C(gameObject, v13);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetConfirmMessageLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *confirmMessageLb; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct ItemEntity_o *recovItemEnt; // x8

  if ( (byte_42B2D65 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1750/*"AP_RECOVER_CONFIRM_TXT"*/);
    byte_42B2D65 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    confirmMessageLb = this->fields.confirmMessageLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1750/*"AP_RECOVER_CONFIRM_TXT"*/, 0LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt
      || (v4 = System_String__Format(v4, (Il2CppObject *)recovItemEnt->fields.name, 0LL), !confirmMessageLb) )
    {
      sub_B52A5C(v4, v5);
    }
    UILabel__set_text(confirmMessageLb, v4, 0LL);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetItemDetailLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  int32_t RecoverVal; // w19
  System_String_o *v4; // x21
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  struct ItemEntity_o *recovItemEnt; // x8
  Il2CppObject *v8; // x21
  float v9; // s0
  UILabel_o *itemDetailLb; // x20
  double v11; // d0
  int v12; // w23
  System_String_o *v13; // x22
  Il2CppObject *v14; // x23
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B2D66 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_14810/*"UNIT_INFO"*/);
    sub_B52984(&StringLiteral_1675/*"ADD_RECOVER_NUM_TXT"*/);
    sub_B52984(&StringLiteral_1751/*"AP_RECOVER_NUM_TXT"*/);
    byte_42B2D66 = 1;
  }
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_14810/*"UNIT_INFO"*/, 0LL);
  v21 = 1;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v6 = System_String__Format(v4, v5, 0LL);
  recovItemEnt = this->fields.recovItemEnt;
  if ( recovItemEnt )
  {
    v8 = (Il2CppObject *)v6;
    if ( recovItemEnt->fields.type == 3 )
    {
      v9 = (float)((float)recovItemEnt->fields.value / 1000.0) * 100.0;
      itemDetailLb = this->fields.itemDetailLb;
      if ( v9 == INFINITY )
        v11 = -v9;
      else
        v11 = v9;
      v12 = (int)v11;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1751/*"AP_RECOVER_NUM_TXT"*/, 0LL);
      v21 = v12;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v20 = RecoverVal;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v16 = System_String__Format_44569380(v13, v8, v14, v15, 0LL);
      if ( !itemDetailLb )
        goto LABEL_15;
    }
    else
    {
      itemDetailLb = this->fields.itemDetailLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_1675/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
      v21 = RecoverVal;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v16 = System_String__Format_44563852(v18, v8, v19, 0LL);
      if ( !itemDetailLb )
LABEL_15:
        sub_B52A5C(v16, v17);
    }
    UILabel__set_text(itemDetailLb, v16, 0LL);
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
    sub_B52A5C(itemSlider, *(_QWORD *)&minCount);
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
  int32_t RecoverVal; // w8
  UILabel_o *resultApLb2; // x20
  int32_t v5; // w24
  __int64 *v6; // x8
  System_String_o *v7; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  UILabel_o *resultApLb1; // x20
  System_String_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct ItemEntity_o *recovItemEnt; // x8
  System_String_o *v21; // x22
  System_Int32_array **name; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x19
  __int64 v44; // x0
  __int64 v45; // x0
  int32_t v46; // [xsp+Ch] [xbp-44h] BYREF
  int32_t userCurrentAp; // [xsp+18h] [xbp-38h] BYREF
  int32_t userMaxAp; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B2D64 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&StringLiteral_1752/*"AP_RECOVER_RESULT"*/);
    sub_B52984(&StringLiteral_1756/*"AP_RECOVER_TXT"*/);
    sub_B52984(&StringLiteral_1753/*"AP_RECOVER_RESULT_OVER"*/);
    byte_42B2D64 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
    resultApLb2 = this->fields.resultApLb2;
    v5 = this->fields.userCurrentAp + this->fields.useCount * RecoverVal;
    if ( v5 <= this->fields.userMaxAp )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_1752/*"AP_RECOVER_RESULT"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_1753/*"AP_RECOVER_RESULT_OVER"*/;
    }
    v7 = LocalizationManager__Get((System_String_o *)*v6, 0LL);
    userMaxAp = this->fields.userMaxAp;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userMaxAp);
    userCurrentAp = v5;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
    v10 = System_String__Format_44563852(v7, v8, v9, 0LL);
    if ( !resultApLb2 )
      goto LABEL_35;
    UILabel__set_text(resultApLb2, v10, 0LL);
    resultApLb1 = this->fields.resultApLb1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1756/*"AP_RECOVER_TXT"*/, 0LL);
    v10 = (System_String_o *)sub_B5299C(object___TypeInfo, 4LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt )
      goto LABEL_35;
    v21 = v10;
    if ( !v10 )
      goto LABEL_35;
    name = (System_Int32_array **)recovItemEnt->fields.name;
    if ( !name || (v10 = (System_String_o *)sub_B52A44(name, v10->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v21[1].klass) )
        goto LABEL_34;
      v21[1].monitor = name;
      sub_B52920((BattleServantConfConponent_o *)&v21[1].monitor, name, v14, v15, v16, v17, v18, v19);
      userMaxAp = this->fields.useCount;
      v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &userMaxAp);
      v29 = (System_Int32_array **)v10;
      if ( !v10 || (v10 = (System_String_o *)sub_B52A44(v10, v21->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v21[1].klass) <= 1 )
          goto LABEL_34;
        v21[1].fields = (System_String_Fields)v29;
        sub_B52920((BattleServantConfConponent_o *)&v21[1].fields, v29, v23, v24, v25, v26, v27, v28);
        userCurrentAp = this->fields.userCurrentAp;
        v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
        v36 = (System_Int32_array **)v10;
        if ( !v10 || (v10 = (System_String_o *)sub_B52A44(v10, v21->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v21[1].klass) <= 2 )
            goto LABEL_34;
          v21[2].klass = (System_String_c *)v36;
          sub_B52920((BattleServantConfConponent_o *)&v21[2], v36, v30, v31, v32, v33, v34, v35);
          v46 = this->fields.userMaxAp;
          v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
          v43 = (System_Int32_array **)v10;
          if ( !v10 || (v10 = (System_String_o *)sub_B52A44(v10, v21->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v21[1].klass) > 3 )
            {
              v21[2].monitor = v43;
              sub_B52920((BattleServantConfConponent_o *)&v21[2].monitor, v43, v37, v38, v39, v40, v41, v42);
              v10 = System_String__Format_44647040(v13, (System_Object_array *)v21, 0LL);
              if ( resultApLb1 )
              {
                UILabel__set_text(resultApLb1, v10, 0LL);
                return;
              }
LABEL_35:
              sub_B52A5C(v10, v11);
            }
LABEL_34:
            v44 = sub_B52A88(v10);
            sub_B52A28(v44, 0LL);
          }
        }
      }
    }
    v45 = sub_B52A7C(v10);
    sub_B52A28(v45, 0LL);
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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B2D6C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2D6C = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}