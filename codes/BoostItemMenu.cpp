void BoostItemMenu___ctor(BoostItemMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C331F8 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C331F8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void BoostItemMenu__Callback(BoostItemMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v12; // x19

  if ( (byte_4C331F5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__);
    sub_1C32C20(&BoostItemMenu___c__DisplayClass25_0_TypeInfo);
    byte_4C331F5 = 1;
  }
  v7 = sub_1C32E6C(BoostItemMenu___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v7, Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, 0);
  OptionManager__SaveData(v12, 0);
}


void BoostItemMenu__Close(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostItemMenu__Close_33896632(this, 0, v2);
}


void BoostItemMenu__Close_33896632(BoostItemMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4C331F4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BoostItemMenu_EndClose__);
    byte_4C331F4 = 1;
  }
  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C32E7C(0);
  BoostItemListViewManager__SetMode_33890852(itemListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BoostItemMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0);
}


void BoostItemMenu__EndClose(BoostItemMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostItemMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void BoostItemMenu__EndOpen(BoostItemMenu_o *this, const MethodInfo *method)
{
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CGThumbnailListItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v13; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4C331F3 & 1) == 0 )
  {
    sub_1C32C20(&Method_BoostItemMenu_OnSelectItem__);
    sub_1C32C20(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C331F3 = 1;
  }
  this->fields.state = 2;
  itemListViewManager = this->fields.itemListViewManager;
  v4 = (BoostItemListViewManager_CallbackFunc_o *)sub_1C32E6C(BoostItemListViewManager_CallbackFunc_TypeInfo);
  BoostItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BoostItemMenu_OnSelectItem__,
    v5);
  if ( !itemListViewManager )
    sub_1C32E7C(v6);
  itemListViewManager->fields.callbackFunc = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&itemListViewManager->fields.callbackFunc, (int32_t)v4, v7, v8);
  BoostItemListViewManager__SetMode_33890852(itemListViewManager, 2, v9);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (CGThumbnailListItem_o *)&this->fields.openCallbackFunc;
  v13 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_1C32BC4(p_openCallbackFunc, 0, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v13->fields.invoke_impl)(v13->fields.method_code, v13->fields.method);
  }
}


BoostItemListViewItem_o *BoostItemMenu__GetItem(BoostItemMenu_o *this, int32_t index, const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C32E7C(0);
  return BoostItemListViewManager__GetItem(itemListViewManager, index, method);
}


void BoostItemMenu__Init(BoostItemMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C32E7C(0);
  ListViewManager__DestroyList(itemListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void BoostItemMenu__OnClickCancel(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    BoostItemMenu__Callback(this, 0, -1, v2);
  }
}


void BoostItemMenu__OnClickDecide(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    BoostItemMenu__Callback(this, 1, -1, v2);
  }
}


void BoostItemMenu__OnClickInfomation(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    BoostItemMenu__Callback(this, 2, -1, v2);
  }
}


void BoostItemMenu__OnClickSetupConfirm(BoostItemMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v7; // x8

  if ( (byte_4C331F7 & 1) == 0 )
  {
    sub_1C32C20(&Method_BoostItemMenu_OnClickSetupConfirm__);
    sub_1C32C20(&StringLiteral_17505/*"btn_on"*/);
    sub_1C32C20(&StringLiteral_17504/*"btn_off"*/);
    byte_4C331F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostItemMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostItemMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BoostItemMenu_OnClickSetupConfirm__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1C32E7C(0);
    if ( isBoostItemUseConfirm )
      v7 = &StringLiteral_17504/*"btn_off"*/;
    else
      v7 = &StringLiteral_17505/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v7, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoostItemMenu__OnSelectItem(BoostItemMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  BoostItemMenu_o *v6; // x19
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  BoostItemMenu_o *v16; // x0
  int32_t v17; // w1

  v6 = this;
  if ( (byte_4C331F6 & 1) == 0 )
  {
    sub_1C32C20(&Method_BoostItemMenu_OnSelectItem__);
    this = (BoostItemMenu_o *)sub_1C32C20(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C331F6 = 1;
  }
  if ( v6->fields.state == 2 )
  {
    if ( n < 0 )
    {
      if ( kind == 1 )
        goto LABEL_18;
    }
    else
    {
      this = (BoostItemMenu_o *)v6->fields.itemListViewManager;
      if ( !this )
        goto LABEL_18;
      this = (BoostItemMenu_o *)BoostItemListViewManager__GetItem(
                                  (BoostItemListViewManager_o *)this,
                                  n,
                                  *(const MethodInfo **)&n);
      if ( kind == 1 )
      {
        if ( !this )
          goto LABEL_18;
        if ( LOBYTE(this->fields.itemListViewManager) )
        {
          v7 = Method_BoostItemMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_BoostItemMenu_OnSelectItem__ + 83) & 2) != 0 )
            v7 = (_QWORD *)sub_1C32C38(Method_BoostItemMenu_OnSelectItem__);
          v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
          itemListViewManager = v6->fields.itemListViewManager;
          v10 = (BoostItemListViewManager_CallbackFunc_o *)sub_1C32E6C(BoostItemListViewManager_CallbackFunc_TypeInfo);
          BoostItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)v6,
            (intptr_t)Method_BoostItemMenu_OnSelectItem__,
            v11);
          if ( itemListViewManager )
          {
            itemListViewManager->fields.callbackFunc = v10;
            sub_1C32BC4((CGThumbnailListItem_o *)&itemListViewManager->fields.callbackFunc, (int32_t)v10, v12, v13);
            BoostItemListViewManager__SetMode_33890852(itemListViewManager, 2, v14);
            return;
          }
LABEL_18:
          sub_1C32E7C(this);
        }
        v17 = 1;
        v16 = v6;
        v15 = n;
        v6->fields.state = 3;
        goto LABEL_16;
      }
    }
    v15 = -1;
    v6->fields.state = 3;
    v16 = v6;
    v17 = 0;
