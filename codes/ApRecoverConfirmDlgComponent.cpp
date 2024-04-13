void __fastcall ApRecoverConfirmDlgComponent___ctor(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB74F & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB74F = 1;
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
    sub_B5D560(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EB74A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ApRecoverConfirmDlgComponent_EndClose__, v10, v11, v12);
    byte_42EB74A = 1;
  }
  this->fields.onClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ApRecoverConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall ApRecoverConfirmDlgComponent__EndClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ApRecoverConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t RecoverVal; // w20
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int num; // w22
  UILabel_o *currentNumLb; // x21
  Il2CppObject *v23; // x0
  int32_t userMaxAp; // w8
  int32_t userCurrentAp; // w9
  int v26; // w10
  int v27; // w8
  int v29; // [xsp+4h] [xbp-2Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB749 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v14, v15, v16);
    byte_42EB749 = 1;
  }
  entity = 0LL;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    v29 = num;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v23, 0LL);
    if ( currentNumLb )
    {
      UILabel__set_text(currentNumLb, (System_String_o *)Instance, 0LL);
      goto LABEL_12;
    }
LABEL_19:
    sub_B5D69C(Instance, v19);
  }
  num = 0;
LABEL_12:
  userMaxAp = this->fields.userMaxAp;
  userCurrentAp = this->fields.userCurrentAp;
  v26 = (userMaxAp - userCurrentAp) / RecoverVal;
  if ( userMaxAp <= userCurrentAp + v26 * RecoverVal )
    v27 = (userMaxAp - userCurrentAp) / RecoverVal;
  else
    v27 = v26 + 1;
  if ( v27 <= num )
    return v27;
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
    sub_B5D69C(0LL, v4);
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
  if ( (byte_42EB74D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, count, max, method);
    byte_42EB74D = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UISliderWithButton_o *itemSlider; // x0
  System_Action_bool__int__o *v10; // x0
  BattleServantConfConponent_o *p_clickFunc; // x19
  struct System_Action_bool__int__o *clickFunc; // t1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EB74C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__int__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EB74C = 1;
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
      sub_B5D69C(0LL, v8);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (BattleServantConfConponent_o *)&this->fields.clickFunc;
    v10 = clickFunc;
    if ( clickFunc )
    {
      System_Action_bool__int___Invoke(v10, 0, 0, (const MethodInfo_259709C *)Method_System_Action_bool__int__Invoke__);
      p_clickFunc->klass = 0LL;
      sub_B5D560(p_clickFunc, 0LL, v13, v14, v15, v16, v17, v18);
    }
  }
}


