void __fastcall ApRecoverConfirmDlgComponent___ctor(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19D3E & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19D3E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onClose; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (PartyOrganizationUtility_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1BCA784(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__Close(
        ApRecoverConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B19D39 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ApRecoverConfirmDlgComponent_EndClose__, v10, v11);
    byte_4B19D39 = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ApRecoverConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ApRecoverConfirmDlgComponent__EndClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ApRecoverConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t RecoverVal; // w20
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x21
  int num; // w22
  UILabel_o *currentNumLb; // x21
  Il2CppObject *v19; // x0
  int32_t userMaxAp; // w8
  int32_t userCurrentAp; // w9
  int v22; // w10
  int v23; // w8
  int v25; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19D38 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v10, v11);
    byte_4B19D38 = 1;
  }
  entity = 0LL;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_18;
  UserItemMaster__TryGetEntity(
    (UserItemMaster_o *)MasterData_object,
    &entity,
    (int64_t)Instance,
    this->fields.recoverItemId,
    0LL);
  if ( entity )
  {
    num = entity->fields.num;
    currentNumLb = this->fields.currentNumLb;
    v25 = num;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v19, 0LL);
    if ( currentNumLb )
    {
      UILabel__set_text(currentNumLb, (System_String_o *)Instance, 0LL);
      goto LABEL_11;
    }
LABEL_18:
    sub_1BCAA3C(Instance, v14);
  }
  num = 0;
LABEL_11:
  userMaxAp = this->fields.userMaxAp;
  userCurrentAp = this->fields.userCurrentAp;
  v22 = (userMaxAp - userCurrentAp) / RecoverVal;
  if ( userMaxAp <= userCurrentAp + v22 * RecoverVal )
    v23 = (userMaxAp - userCurrentAp) / RecoverVal;
  else
    v23 = v22 + 1;
  if ( v23 <= num )
    return v23;
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
  __int64 v4; // x2
  float v5; // s8
  float v6; // s8
  int32_t v7; // w9

  if ( needAp < 1 )
    return 1;
  v5 = (float)(needAp - this->fields.userCurrentAp)
     / (float)ApRecoverConfirmDlgComponent__GetRecoverVal(this, *(const MethodInfo **)&needAp);
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v3, v4);
    byte_4B1103A = 1;
  }
  v6 = fmaxf(v5, 1.0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v7 = vcvtps_s32_f32(v6);
  if ( ceilf(v6) == INFINITY )
    return 0x80000000;
  else
    return v7;
}


int32_t __fastcall ApRecoverConfirmDlgComponent__GetRecoverVal(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ItemEntity_o *recovItemEnt; // x9
  int32_t result; // w0
  float v6; // s8
  float userMaxAp; // s9
  float v8; // s8
  int32_t v9; // w9

  recovItemEnt = this->fields.recovItemEnt;
  if ( !recovItemEnt )
    return 1;
  result = recovItemEnt->fields.value;
  if ( recovItemEnt->fields.type == 3 )
  {
    v6 = (float)result / 1000.0;
    userMaxAp = (float)this->fields.userMaxAp;
    if ( !byte_4B1103A )
    {
      sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
      byte_4B1103A = 1;
    }
    v8 = v6 * userMaxAp;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    v9 = vcvtps_s32_f32(v8);
    if ( ceilf(v8) == INFINITY )
      return 0x80000000;
    else
      return v9;
  }
  return result;
}


void __fastcall ApRecoverConfirmDlgComponent__Init(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
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
  if ( (byte_4B19D3C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, count, max);
    byte_4B19D3C = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, count);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( max * v5 > UserItemMax )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6, count);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UISliderWithButton_o *itemSlider; // x0
  struct System_Action_bool__int__o *v8; // x8
  PartyOrganizationUtility_o *p_clickFunc; // x19
  struct System_Action_bool__int__o *clickFunc; // t1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19D3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ApRecoverConfirmDlgComponent_OnClickCancel__, method, v2);
    byte_4B19D3B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ApRecoverConfirmDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ApRecoverConfirmDlgComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BCAA3C(0LL, v6);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (PartyOrganizationUtility_o *)&this->fields.clickFunc;
    v8 = clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v8->fields.m_target)(
        v8->fields.original_method_info,
        0LL,
        0LL,
        *(_QWORD *)&v8->fields.extra_arg);
      p_clickFunc->klass = 0LL;
      sub_1BCA784(p_clickFunc, 0LL, v11, v12, v13, v14, v15, v16);
    }
  }
}


