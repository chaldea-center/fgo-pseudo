void __fastcall ApRecoverConfirmDlgComponent___ctor(ApRecoverConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EC57 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EC57 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onClose; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
  v5 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1B88554(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ApRecoverConfirmDlgComponent__Close(
        ApRecoverConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5EC52 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ApRecoverConfirmDlgComponent_EndClose__);
    byte_4A5EC52 = 1;
  }
  this->fields.onClose = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
    sub_1B8880C(0LL, v4);
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
  Il2CppObject *MasterData_object; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  int num; // w22
  UILabel_o *currentNumLb; // x21
  Il2CppObject *v12; // x0
  int32_t userMaxAp; // w8
  int32_t userCurrentAp; // w9
  int v15; // w10
  int v16; // w8
  int v18; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EC51 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    byte_4A5EC51 = 1;
  }
  entity = 0LL;
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    v18 = num;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v7, v8, v9);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v12, 0LL);
    if ( currentNumLb )
    {
      UILabel__set_text(currentNumLb, (System_String_o *)Instance, 0LL);
      goto LABEL_11;
    }
LABEL_18:
    sub_1B8880C(Instance, v5);
  }
  num = 0;
LABEL_11:
  userMaxAp = this->fields.userMaxAp;
  userCurrentAp = this->fields.userCurrentAp;
  v15 = (userMaxAp - userCurrentAp) / RecoverVal;
  if ( userMaxAp <= userCurrentAp + v15 * RecoverVal )
    v16 = (userMaxAp - userCurrentAp) / RecoverVal;
  else
    v16 = v15 + 1;
  if ( v16 <= num )
    return v16;
  else
    return num;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ApRecoverConfirmDlgComponent__GetItemSliderMin(
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
  if ( !byte_4A5638E )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
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
    if ( !byte_4A5638E )
    {
      sub_1B885B0(&System_Math_TypeInfo);
      byte_4A5638E = 1;
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
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5EC55 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5EC55 = 1;
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


void __fastcall ApRecoverConfirmDlgComponent__OnClickCancel(
        ApRecoverConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  struct System_Action_bool__int__o *v7; // x8
  ServantStatusBattleListViewItem_o *p_clickFunc; // x19
  struct System_Action_bool__int__o *clickFunc; // t1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5EC54 & 1) == 0 )
  {
    sub_1B885B0(&Method_ApRecoverConfirmDlgComponent_OnClickCancel__);
    byte_4A5EC54 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ApRecoverConfirmDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1B8880C(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc;
    v7 = clickFunc;
    if ( clickFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v7->fields.m_target)(
        v7->fields.original_method_info,
        0LL,
        0LL,
        *(_QWORD *)&v7->fields.extra_arg);
      p_clickFunc->klass = 0LL;
      sub_1B88554(p_clickFunc, 0, v10, v11);
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
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5EC53 & 1) == 0 )
  {
    sub_1B885B0(&Method_ApRecoverConfirmDlgComponent_OnClickDecide__);
    byte_4A5EC53 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ApRecoverConfirmDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ApRecoverConfirmDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ApRecoverConfirmDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1B8880C(v5, v6);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, 0, v9, v10);
    }
  }
}


