void BoostItemMenu___ctor(BoostItemMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933CE9 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5933CE9 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void BoostItemMenu__Callback(BoostItemMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  OptionManager_c *v18; // x0
  _BOOL4 isBoostItemUseConfirm; // w21
  System_Action_o *v20; // x19

  if ( (byte_5933CE6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__);
    sub_21FFC50(&BoostItemMenu___c__DisplayClass25_0_TypeInfo);
    byte_5933CE6 = 1;
  }
  v7 = sub_21FFEBC(BoostItemMenu___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v18 = OptionManager_TypeInfo;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v16, v17);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v7, Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, 0);
  OptionManager__SaveData(v20, 0);
}


void BoostItemMenu__Close(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostItemMenu__Close_40726856(this, 0, v2);
}


void BoostItemMenu__Close_40726856(BoostItemMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Action_c *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_5933CE5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BoostItemMenu_EndClose__);
    byte_5933CE5 = 1;
  }
  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_21FFECC(0, callback);
  BoostItemListViewManager__SetMode_40721124(itemListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = System_Action_TypeInfo;
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_21FFEBC(v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BoostItemMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0);
}


void BoostItemMenu__EndClose(BoostItemMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostItemMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void BoostItemMenu__EndOpen(BoostItemMenu_o *this, const MethodInfo *method)
{
  BoostItemListViewManager_CallbackFunc_c *v3; // x0
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  MissionNaviTransitionBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v23; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_5933CE4 & 1) == 0 )
  {
    sub_21FFC50(&Method_BoostItemMenu_OnSelectItem__);
    sub_21FFC50(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    byte_5933CE4 = 1;
  }
  v3 = BoostItemListViewManager_CallbackFunc_TypeInfo;
  itemListViewManager = this->fields.itemListViewManager;
  this->fields.state = 2;
  v5 = (BoostItemListViewManager_CallbackFunc_o *)sub_21FFEBC(v3);
  BoostItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BoostItemMenu_OnSelectItem__,
    v6);
  if ( !itemListViewManager )
    sub_21FFECC(v7, v8);
  itemListViewManager->fields.callbackFunc = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&itemListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BoostItemListViewManager__SetMode_40721124(itemListViewManager, 2, v15);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc;
  v23 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_21FFBF4(p_openCallbackFunc, 0, v16, v17, v18, v19, v20, v21);
    ((void (__fastcall *)(intptr_t, intptr_t))v23->fields.invoke_impl)(v23->fields.method_code, v23->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
BoostItemListViewItem_o *BoostItemMenu__GetItem(BoostItemMenu_o *this, int32_t index, const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_21FFECC(0, *(_QWORD *)&index);
  return BoostItemListViewManager__GetItem(itemListViewManager, index, method);
}


void BoostItemMenu__Init(BoostItemMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_21FFECC(0, method);
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

  if ( (byte_5933CE8 & 1) == 0 )
  {
    sub_21FFC50(&Method_BoostItemMenu_OnClickSetupConfirm__);
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5933CE8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostItemMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostItemMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_BoostItemMenu_OnClickSetupConfirm__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_21FFECC(0, v5);
    if ( isBoostItemUseConfirm )
      v8 = &StringLiteral_18236/*"btn_off"*/;
    else
      v8 = &StringLiteral_18237/*"btn_on"*/;
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  BoostItemMenu_o *v19; // x0
  int32_t v20; // w1
  int32_t v21; // w2

  v6 = this;
  if ( (byte_5933CE7 & 1) == 0 )
  {
    sub_21FFC50(&Method_BoostItemMenu_OnSelectItem__);
    this = (BoostItemMenu_o *)sub_21FFC50(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    byte_5933CE7 = 1;
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
            v7 = (_QWORD *)sub_21FFC68(Method_BoostItemMenu_OnSelectItem__);
          v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
          itemListViewManager = v6->fields.itemListViewManager;
          v10 = (BoostItemListViewManager_CallbackFunc_o *)sub_21FFEBC(BoostItemListViewManager_CallbackFunc_TypeInfo);
          BoostItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)v6,
            (intptr_t)Method_BoostItemMenu_OnSelectItem__,
            v11);
          if ( itemListViewManager )
          {
            itemListViewManager->fields.callbackFunc = v10;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&itemListViewManager->fields.callbackFunc,
              (int32_t)v10,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17);
            BoostItemListViewManager__SetMode_40721124(itemListViewManager, 2, v18);
            return;
          }
LABEL_18:
          sub_21FFECC(this, *(_QWORD *)&kind);
        }
        v19 = v6;
        v20 = 1;
        v21 = n;
        goto LABEL_16;
      }
    }
    v19 = v6;
    v20 = 0;
    v21 = -1;