void __fastcall ApRecoverConfirmDlgComponent__OnClickDecide(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct UISliderWithButton_o *itemSlider; // x8
  struct System_Action_bool__int__o *clickFunc; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B19D3A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ApRecoverConfirmDlgComponent_OnClickDecide__, method, v2);
    byte_4B19D3A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ApRecoverConfirmDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ApRecoverConfirmDlgComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BCAA3C(v6, v7);
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
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickFunc, 0LL, v10, v11, v12, v13, v14, v15);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1
  struct ItemEntity_o *recovItemEnt; // x8
  struct ItemEntity_o *v41; // x8
  const MethodInfo *v42; // x1
  UnityEngine_GameObject_o *v43; // x21
  const MethodInfo *v44; // x1
  int32_t ItemSliderMax; // w0
  const MethodInfo *v46; // x2
  int32_t ItemSliderMin; // w0
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  __int64 v51; // x1
  UILabel_o *titleLb; // x20
  UILabel_o *currentInfoLb; // x20
  UILabel_o *maxLabel; // x20
  UILabel_o *minLabel; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19D34 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&recoverId, *(_QWORD *)&needAp);
    sub_1BCA7E0(&Method_ApRecoverConfirmDlgComponent_EndOpen__, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_RecoverMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&StringLiteral_2150/*"AP_RECOVER_TITLE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_4015/*"CURRENT_NUM_TXT"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_12130/*"SHOP_BULK_WINDOW_MIN_LABEL"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_12129/*"SHOP_BULK_WINDOW_MAX_LABEL"*/, v36, v37);
    byte_4B19D34 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    this->fields.clickFunc = clickFunc;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.clickFunc,
      (int64_t)clickFunc,
      *(int64_t *)&needAp,
      (int32_t)clickFunc,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
      this->fields.useCount = 1;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_RecoverMaster___);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                     &entity,
                                                     recoverId,
                                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_29;
            this->fields.recoverItemId = (int32_t)entity[2].klass;
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)gameObject,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                         (Il2CppObject **)&this->fields.recovItemEnt,
                                                         this->fields.recoverItemId,
                                                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                recovItemEnt = this->fields.recovItemEnt;
                if ( !recovItemEnt )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                if ( !gameObject )
                  goto LABEL_29;
                ItemIconComponent__SetItemImage_38852864(
                  (ItemIconComponent_o *)gameObject,
                  recovItemEnt->fields.imageId,
                  recovItemEnt->fields.bgImageId,
                  recovItemEnt->fields.type,
                  0,
                  0LL);
                v41 = this->fields.recovItemEnt;
                if ( !v41 )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
                if ( !gameObject )
                  goto LABEL_29;
                UILabel__set_text((UILabel_o *)gameObject, v41->fields.name, 0LL);
                ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v42);
              }
              gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( gameObject )
              {
                v43 = gameObject;
                this->fields.userCurrentAp = UserGameEntity__getAct((UserGameEntity_o *)gameObject, 0LL);
                this->fields.userMaxAp = v43[1].fields.m_CachedPtr;
                ItemSliderMax = ApRecoverConfirmDlgComponent__GetItemSliderMax(this, v44);
                this->fields.maxCount = ItemSliderMax;
                this->fields.useCount = ItemSliderMax;
                ItemSliderMin = ApRecoverConfirmDlgComponent__GetItemSliderMin(this, needAp, v46);
                ApRecoverConfirmDlgComponent__SetItemSlider(this, ItemSliderMin, v48);
                ApRecoverConfirmDlgComponent__SetResultApLb(this, v49);
                ApRecoverConfirmDlgComponent__SetItemDetailLb(this, v50);
                titleLb = this->fields.titleLb;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_2150/*"AP_RECOVER_TITLE"*/,
                                                           0LL);
                if ( titleLb )
                {
                  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
                  currentInfoLb = this->fields.currentInfoLb;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_4015/*"CURRENT_NUM_TXT"*/,
                                                             0LL);
                  if ( currentInfoLb )
                  {
                    UILabel__set_text(currentInfoLb, (System_String_o *)gameObject, 0LL);
                    maxLabel = this->fields.maxLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12129/*"SHOP_BULK_WINDOW_MAX_LABEL"*/,
                                                               0LL);
                    if ( maxLabel )
                    {
                      UILabel__set_text(maxLabel, (System_String_o *)gameObject, 0LL);
                      minLabel = this->fields.minLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12130/*"SHOP_BULK_WINDOW_MIN_LABEL"*/,
                                                                 0LL);
                      if ( minLabel )
                      {
                        UILabel__set_text(minLabel, (System_String_o *)gameObject, 0LL);
                        decideButtonLb = this->fields.decideButtonLb;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/,
                                                                   0LL);
                        if ( decideButtonLb )
                        {
                          UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
                          cancelButtonLb = this->fields.cancelButtonLb;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                                     0LL);
                          if ( cancelButtonLb )
                          {
                            UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
                            this->fields.state = 1;
                            v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
                            System_Action___ctor(
                              v61,
                              (Il2CppObject *)this,
                              Method_ApRecoverConfirmDlgComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
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
    sub_1BCAA3C(gameObject, v39);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetConfirmMessageLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *confirmMessageLb; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  struct ItemEntity_o *recovItemEnt; // x8

  if ( (byte_4B19D36 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2145/*"AP_RECOVER_CONFIRM_TXT"*/, v4, v5);
    byte_4B19D36 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    confirmMessageLb = this->fields.confirmMessageLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2145/*"AP_RECOVER_CONFIRM_TXT"*/, 0LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt
      || (v7 = System_String__Format(v7, (Il2CppObject *)recovItemEnt->fields.name, 0LL), !confirmMessageLb) )
    {
      sub_1BCAA3C(v7, v8);
    }
    UILabel__set_text(confirmMessageLb, v7, 0LL);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__SetItemDetailLb(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  int32_t RecoverVal; // w19
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  struct ItemEntity_o *recovItemEnt; // x8
  Il2CppObject *v19; // x21
  UILabel_o *itemDetailLb; // x20
  float v21; // s0
  int v22; // w23
  System_String_o *v23; // x22
  Il2CppObject *v24; // x23
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x22
  Il2CppObject *v29; // x0
  int32_t v30; // [xsp+8h] [xbp-38h] BYREF
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19D37 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_14962/*"UNIT_INFO"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_2044/*"ADD_RECOVER_NUM_TXT"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_2146/*"AP_RECOVER_NUM_TXT"*/, v10, v11);
    byte_4B19D37 = 1;
  }
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_14962/*"UNIT_INFO"*/, 0LL);
  v31 = 1;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v16 = System_String__Format(v14, v15, 0LL);
  recovItemEnt = this->fields.recovItemEnt;
  if ( recovItemEnt )
  {
    v19 = (Il2CppObject *)v16;
    if ( recovItemEnt->fields.type == 3 )
    {
      itemDetailLb = this->fields.itemDetailLb;
      v21 = (float)((float)recovItemEnt->fields.value / 1000.0) * 100.0;
      if ( v21 == INFINITY )
        v22 = 0x80000000;
      else
        v22 = (int)v21;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2146/*"AP_RECOVER_NUM_TXT"*/, 0LL);
      v31 = v22;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      v30 = RecoverVal;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
      v26 = System_String__Format_62415660(v23, v19, v24, v25, 0LL);
      if ( !itemDetailLb )
        goto LABEL_13;
    }
    else
    {
      itemDetailLb = this->fields.itemDetailLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2044/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
      v31 = RecoverVal;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      v26 = System_String__Format_62415592(v28, v19, v29, 0LL);
      if ( !itemDetailLb )
LABEL_13:
        sub_1BCAA3C(v26, v27);
    }
    UILabel__set_text(itemDetailLb, v26, 0LL);
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
    sub_1BCAA3C(itemSlider, *(_QWORD *)&minCount);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t RecoverVal; // w0
  __int64 v15; // x1
  int32_t userMaxAp; // w21
  UILabel_o *resultApLb2; // x20
  int v18; // w25
  __int64 *v19; // x8
  System_String_o *v20; // x21
  Il2CppObject *v21; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  UILabel_o *resultApLb1; // x20
  System_String_o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct ItemEntity_o *recovItemEnt; // x8
  System_String_o *v35; // x22
  int64_t name; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x19
  __int64 v58; // x0
  int32_t v59; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t userCurrentAp; // [xsp+8h] [xbp-48h] BYREF
  int32_t useCount; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19D35 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&object___TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_2147/*"AP_RECOVER_RESULT"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_2151/*"AP_RECOVER_TXT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_2148/*"AP_RECOVER_RESULT_OVER"*/, v12, v13);
    byte_4B19D35 = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
    userMaxAp = this->fields.userMaxAp;
    resultApLb2 = this->fields.resultApLb2;
    v18 = this->fields.userCurrentAp + this->fields.useCount * RecoverVal;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    if ( v18 <= userMaxAp )
      v19 = &StringLiteral_2147/*"AP_RECOVER_RESULT"*/;
    else
      v19 = &StringLiteral_2148/*"AP_RECOVER_RESULT_OVER"*/;
    v20 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
    useCount = this->fields.userMaxAp;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &useCount);
    userCurrentAp = v18;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
    v23 = System_String__Format_62415592(v20, v21, v22, 0LL);
    if ( !resultApLb2 )
      goto LABEL_30;
    UILabel__set_text(resultApLb2, v23, 0LL);
    resultApLb1 = this->fields.resultApLb1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2151/*"AP_RECOVER_TXT"*/, 0LL);
    v23 = (System_String_o *)sub_1BCA888(object___TypeInfo, 4LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt )
      goto LABEL_30;
    v35 = v23;
    if ( !v23 )
      goto LABEL_30;
    name = (int64_t)recovItemEnt->fields.name;
    if ( !name || (v23 = (System_String_o *)sub_1BCA91C(name, v23->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v35[1].klass) )
        goto LABEL_29;
      v35[1].monitor = (void *)name;
      sub_1BCA784((PartyOrganizationUtility_o *)&v35[1].monitor, name, v28, v29, v30, v31, v32, v33);
      useCount = this->fields.useCount;
      v23 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount);
      v43 = (int64_t)v23;
      if ( !v23 || (v23 = (System_String_o *)sub_1BCA91C(v23, v35->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v35[1].klass) <= 1 )
          goto LABEL_29;
        v35[1].fields = (System_String_Fields)v43;
        sub_1BCA784((PartyOrganizationUtility_o *)&v35[1].fields, v43, v37, v38, v39, v40, v41, v42);
        userCurrentAp = this->fields.userCurrentAp;
        v23 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp);
        v50 = (int64_t)v23;
        if ( !v23 || (v23 = (System_String_o *)sub_1BCA91C(v23, v35->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v35[1].klass) <= 2 )
            goto LABEL_29;
          v35[2].klass = (System_String_c *)v50;
          sub_1BCA784((PartyOrganizationUtility_o *)&v35[2], v50, v44, v45, v46, v47, v48, v49);
          v59 = this->fields.userMaxAp;
          v23 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
          v57 = (int64_t)v23;
          if ( !v23 || (v23 = (System_String_o *)sub_1BCA91C(v23, v35->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v35[1].klass) > 3 )
            {
              v35[2].monitor = (void *)v57;
              sub_1BCA784((PartyOrganizationUtility_o *)&v35[2].monitor, v57, v51, v52, v53, v54, v55, v56);
              v23 = System_String__Format_62415728(v27, (System_Object_array *)v35, 0LL);
              if ( resultApLb1 )
              {
                UILabel__set_text(resultApLb1, v23, 0LL);
                return;
              }
LABEL_30:
              sub_1BCAA3C(v23, v24);
            }
LABEL_29:
            sub_1BCAA44(v23, v24);
          }
        }
      }
    }
    v58 = sub_1BCAA60(v23);
    sub_1BCA908(v58, 0LL);
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
    sub_1BCAA3C(0LL, method);
  v4 = (ApRecoverConfirmDlgComponent_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  this->fields.useCount = ApRecoverConfirmDlgComponent__ItemMaxOverCheck(v4, (int)v4, this->fields.maxCount, v5);
  ApRecoverConfirmDlgComponent__SetResultApLb(this, v6);
  ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v7);
}


UnityEngine_GameObject_o *__fastcall ApRecoverConfirmDlgComponent__get_closeBtnObject(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B19D3D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19D3D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}