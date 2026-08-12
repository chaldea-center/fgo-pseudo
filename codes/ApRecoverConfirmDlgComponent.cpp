void ApRecoverConfirmDlgComponent___ctor(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A8A6 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A8A6 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ApRecoverConfirmDlgComponent__AssertionCheck(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void ApRecoverConfirmDlgComponent__CallOnClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *onClose; // x19

  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClose, 0, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596A8A1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ApRecoverConfirmDlgComponent_EndClose__);
    byte_596A8A1 = 1;
  }
  this->fields.onClose = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ApRecoverConfirmDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ApRecoverConfirmDlgComponent__EndClose(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  ApRecoverConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
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
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w22
  UILabel_o *currentNumLb; // x21
  Il2CppObject *v10; // x0
  int32_t userMaxAp; // w8
  int32_t userCurrentAp; // w9
  int v13; // w10
  int32_t v14; // w8
  int32_t v16; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596A8A0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    byte_596A8A0 = 1;
  }
  entity = 0;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
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
    v16 = num;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v10, 0);
    if ( currentNumLb )
    {
      UILabel__set_text(currentNumLb, (System_String_o *)Instance, 0);
      goto LABEL_15;
    }
LABEL_22:
    sub_2213CDC(Instance, v5);
  }
  num = 0;
LABEL_15:
  userMaxAp = this->fields.userMaxAp;
  userCurrentAp = this->fields.userCurrentAp;
  v13 = (userMaxAp - userCurrentAp) / RecoverVal;
  if ( userMaxAp <= userCurrentAp + v13 * RecoverVal )
    v14 = (userMaxAp - userCurrentAp) / RecoverVal;
  else
    v14 = v13 + 1;
  if ( v14 >= num )
    return num;
  else
    return v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t ApRecoverConfirmDlgComponent__GetItemSliderMin(
        ApRecoverConfirmDlgComponent_o *this,
        int32_t needAp,
        const MethodInfo *method)
{
  int32_t RecoverVal; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  float v8; // s8
  int32_t v9; // w9

  if ( needAp < 1 )
    return 1;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, *(const MethodInfo **)&needAp);
  if ( (float)((float)(needAp - this->fields.userCurrentAp) / (float)RecoverVal) > 1.0 )
    v8 = (float)(needAp - this->fields.userCurrentAp) / (float)RecoverVal;
  else
    v8 = 1.0;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v7);
  v9 = vcvtps_s32_f32(v8);
  if ( ceilf(v8) == INFINITY )
    return 0x80000000;
  else
    return v9;
}


int32_t ApRecoverConfirmDlgComponent__GetRecoverVal(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ItemEntity_o *recovItemEnt; // x8
  int32_t type; // w9
  int32_t value; // w8
  float v6; // s8
  float userMaxAp; // s9
  float v8; // s8
  int32_t v9; // w9

  recovItemEnt = this->fields.recovItemEnt;
  if ( !recovItemEnt )
    return 1;
  type = recovItemEnt->fields.type;
  value = recovItemEnt->fields.value;
  if ( type == 3 )
  {
    v6 = (float)value / 1000.0;
    userMaxAp = (float)this->fields.userMaxAp;
    if ( !byte_596A15B )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A15B = 1;
    }
    v8 = v6 * userMaxAp;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
    v9 = vcvtps_s32_f32(v8);
    if ( ceilf(v8) == INFINITY )
      return 0x80000000;
    else
      return v9;
  }
  return value;
}


void ApRecoverConfirmDlgComponent__Init(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
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
  int64_t v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  v5 = count;
  if ( (byte_596A8A4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596A8A4 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, count, max);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( max * v5 > UserItemMax )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, count, max);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    return UserItemMax / max;
  }
  return v5;
}


void ApRecoverConfirmDlgComponent__OnClickCancel(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  struct System_Action_bool__int__o *v7; // x8
  MissionNaviTransitionBoardItem_o *p_clickFunc; // x19
  struct System_Action_bool__int__o *clickFunc; // t1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596A8A3 & 1) == 0 )
  {
    sub_2213A60(&Method_ApRecoverConfirmDlgComponent_OnClickCancel__);
    byte_596A8A3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ApRecoverConfirmDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_2213CDC(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc;
    v7 = clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v7->fields.invoke_impl)(
        v7->fields.method_code,
        0,
        0,
        v7->fields.method);
      p_clickFunc->klass = 0;
      sub_2213A04(p_clickFunc, 0, v10, v11, v12, v13, v14, v15);
    }
  }
}


