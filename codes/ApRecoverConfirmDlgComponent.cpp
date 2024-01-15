void __fastcall ApRecoverConfirmDlgComponent___ctor(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FC9CA & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FC9CA = 1;
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
    sub_B16F98(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FC9C5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ApRecoverConfirmDlgComponent_EndClose__, v10);
    byte_40FC9C5 = 1;
  }
  this->fields.onClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ApRecoverConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ApRecoverConfirmDlgComponent__EndClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  ApRecoverConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ApRecoverConfirmDlgComponent__CallOnClose(this, v4);
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
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  int num; // w22
  UILabel_o *currentNumLb; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int32_t userMaxAp; // w8
  int32_t userCurrentAp; // w9
  int v17; // w10
  int v18; // w8
  int v20; // [xsp+4h] [xbp-2Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC9C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_23433/*"{0:N0}"*/, v6);
    byte_40FC9C4 = 1;
  }
  entity = 0LL;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, this->fields.recoverItemId, 0LL);
  if ( entity )
  {
    num = entity->fields.num;
    currentNumLb = this->fields.currentNumLb;
    v20 = num;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v14 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v13, 0LL);
    if ( currentNumLb )
    {
      UILabel__set_text(currentNumLb, v14, 0LL);
      goto LABEL_12;
    }
LABEL_19:
    sub_B170D4();
  }
  num = 0;