void __fastcall ApRecoverConfirmDlgComponent__Open(
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

  if ( (byte_4A5EC4D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ApRecoverConfirmDlgComponent_EndOpen__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_RecoverMaster___);
    sub_1B885B0(&Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_2130/*"AP_RECOVER_TITLE"*/);
    sub_1B885B0(&StringLiteral_3949/*"CURRENT_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_11994/*"SHOP_BULK_WINDOW_MIN_LABEL"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11993/*"SHOP_BULK_WINDOW_MAX_LABEL"*/);
    byte_4A5EC4D = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    this->fields.clickFunc = clickFunc;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc,
      (int32_t)clickFunc,
      needAp,
      (int32_t)clickFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
      this->fields.useCount = 1;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_RecoverMaster___);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                     &entity,
                                                     recoverId,
                                                     (const MethodInfo_311D988 *)Method_DataMasterBase_RecoverMaster__RecoverEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_29;
            this->fields.recoverItemId = (int32_t)entity[2].klass;
          }
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)gameObject,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                         (Il2CppObject **)&this->fields.recovItemEnt,
                                                         this->fields.recoverItemId,
                                                         (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                recovItemEnt = this->fields.recovItemEnt;
                if ( !recovItemEnt )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                if ( !gameObject )
                  goto LABEL_29;
                ItemIconComponent__SetItemImage_38142580(
                  (ItemIconComponent_o *)gameObject,
                  recovItemEnt->fields.imageId,
                  recovItemEnt->fields.bgImageId,
                  recovItemEnt->fields.type,
                  0,
                  0LL);
                v12 = this->fields.recovItemEnt;
                if ( !v12 )
                  goto LABEL_29;
                gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
                if ( !gameObject )
                  goto LABEL_29;
                UILabel__set_text((UILabel_o *)gameObject, v12->fields.name, 0LL);
                ApRecoverConfirmDlgComponent__SetConfirmMessageLb(this, v13);
              }
              gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( gameObject )
              {
                v14 = gameObject;
                this->fields.userCurrentAp = UserGameEntity__getAct((UserGameEntity_o *)gameObject, 0LL);
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
                                                           (System_String_o *)StringLiteral_2130/*"AP_RECOVER_TITLE"*/,
                                                           0LL);
                if ( titleLb )
                {
                  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
                  currentInfoLb = this->fields.currentInfoLb;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3949/*"CURRENT_NUM_TXT"*/,
                                                             0LL);
                  if ( currentInfoLb )
                  {
                    UILabel__set_text(currentInfoLb, (System_String_o *)gameObject, 0LL);
                    maxLabel = this->fields.maxLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11993/*"SHOP_BULK_WINDOW_MAX_LABEL"*/,
                                                               0LL);
                    if ( maxLabel )
                    {
                      UILabel__set_text(maxLabel, (System_String_o *)gameObject, 0LL);
                      minLabel = this->fields.minLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11994/*"SHOP_BULK_WINDOW_MIN_LABEL"*/,
                                                                 0LL);
                      if ( minLabel )
                      {
                        UILabel__set_text(minLabel, (System_String_o *)gameObject, 0LL);
                        decideButtonLb = this->fields.decideButtonLb;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/,
                                                                   0LL);
                        if ( decideButtonLb )
                        {
                          UILabel__set_text(decideButtonLb, (System_String_o *)gameObject, 0LL);
                          cancelButtonLb = this->fields.cancelButtonLb;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/,
                                                                     0LL);
                          if ( cancelButtonLb )
                          {
                            UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
                            this->fields.state = 1;
                            v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                            System_Action___ctor(
                              v28,
                              (Il2CppObject *)this,
                              Method_ApRecoverConfirmDlgComponent_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
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
    sub_1B8880C(gameObject, v10);
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

  if ( (byte_4A5EC4F & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2125/*"AP_RECOVER_CONFIRM_TXT"*/);
    byte_4A5EC4F = 1;
  }
  if ( this->fields.recovItemEnt )
  {
    confirmMessageLb = this->fields.confirmMessageLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2125/*"AP_RECOVER_CONFIRM_TXT"*/, 0LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt
      || (v4 = System_String__Format(v4, (Il2CppObject *)recovItemEnt->fields.name, 0LL), !confirmMessageLb) )
    {
      sub_1B8880C(v4, v5);
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
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  struct ItemEntity_o *recovItemEnt; // x8
  Il2CppObject *v11; // x21
  UILabel_o *itemDetailLb; // x20
  float v13; // s0
  int v14; // w23
  System_String_o *v15; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  int32_t v31; // [xsp+8h] [xbp-38h] BYREF
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5EC50 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_14797/*"UNIT_INFO"*/);
    sub_1B885B0(&StringLiteral_2047/*"ADD_RECOVER_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_2126/*"AP_RECOVER_NUM_TXT"*/);
    byte_4A5EC50 = 1;
  }
  RecoverVal = ApRecoverConfirmDlgComponent__GetRecoverVal(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_14797/*"UNIT_INFO"*/, 0LL);
  v32 = 1;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v5, v6, v7);
  v9 = System_String__Format(v4, v8, 0LL);
  recovItemEnt = this->fields.recovItemEnt;
  if ( recovItemEnt )
  {
    v11 = (Il2CppObject *)v9;
    if ( recovItemEnt->fields.type == 3 )
    {
      itemDetailLb = this->fields.itemDetailLb;
      v13 = (float)((float)recovItemEnt->fields.value / 1000.0) * 100.0;
      if ( v13 == INFINITY )
        v14 = 0x80000000;
      else
        v14 = (int)v13;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2126/*"AP_RECOVER_NUM_TXT"*/, 0LL);
      v32 = v14;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v16, v17, v18);
      v31 = RecoverVal;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v20, v21, v22);
      v24 = System_String__Format_61721472(v15, v11, v19, v23, 0LL);
      if ( !itemDetailLb )
        goto LABEL_13;
    }
    else
    {
      itemDetailLb = this->fields.itemDetailLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2047/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
      v32 = RecoverVal;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v27, v28, v29);
      v24 = System_String__Format_61721404(v26, v11, v30, 0LL);
      if ( !itemDetailLb )