LABEL_16:
    BoostItemMenu__Callback(v16, v17, v15, method);
  }
}


void BoostItemMenu__Open(
        BoostItemMenu_o *this,
        EventUpValSetupInfo_o *setupInfo,
        BoostItemMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        bool IsFriendChocolate,
        bool IsAvailableFriendChocolate,
        const MethodInfo *method)
{
  int32_t state; // w8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  DataManager_o *Instance; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x21
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  UILabel_o *titleLabel; // x23
  UILabel_o *titleDetailLabel; // x22
  UILabel_o *useConfirmOptionLabel; // x22
  bool v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  struct System_Action_o *openCallbackFunc; // x8
  UILabel_o *v30; // x22
  UILabel_o *v31; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  __int64 *v36; // x8
  System_Action_o *v37; // x20

  if ( (byte_4C331F2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BoostItemMenu_EndOpen__);
    sub_1C32C20(&Method_BoostItemMenu_Open__);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_2969/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/);
    sub_1C32C20(&StringLiteral_17505/*"btn_on"*/);
    sub_1C32C20(&StringLiteral_2971/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/);
    sub_1C32C20(&StringLiteral_2966/*"BOOST_ITEM_USE_DETAIL"*/);
    sub_1C32C20(&StringLiteral_2959/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_1C32C20(&StringLiteral_2965/*"BOOST_ITEM_USE_DECIDE"*/);
    sub_1C32C20(&StringLiteral_2968/*"BOOST_ITEM_USE_OPTION"*/);
    sub_1C32C20(&StringLiteral_2970/*"BOOST_ITEM_USE_TITILE"*/);
    sub_1C32C20(&StringLiteral_17504/*"btn_off"*/);
    sub_1C32C20(&StringLiteral_2967/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/);
    byte_4C331F2 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (const MethodInfo *)openCallback);
    this->fields.openCallbackFunc = openCallback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v26, v27);
    BoostItemMenu__EndOpen(this, v28);
    return;
  }
  if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (const MethodInfo *)openCallback);
    this->fields.openCallbackFunc = openCallback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v14, v15);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)ItemMaster__GetBoostItemList((ItemMaster_o *)Instance, setupInfo, 0);
    if ( !Instance )
      goto LABEL_49;
    if ( !IsAvailableFriendChocolate && IsFriendChocolate
      || (v19 = (System_Int32_array *)Instance, !Instance->fields.m_CancellationTokenSource) )
    {
      openCallbackFunc = this->fields.openCallbackFunc;
      this->fields.state = 3;
      if ( openCallbackFunc )
      {
        this->fields.openCallbackFunc = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v17, v18);
        if ( !openCallback )
          goto LABEL_49;
        ((void (__fastcall *)(intptr_t, intptr_t))openCallback->fields.invoke_impl)(
          openCallback->fields.method_code,
          openCallback->fields.method);
      }
      BoostItemMenu__Callback(this, 1, -1, v18);
      return;
    }
    v20 = Method_BoostItemMenu_Open__;
    if ( (*((_BYTE *)Method_BoostItemMenu_Open__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1C32C38(Method_BoostItemMenu_Open__);
    v21 = (System_Reflection_MethodBase_o *)sub_1C32C04(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
LABEL_49:
      sub_1C32E7C(Instance);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    titleLabel = this->fields.titleLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFriendChocolate )
        goto LABEL_18;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsFriendChocolate )
      {
LABEL_18:
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2971/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, 0);
        if ( !titleLabel )
          goto LABEL_49;
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
        titleDetailLabel = this->fields.titleDetailLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2967/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, 0);
        if ( !titleDetailLabel )
          goto LABEL_49;
        UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0);
        useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, 0);
        if ( !useConfirmOptionLabel )
          goto LABEL_49;
        UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0);
        Instance = (DataManager_o *)this->fields.informationButton;
        if ( !Instance )
          goto LABEL_49;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_49;
        v25 = 0;
