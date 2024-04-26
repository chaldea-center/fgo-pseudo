void __fastcall BoostItemMenu___ctor(BoostItemMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4353E4B & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_4353E4B = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostItemMenu__Callback(BoostItemMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v17; // x19

  if ( (byte_4353E48 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__);
    sub_B70694(&BoostItemMenu___c__DisplayClass25_0_TypeInfo);
    byte_4353E48 = 1;
  }
  v7 = sub_B70764(BoostItemMenu___c__DisplayClass25_0_TypeInfo);
  BoostItemMenu___c__DisplayClass25_0___ctor((BoostItemMenu___c__DisplayClass25_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v7, Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, 0LL);
  OptionManager__SaveData(v17, 0LL);
}


void __fastcall BoostItemMenu__Close(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostItemMenu__Close_29057696(this, 0LL, v2);
}


void __fastcall BoostItemMenu__Close_29057696(
        BoostItemMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_4353E47 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BoostItemMenu_EndClose__);
    byte_4353E47 = 1;
  }
  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B7076C(0LL, callback);
  BoostItemListViewManager__SetMode_24503524(itemListViewManager, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BoostItemMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall BoostItemMenu__EndClose(BoostItemMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostItemMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B70630(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall BoostItemMenu__EndOpen(BoostItemMenu_o *this, const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v14; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4353E46 & 1) == 0 )
  {
    sub_B70694(&Method_BoostItemMenu_OnSelectItem__);
    sub_B70694(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    byte_4353E46 = 1;
  }
  this->fields.state = 2;
  itemListViewManager = this->fields.itemListViewManager;
  v4 = (BoostItemListViewManager_CallbackFunc_o *)sub_B70764(BoostItemListViewManager_CallbackFunc_TypeInfo);
  BoostItemListViewManager_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_BoostItemMenu_OnSelectItem__, 0LL);
  if ( !itemListViewManager )
    sub_B7076C(v5, v6);
  BoostItemListViewManager__SetMode(itemListViewManager, 2, v4, 0LL);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v14 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_B70630(p_openCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
    System_Action__Invoke(v14, 0LL);
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
    sub_B7076C(0LL, index);
  return BoostItemListViewManager__GetItem(itemListViewManager, index, 0LL);
}


void __fastcall BoostItemMenu__Init(BoostItemMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B7076C(0LL, method);
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
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v6; // x8

  if ( (byte_4353E4A & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_4353E4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_B7076C(0LL, v3);
    if ( isBoostItemUseConfirm )
      v6 = &StringLiteral_17261/*"btn_off"*/;
    else
      v6 = &StringLiteral_17262/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__OnSelectItem(BoostItemMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0
  BoostItemListViewManager_o *v8; // x20
  BoostItemListViewManager_CallbackFunc_o *v9; // x21
  int32_t v10; // w2
  BoostItemMenu_o *v11; // x0
  int32_t v12; // w1

  if ( (byte_4353E49 & 1) == 0 )
  {
    sub_B70694(&Method_BoostItemMenu_OnSelectItem__);
    sub_B70694(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353E49 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) != 0 )
    {
      itemListViewManager = 0LL;
    }
    else
    {
      itemListViewManager = this->fields.itemListViewManager;
      if ( !itemListViewManager )
        goto LABEL_20;
      itemListViewManager = (BoostItemListViewManager_o *)BoostItemListViewManager__GetItem(itemListViewManager, n, 0LL);
    }
    if ( kind == 1 )
    {
      if ( !itemListViewManager )
        goto LABEL_20;
      if ( LOBYTE(itemListViewManager->fields.dropList) )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        v8 = this->fields.itemListViewManager;
        v9 = (BoostItemListViewManager_CallbackFunc_o *)sub_B70764(BoostItemListViewManager_CallbackFunc_TypeInfo);
        BoostItemListViewManager_CallbackFunc___ctor(v9, (Il2CppObject *)this, Method_BoostItemMenu_OnSelectItem__, 0LL);
        if ( v8 )
        {
          BoostItemListViewManager__SetMode(v8, 2, v9, 0LL);
          return;
        }
LABEL_20:
        sub_B7076C(itemListViewManager, *(_QWORD *)&kind);
      }
      v12 = 1;
      v11 = this;
      v10 = n;
      this->fields.state = 3;
    }
    else
    {
      v10 = -1;
      this->fields.state = 3;
      v11 = this;
      v12 = 0;
    }
    BoostItemMenu__Callback(v11, v12, v10, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__Open(
        BoostItemMenu_o *this,
        EventUpValSetupInfo_o *setupInfo,
        BoostItemMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        bool IsFriendChocolate,
        bool IsAvailableFriendChocolate,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  int32_t state; // w8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array *v29; // x21
  UILabel_o *titleLabel; // x23
  UILabel_o *titleDetailLabel; // x22
  UILabel_o *useConfirmOptionLabel; // x22
  bool v33; // w1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  struct System_Action_o *openCallbackFunc; // x8
  UILabel_o *v42; // x22
  UILabel_o *v43; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  __int64 *v46; // x8
  System_Action_o *v47; // x20

  if ( (byte_4353E45 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BoostItemMenu_EndOpen__);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_2656/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/);
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_2658/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/);
    sub_B70694(&StringLiteral_2653/*"BOOST_ITEM_USE_DETAIL"*/);
    sub_B70694(&StringLiteral_2646/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_B70694(&StringLiteral_2652/*"BOOST_ITEM_USE_DECIDE"*/);
    sub_B70694(&StringLiteral_2655/*"BOOST_ITEM_USE_OPTION"*/);
    sub_B70694(&StringLiteral_2657/*"BOOST_ITEM_USE_TITILE"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    sub_B70694(&StringLiteral_2654/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/);
    byte_4353E45 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)openCallback,
      (System_Boolean_array **)IsFriendChocolate,
      (System_Int32_array **)IsAvailableFriendChocolate,
      (System_Int32_array *)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
      (System_Int32_array **)openCallback,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    BoostItemMenu__EndOpen(this, v40);
    return;
  }
  if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)openCallback,
      (System_Boolean_array **)IsFriendChocolate,
      (System_Int32_array **)IsAvailableFriendChocolate,
      (System_Int32_array *)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
      (System_Int32_array **)openCallback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)ItemMaster__GetBoostItemList((ItemMaster_o *)Instance, setupInfo, 0LL);
        if ( Instance )
        {
          if ( !IsAvailableFriendChocolate && IsFriendChocolate
            || (v29 = (System_Int32_array *)Instance, !Instance->fields.datalist) )
          {
            openCallbackFunc = this->fields.openCallbackFunc;
            this->fields.state = 3;
            if ( openCallbackFunc )
            {
              this->fields.openCallbackFunc = 0LL;
              sub_B70630(
                (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
                0LL,
                v23,
                v24,
                v25,
                v26,
                v27,
                v28);
              if ( !openCallback )
                goto LABEL_56;
              System_Action__Invoke(openCallback, 0LL);
            }
            BoostItemMenu__Callback(this, 1, -1, (const MethodInfo *)v24);
            return;
          }
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            titleLabel = this->fields.titleLabel;
            if ( IsFriendChocolate )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2658/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !titleLabel )
                goto LABEL_56;
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              titleDetailLabel = this->fields.titleDetailLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2654/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !titleDetailLabel )
                goto LABEL_56;
              UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
              useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2656/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !useConfirmOptionLabel )
                goto LABEL_56;
              UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
              Instance = (DataManager_o *)this->fields.informationButton;
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
              if ( !Instance )
                goto LABEL_56;
              v33 = 0;
            }
            else
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2657/*"BOOST_ITEM_USE_TITILE"*/, 0LL);
              if ( !titleLabel )
                goto LABEL_56;
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              v42 = this->fields.titleDetailLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2653/*"BOOST_ITEM_USE_DETAIL"*/, 0LL);
              if ( !v42 )
                goto LABEL_56;
              UILabel__set_text(v42, (System_String_o *)Instance, 0LL);
              v43 = this->fields.useConfirmOptionLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2655/*"BOOST_ITEM_USE_OPTION"*/, 0LL);
              if ( !v43 )
                goto LABEL_56;
              UILabel__set_text(v43, (System_String_o *)Instance, 0LL);
              Instance = (DataManager_o *)this->fields.informationButton;
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
              if ( !Instance )
                goto LABEL_56;
              v33 = 1;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v33, 0LL);
            decideLabel = this->fields.decideLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2652/*"BOOST_ITEM_USE_DECIDE"*/, 0LL);
            if ( decideLabel )
            {
              UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
              cancelLabel = this->fields.cancelLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2646/*"BOOST_ITEM_USE_CANCEL"*/, 0LL);
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
                      v29,
                      setupInfo->fields.questId,
                      0LL);
                    Instance = (DataManager_o *)this->fields.itemListViewManager;
                    if ( Instance )
                    {
                      BoostItemListViewManager__SetMode_24503524((BoostItemListViewManager_o *)Instance, 1, 0LL);
                      Instance = (DataManager_o *)this->fields.setupConfirmSprite;
                      if ( Instance )
                      {
                        if ( this->fields.isBoostItemUseConfirm )
                          v46 = &StringLiteral_17262/*"btn_on"*/;
                        else
                          v46 = &StringLiteral_17261/*"btn_off"*/;
                        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v46, 0LL);
                        this->fields.state = 1;
                        v47 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                        System_Action___ctor(v47, (Il2CppObject *)this, Method_BoostItemMenu_EndOpen__, 0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0LL);
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
LABEL_56:
    sub_B7076C(Instance, v22);
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

  if ( (byte_4353E43 & 1) == 0 )
  {
    sub_B70694(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_4353E43 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
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

  if ( (byte_4353E44 & 1) == 0 )
  {
    sub_B70694(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_4353E44 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
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
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = result;
  if ( (byte_434ED4A & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&BoostItemMenu_ResultKind_TypeInfo);
    byte_434ED4A = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BoostItemMenu_ResultKind_TypeInfo, &v13, *(_QWORD *)&index);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


void __fastcall BoostItemMenu_CallbackFunc__EndInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu_CallbackFunc__Invoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  BoostItemMenu_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BoostItemMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  BoostItemMenu_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (BoostItemMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B706C4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)index, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)index, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B706BC(v22);
      v25 = sub_B70AC0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B08590(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B70744(v17, v22);
        (*v19)(v21, v26, (unsigned int)index, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B08590(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)index,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)index,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)index, v22);
    goto LABEL_38;
  }
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
  BoostItemMenu_CallbackFunc_o *v5; // x20
  BoostItemMenu_CallbackFunc_o *callbackFunc; // t1
  const MethodInfo *v7; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_B70630(p_callbackFunc);
  if ( callbackFunc )
    BoostItemMenu_CallbackFunc__Invoke(v5, this->fields.result, this->fields.index, v7);
}