LABEL_13:
        sub_1B8880C(v24, v25);
    }
    UILabel__set_text(itemDetailLb, v24, 0LL);
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
    sub_1B8880C(itemSlider, *(_QWORD *)&minCount);
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
  int32_t RecoverVal; // w0
  int32_t userMaxAp; // w21
  UILabel_o *resultApLb2; // x20
  int v6; // w25
  __int64 *v7; // x8
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  UILabel_o *resultApLb1; // x20
  System_String_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct ItemEntity_o *recovItemEnt; // x8
  System_String_o *v24; // x22
  struct System_String_o *name; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x23
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x19
  __int64 v44; // x0
  int32_t v45; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t userCurrentAp; // [xsp+8h] [xbp-48h] BYREF
  int32_t useCount; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5EC4E & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_2127/*"AP_RECOVER_RESULT"*/);
    sub_1B885B0(&StringLiteral_2131/*"AP_RECOVER_TXT"*/);
    sub_1B885B0(&StringLiteral_2128/*"AP_RECOVER_RESULT_OVER"*/);
    byte_4A5EC4E = 1;
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
      v7 = &StringLiteral_2127/*"AP_RECOVER_RESULT"*/;
    else
      v7 = &StringLiteral_2128/*"AP_RECOVER_RESULT_OVER"*/;
    v8 = LocalizationManager__Get((System_String_o *)*v7, 0LL);
    useCount = this->fields.userMaxAp;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &useCount, v9, v10, v11);
    userCurrentAp = v6;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp, v13, v14, v15);
    v17 = System_String__Format_61721404(v8, v12, v16, 0LL);
    if ( !resultApLb2 )
      goto LABEL_30;
    UILabel__set_text(resultApLb2, v17, 0LL);
    resultApLb1 = this->fields.resultApLb1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2131/*"AP_RECOVER_TXT"*/, 0LL);
    v17 = (System_String_o *)sub_1B88658(object___TypeInfo, 4LL);
    recovItemEnt = this->fields.recovItemEnt;
    if ( !recovItemEnt )
      goto LABEL_30;
    v24 = v17;
    if ( !v17 )
      goto LABEL_30;
    name = recovItemEnt->fields.name;
    if ( !name || (v17 = (System_String_o *)sub_1B886EC(name, v17->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v24[1].klass) )
        goto LABEL_29;
      v24[1].monitor = name;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v24[1].monitor, (int32_t)name, v21, v22);
      useCount = this->fields.useCount;
      v17 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &useCount, v26, v27, v28);
      v31 = v17;
      if ( !v17 || (v17 = (System_String_o *)sub_1B886EC(v17, v24->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v24[1].klass) <= 1 )
          goto LABEL_29;
        v24[1].fields = (System_String_Fields)v31;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v24[1].fields, (int32_t)v31, v29, v30);
        userCurrentAp = this->fields.userCurrentAp;
        v17 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &userCurrentAp, v32, v33, v34);
        v37 = v17;
        if ( !v17 || (v17 = (System_String_o *)sub_1B886EC(v17, v24->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v24[1].klass) <= 2 )
            goto LABEL_29;
          v24[2].klass = (System_String_c *)v37;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v24[2], (int32_t)v37, v35, v36);
          v45 = this->fields.userMaxAp;
          v17 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v38, v39, v40);
          v43 = v17;
          if ( !v17 || (v17 = (System_String_o *)sub_1B886EC(v17, v24->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v24[1].klass) > 3 )
            {
              v24[2].monitor = v43;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v24[2].monitor, (int32_t)v43, v41, v42);
              v17 = System_String__Format_61721540(v20, (System_Object_array *)v24, 0LL);
              if ( resultApLb1 )
              {
                UILabel__set_text(resultApLb1, v17, 0LL);
                return;
              }
LABEL_30:
              sub_1B8880C(v17, v18);
            }
LABEL_29:
            sub_1B88814(v17, v18);
          }
        }
      }
    }
    v44 = sub_1B88830(v17);
    sub_1B886D8(v44, 0LL);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5EC56 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EC56 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}