LABEL_37:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v25, 0);
        decideLabel = this->fields.decideLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2965/*"BOOST_ITEM_USE_DECIDE"*/, 0);
        if ( decideLabel )
        {
          UILabel__set_text(decideLabel, (System_String_o *)Instance, 0);
          cancelLabel = this->fields.cancelLabel;
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2959/*"BOOST_ITEM_USE_CANCEL"*/, 0);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0);
            if ( setupInfo )
            {
              Instance = (DataManager_o *)this->fields.itemListViewManager;
              if ( Instance )
              {
                BoostItemListViewManager__CreateList(
                  (BoostItemListViewManager_o *)Instance,
                  v19,
                  setupInfo->fields.questId,
                  v34);
                Instance = (DataManager_o *)this->fields.itemListViewManager;
                if ( Instance )
                {
                  BoostItemListViewManager__SetMode_33890852((BoostItemListViewManager_o *)Instance, 1, v35);
                  Instance = (DataManager_o *)this->fields.setupConfirmSprite;
                  if ( Instance )
                  {
                    if ( this->fields.isBoostItemUseConfirm )
                      v36 = &StringLiteral_17505/*"btn_on"*/;
                    else
                      v36 = &StringLiteral_17504/*"btn_off"*/;
                    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v36, 0);
                    this->fields.state = 1;
                    v37 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                    System_Action___ctor(v37, (Il2CppObject *)this, Method_BoostItemMenu_EndOpen__, 0);
                    BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto LABEL_49;
      }
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2970/*"BOOST_ITEM_USE_TITILE"*/, 0);
    if ( !titleLabel )
      goto LABEL_49;
    UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
    v30 = this->fields.titleDetailLabel;
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2966/*"BOOST_ITEM_USE_DETAIL"*/, 0);
    if ( !v30 )
      goto LABEL_49;
    UILabel__set_text(v30, (System_String_o *)Instance, 0);
    v31 = this->fields.useConfirmOptionLabel;
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2968/*"BOOST_ITEM_USE_OPTION"*/, 0);
    if ( !v31 )
      goto LABEL_49;
    UILabel__set_text(v31, (System_String_o *)Instance, 0);
    Instance = (DataManager_o *)this->fields.informationButton;
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_49;
    v25 = 1;
    goto LABEL_37;
  }
}


void BoostItemMenu__add_callbackFunc(
        BoostItemMenu_o *this,
        BoostItemMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostItemMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostItemMenu_o *v11; // x0
  BoostItemMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C331F0 & 1) == 0 )
  {
    sub_1C32C20(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_4C331F0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (BoostItemMenu_CallbackFunc_c *)v8->klass != BoostItemMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_1C3313C(v8);
  BoostItemMenu__remove_callbackFunc(v11, v12, v13);
}


void BoostItemMenu__remove_callbackFunc(
        BoostItemMenu_o *this,
        BoostItemMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostItemMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostItemMenu_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4C331F1 & 1) == 0 )
  {
    sub_1C32C20(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_4C331F1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (BoostItemMenu_CallbackFunc_c *)v8->klass != BoostItemMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_1C3313C(v8);
  BoostItemMenu__GetItem(v11, v12, v13);
}


void BoostItemMenu_CallbackFunc___ctor(
        BoostItemMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A712A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7124C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BoostItemMenu_CallbackFunc__BeginInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = index;
  v20 = result;
  if ( (byte_4C331F9 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&BoostItemMenu_ResultKind_TypeInfo);
    byte_4C331F9 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             BoostItemMenu_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&index,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v18, callback, object);
}


void BoostItemMenu_CallbackFunc__EndInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void BoostItemMenu_CallbackFunc__Invoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    index,
    this->fields.method);
}


void BoostItemMenu___c__DisplayClass25_0___ctor(BoostItemMenu___c__DisplayClass25_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BoostItemMenu___c__DisplayClass25_0___Callback_b__0(
        BoostItemMenu___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct BoostItemMenu_o *_4__this; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct BoostItemMenu_CallbackFunc_o *v7; // x20
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&_4__this->fields.callbackFunc;
  v7 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_1C32BC4(p_callbackFunc, 0, v2, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v7->fields.invoke_impl)(
      v7->fields.method_code,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      v7->fields.method);
}