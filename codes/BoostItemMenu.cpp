void __fastcall BoostItemMenu___ctor(BoostItemMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A049FD & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A049FD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__Callback(BoostItemMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v16; // x19

  if ( (byte_4A049FA & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B686D4(&OptionManager_TypeInfo, v7);
    sub_1B686D4(&Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, v8);
    sub_1B686D4(&BoostItemMenu___c__DisplayClass25_0_TypeInfo, v9);
    byte_4A049FA = 1;
  }
  v10 = sub_1B68920(BoostItemMenu___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B68930(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v10 + 24) = result;
  *(_DWORD *)(v10 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v16 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v10, Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, 0LL);
  OptionManager__SaveData(v16, 0LL);
}


void __fastcall BoostItemMenu__Close(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostItemMenu__Close_31618332(this, 0LL, v2);
}


void __fastcall BoostItemMenu__Close_31618332(
        BoostItemMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BoostItemListViewManager_o *itemListViewManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_Action_o *v9; // x20

  if ( (byte_4A049F9 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_BoostItemMenu_EndClose__, v5);
    byte_4A049F9 = 1;
  }
  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1B68930(0LL, callback);
  BoostItemListViewManager__SetMode_31612560(itemListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v7, v8);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BoostItemMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall BoostItemMenu__EndClose(BoostItemMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostItemMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B68678(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall BoostItemMenu__EndOpen(BoostItemMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  int32_t v13; // w3
  ServantStatusBattleListViewItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v15; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4A049F8 & 1) == 0 )
  {
    sub_1B686D4(&Method_BoostItemMenu_OnSelectItem__, method);
    sub_1B686D4(&BoostItemListViewManager_CallbackFunc_TypeInfo, v3);
    byte_4A049F8 = 1;
  }
  this->fields.state = 2;
  itemListViewManager = this->fields.itemListViewManager;
  v5 = (BoostItemListViewManager_CallbackFunc_o *)sub_1B68920(BoostItemListViewManager_CallbackFunc_TypeInfo);
  BoostItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_BoostItemMenu_OnSelectItem__,
    v6);
  if ( !itemListViewManager )
    sub_1B68930(v7, v8);
  itemListViewManager->fields.callbackFunc = v5;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&itemListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  BoostItemListViewManager__SetMode_31612560(itemListViewManager, 2, v11);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc;
  v15 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1B68678(p_openCallbackFunc, 0, v12, v13);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v15->fields.m_target)(
      v15->fields.original_method_info,
      *(_QWORD *)&v15->fields.extra_arg);
  }
}


BoostItemListViewItem_o *__fastcall BoostItemMenu__GetItem(
        BoostItemMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1B68930(0LL, index);
  return BoostItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostItemMenu__Init(BoostItemMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1B68930(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v10; // x8

  if ( (byte_4A049FC & 1) == 0 )
  {
    sub_1B686D4(&Method_BoostItemMenu_OnClickSetupConfirm__, method);
    sub_1B686D4(&StringLiteral_17461/*"btn_on"*/, v3);
    sub_1B686D4(&StringLiteral_17460/*"btn_off"*/, v4);
    byte_4A049FC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_BoostItemMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostItemMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B686EC(Method_BoostItemMenu_OnClickSetupConfirm__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1B68930(0LL, v7);
    if ( isBoostItemUseConfirm )
      v10 = &StringLiteral_17460/*"btn_off"*/;
    else
      v10 = &StringLiteral_17461/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__OnSelectItem(BoostItemMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  BoostItemMenu_o *v6; // x19
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  BoostItemMenu_o *v17; // x0
  int32_t v18; // w1

  v6 = this;
  if ( (byte_4A049FB & 1) == 0 )
  {
    sub_1B686D4(&Method_BoostItemMenu_OnSelectItem__, *(_QWORD *)&kind);
    this = (BoostItemMenu_o *)sub_1B686D4(&BoostItemListViewManager_CallbackFunc_TypeInfo, v7);
    byte_4A049FB = 1;
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
          v8 = Method_BoostItemMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_BoostItemMenu_OnSelectItem__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1B686EC(Method_BoostItemMenu_OnSelectItem__);
          v9 = (System_Reflection_MethodBase_o *)sub_1B686B8(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
          itemListViewManager = v6->fields.itemListViewManager;
          v11 = (BoostItemListViewManager_CallbackFunc_o *)sub_1B68920(BoostItemListViewManager_CallbackFunc_TypeInfo);
          BoostItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)v6,
            (intptr_t)Method_BoostItemMenu_OnSelectItem__,
            v12);
          if ( itemListViewManager )
          {
            itemListViewManager->fields.callbackFunc = v11;
            sub_1B68678(
              (ServantStatusBattleListViewItem_o *)&itemListViewManager->fields.callbackFunc,
              (int32_t)v11,
              v13,
              v14);
            BoostItemListViewManager__SetMode_31612560(itemListViewManager, 2, v15);
            return;
          }
LABEL_18:
          sub_1B68930(this, *(_QWORD *)&kind);
        }
        v18 = 1;
        v17 = v6;
        v16 = n;
        v6->fields.state = 3;
        goto LABEL_16;
      }
    }
    v16 = -1;
    v6->fields.state = 3;
    v17 = v6;
    v18 = 0;
LABEL_16:
    BoostItemMenu__Callback(v17, v18, v16, method);
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  int32_t state; // w8
  int32_t v30; // w2
  int32_t v31; // w3
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Int32_array *v36; // x21
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  UILabel_o *titleLabel; // x23
  UILabel_o *titleDetailLabel; // x22
  UILabel_o *useConfirmOptionLabel; // x22
  bool v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x1
  struct System_Action_o *openCallbackFunc; // x8
  UILabel_o *v47; // x22
  UILabel_o *v48; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x2
  __int64 *v53; // x8
  System_Action_o *v54; // x20

  if ( (byte_4A049F7 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, setupInfo);
    sub_1B686D4(&Method_BoostItemMenu_EndOpen__, v13);
    sub_1B686D4(&Method_BoostItemMenu_Open__, v14);
    sub_1B686D4(&Method_DataManager_GetMasterData_ItemMaster___, v15);
    sub_1B686D4(&LocalizationManager_TypeInfo, v16);
    sub_1B686D4(&OptionManager_TypeInfo, v17);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B686D4(&StringLiteral_3050/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, v19);
    sub_1B686D4(&StringLiteral_17461/*"btn_on"*/, v20);
    sub_1B686D4(&StringLiteral_3052/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, v21);
    sub_1B686D4(&StringLiteral_3047/*"BOOST_ITEM_USE_DETAIL"*/, v22);
    sub_1B686D4(&StringLiteral_3040/*"BOOST_ITEM_USE_CANCEL"*/, v23);
    sub_1B686D4(&StringLiteral_3046/*"BOOST_ITEM_USE_DECIDE"*/, v24);
    sub_1B686D4(&StringLiteral_3049/*"BOOST_ITEM_USE_OPTION"*/, v25);
    sub_1B686D4(&StringLiteral_3051/*"BOOST_ITEM_USE_TITILE"*/, v26);
    sub_1B686D4(&StringLiteral_17460/*"btn_off"*/, v27);
    sub_1B686D4(&StringLiteral_3048/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, v28);
    byte_4A049F7 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)openCallback);
    this->fields.openCallbackFunc = openCallback;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v43, v44);
    BoostItemMenu__EndOpen(this, v45);
    return;
  }
  if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)openCallback);
    this->fields.openCallbackFunc = openCallback;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v30, v31);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)ItemMaster__GetBoostItemList((ItemMaster_o *)Instance, setupInfo, 0LL);
    if ( !Instance )
      goto LABEL_49;
    if ( !IsAvailableFriendChocolate && IsFriendChocolate
      || (v36 = (System_Int32_array *)Instance, !Instance->fields.m_CancellationTokenSource) )
    {
      openCallbackFunc = this->fields.openCallbackFunc;
      this->fields.state = 3;
      if ( openCallbackFunc )
      {
        this->fields.openCallbackFunc = 0LL;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, 0, v34, (int32_t)v35);
        if ( !openCallback )
          goto LABEL_49;
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallback->fields.m_target)(
          openCallback->fields.original_method_info,
          *(_QWORD *)&openCallback->fields.extra_arg);
      }
      BoostItemMenu__Callback(this, 1, -1, v35);
      return;
    }
    v37 = Method_BoostItemMenu_Open__;
    if ( (*((_BYTE *)Method_BoostItemMenu_Open__ + 83) & 2) != 0 )
      v37 = (_QWORD *)sub_1B686EC(Method_BoostItemMenu_Open__);
    v38 = (System_Reflection_MethodBase_o *)sub_1B686B8(v37, v37[4]);
    OverwriteAssetSoundName__PlaySystemSe(v38, 0, 0LL);
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
LABEL_49:
      sub_1B68930(Instance, v33);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
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
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3052/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_49;
        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
        titleDetailLabel = this->fields.titleDetailLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3048/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, 0LL);
        if ( !titleDetailLabel )
          goto LABEL_49;
        UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
        useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3050/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, 0LL);
        if ( !useConfirmOptionLabel )
          goto LABEL_49;
        UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
        Instance = (DataManager_o *)this->fields.informationButton;
        if ( !Instance )
          goto LABEL_49;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_49;
        v42 = 0;