void ApRecoverConfirmDlgComponent__OnClickDecide(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct UISliderWithButton_o *itemSlider; // x9
  struct System_Action_bool__int__o *clickFunc; // x8
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596A8A2 & 1) == 0 )
  {
    sub_2213A60(&Method_ApRecoverConfirmDlgComponent_OnClickDecide__);
    byte_596A8A2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ApRecoverConfirmDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_2213CDC(v5, v6);
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, 0, v9, v10, v11, v12, v13, v14);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ApRecoverConfirmDlgComponent__Open(
        ApRecoverConfirmDlgComponent_o *this,
        int32_t recoverId,
        int32_t needAp,
        System_Action_bool__int__o *clickFunc,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  struct ItemEntity_o *recovItemEnt; // x8
  struct ItemEntity_o *v16; // x8
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *v18; // x21
  int32_t Act; // w0
  int32_t m_CachedPtr; // w8
  const MethodInfo *v21; // x1
  int32_t ItemSliderMax; // w0
  const MethodInfo *v23; // x2
  int32_t ItemSliderMin; // w0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  UILabel_o *titleLb; // x20
  UILabel_o *currentInfoLb; // x20
  UILabel_o *maxLabel; // x20
  UILabel_o *minLabel; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v36; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596A89C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ApRecoverConfirmDlgComponent_EndOpen__);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_2213A60(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_2131/*"AP_RECOVER_TITLE"*/);
    sub_2213A60(&StringLiteral_4080/*"CURRENT_NUM_TXT"*/);
    sub_2213A60(&StringLiteral_12566/*"SHOP_BULK_WINDOW_MIN_LABEL"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12565/*"SHOP_BULK_WINDOW_MAX_LABEL"*/);
    byte_596A89C = 1;
  }
  state = this->fields.state;
  entity = 0;
  if ( !state )
  {
    this->fields.clickFunc = clickFunc;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
      (int32_t)clickFunc,
      *(System_String_o **)&needAp,
      (System_String_o *)clickFunc,
      (int32_t)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
      this->fields.useCount = 1;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_RecoverMaster___);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                     &entity,
                                                     recoverId,
                                                     (const MethodInfo_3F10B80 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_29;
            this->fields.recoverItemId = (int32_t)entity[2].klass;
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)gameObject,
                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                         (Il2CppObject **)&this->fields.recovItemEnt,
                                                         this->fields.recoverItemId,
                                                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                recovItemEnt = this->fields.recovItemEnt;
                if ( !recovItemEnt )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                if ( !gameObject )
                  goto LABEL_29;
                ItemIconComponent__SetItemImage_47882600(
                  (ItemIconComponent_o *)gameObject,
                  recovItemEnt->fields.imageId,
                  recovItemEnt->fields.bgImageId,
                  recovItemEnt->fields.type,
                  0,
                  1,
                  0);
                v16 = this->fields.recovItemEnt;
                if ( !v16 )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
                if ( !gameObject )
                  goto LABEL_29;
                UILabel__set_text((UILabel_o *)gameObject, v16->fields.name, 0);
                ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v17);
              }
              gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
              if ( gameObject )
              {
                v18 = gameObject;
                Act = UserGameEntity__getAct((UserGameEntity_o *)gameObject, 0);
                m_CachedPtr = v18[1].fields.m_CachedPtr;
                this->fields.userCurrentAp = Act;
                this->fields.userMaxAp = m_CachedPtr;
                ItemSliderMax = ApRecoverConfirmDlgComponent__GetItemSliderMax(this, v21);
                this->fields.maxCount = ItemSliderMax;
                this->fields.useCount = ItemSliderMax;
                ItemSliderMin = ApRecoverConfirmDlgComponent__GetItemSliderMin(this, needAp, v23);
                ApRecoverConfirmDlgComponent__SetItemSlider(this, ItemSliderMin, v25);
                ApRecoverConfirmDlgComponent__SetResultApLb(this, v26);
                ApRecoverConfirmDlgComponent__SetItemDetailLb(this, v27);
                titleLb = this->fields.titleLb;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_2131/*"AP_RECOVER_TITLE"*/,
                                                           0);
                if ( titleLb )
                {
                  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
                  currentInfoLb = this->fields.currentInfoLb;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_4080/*"CURRENT_NUM_TXT"*/,
                                                             0);
                  if ( currentInfoLb )
                  {
                    UILabel__set_text(currentInfoLb, (System_String_o *)gameObject, 0);
                    maxLabel = this->fields.maxLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12565/*"SHOP_BULK_WINDOW_MAX_LABEL"*/,
                                                               0);
                    if ( maxLabel )
                    {
                      UILabel__set_text(maxLabel, (System_String_o *)gameObject, 0);
                      minLabel = this->fields.minLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12566/*"SHOP_BULK_WINDOW_MIN_LABEL"*/,
                                                                 0);
                      if ( minLabel )
                      {
                        UILabel__set_text(minLabel, (System_String_o *)gameObject, 0);
                        decideButtonLb = this->fields.decideButtonLb;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/,
                                                                   0);
                        if ( decideButtonLb )
                        {
                          UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0);
                          cancelButtonLb = this->fields.cancelButtonLb;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/,
                                                                     0);
                          if ( cancelButtonLb )
                          {
                            UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0);
                            this->fields.state = 1;
                            v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                            System_Action___ctor(
                              v36,
                              (Il2CppObject *)this,
                              Method_ApRecoverConfirmDlgComponent_EndOpen__,
                              0);
                            BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0, 0);
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
    sub_2213CDC(gameObject, v14);
  }
}


