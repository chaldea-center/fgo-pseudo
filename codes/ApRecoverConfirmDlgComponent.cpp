void __fastcall ApRecoverConfirmDlgComponent___ctor(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B6A7C7 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6A7C7 = 1;
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
    sub_1BE4A70(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_Action_o *v11; // x20

  if ( (byte_4B6A7C2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_ApRecoverConfirmDlgComponent_EndClose__, v10);
    byte_4B6A7C2 = 1;
  }
  this->fields.onClose = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ApRecoverConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ApRecoverConfirmDlgComponent__EndClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ApRecoverConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
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

  if ( (byte_4B6A7C1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1BE4ACC(&int_TypeInfo, v3);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&StringLiteral_25315/*"{0:N0}"*/, v6);
    byte_4B6A7C1 = 1;
  }
  entity = 0LL;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    byte_4B61717 = 1;
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
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_25315/*"{0:N0}"*/, v16, 0LL);
    if ( currentNumLb )
    {
      UILabel__set_text(currentNumLb, (System_String_o *)Instance, 0LL);
      goto LABEL_15;
    }
LABEL_22:
    sub_1BE4D28(Instance, v9);
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
  if ( !byte_4B6195E )
  {
    sub_1BE4ACC(&System_Math_TypeInfo, v3);
    byte_4B6195E = 1;
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
    if ( !byte_4B6195E )
    {
      sub_1BE4ACC(&System_Math_TypeInfo, method);
      byte_4B6195E = 1;
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
    sub_1BE4D28(0LL, v4);
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
  if ( (byte_4B6A7C5 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, count);
    byte_4B6A7C5 = 1;
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
  PartyOrganizationUtility_o *p_clickFunc; // x19
  struct System_Action_bool__int__o *clickFunc; // t1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B6A7C4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ApRecoverConfirmDlgComponent_OnClickCancel__, method);
    byte_4B6A7C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ApRecoverConfirmDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BE4D28(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (PartyOrganizationUtility_o *)&this->fields.clickFunc;
    v7 = clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v7->fields.m_target)(
        v7->fields.original_method_info,
        0LL,
        0LL,
        *(_QWORD *)&v7->fields.extra_arg);
      p_clickFunc->klass = 0LL;
      sub_1BE4A70(p_clickFunc, 0LL, v10, v11, v12, v13, v14, v15);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B6A7C3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ApRecoverConfirmDlgComponent_OnClickDecide__, method);
    byte_4B6A7C3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ApRecoverConfirmDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BE4D28(v5, v6);
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
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.clickFunc, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v26; // x1
  struct ItemEntity_o *recovItemEnt; // x8
  struct ItemEntity_o *v28; // x8
  const MethodInfo *v29; // x1
  UnityEngine_GameObject_o *v30; // x21
  const MethodInfo *v31; // x1
  int32_t ItemSliderMax; // w0
  const MethodInfo *v33; // x2
  int32_t ItemSliderMin; // w0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  UILabel_o *titleLb; // x20
  UILabel_o *currentInfoLb; // x20
  UILabel_o *maxLabel; // x20
  UILabel_o *minLabel; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v44; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B6A7BD & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&recoverId);
    sub_1BE4ACC(&Method_ApRecoverConfirmDlgComponent_EndOpen__, v12);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_RecoverMaster___, v14);
    sub_1BE4ACC(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__, v15);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v16);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&StringLiteral_2155/*"AP_RECOVER_TITLE"*/, v19);
    sub_1BE4ACC(&StringLiteral_4026/*"CURRENT_NUM_TXT"*/, v20);
    sub_1BE4ACC(&StringLiteral_12162/*"SHOP_BULK_WINDOW_MIN_LABEL"*/, v21);
    sub_1BE4ACC(&StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1BE4ACC(&StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1BE4ACC(&StringLiteral_12161/*"SHOP_BULK_WINDOW_MAX_LABEL"*/, v24);
    byte_4B6A7BD = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    this->fields.clickFunc = clickFunc;
    sub_1BE4A70(
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
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_RecoverMaster___);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                     &entity,
                                                     recoverId,
                                                     (const MethodInfo_31FD818 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_29;
            this->fields.recoverItemId = (int32_t)entity[2].klass;
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)gameObject,
                                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                         (Il2CppObject **)&this->fields.recovItemEnt,
                                                         this->fields.recoverItemId,
                                                         (const MethodInfo_31FD818 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                recovItemEnt = this->fields.recovItemEnt;
                if ( !recovItemEnt )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                if ( !gameObject )
                  goto LABEL_29;
                ItemIconComponent__SetItemImage_39045840(
                  (ItemIconComponent_o *)gameObject,
                  recovItemEnt->fields.imageId,
                  recovItemEnt->fields.bgImageId,
                  recovItemEnt->fields.type,
                  0,
                  1,
                  0LL);
                v28 = this->fields.recovItemEnt;
                if ( !v28 )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
                if ( !gameObject )
                  goto LABEL_29;
                UILabel__set_text((UILabel_o *)gameObject, v28->fields.name, 0LL);
                ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v29);
              }
              gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( gameObject )
              {
                v30 = gameObject;
                this->fields.userCurrentAp = UserGameEntity__getAct((UserGameEntity_o *)gameObject, 0LL);
                this->fields.userMaxAp = v30[1].fields.m_CachedPtr;
                ItemSliderMax = ApRecoverConfirmDlgComponent__GetItemSliderMax(this, v31);
                this->fields.maxCount = ItemSliderMax;
                this->fields.useCount = ItemSliderMax;
                ItemSliderMin = ApRecoverConfirmDlgComponent__GetItemSliderMin(this, needAp, v33);
                ApRecoverConfirmDlgComponent__SetItemSlider(this, ItemSliderMin, v35);
                ApRecoverConfirmDlgComponent__SetResultApLb(this, v36);
                ApRecoverConfirmDlgComponent__SetItemDetailLb(this, v37);
                titleLb = this->fields.titleLb;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_2155/*"AP_RECOVER_TITLE"*/,
                                                           0LL);
                if ( titleLb )
                {
                  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
                  currentInfoLb = this->fields.currentInfoLb;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_4026/*"CURRENT_NUM_TXT"*/,
                                                             0LL);
                  if ( currentInfoLb )
                  {
                    UILabel__set_text(currentInfoLb, (System_String_o *)gameObject, 0LL);
                    maxLabel = this->fields.maxLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12161/*"SHOP_BULK_WINDOW_MAX_LABEL"*/,
                                                               0LL);
                    if ( maxLabel )
                    {
                      UILabel__set_text(maxLabel, (System_String_o *)gameObject, 0LL);
                      minLabel = this->fields.minLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12162/*"SHOP_BULK_WINDOW_MIN_LABEL"*/,
                                                                 0LL);
                      if ( minLabel )
                      {
                        UILabel__set_text(minLabel, (System_String_o *)gameObject, 0LL);
                        decideButtonLb = this->fields.decideButtonLb;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/,
                                                                   0LL);
                        if ( decideButtonLb )
                        {
                          UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
                          cancelButtonLb = this->fields.cancelButtonLb;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/,
                                                                     0LL);
                          if ( cancelButtonLb )
                          {
                            UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
                            this->fields.state = 1;
                            v44 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                            System_Action___ctor(
                              v44,
                              (Il2CppObject *)this,
                              Method_ApRecoverConfirmDlgComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0LL);
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
    sub_1BE4D28(gameObject, v26);
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

  if ( (byte_4B6A7BF & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_2150/*"AP_RECOVER_CONFIRM_TXT"*/, v3);
    byte_4B6A7BF = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    confirmMessageLb = this->fields.confirmMessageLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2150/*"AP_RECOVER_CONFIRM_TXT"*/, 0LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt
      || (v5 = System_String__Format(v5, (Il2CppObject *)recovItemEnt->fields.name, 0LL), !confirmMessageLb) )
    {
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B6A7C0 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_15000/*"UNIT_INFO"*/, v4);
    sub_1BE4ACC(&StringLiteral_2049/*"ADD_RECOVER_NUM_TXT"*/, v5);
    sub_1BE4ACC(&StringLiteral_2151/*"AP_RECOVER_NUM_TXT"*/, v6);
    byte_4B6A7C0 = 1;
  }
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15000/*"UNIT_INFO"*/, 0LL);
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
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2151/*"AP_RECOVER_NUM_TXT"*/, 0LL);
      v36 = v18;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v20, v21, v22);
      v35 = RecoverVal;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v24, v25, v26);
      v28 = System_String__Format_62713248(v19, v15, v23, v27, 0LL);
      if ( !itemDetailLb )
        goto LABEL_13;
    }
    else
    {
      itemDetailLb = this->fields.itemDetailLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2049/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
      v36 = RecoverVal;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v31, v32, v33);
      v28 = System_String__Format_62713180(v30, v15, v34, 0LL);
      if ( !itemDetailLb )
