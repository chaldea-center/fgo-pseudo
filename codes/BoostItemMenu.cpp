void BoostItemMenu___ctor(BoostItemMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C089 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2C089 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void BoostItemMenu__Callback(BoostItemMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v17; // x19

  if ( (byte_4D2C086 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__);
    sub_1C93AD4(&BoostItemMenu___c__DisplayClass25_0_TypeInfo);
    byte_4D2C086 = 1;
  }
  v7 = sub_1C93D20(BoostItemMenu___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v17 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v7, Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, 0);
  OptionManager__SaveData(v17, 0);
}


void BoostItemMenu__Close(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostItemMenu__Close_34521668(this, 0, v2);
}


void BoostItemMenu__Close_34521668(BoostItemMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_4D2C085 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BoostItemMenu_EndClose__);
    byte_4D2C085 = 1;
  }
  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C93D2C(0, callback);
  BoostItemListViewManager__SetMode_34515888(itemListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BoostItemMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void BoostItemMenu__EndClose(BoostItemMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostItemMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void BoostItemMenu__EndOpen(BoostItemMenu_o *this, const MethodInfo *method)
{
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  GrandQuestFolderBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v22; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4D2C084 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BoostItemMenu_OnSelectItem__);
    sub_1C93AD4(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    byte_4D2C084 = 1;
  }
  this->fields.state = 2;
  itemListViewManager = this->fields.itemListViewManager;
  v4 = (BoostItemListViewManager_CallbackFunc_o *)sub_1C93D20(BoostItemListViewManager_CallbackFunc_TypeInfo);
  BoostItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_BoostItemMenu_OnSelectItem__,
    v5);
  if ( !itemListViewManager )
    sub_1C93D2C(v6, v7);
  itemListViewManager->fields.callbackFunc = v4;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&itemListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  BoostItemListViewManager__SetMode_34515888(itemListViewManager, 2, v14);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc;
  v22 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_1C93A78(p_openCallbackFunc, 0, v15, v16, v17, v18, v19, v20);
    ((void (__fastcall *)(intptr_t, intptr_t))v22->fields.invoke_impl)(v22->fields.method_code, v22->fields.method);
  }
}


BoostItemListViewItem_o *BoostItemMenu__GetItem(BoostItemMenu_o *this, int32_t index, const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C93D2C(0, index);
  return BoostItemListViewManager__GetItem(itemListViewManager, index, method);
}


void BoostItemMenu__Init(BoostItemMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C93D2C(0, method);
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
  __int64 v5; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v8; // x8

  if ( (byte_4D2C088 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BoostItemMenu_OnClickSetupConfirm__);
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D2C088 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostItemMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostItemMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_BoostItemMenu_OnClickSetupConfirm__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1C93D2C(0, v5);
    if ( isBoostItemUseConfirm )
      v8 = &StringLiteral_17637/*"btn_off"*/;
    else
      v8 = &StringLiteral_17638/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v8, 0);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2
  int32_t v19; // w2
  BoostItemMenu_o *v20; // x0
  int32_t v21; // w1

  v6 = this;
  if ( (byte_4D2C087 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BoostItemMenu_OnSelectItem__);
    this = (BoostItemMenu_o *)sub_1C93AD4(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    byte_4D2C087 = 1;
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
            v7 = (_QWORD *)sub_1C93AEC(Method_BoostItemMenu_OnSelectItem__);
          v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
          itemListViewManager = v6->fields.itemListViewManager;
          v10 = (BoostItemListViewManager_CallbackFunc_o *)sub_1C93D20(BoostItemListViewManager_CallbackFunc_TypeInfo);
          BoostItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)v6,
            (intptr_t)Method_BoostItemMenu_OnSelectItem__,
            v11);
          if ( itemListViewManager )
          {
            itemListViewManager->fields.callbackFunc = v10;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&itemListViewManager->fields.callbackFunc,
              (int32_t)v10,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17);
            BoostItemListViewManager__SetMode_34515888(itemListViewManager, 2, v18);
            return;
          }
LABEL_18:
          sub_1C93D2C(this, *(_QWORD *)&kind);
        }
        v21 = 1;
        v20 = v6;
        v19 = n;
        v6->fields.state = 3;
        goto LABEL_16;
      }
    }
    v19 = -1;
    v6->fields.state = 3;
    v20 = v6;
    v21 = 0;