void ApRecoverConfirmDlgComponent__SetConfirmMessageLb(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *confirmMessageLb; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  struct ItemEntity_o *recovItemEnt; // x8

  if ( (byte_596A89E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2126/*"AP_RECOVER_CONFIRM_TXT"*/);
    byte_596A89E = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    confirmMessageLb = this->fields.confirmMessageLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2126/*"AP_RECOVER_CONFIRM_TXT"*/, 0);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt
      || (v5 = System_String__Format(v5, (Il2CppObject *)recovItemEnt->fields.name, 0), !confirmMessageLb) )
    {
      sub_2213CDC(v5, v6);
    }
    UILabel__set_text(confirmMessageLb, v5, 0);
  }
}


void ApRecoverConfirmDlgComponent__SetItemDetailLb(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t RecoverVal; // w19
  System_String_o *v6; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct ItemEntity_o *recovItemEnt; // x8
  Il2CppObject *v12; // x20
  UILabel_o *itemDetailLb; // x21
  float v14; // s0
  int v15; // w23
  System_String_o *v16; // x22
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596A89F & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_15412/*"UNIT_INFO"*/);
    sub_2213A60(&StringLiteral_2002/*"ADD_RECOVER_NUM_TXT"*/);
    sub_2213A60(&StringLiteral_2127/*"AP_RECOVER_NUM_TXT"*/);
    byte_596A89F = 1;
  }
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"UNIT_INFO"*/, 0);
  v24 = 1;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
  v8 = System_String__Format(v6, v7, 0);
  recovItemEnt = this->fields.recovItemEnt;
  if ( recovItemEnt )
  {
    v12 = (Il2CppObject *)v8;
    if ( recovItemEnt->fields.type == 3 )
    {
      itemDetailLb = this->fields.itemDetailLb;
      v14 = (float)((float)recovItemEnt->fields.value / 1000.0) * 100.0;
      if ( v14 == INFINITY )
        v15 = 0x80000000;
      else
        v15 = (int)v14;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2127/*"AP_RECOVER_NUM_TXT"*/, 0);
      v24 = v15;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
      v23 = RecoverVal;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
      v19 = System_String__Format_75697948(v16, v12, v17, v18, 0);
      if ( !itemDetailLb )
        goto LABEL_13;
    }
    else
    {
      itemDetailLb = this->fields.itemDetailLb;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2002/*"ADD_RECOVER_NUM_TXT"*/, 0);
      v24 = RecoverVal;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
      v19 = System_String__Format_75697880(v21, v12, v22, 0);
      if ( !itemDetailLb )
LABEL_13:
        sub_2213CDC(v19, v20);
    }
    UILabel__set_text(itemDetailLb, v19, 0);
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
  if ( maxCount != 1 )
  {
    itemSlider = this->fields.itemSlider;
    if ( maxCount == minCount )
    {
      if ( !itemSlider )
        goto LABEL_13;
      UISliderWithButton__SetGray(itemSlider, 0);
    }
    else
    {
      if ( !itemSlider )
        goto LABEL_13;
      UISliderWithButton__normalMode(itemSlider, 0);
    }
    itemSlider = this->fields.itemSlider;
    if ( itemSlider )
    {
      useCount = this->fields.useCount;
      v7 = minCount;
      goto LABEL_12;
    }
LABEL_13:
    sub_2213CDC(itemSlider, *(_QWORD *)&minCount);
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_13;
  UISliderWithButton__SetGray(itemSlider, 0);
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_13;
  useCount = this->fields.useCount;
  v7 = 1;
LABEL_12:
  UISliderWithButton__init(itemSlider, useCount, 0, v7, 0);
}


