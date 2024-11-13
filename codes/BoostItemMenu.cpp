void __fastcall BoostItemMenu___ctor(BoostItemMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11DA2 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11DA2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__Callback(BoostItemMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  _BOOL4 isBoostItemUseConfirm; // w19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x19

  if ( (byte_4B11D9F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&index);
    sub_1BCA7E0(&OptionManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, v9, v10);
    sub_1BCA7E0(&BoostItemMenu___c__DisplayClass25_0_TypeInfo, v11, v12);
    byte_4B11D9F = 1;
  }
  v13 = sub_1BCAA2C(BoostItemMenu___c__DisplayClass25_0_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&index, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784(v13 + 16, this);
  *(_DWORD *)(v13 + 24) = result;
  *(_DWORD *)(v13 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v16);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)v13, Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, 0LL);
  OptionManager__SaveData(v21, 0LL);
}


void __fastcall BoostItemMenu__Close(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostItemMenu__Close_32395548(this, 0LL, v2);
}


void __fastcall BoostItemMenu__Close_32395548(
        BoostItemMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  BoostItemListViewManager_o *itemListViewManager; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_4B11D9E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_BoostItemMenu_EndClose__, v5, v6);
    byte_4B11D9E = 1;
  }
  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1BCAA3C(0LL, callback);
  BoostItemListViewManager__SetMode_32389776(itemListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BoostItemMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall BoostItemMenu__EndClose(BoostItemMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostItemMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall BoostItemMenu__EndOpen(BoostItemMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct System_Action_o **p_openCallbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4B11D9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoostItemMenu_OnSelectItem__, method, v2);
    sub_1BCA7E0(&BoostItemListViewManager_CallbackFunc_TypeInfo, v5, v6);
    byte_4B11D9D = 1;
  }
  this->fields.state = 2;
  itemListViewManager = this->fields.itemListViewManager;
  v8 = (BoostItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                    BoostItemListViewManager_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  BoostItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_BoostItemMenu_OnSelectItem__,
    v9);
  if ( !itemListViewManager )
    sub_1BCAA3C(v10, v11);
  itemListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(&itemListViewManager->fields.callbackFunc, v8);
  BoostItemListViewManager__SetMode_32389776(itemListViewManager, 2, v12);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = &this->fields.openCallbackFunc;
  v14 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    *p_openCallbackFunc = 0LL;
    sub_1BCA784(p_openCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v14->fields.m_target)(
      v14->fields.original_method_info,
      *(_QWORD *)&v14->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
BoostItemListViewItem_o *__fastcall BoostItemMenu__GetItem(
        BoostItemMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  return BoostItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostItemMenu__Init(BoostItemMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1BCAA3C(0LL, method);
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostItemMenu__OnClickCancel(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    BoostItemMenu__Callback(this, 0, -1, v2);
  }
}


void __fastcall BoostItemMenu__OnClickDecide(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    BoostItemMenu__Callback(this, 1, -1, v2);
  }
}


void __fastcall BoostItemMenu__OnClickInfomation(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    BoostItemMenu__Callback(this, 2, -1, v2);
  }
}


void __fastcall BoostItemMenu__OnClickSetupConfirm(BoostItemMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v13; // x8

  if ( (byte_4B11DA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoostItemMenu_OnClickSetupConfirm__, method, v2);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v6, v7);
    byte_4B11DA1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_BoostItemMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostItemMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_BoostItemMenu_OnClickSetupConfirm__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1BCAA3C(0LL, v10);
    if ( isBoostItemUseConfirm )
      v13 = &StringLiteral_17702/*"btn_off"*/;
    else
      v13 = &StringLiteral_17703/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v13, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__OnSelectItem(BoostItemMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  BoostItemMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  BoostItemListViewManager_o *itemListViewManager; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  BoostItemListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  int32_t v18; // w2
  BoostItemMenu_o *v19; // x0
  int32_t v20; // w1

  v6 = this;
  if ( (byte_4B11DA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoostItemMenu_OnSelectItem__, *(_QWORD *)&kind, *(_QWORD *)&n);
    this = (BoostItemMenu_o *)sub_1BCA7E0(&BoostItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
    byte_4B11DA0 = 1;
  }
  if ( v6->fields.state == 2 )
  {
    if ( (n & 0x80000000) != 0 )
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
          v9 = Method_BoostItemMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_BoostItemMenu_OnSelectItem__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1BCA7F8(Method_BoostItemMenu_OnSelectItem__);
          v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
          itemListViewManager = v6->fields.itemListViewManager;
          v15 = (BoostItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             BoostItemListViewManager_CallbackFunc_TypeInfo,
                                                             v12,
                                                             v13,
                                                             v14);
          BoostItemListViewManager_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)v6,
            (intptr_t)Method_BoostItemMenu_OnSelectItem__,
            v16);
          if ( itemListViewManager )
          {
            itemListViewManager->fields.callbackFunc = v15;
            sub_1BCA784(&itemListViewManager->fields.callbackFunc, v15);
            BoostItemListViewManager__SetMode_32389776(itemListViewManager, 2, v17);
            return;
          }
LABEL_18:
          sub_1BCAA3C(this, *(_QWORD *)&kind);
        }
        v20 = 1;
        v19 = v6;
        v18 = n;
        v6->fields.state = 3;
        goto LABEL_16;
      }
    }
    v18 = -1;
    v6->fields.state = 3;
    v19 = v6;
    v20 = 0;