LABEL_16:
    BoostItemMenu__Callback(v20, v21, v19, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoostItemMenu__Open(
        BoostItemMenu_o *this,
        EventUpValSetupInfo_o *setupInfo,
        BoostItemMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        bool IsFriendChocolate,
        bool IsAvailableFriendChocolate,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t state; // w8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  char v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *v25; // x4
  char v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Int32_array *v29; // x21
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  UILabel_o *titleLabel; // x23
  UILabel_o *titleDetailLabel; // x22
  UILabel_o *useConfirmOptionLabel; // x22
  bool v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  char v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  const MethodInfo *v42; // x1
  struct System_Action_o *openCallbackFunc; // x8
  UILabel_o *v44; // x22
  UILabel_o *v45; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  __int64 *v50; // x8
  System_Action_o *v51; // x20

  if ( (byte_4D2C083 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BoostItemMenu_EndOpen__);
    sub_1C93AD4(&Method_BoostItemMenu_Open__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_2983/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/);
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    sub_1C93AD4(&StringLiteral_2985/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/);
    sub_1C93AD4(&StringLiteral_2980/*"BOOST_ITEM_USE_DETAIL"*/);
    sub_1C93AD4(&StringLiteral_2973/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_2979/*"BOOST_ITEM_USE_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_2982/*"BOOST_ITEM_USE_OPTION"*/);
    sub_1C93AD4(&StringLiteral_2984/*"BOOST_ITEM_USE_TITILE"*/);
    sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    sub_1C93AD4(&StringLiteral_2981/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/);
    byte_4D2C083 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)openCallback,
      (System_String_o *)IsFriendChocolate,
      IsAvailableFriendChocolate,
      (int64_t)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
      (int32_t)openCallback,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    BoostItemMenu__EndOpen(this, v42);
    return;
  }
  if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)openCallback,
      (System_String_o *)IsFriendChocolate,
      IsAvailableFriendChocolate,
      (int64_t)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
      (int32_t)openCallback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)ItemMaster__GetBoostItemList((ItemMaster_o *)Instance, setupInfo, 0);
    if ( !Instance )
      goto LABEL_49;
    if ( !IsAvailableFriendChocolate && IsFriendChocolate
      || (v29 = (System_Int32_array *)Instance, !Instance->fields.m_CancellationTokenSource) )
    {
      openCallbackFunc = this->fields.openCallbackFunc;
      this->fields.state = 3;
      if ( openCallbackFunc )
      {
        this->fields.openCallbackFunc = 0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
          0,
          v23,
          (int32_t)v24,
          v25,
          v26,
          v27,
          v28);
        if ( !openCallback )
          goto LABEL_49;
        ((void (__fastcall *)(intptr_t, intptr_t))openCallback->fields.invoke_impl)(
          openCallback->fields.method_code,
          openCallback->fields.method);
      }
      BoostItemMenu__Callback(this, 1, -1, v24);
      return;
    }
    v30 = Method_BoostItemMenu_Open__;
    if ( (*((_BYTE *)Method_BoostItemMenu_Open__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1C93AEC(Method_BoostItemMenu_Open__);
    v31 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
LABEL_49:
      sub_1C93D2C(Instance, v22);
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
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2985/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, 0);
        if ( !titleLabel )
          goto LABEL_49;
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
        titleDetailLabel = this->fields.titleDetailLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2981/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, 0);
        if ( !titleDetailLabel )
          goto LABEL_49;
        UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0);
        useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, 0);
        if ( !useConfirmOptionLabel )
          goto LABEL_49;
        UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0);
        Instance = (DataManager_o *)this->fields.informationButton;
        if ( !Instance )
          goto LABEL_49;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_49;
        v35 = 0;
LABEL_37:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v35, 0);
        decideLabel = this->fields.decideLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BOOST_ITEM_USE_DECIDE"*/, 0);
        if ( decideLabel )
        {
          UILabel__set_text(decideLabel, (System_String_o *)Instance, 0);
          cancelLabel = this->fields.cancelLabel;
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BOOST_ITEM_USE_CANCEL"*/, 0);
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
                  v29,
                  setupInfo->fields.questId,
                  v48);
                Instance = (DataManager_o *)this->fields.itemListViewManager;
                if ( Instance )
                {
                  BoostItemListViewManager__SetMode_34515888((BoostItemListViewManager_o *)Instance, 1, v49);
                  Instance = (DataManager_o *)this->fields.setupConfirmSprite;
                  if ( Instance )
                  {
                    if ( this->fields.isBoostItemUseConfirm )
                      v50 = &StringLiteral_17638/*"btn_on"*/;
                    else
                      v50 = &StringLiteral_17637/*"btn_off"*/;
                    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v50, 0);
                    this->fields.state = 1;
                    v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                    System_Action___ctor(v51, (Il2CppObject *)this, Method_BoostItemMenu_EndOpen__, 0);
                    BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0, 0);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2984/*"BOOST_ITEM_USE_TITILE"*/, 0);
    if ( !titleLabel )
      goto LABEL_49;
    UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
    v44 = this->fields.titleDetailLabel;
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2980/*"BOOST_ITEM_USE_DETAIL"*/, 0);
    if ( !v44 )
      goto LABEL_49;
    UILabel__set_text(v44, (System_String_o *)Instance, 0);
    v45 = this->fields.useConfirmOptionLabel;
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2982/*"BOOST_ITEM_USE_OPTION"*/, 0);
    if ( !v45 )
      goto LABEL_49;
    UILabel__set_text(v45, (System_String_o *)Instance, 0);
    Instance = (DataManager_o *)this->fields.informationButton;
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_49;
    v35 = 1;
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

  if ( (byte_4D2C081 & 1) == 0 )
  {
    sub_1C93AD4(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_4D2C081 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_1C940C8(v8);
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

  if ( (byte_4D2C082 & 1) == 0 )
  {
    sub_1C93AD4(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_4D2C082 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_1C940C8(v8);
  BoostItemMenu__GetItem(v11, v12, v13);
}


void BoostItemMenu_CallbackFunc___ctor(
        BoostItemMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC2098;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC2040;
}


System_IAsyncResult_o *BoostItemMenu_CallbackFunc__BeginInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = index;
  v12 = result;
  if ( (byte_4D2C08A & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&BoostItemMenu_ResultKind_TypeInfo);
    byte_4D2C08A = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(BoostItemMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return sub_1C93A88(this, v10, callback, object);
}


void BoostItemMenu_CallbackFunc__EndInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BoostItemMenu_o *_4__this; // x0
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct BoostItemMenu_CallbackFunc_o *v11; // x20
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&_4__this->fields.callbackFunc;
  v11 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v11->fields.invoke_impl)(
      v11->fields.method_code,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      v11->fields.method);
}