void ApRecoverConfirmDlgComponent__SetResultApLb(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  int32_t RecoverVal; // w0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *resultApLb2; // x20
  int32_t v7; // w25
  int v8; // w8
  __int64 *v9; // x8
  System_String_o *v10; // x21
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *resultApLb1; // x20
  System_String_o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct ItemEntity_o *recovItemEnt; // x8
  System_String_o *v26; // x22
  struct System_String_o *name; // x23
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x23
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x23
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x19
  __int64 v50; // x0
  int32_t v51; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t userCurrentAp; // [xsp+8h] [xbp-48h] BYREF
  int32_t userMaxAp; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596A89D & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_2128/*"AP_RECOVER_RESULT"*/);
    sub_2213A60(&StringLiteral_2132/*"AP_RECOVER_TXT"*/);
    sub_2213A60(&StringLiteral_2129/*"AP_RECOVER_RESULT_OVER"*/);
    byte_596A89D = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
    resultApLb2 = this->fields.resultApLb2;
    v7 = this->fields.userCurrentAp + this->fields.useCount * RecoverVal;
    v8 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v7 <= this->fields.userMaxAp )
    {
      if ( !v8 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
      v9 = &StringLiteral_2128/*"AP_RECOVER_RESULT"*/;
    }
    else
    {
      if ( !v8 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
      v9 = &StringLiteral_2129/*"AP_RECOVER_RESULT_OVER"*/;
    }
    v10 = LocalizationManager__Get((System_String_o *)*v9, 0);
    userMaxAp = this->fields.userMaxAp;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &userMaxAp);
    userCurrentAp = v7;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &userCurrentAp);
    v13 = System_String__Format_75697880(v10, v11, v12, 0);
    if ( !resultApLb2 )
      goto LABEL_31;
    UILabel__set_text(resultApLb2, v13, 0);
    resultApLb1 = this->fields.resultApLb1;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2132/*"AP_RECOVER_TXT"*/, 0);
    v13 = (System_String_o *)sub_2213B20(object___TypeInfo, 4);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt )
      goto LABEL_31;
    v26 = v13;
    if ( !v13 )
      goto LABEL_31;
    name = recovItemEnt->fields.name;
    if ( !name || (v13 = (System_String_o *)sub_2213BB4(name, v13->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v26[1].klass) )
        goto LABEL_32;
      v26[1].monitor = name;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26[1].monitor, (int32_t)name, v19, v20, v21, v22, v23, v24);
      userMaxAp = this->fields.useCount;
      v13 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &userMaxAp);
      v35 = v13;
      if ( !v13 || (v13 = (System_String_o *)sub_2213BB4(v13, v26->klass->_1.element_class)) != 0 )
      {
        if ( ((__int64)v26[1].klass & 0xFFFFFFFE) == 0 )
          goto LABEL_32;
        v26[1].fields = (System_String_Fields)v35;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26[1].fields, (int32_t)v35, v29, v30, v31, v32, v33, v34);
        userCurrentAp = this->fields.userCurrentAp;
        v13 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &userCurrentAp);
        v42 = v13;
        if ( !v13 || (v13 = (System_String_o *)sub_2213BB4(v13, v26->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v26[1].klass) <= 2 )
            goto LABEL_32;
          v26[2].klass = (System_String_c *)v42;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26[2], (int32_t)v42, v36, v37, v38, v39, v40, v41);
          v51 = this->fields.userMaxAp;
          v13 = (System_String_o *)j_il2cpp_value_box_0(qword_5984348, &v51);
          v49 = v13;
          if ( !v13 || (v13 = (System_String_o *)sub_2213BB4(v13, v26->klass->_1.element_class)) != 0 )
          {
            if ( ((__int64)v26[1].klass & 0xFFFFFFFC) != 0 )
            {
              v26[2].monitor = v49;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v26[2].monitor,
                (int32_t)v49,
                v43,
                v44,
                v45,
                v46,
                v47,
                v48);
              v13 = System_String__Format_75698016(v18, (System_Object_array *)v26, 0);
              if ( resultApLb1 )
              {
                UILabel__set_text(resultApLb1, v13, 0);
                return;
              }
LABEL_31:
              sub_2213CDC(v13, v14);
            }
LABEL_32:
            sub_2213CE4(v13);
          }
        }
      }
    }
    v50 = sub_2213D00(v13, v28);
    sub_2213BA0(v50, 0);
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
    sub_2213CDC(0, method);
  v4 = (ApRecoverConfirmDlgComponent_o *)UISliderWithButton__sliderValueChange(itemSlider, 0);
  this->fields.useCount = ApRecoverConfirmDlgComponent__ItemMaxOverCheck(v4, (int)v4, this->fields.maxCount, v5);
  ApRecoverConfirmDlgComponent__SetResultApLb(this, v6);
  ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v7);
}


UnityEngine_GameObject_o *ApRecoverConfirmDlgComponent__get_closeBtnObject(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A8A5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A8A5 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}