LABEL_16:
    BoostItemMenu__Callback(v19, v20, v18, method);
  }
}


void __fastcall BoostItemMenu__Open(
        BoostItemMenu_o *this,
        EventUpValSetupInfo_o *setupInfo,
        BoostItemMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        bool IsFriendChocolate,
        bool IsAvailableFriendChocolate,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  int32_t state; // w8
  __int64 v46; // x1
  DataManager_o *Instance; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x3
  System_Int32_array *v50; // x21
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  __int64 v53; // x1
  UILabel_o *titleLabel; // x23
  UILabel_o *titleDetailLabel; // x22
  UILabel_o *useConfirmOptionLabel; // x22
  bool v57; // w1
  const MethodInfo *v58; // x1
  struct System_Action_o *openCallbackFunc; // x8
  UILabel_o *v60; // x22
  UILabel_o *v61; // x22
  __int64 v62; // x1
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x2
  __int64 *v67; // x8
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Action_o *v71; // x20

  if ( (byte_4B11D9C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, setupInfo, callback);
    sub_1BCA7E0(&Method_BoostItemMenu_EndOpen__, v13, v14);
    sub_1BCA7E0(&Method_BoostItemMenu_Open__, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&OptionManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&StringLiteral_3094/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3096/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3091/*"BOOST_ITEM_USE_DETAIL"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3084/*"BOOST_ITEM_USE_CANCEL"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3090/*"BOOST_ITEM_USE_DECIDE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3093/*"BOOST_ITEM_USE_OPTION"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3095/*"BOOST_ITEM_USE_TITILE"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_3092/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, v43, v44);
    byte_4B11D9C = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    this->fields.openCallbackFunc = openCallback;
    sub_1BCA784(&this->fields.openCallbackFunc, openCallback);
    BoostItemMenu__EndOpen(this, v58);
    return;
  }
  if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    this->fields.openCallbackFunc = openCallback;
    sub_1BCA784(&this->fields.openCallbackFunc, openCallback);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v46);
    this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)ItemMaster__GetBoostItemList((ItemMaster_o *)Instance, setupInfo, 0LL);
    if ( !Instance )
      goto LABEL_49;
    if ( !IsAvailableFriendChocolate && IsFriendChocolate
      || (v50 = (System_Int32_array *)Instance, !Instance->fields.m_CancellationTokenSource) )
    {
      openCallbackFunc = this->fields.openCallbackFunc;
      this->fields.state = 3;
      if ( openCallbackFunc )
      {
        this->fields.openCallbackFunc = 0LL;
        Instance = (DataManager_o *)sub_1BCA784(&this->fields.openCallbackFunc, 0LL);
        if ( !openCallback )
          goto LABEL_49;
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallback->fields.m_target)(
          openCallback->fields.original_method_info,
          *(_QWORD *)&openCallback->fields.extra_arg);
      }
      BoostItemMenu__Callback(this, 1, -1, v49);
      return;
    }
    v51 = Method_BoostItemMenu_Open__;
    if ( (*((_BYTE *)Method_BoostItemMenu_Open__ + 83) & 2) != 0 )
      v51 = (_QWORD *)sub_1BCA7F8(Method_BoostItemMenu_Open__);
    v52 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v51, v51[4]);
    OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0LL);
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
LABEL_49:
      sub_1BCAA3C(Instance, v48);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFriendChocolate )
        goto LABEL_18;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
      if ( IsFriendChocolate )
      {
LABEL_18:
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3096/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_49;
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
        titleDetailLabel = this->fields.titleDetailLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3092/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, 0LL);
        if ( !titleDetailLabel )
          goto LABEL_49;
        UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
        useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3094/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, 0LL);
        if ( !useConfirmOptionLabel )
          goto LABEL_49;
        UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
        Instance = (DataManager_o *)this->fields.informationButton;
        if ( !Instance )
          goto LABEL_49;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_49;
        v57 = 0;
LABEL_37:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v57, 0LL);
        decideLabel = this->fields.decideLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3090/*"BOOST_ITEM_USE_DECIDE"*/, 0LL);
        if ( decideLabel )
        {
          UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
          cancelLabel = this->fields.cancelLabel;
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3084/*"BOOST_ITEM_USE_CANCEL"*/, 0LL);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0LL);
            if ( setupInfo )
            {
              Instance = (DataManager_o *)this->fields.itemListViewManager;
              if ( Instance )
              {
                BoostItemListViewManager__CreateList(
                  (BoostItemListViewManager_o *)Instance,
                  v50,
                  setupInfo->fields.questId,
                  v65);
                Instance = (DataManager_o *)this->fields.itemListViewManager;
                if ( Instance )
                {
                  BoostItemListViewManager__SetMode_32389776((BoostItemListViewManager_o *)Instance, 1, v66);
                  Instance = (DataManager_o *)this->fields.setupConfirmSprite;
                  if ( Instance )
                  {
                    if ( this->fields.isBoostItemUseConfirm )
                      v67 = &StringLiteral_17703/*"btn_on"*/;
                    else
                      v67 = &StringLiteral_17702/*"btn_off"*/;
                    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v67, 0LL);
                    this->fields.state = 1;
                    v71 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v68, v69, v70);
                    System_Action___ctor(v71, (Il2CppObject *)this, Method_BoostItemMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v71, 0, 0LL);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3095/*"BOOST_ITEM_USE_TITILE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_49;
    UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
    v60 = this->fields.titleDetailLabel;
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3091/*"BOOST_ITEM_USE_DETAIL"*/, 0LL);
    if ( !v60 )
      goto LABEL_49;
    UILabel__set_text(v60, (System_String_o *)Instance, 0LL);
    v61 = this->fields.useConfirmOptionLabel;
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3093/*"BOOST_ITEM_USE_OPTION"*/, 0LL);
    if ( !v61 )
      goto LABEL_49;
    UILabel__set_text(v61, (System_String_o *)Instance, 0LL);
    Instance = (DataManager_o *)this->fields.informationButton;
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_49;
    v57 = 1;
    goto LABEL_37;
  }
}