LABEL_12:
  userMaxAp = this->fields.userMaxAp;
  userCurrentAp = this->fields.userCurrentAp;
  v17 = (userMaxAp - userCurrentAp) / RecoverVal;
  if ( userMaxAp <= userCurrentAp + v17 * RecoverVal )
    v18 = (userMaxAp - userCurrentAp) / RecoverVal;
  else
    v18 = v17 + 1;
  if ( v18 <= num )
    return v18;
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  if ( (byte_40FC9C8 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, count);
    byte_40FC9C8 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( max * v5 > UserItemMax )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
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

  if ( (byte_40FC9C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__int__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FC9C7 = 1;
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
      sub_B170D4();
    UISliderWithButton__grayMode(itemSlider, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (BattleServantConfConponent_o *)&this->fields.clickFunc;
    v5 = clickFunc;
    if ( clickFunc )
    {
      System_Action_bool__int___Invoke(v5, 0, 0, (const MethodInfo_24C2A28 *)Method_System_Action_bool__int__Invoke__);
      p_clickFunc->klass = 0LL;
      sub_B16F98(p_clickFunc, 0LL, v8, v9, v10, v11, v12, v13);
    }
  }
}


void __fastcall ApRecoverConfirmDlgComponent__OnClickDecide(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UISliderWithButton_o *itemSlider; // x8
  System_Action_bool__int__o *clickFunc; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FC9C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__int__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FC9C6 = 1;
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
      sub_B170D4();
    itemSlider->fields.isTouchEnable = 0;
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      System_Action_bool__int___Invoke(
        clickFunc,
        1,
        this->fields.useCount,
        (const MethodInfo_24C2A28 *)Method_System_Action_bool__int__Invoke__);
      this->fields.clickFunc = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.clickFunc, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v28; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x0
  struct ItemEntity_o *recovItemEnt; // x8
  ItemIconComponent_o *itemIcon; // x0
  struct ItemEntity_o *v32; // x8
  UILabel_o *itemNameLb; // x0
  const MethodInfo *v34; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v36; // x21
  const MethodInfo *v37; // x1
  int32_t ItemSliderMax; // w0
  const MethodInfo *v39; // x2
  int32_t ItemSliderMin; // w0
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  UILabel_o *titleLb; // x20
  System_String_o *v45; // x0
  UILabel_o *currentInfoLb; // x20
  System_String_o *v47; // x0
  UILabel_o *maxLabel; // x20
  System_String_o *v49; // x0
  UILabel_o *minLabel; // x20
  System_String_o *v51; // x0
  UILabel_o *decideButtonLb; // x20
  System_String_o *v53; // x0
  UILabel_o *cancelButtonLb; // x20
  System_String_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Action_o *v60; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC9C0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&recoverId);
    sub_B16FFC(&Method_ApRecoverConfirmDlgComponent_EndOpen__, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_RecoverMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&StringLiteral_1737/*"AP_RECOVER_TITLE"*/, v19);
    sub_B16FFC(&StringLiteral_3440/*"CURRENT_NUM_TXT"*/, v20);
    sub_B16FFC(&StringLiteral_12048/*"SHOP_BULK_WINDOW_MIN_LABEL"*/, v21);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_B16FFC(&StringLiteral_12047/*"SHOP_BULK_WINDOW_MAX_LABEL"*/, v24);
    byte_40FC9C0 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    this->fields.clickFunc = clickFunc;
    sub_B16F98(
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_RecoverMaster___);
        if ( MasterData_WarQuestSelectionMaster )
        {
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 recoverId,
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__) )
          {
            if ( !entity )
              goto LABEL_30;
            this->fields.recoverItemId = (int32_t)entity->fields.name;
          }
          v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( v28 )
          {
            v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)v28,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( v29 )
            {
              if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     v29,
                     (WarEntity_o **)&this->fields.recovItemEnt,
                     this->fields.recoverItemId,
                     (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
              {
                recovItemEnt = this->fields.recovItemEnt;
                if ( !recovItemEnt )
                  goto LABEL_30;
                itemIcon = this->fields.itemIcon;
                if ( !itemIcon )
                  goto LABEL_30;
                ItemIconComponent__SetItemImage_28925112(
                  itemIcon,
                  recovItemEnt->fields.imageId,
                  recovItemEnt->fields.bgImageId,
                  recovItemEnt->fields.type,
                  0,
                  0LL);
                v32 = this->fields.recovItemEnt;
                if ( !v32 )
                  goto LABEL_30;
                itemNameLb = this->fields.itemNameLb;
                if ( !itemNameLb )
                  goto LABEL_30;
                UILabel__set_text(itemNameLb, v32->fields.name, 0LL);
                ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v34);
              }
              SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
              if ( SelfUserGame )
              {
                v36 = SelfUserGame;
                this->fields.userCurrentAp = UserGameEntity__getAct(SelfUserGame, 0LL);
                this->fields.userMaxAp = v36->fields.actMax;
                ItemSliderMax = ApRecoverConfirmDlgComponent__GetItemSliderMax(this, v37);
                this->fields.maxCount = ItemSliderMax;
                this->fields.useCount = ItemSliderMax;
                ItemSliderMin = ApRecoverConfirmDlgComponent__GetItemSliderMin(this, needAp, v39);
                ApRecoverConfirmDlgComponent__SetItemSlider(this, ItemSliderMin, v41);
                ApRecoverConfirmDlgComponent__SetResultApLb(this, v42);
                ApRecoverConfirmDlgComponent__SetItemDetailLb(this, v43);
                titleLb = this->fields.titleLb;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v45 = LocalizationManager__Get((System_String_o *)StringLiteral_1737/*"AP_RECOVER_TITLE"*/, 0LL);
                if ( titleLb )
                {
                  UILabel__set_text(titleLb, v45, 0LL);
                  currentInfoLb = this->fields.currentInfoLb;
                  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3440/*"CURRENT_NUM_TXT"*/, 0LL);
                  if ( currentInfoLb )
                  {
                    UILabel__set_text(currentInfoLb, v47, 0LL);
                    maxLabel = this->fields.maxLabel;
                    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12047/*"SHOP_BULK_WINDOW_MAX_LABEL"*/, 0LL);
                    if ( maxLabel )
                    {
                      UILabel__set_text(maxLabel, v49, 0LL);
                      minLabel = this->fields.minLabel;
                      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12048/*"SHOP_BULK_WINDOW_MIN_LABEL"*/, 0LL);
                      if ( minLabel )
                      {
                        UILabel__set_text(minLabel, v51, 0LL);
                        decideButtonLb = this->fields.decideButtonLb;
                        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
                        if ( decideButtonLb )
                        {
                          UILabel__set_text(decideButtonLb, v53, 0LL);
                          cancelButtonLb = this->fields.cancelButtonLb;
                          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                          if ( cancelButtonLb )
                          {
                            UILabel__set_text(cancelButtonLb, v55, 0LL);
                            this->fields.state = 1;
                            v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
                            System_Action___ctor(
                              v60,
                              (Il2CppObject *)this,
                              Method_ApRecoverConfirmDlgComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
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
    sub_B170D4();
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetConfirmMessageLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *confirmMessageLb; // x20
  System_String_o *v5; // x0
  struct ItemEntity_o *recovItemEnt; // x8
  System_String_o *v7; // x0

  if ( (byte_40FC9C2 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1732/*"AP_RECOVER_CONFIRM_TXT"*/, v3);
    byte_40FC9C2 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    confirmMessageLb = this->fields.confirmMessageLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1732/*"AP_RECOVER_CONFIRM_TXT"*/, 0LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt
      || (v7 = System_String__Format(v5, (Il2CppObject *)recovItemEnt->fields.name, 0LL), !confirmMessageLb) )
    {
      sub_B170D4();
    }
    UILabel__set_text(confirmMessageLb, v7, 0LL);
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
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  struct ItemEntity_o *recovItemEnt; // x8
  Il2CppObject *v12; // x21
  float v13; // s0
  UILabel_o *itemDetailLb; // x20
  double v15; // d0
  int v16; // w23
  System_String_o *v17; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC9C3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_14652/*"UNIT_INFO"*/, v4);
    sub_B16FFC(&StringLiteral_1657/*"ADD_RECOVER_NUM_TXT"*/, v5);
    sub_B16FFC(&StringLiteral_1733/*"AP_RECOVER_NUM_TXT"*/, v6);
    byte_40FC9C3 = 1;
  }
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14652/*"UNIT_INFO"*/, 0LL);
  v24 = 1;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v10 = System_String__Format(v8, v9, 0LL);
  recovItemEnt = this->fields.recovItemEnt;
  if ( recovItemEnt )
  {
    v12 = (Il2CppObject *)v10;
    if ( recovItemEnt->fields.type == 3 )
    {
      v13 = (float)((float)recovItemEnt->fields.value / 1000.0) * 100.0;
      itemDetailLb = this->fields.itemDetailLb;
      if ( v13 == INFINITY )
        v15 = -v13;
      else
        v15 = v13;
      v16 = (int)v15;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_1733/*"AP_RECOVER_NUM_TXT"*/, 0LL);
      v24 = v16;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v23 = RecoverVal;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      v20 = System_String__Format_43744796(v17, v12, v18, v19, 0LL);
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
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_1657/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
      v24 = RecoverVal;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v20 = System_String__Format_43739268(v21, v12, v22, 0LL);
      if ( !itemDetailLb )
LABEL_15:
        sub_B170D4();
    }
    UILabel__set_text(itemDetailLb, v20, 0LL);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetItemSlider(
        ApRecoverConfirmDlgComponent_o *this,
        int32_t minCount,
        const MethodInfo *method)
{
  int32_t maxCount; // w8
  UISliderWithButton_o *itemSlider; // x0
  UISliderWithButton_o *v6; // x0
  int32_t useCount; // w1
  int32_t v8; // w3

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
      v6 = this->fields.itemSlider;
      if ( v6 )
      {
        useCount = this->fields.useCount;
        v8 = minCount;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  if ( !itemSlider )
    goto LABEL_12;
  UISliderWithButton__SetGray(itemSlider, 0LL);
  v6 = this->fields.itemSlider;
  if ( !v6 )
    goto LABEL_12;
  useCount = this->fields.useCount;
  v8 = 1;
LABEL_11:
  UISliderWithButton__init(v6, useCount, 0, v8, 0LL);
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
  int32_t RecoverVal; // w8
  UILabel_o *resultApLb2; // x20
  int32_t v10; // w24
  __int64 *v11; // x8
  System_String_o *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UILabel_o *resultApLb1; // x20
  System_String_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ItemEntity_o *recovItemEnt; // x8
  __int64 v28; // x22
  System_Int32_array **name; // x23
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x23
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x23
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x19
  System_String_o *v48; // x0
  int32_t v49; // [xsp+Ch] [xbp-44h] BYREF
  int32_t userCurrentAp; // [xsp+18h] [xbp-38h] BYREF
  int32_t userMaxAp; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FC9C1 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&object___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1734/*"AP_RECOVER_RESULT"*/, v5);
    sub_B16FFC(&StringLiteral_1738/*"AP_RECOVER_TXT"*/, v6);
    sub_B16FFC(&StringLiteral_1735/*"AP_RECOVER_RESULT_OVER"*/, v7);
    byte_40FC9C1 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
    resultApLb2 = this->fields.resultApLb2;
    v10 = this->fields.userCurrentAp + this->fields.useCount * RecoverVal;
    if ( v10 <= this->fields.userMaxAp )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_1734/*"AP_RECOVER_RESULT"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_1735/*"AP_RECOVER_RESULT_OVER"*/;
    }
    v12 = LocalizationManager__Get((System_String_o *)*v11, 0LL);
    userMaxAp = this->fields.userMaxAp;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userMaxAp);
    userCurrentAp = v10;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
    v15 = System_String__Format_43739268(v12, v13, v14, 0LL);
    if ( !resultApLb2 )
      goto LABEL_35;
    UILabel__set_text(resultApLb2, v15, 0LL);
    resultApLb1 = this->fields.resultApLb1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_1738/*"AP_RECOVER_TXT"*/, 0LL);
    v19 = sub_B17014(object___TypeInfo, 4LL, v18);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt )
      goto LABEL_35;
    v28 = v19;
    if ( !v19 )
      goto LABEL_35;
    name = (System_Int32_array **)recovItemEnt->fields.name;
    if ( !name || (v19 = sub_B170BC(name, *(_QWORD *)(*(_QWORD *)v19 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_34;
      *(_QWORD *)(v28 + 32) = name;
      sub_B16F98((BattleServantConfConponent_o *)(v28 + 32), name, v21, v22, v23, v24, v25, v26);
      userMaxAp = this->fields.useCount;
      v19 = j_il2cpp_value_box_0(int_TypeInfo, &userMaxAp);
      v35 = (System_Int32_array **)v19;
      if ( !v19 || (v19 = sub_B170BC(v19, *(_QWORD *)(*(_QWORD *)v28 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v28 + 24) <= 1u )
          goto LABEL_34;
        *(_QWORD *)(v28 + 40) = v35;
        sub_B16F98((BattleServantConfConponent_o *)(v28 + 40), v35, v21, v30, v31, v32, v33, v34);
        userCurrentAp = this->fields.userCurrentAp;
        v19 = j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
        v41 = (System_Int32_array **)v19;
        if ( !v19 || (v19 = sub_B170BC(v19, *(_QWORD *)(*(_QWORD *)v28 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v28 + 24) <= 2u )
            goto LABEL_34;
          *(_QWORD *)(v28 + 48) = v41;
          sub_B16F98((BattleServantConfConponent_o *)(v28 + 48), v41, v21, v36, v37, v38, v39, v40);
          v49 = this->fields.userMaxAp;
          v19 = j_il2cpp_value_box_0(int_TypeInfo, &v49);
          v47 = (System_Int32_array **)v19;
          if ( !v19 || (v19 = sub_B170BC(v19, *(_QWORD *)(*(_QWORD *)v28 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v28 + 24) > 3u )
            {
              *(_QWORD *)(v28 + 56) = v47;
              sub_B16F98((BattleServantConfConponent_o *)(v28 + 56), v47, v21, v42, v43, v44, v45, v46);
              v48 = System_String__Format_43822456(v17, (System_Object_array *)v28, 0LL);
              if ( resultApLb1 )
              {
                UILabel__set_text(resultApLb1, v48, 0LL);
                return;
              }
LABEL_35:
              sub_B170D4();
            }
LABEL_34:
            sub_B17100(v19, v20, v21);
            sub_B170A0();
          }
        }
      }
    }
    sub_B170F4(v19);
    sub_B170A0();
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
    sub_B170D4();
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FC9C9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC9C9 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}