LABEL_16:
    v6->fields.state = 3;
    BoostItemMenu__Callback(v19, v20, v21, method);
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
  bool v7; // w7
  int32_t state; // w8
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  char v17; // w4
  char v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  char v27; // w4
  char v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Int32_array *v31; // x21
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *titleLabel; // x23
  int v37; // w8
  UILabel_o *titleDetailLabel; // x22
  UILabel_o *useConfirmOptionLabel; // x22
  bool v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  char v43; // w4
  char v44; // w5
  bool v45; // w6
  bool v46; // w7
  const MethodInfo *v47; // x1
  struct System_Action_o *openCallbackFunc; // x8
  UILabel_o *v49; // x22
  UILabel_o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x2
  __int64 *v57; // x8
  System_Action_o *v58; // x20

  if ( (byte_5933CE3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BoostItemMenu_EndOpen__);
    sub_21FFC50(&Method_BoostItemMenu_Open__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_3088/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/);
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_3090/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/);
    sub_21FFC50(&StringLiteral_3085/*"BOOST_ITEM_USE_DETAIL"*/);
    sub_21FFC50(&StringLiteral_3078/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3084/*"BOOST_ITEM_USE_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3087/*"BOOST_ITEM_USE_OPTION"*/);
    sub_21FFC50(&StringLiteral_3089/*"BOOST_ITEM_USE_TITILE"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    sub_21FFC50(&StringLiteral_3086/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/);
    byte_5933CE3 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)openCallback,
      IsFriendChocolate,
      IsAvailableFriendChocolate,
      (bool)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
      (int32_t)openCallback,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    BoostItemMenu__EndOpen(this, v47);
    return;
  }
  if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)openCallback,
      IsFriendChocolate,
      IsAvailableFriendChocolate,
      (bool)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
      (int32_t)openCallback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v21, v22);
    this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)ItemMaster__GetBoostItemList((ItemMaster_o *)Instance, setupInfo, 0);
        if ( Instance )
        {
          if ( !IsAvailableFriendChocolate && IsFriendChocolate
            || (v31 = (System_Int32_array *)Instance, !Instance->fields.m_CancellationTokenSource) )
          {
            openCallbackFunc = this->fields.openCallbackFunc;
            this->fields.state = 3;
            if ( openCallbackFunc )
            {
              this->fields.openCallbackFunc = 0;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
                0,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
              if ( !openCallback )
                goto LABEL_51;
              ((void (__fastcall *)(intptr_t, intptr_t))openCallback->fields.invoke_impl)(
                openCallback->fields.method_code,
                openCallback->fields.method);
            }
            BoostItemMenu__Callback(this, 1, -1, (const MethodInfo *)v26);
            return;
          }
          v32 = Method_BoostItemMenu_Open__;
          if ( (*((_BYTE *)Method_BoostItemMenu_Open__ + 83) & 2) != 0 )
            v32 = (_QWORD *)sub_21FFC68(Method_BoostItemMenu_Open__);
          v33 = (System_Reflection_MethodBase_o *)sub_21FFC34(v32, v32[4]);
          OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
            titleLabel = this->fields.titleLabel;
            v37 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
            if ( IsFriendChocolate )
            {
              if ( !v37 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3090/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, 0);
              if ( !titleLabel )
                goto LABEL_51;
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
              titleDetailLabel = this->fields.titleDetailLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3086/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, 0);
              if ( !titleDetailLabel )
                goto LABEL_51;
              UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0);
              useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3088/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, 0);
              if ( !useConfirmOptionLabel )
                goto LABEL_51;
              UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0);
              Instance = (DataManager_o *)this->fields.informationButton;
              if ( !Instance )
                goto LABEL_51;
              Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
              if ( !Instance )
                goto LABEL_51;
              v40 = 0;
            }
            else
            {
              if ( !v37 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3089/*"BOOST_ITEM_USE_TITILE"*/, 0);
              if ( !titleLabel )
                goto LABEL_51;
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
              v49 = this->fields.titleDetailLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3085/*"BOOST_ITEM_USE_DETAIL"*/, 0);
              if ( !v49 )
                goto LABEL_51;
              UILabel__set_text(v49, (System_String_o *)Instance, 0);
              v50 = this->fields.useConfirmOptionLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3087/*"BOOST_ITEM_USE_OPTION"*/, 0);
              if ( !v50 )
                goto LABEL_51;
              UILabel__set_text(v50, (System_String_o *)Instance, 0);
              Instance = (DataManager_o *)this->fields.informationButton;
              if ( !Instance )
                goto LABEL_51;
              Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
              if ( !Instance )
                goto LABEL_51;
              v40 = 1;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v40, 0);
            decideLabel = this->fields.decideLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3084/*"BOOST_ITEM_USE_DECIDE"*/, 0);
            if ( decideLabel )
            {
              UILabel__set_text(decideLabel, (System_String_o *)Instance, 0);
              cancelLabel = this->fields.cancelLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3078/*"BOOST_ITEM_USE_CANCEL"*/, 0);
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
                      v31,
                      setupInfo->fields.questId,
                      v55);
                    Instance = (DataManager_o *)this->fields.itemListViewManager;
                    if ( Instance )
                    {
                      BoostItemListViewManager__SetMode_40721124((BoostItemListViewManager_o *)Instance, 1, v56);
                      Instance = (DataManager_o *)this->fields.setupConfirmSprite;
                      if ( Instance )
                      {
                        if ( this->fields.isBoostItemUseConfirm )
                          v57 = &StringLiteral_18237/*"btn_on"*/;
                        else
                          v57 = &StringLiteral_18236/*"btn_off"*/;
                        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v57, 0);
                        this->fields.state = 1;
                        v58 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                        System_Action___ctor(v58, (Il2CppObject *)this, Method_BoostItemMenu_EndOpen__, 0);
                        BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0, 0);
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
LABEL_51:
    sub_21FFECC(Instance, v24);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BoostItemMenu_o *v13; // x0
  BoostItemMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5933CE1 & 1) == 0 )
  {
    sub_21FFC50(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_5933CE1 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BoostItemMenu_o *)sub_220024C(v8, BoostItemMenu_CallbackFunc_TypeInfo, v9, v10);
  BoostItemMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BoostItemMenu_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  if ( (byte_5933CE2 & 1) == 0 )
  {
    sub_21FFC50(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_5933CE2 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BoostItemMenu_o *)sub_220024C(v8, BoostItemMenu_CallbackFunc_TypeInfo, v9, v10);
  BoostItemMenu__GetItem(v13, v14, v15);
}


void BoostItemMenu_CallbackFunc___ctor(
        BoostItemMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF0D84;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF0D2C;
}


System_IAsyncResult_o *BoostItemMenu_CallbackFunc__BeginInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = index;
  if ( (byte_5933CEA & 1) == 0 )
  {
    sub_21FFC50(&BoostItemMenu_ResultKind_TypeInfo);
    byte_5933CEA = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(BoostItemMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void BoostItemMenu_CallbackFunc__EndInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BoostItemMenu_o *_4__this; // x0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct BoostItemMenu_CallbackFunc_o *v11; // x20
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.callbackFunc;
  v11 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_21FFBF4(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v11->fields.invoke_impl)(
      v11->fields.method_code,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      v11->fields.method);
}