LABEL_13:
        sub_1BE4D28(v28, v29);
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
    sub_1BE4D28(itemSlider, *(_QWORD *)&minCount);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct ItemEntity_o *recovItemEnt; // x8
  System_String_o *v33; // x22
  int64_t name; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x23
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x23
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x19
  __int64 v65; // x0
  int32_t v66; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t userCurrentAp; // [xsp+8h] [xbp-48h] BYREF
  int32_t useCount; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B6A7BE & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&object___TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_2152/*"AP_RECOVER_RESULT"*/, v5);
    sub_1BE4ACC(&StringLiteral_2156/*"AP_RECOVER_TXT"*/, v6);
    sub_1BE4ACC(&StringLiteral_2153/*"AP_RECOVER_RESULT_OVER"*/, v7);
    byte_4B6A7BE = 1;
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
      v12 = &StringLiteral_2152/*"AP_RECOVER_RESULT"*/;
    else
      v12 = &StringLiteral_2153/*"AP_RECOVER_RESULT_OVER"*/;
    v13 = LocalizationManager__Get((System_String_o *)*v12, 0LL);
    useCount = this->fields.userMaxAp;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &useCount, v14, v15, v16);
    userCurrentAp = v11;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp, v18, v19, v20);
    v22 = System_String__Format_62713180(v13, v17, v21, 0LL);
    if ( !resultApLb2 )
      goto LABEL_30;
    UILabel__set_text(resultApLb2, v22, 0LL);
    resultApLb1 = this->fields.resultApLb1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2156/*"AP_RECOVER_TXT"*/, 0LL);
    v22 = (System_String_o *)sub_1BE4B74(object___TypeInfo, 4LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt )
      goto LABEL_30;
    v33 = v22;
    if ( !v22 )
      goto LABEL_30;
    name = (int64_t)recovItemEnt->fields.name;
    if ( !name || (v22 = (System_String_o *)sub_1BE4C08(name, v22->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v33[1].klass) )
        goto LABEL_29;
      v33[1].monitor = (void *)name;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v33[1].monitor, name, v26, v27, v28, v29, v30, v31);
      useCount = this->fields.useCount;
      v22 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount, v35, v36, v37);
      v44 = (int64_t)v22;
      if ( !v22 || (v22 = (System_String_o *)sub_1BE4C08(v22, v33->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v33[1].klass) <= 1 )
          goto LABEL_29;
        v33[1].fields = (System_String_Fields)v44;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v33[1].fields, v44, v38, v39, v40, v41, v42, v43);
        userCurrentAp = this->fields.userCurrentAp;
        v22 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp, v45, v46, v47);
        v54 = (int64_t)v22;
        if ( !v22 || (v22 = (System_String_o *)sub_1BE4C08(v22, v33->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v33[1].klass) <= 2 )
            goto LABEL_29;
          v33[2].klass = (System_String_c *)v54;
          sub_1BE4A70((PartyOrganizationUtility_o *)&v33[2], v54, v48, v49, v50, v51, v52, v53);
          v66 = this->fields.userMaxAp;
          v22 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v55, v56, v57);
          v64 = (int64_t)v22;
          if ( !v22 || (v22 = (System_String_o *)sub_1BE4C08(v22, v33->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v33[1].klass) > 3 )
            {
              v33[2].monitor = (void *)v64;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v33[2].monitor, v64, v58, v59, v60, v61, v62, v63);
              v22 = System_String__Format_62713316(v25, (System_Object_array *)v33, 0LL);
              if ( resultApLb1 )
              {
                UILabel__set_text(resultApLb1, v22, 0LL);
                return;
              }
LABEL_30:
              sub_1BE4D28(v22, v23);
            }
LABEL_29:
            sub_1BE4D30(v22, v23);
          }
        }
      }
    }
    v65 = sub_1BE4D4C(v22);
    sub_1BE4BF4(v65, 0LL);
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
    sub_1BE4D28(0LL, method);
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

  if ( (byte_4B6A7C6 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A7C6 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BE4D28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}