LABEL_37:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v42, 0LL);
        decideLabel = this->fields.decideLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3046/*"BOOST_ITEM_USE_DECIDE"*/, 0LL);
        if ( decideLabel )
        {
          UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
          cancelLabel = this->fields.cancelLabel;
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3040/*"BOOST_ITEM_USE_CANCEL"*/, 0LL);
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
                  v36,
                  setupInfo->fields.questId,
                  v51);
                Instance = (DataManager_o *)this->fields.itemListViewManager;
                if ( Instance )
                {
                  BoostItemListViewManager__SetMode_31612560((BoostItemListViewManager_o *)Instance, 1, v52);
                  Instance = (DataManager_o *)this->fields.setupConfirmSprite;
                  if ( Instance )
                  {
                    if ( this->fields.isBoostItemUseConfirm )
                      v53 = &StringLiteral_17461/*"btn_on"*/;
                    else
                      v53 = &StringLiteral_17460/*"btn_off"*/;
                    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v53, 0LL);
                    this->fields.state = 1;
                    v54 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
                    System_Action___ctor(v54, (Il2CppObject *)this, Method_BoostItemMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3051/*"BOOST_ITEM_USE_TITILE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_49;
    UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
    v47 = this->fields.titleDetailLabel;
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3047/*"BOOST_ITEM_USE_DETAIL"*/, 0LL);
    if ( !v47 )
      goto LABEL_49;
    UILabel__set_text(v47, (System_String_o *)Instance, 0LL);
    v48 = this->fields.useConfirmOptionLabel;
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3049/*"BOOST_ITEM_USE_OPTION"*/, 0LL);
    if ( !v48 )
      goto LABEL_49;
    UILabel__set_text(v48, (System_String_o *)Instance, 0LL);
    Instance = (DataManager_o *)this->fields.informationButton;
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_49;
    v42 = 1;
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

  if ( (byte_4A049F5 & 1) == 0 )
  {
    sub_1B686D4(&BoostItemMenu_CallbackFunc_TypeInfo, value);
    byte_4A049F5 = 1;
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
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_1B68BF0(v8);
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

  if ( (byte_4A049F6 & 1) == 0 )
  {
    sub_1B686D4(&BoostItemMenu_CallbackFunc_TypeInfo, value);
    byte_4A049F6 = 1;
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
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_1B68BF0(v8);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AA6D0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AA678;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = result;
  if ( (byte_4A049FE & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B686D4(&BoostItemMenu_ResultKind_TypeInfo, v9);
    byte_4A049FE = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(BoostItemMenu_ResultKind_TypeInfo, &v16, *(_QWORD *)&index, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B68688(this, v14, callback, object);
}


void __fastcall BoostItemMenu_CallbackFunc__EndInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  struct BoostItemMenu_o *_4__this; // x0
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct BoostItemMenu_CallbackFunc_o *v7; // x20
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&_4__this->fields.callbackFunc;
  v7 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_1B68678(p_callbackFunc, 0, v2, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v7->fields.m_target)(
      v7->fields.original_method_info,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      *(_QWORD *)&v7->fields.extra_arg);
}