void __fastcall BoostItemMenu__add_callbackFunc(
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

  if ( (byte_4B11D9A & 1) == 0 )
  {
    sub_1BCA7E0(&BoostItemMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11D9A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostItemMenu_CallbackFunc_c *)v8->klass != BoostItemMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_1BCACFC(v8);
  BoostItemMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall BoostItemMenu__remove_callbackFunc(
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

  if ( (byte_4B11D9B & 1) == 0 )
  {
    sub_1BCA7E0(&BoostItemMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11D9B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostItemMenu_CallbackFunc_c *)v8->klass != BoostItemMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_1BCACFC(v8);
  BoostItemMenu__GetItem(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu_CallbackFunc___ctor(
        BoostItemMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A06BD4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06B7C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BoostItemMenu_CallbackFunc__BeginInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = index;
  v14 = result;
  if ( (byte_4B11DA3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&index);
    sub_1BCA7E0(&BoostItemMenu_ResultKind_TypeInfo, v9, v10);
    byte_4B11DA3 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(BoostItemMenu_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall BoostItemMenu_CallbackFunc__EndInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BoostItemMenu_CallbackFunc__Invoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall BoostItemMenu___c__DisplayClass25_0___ctor(
        BoostItemMenu___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoostItemMenu___c__DisplayClass25_0___Callback_b__0(
        BoostItemMenu___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  struct BoostItemMenu_o *_4__this; // x0
  struct BoostItemMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct BoostItemMenu_CallbackFunc_o *v5; // x20
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_1BCA784(p_callbackFunc, 0LL);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      *(_QWORD *)&v5->fields.extra_arg);
}