void __fastcall ApRecoverConfirmDlgComponent__OnClickDecide(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  struct UISliderWithButton_o *itemSlider; // x8
  System_Action_bool__int__o *clickFunc; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EB74B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__int__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EB74B = 1;
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
      sub_B5D69C(v8, v9);
    itemSlider->fields.isTouchEnable = 0;
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
    {
      System_Action_bool__int___Invoke(
        clickFunc,
        1,
        this->fields.useCount,
        (const MethodInfo_259709C *)Method_System_Action_bool__int__Invoke__);
      this->fields.clickFunc = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.clickFunc, 0LL, v12, v13, v14, v15, v16, v17);
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v52; // x1
  struct ItemEntity_o *recovItemEnt; // x8
  struct ItemEntity_o *v54; // x8
  const MethodInfo *v55; // x1
  UnityEngine_GameObject_o *v56; // x21
  const MethodInfo *v57; // x1
  int32_t ItemSliderMax; // w0
  const MethodInfo *v59; // x2
  int32_t ItemSliderMin; // w0
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  UILabel_o *titleLb; // x20
  UILabel_o *currentInfoLb; // x20
  UILabel_o *maxLabel; // x20
  UILabel_o *minLabel; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v70; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB745 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, recoverId, needAp, clickFunc);
    sub_B5D5C4(&Method_ApRecoverConfirmDlgComponent_EndOpen__, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_RecoverMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1760/*"AP_RECOVER_TITLE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_3519/*"CURRENT_NUM_TXT"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12246/*"SHOP_BULK_WINDOW_MIN_LABEL"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12245/*"SHOP_BULK_WINDOW_MAX_LABEL"*/, v48, v49, v50);
    byte_42EB745 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    this->fields.clickFunc = clickFunc;
    sub_B5D560(
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
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_RecoverMaster___);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                     &entity,
                                                     recoverId,
                                                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_30;
            this->fields.recoverItemId = (int32_t)entity->fields.name;
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)gameObject,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                         (WarEntity_o **)&this->fields.recovItemEnt,
                                                         this->fields.recoverItemId,
                                                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                recovItemEnt = this->fields.recovItemEnt;
                if ( !recovItemEnt )
                  goto LABEL_30;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                if ( !gameObject )
                  goto LABEL_30;
                ItemIconComponent__SetItemImage_28497040(
                  (ItemIconComponent_o *)gameObject,
                  recovItemEnt->fields.imageId,
                  recovItemEnt->fields.bgImageId,
                  recovItemEnt->fields.type,
                  0,
                  0LL);
                v54 = this->fields.recovItemEnt;
                if ( !v54 )
                  goto LABEL_30;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
                if ( !gameObject )
                  goto LABEL_30;
                UILabel__set_text((UILabel_o *)gameObject, v54->fields.name, 0LL);
                ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v55);
              }
              gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( gameObject )
              {
                v56 = gameObject;
                this->fields.userCurrentAp = UserGameEntity__getAct((UserGameEntity_o *)gameObject, 0LL);
                this->fields.userMaxAp = v56[1].fields.m_CachedPtr;
                ItemSliderMax = ApRecoverConfirmDlgComponent__GetItemSliderMax(this, v57);
                this->fields.maxCount = ItemSliderMax;
                this->fields.useCount = ItemSliderMax;
                ItemSliderMin = ApRecoverConfirmDlgComponent__GetItemSliderMin(this, needAp, v59);
                ApRecoverConfirmDlgComponent__SetItemSlider(this, ItemSliderMin, v61);
                ApRecoverConfirmDlgComponent__SetResultApLb(this, v62);
                ApRecoverConfirmDlgComponent__SetItemDetailLb(this, v63);
                titleLb = this->fields.titleLb;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_1760/*"AP_RECOVER_TITLE"*/,
                                                           0LL);
                if ( titleLb )
                {
                  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
                  currentInfoLb = this->fields.currentInfoLb;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3519/*"CURRENT_NUM_TXT"*/,
                                                             0LL);
                  if ( currentInfoLb )
                  {
                    UILabel__set_text(currentInfoLb, (System_String_o *)gameObject, 0LL);
                    maxLabel = this->fields.maxLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12245/*"SHOP_BULK_WINDOW_MAX_LABEL"*/,
                                                               0LL);
                    if ( maxLabel )
                    {
                      UILabel__set_text(maxLabel, (System_String_o *)gameObject, 0LL);
                      minLabel = this->fields.minLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12246/*"SHOP_BULK_WINDOW_MIN_LABEL"*/,
                                                                 0LL);
                      if ( minLabel )
                      {
                        UILabel__set_text(minLabel, (System_String_o *)gameObject, 0LL);
                        decideButtonLb = this->fields.decideButtonLb;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/,
                                                                   0LL);
                        if ( decideButtonLb )
                        {
                          UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
                          cancelButtonLb = this->fields.cancelButtonLb;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/,
                                                                     0LL);
                          if ( cancelButtonLb )
                          {
                            UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
                            this->fields.state = 1;
                            v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                            System_Action___ctor(
                              v70,
                              (Il2CppObject *)this,
                              Method_ApRecoverConfirmDlgComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
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
    sub_B5D69C(gameObject, v52);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetConfirmMessageLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *confirmMessageLb; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  struct ItemEntity_o *recovItemEnt; // x8

  if ( (byte_42EB747 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1755/*"AP_RECOVER_CONFIRM_TXT"*/, v5, v6, v7);
    byte_42EB747 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    confirmMessageLb = this->fields.confirmMessageLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_1755/*"AP_RECOVER_CONFIRM_TXT"*/, 0LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt
      || (v9 = System_String__Format(v9, (Il2CppObject *)recovItemEnt->fields.name, 0LL), !confirmMessageLb) )
    {
      sub_B5D69C(v9, v10);
    }
    UILabel__set_text(confirmMessageLb, v9, 0LL);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetItemDetailLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t RecoverVal; // w19
  System_String_o *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  struct ItemEntity_o *recovItemEnt; // x8
  Il2CppObject *v22; // x21
  float v23; // s0
  UILabel_o *itemDetailLb; // x20
  double v25; // d0
  int v26; // w23
  System_String_o *v27; // x22
  Il2CppObject *v28; // x23
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  int32_t v34; // [xsp+8h] [xbp-38h] BYREF
  int v35; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EB748 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_14869/*"UNIT_INFO"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1680/*"ADD_RECOVER_NUM_TXT"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1756/*"AP_RECOVER_NUM_TXT"*/, v14, v15, v16);
    byte_42EB748 = 1;
  }
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_14869/*"UNIT_INFO"*/, 0LL);
  v35 = 1;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  v20 = System_String__Format(v18, v19, 0LL);
  recovItemEnt = this->fields.recovItemEnt;
  if ( recovItemEnt )
  {
    v22 = (Il2CppObject *)v20;
    if ( recovItemEnt->fields.type == 3 )
    {
      v23 = (float)((float)recovItemEnt->fields.value / 1000.0) * 100.0;
      itemDetailLb = this->fields.itemDetailLb;
      if ( v23 == INFINITY )
        v25 = -v23;
      else
        v25 = v23;
      v26 = (int)v25;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_1756/*"AP_RECOVER_NUM_TXT"*/, 0LL);
      v35 = v26;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
      v34 = RecoverVal;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      v30 = System_String__Format_44578852(v27, v22, v28, v29, 0LL);
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
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_1680/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
      v35 = RecoverVal;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
      v30 = System_String__Format_44573324(v32, v22, v33, 0LL);
      if ( !itemDetailLb )
LABEL_15:
        sub_B5D69C(v30, v31);
    }
    UILabel__set_text(itemDetailLb, v30, 0LL);
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
    sub_B5D69C(itemSlider, *(_QWORD *)&minCount);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t RecoverVal; // w8
  UILabel_o *resultApLb2; // x20
  int32_t v22; // w24
  __int64 *v23; // x8
  System_String_o *v24; // x21
  Il2CppObject *v25; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  UILabel_o *resultApLb1; // x20
  System_String_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct ItemEntity_o *recovItemEnt; // x8
  System_String_o *v38; // x22
  System_Int32_array **name; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x19
  __int64 v61; // x0
  __int64 v62; // x0
  int32_t v63; // [xsp+Ch] [xbp-44h] BYREF
  int32_t userCurrentAp; // [xsp+18h] [xbp-38h] BYREF
  int32_t userMaxAp; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42EB746 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&object___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1757/*"AP_RECOVER_RESULT"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1761/*"AP_RECOVER_TXT"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1758/*"AP_RECOVER_RESULT_OVER"*/, v17, v18, v19);
    byte_42EB746 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
    resultApLb2 = this->fields.resultApLb2;
    v22 = this->fields.userCurrentAp + this->fields.useCount * RecoverVal;
    if ( v22 <= this->fields.userMaxAp )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = &StringLiteral_1757/*"AP_RECOVER_RESULT"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = &StringLiteral_1758/*"AP_RECOVER_RESULT_OVER"*/;
    }
    v24 = LocalizationManager__Get((System_String_o *)*v23, 0LL);
    userMaxAp = this->fields.userMaxAp;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userMaxAp);
    userCurrentAp = v22;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
    v27 = System_String__Format_44573324(v24, v25, v26, 0LL);
    if ( !resultApLb2 )
      goto LABEL_35;
    UILabel__set_text(resultApLb2, v27, 0LL);
    resultApLb1 = this->fields.resultApLb1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_1761/*"AP_RECOVER_TXT"*/, 0LL);
    v27 = (System_String_o *)sub_B5D5DC(object___TypeInfo, 4LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt )
      goto LABEL_35;
    v38 = v27;
    if ( !v27 )
      goto LABEL_35;
    name = (System_Int32_array **)recovItemEnt->fields.name;
    if ( !name || (v27 = (System_String_o *)sub_B5D684(name, v27->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v38[1].klass) )
        goto LABEL_34;
      v38[1].monitor = name;
      sub_B5D560((BattleServantConfConponent_o *)&v38[1].monitor, name, v31, v32, v33, v34, v35, v36);
      userMaxAp = this->fields.useCount;
      v27 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &userMaxAp);
      v46 = (System_Int32_array **)v27;
      if ( !v27 || (v27 = (System_String_o *)sub_B5D684(v27, v38->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v38[1].klass) <= 1 )
          goto LABEL_34;
        v38[1].fields = (System_String_Fields)v46;
        sub_B5D560((BattleServantConfConponent_o *)&v38[1].fields, v46, v40, v41, v42, v43, v44, v45);
        userCurrentAp = this->fields.userCurrentAp;
        v27 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
        v53 = (System_Int32_array **)v27;
        if ( !v27 || (v27 = (System_String_o *)sub_B5D684(v27, v38->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v38[1].klass) <= 2 )
            goto LABEL_34;
          v38[2].klass = (System_String_c *)v53;
          sub_B5D560((BattleServantConfConponent_o *)&v38[2], v53, v47, v48, v49, v50, v51, v52);
          v63 = this->fields.userMaxAp;
          v27 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
          v60 = (System_Int32_array **)v27;
          if ( !v27 || (v27 = (System_String_o *)sub_B5D684(v27, v38->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v38[1].klass) > 3 )
            {
              v38[2].monitor = v60;
              sub_B5D560((BattleServantConfConponent_o *)&v38[2].monitor, v60, v54, v55, v56, v57, v58, v59);
              v27 = System_String__Format_44656512(v30, (System_Object_array *)v38, 0LL);
              if ( resultApLb1 )
              {
                UILabel__set_text(resultApLb1, v27, 0LL);
                return;
              }
LABEL_35:
              sub_B5D69C(v27, v28);
            }
LABEL_34:
            v61 = sub_B5D6C8(v27);
            sub_B5D668(v61, 0LL);
          }
        }
      }
    }
    v62 = sub_B5D6BC(v27);
    sub_B5D668(v62, 0LL);
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
    sub_B5D69C(0LL, method);
  v4 = (ApRecoverConfirmDlgComponent_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  this->fields.useCount = ApRecoverConfirmDlgComponent__ItemMaxOverCheck(v4, (int)v4, this->fields.maxCount, v5);
  ApRecoverConfirmDlgComponent__SetResultApLb(this, v6);
  ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v7);
}


UnityEngine_GameObject_o *__fastcall ApRecoverConfirmDlgComponent__get_closeBtnObject(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EB74E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB74E = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}