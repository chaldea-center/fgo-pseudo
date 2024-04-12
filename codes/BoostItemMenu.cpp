void __fastcall BoostItemMenu___ctor(BoostItemMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42AFF4A & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AFF4A = 1;
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

  if ( (byte_42AFF47 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__);
    sub_B52984(&BoostItemMenu___c__DisplayClass25_0_TypeInfo);
    byte_42AFF47 = 1;
  }
  v7 = sub_B52A54(BoostItemMenu___c__DisplayClass25_0_TypeInfo);
  BoostItemMenu___c__DisplayClass25_0___ctor((BoostItemMenu___c__DisplayClass25_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v7, Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, 0LL);
  OptionManager__SaveData(v17, 0LL);
}


void __fastcall BoostItemMenu__Close(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostItemMenu__Close_25043724(this, 0LL, v2);
}


void __fastcall BoostItemMenu__Close_25043724(
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

  if ( (byte_42AFF46 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BoostItemMenu_EndClose__);
    byte_42AFF46 = 1;
  }
  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B52A5C(0LL, callback);
  BoostItemListViewManager__SetMode_25038224(itemListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall BoostItemMenu__EndOpen(BoostItemMenu_o *this, const MethodInfo *method)
{
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v21; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_42AFF45 & 1) == 0 )
  {
    sub_B52984(&Method_BoostItemMenu_OnSelectItem__);
    sub_B52984(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    byte_42AFF45 = 1;
  }
  this->fields.state = 2;
  itemListViewManager = this->fields.itemListViewManager;
  v4 = (BoostItemListViewManager_CallbackFunc_o *)sub_B52A54(BoostItemListViewManager_CallbackFunc_TypeInfo);
  BoostItemListViewManager_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_BoostItemMenu_OnSelectItem__, 0LL);
  if ( !itemListViewManager )
    sub_B52A5C(v5, v6);
  itemListViewManager->fields.callbackFunc = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&itemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  BoostItemListViewManager__SetMode_25038224(itemListViewManager, 2, v13);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v21 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_B52920(p_openCallbackFunc, 0LL, v14, v15, v16, v17, v18, v19);
    System_Action__Invoke(v21, 0LL);
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
    sub_B52A5C(0LL, index);
  return BoostItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostItemMenu__Init(BoostItemMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B52A5C(0LL, method);
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

  if ( (byte_42AFF49 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    byte_42AFF49 = 1;
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
      sub_B52A5C(0LL, v3);
    if ( isBoostItemUseConfirm )
      v6 = &StringLiteral_17123/*"btn_off"*/;
    else
      v6 = &StringLiteral_17124/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__OnSelectItem(BoostItemMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0
  struct BoostItemListViewManager_o *v8; // x20
  BoostItemListViewManager_CallbackFunc_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  BoostItemMenu_o *v18; // x0
  int32_t v19; // w1

  if ( (byte_42AFF48 & 1) == 0 )
  {
    sub_B52984(&Method_BoostItemMenu_OnSelectItem__);
    sub_B52984(&BoostItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AFF48 = 1;
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
      itemListViewManager = (BoostItemListViewManager_o *)BoostItemListViewManager__GetItem(
                                                            itemListViewManager,
                                                            n,
                                                            *(const MethodInfo **)&n);
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
        v9 = (BoostItemListViewManager_CallbackFunc_o *)sub_B52A54(BoostItemListViewManager_CallbackFunc_TypeInfo);
        BoostItemListViewManager_CallbackFunc___ctor(v9, (Il2CppObject *)this, Method_BoostItemMenu_OnSelectItem__, 0LL);
        if ( v8 )
        {
          v8->fields.callbackFunc = v9;
          sub_B52920(
            (BattleServantConfConponent_o *)&v8->fields.callbackFunc,
            (System_Int32_array **)v9,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
          BoostItemListViewManager__SetMode_25038224(v8, 2, v16);
          return;
        }
LABEL_20:
        sub_B52A5C(itemListViewManager, *(_QWORD *)&kind);
      }
      v19 = 1;
      v18 = this;
      v17 = n;
      this->fields.state = 3;
    }
    else
    {
      v17 = -1;
      this->fields.state = 3;
      v18 = this;
      v19 = 0;
    }
    BoostItemMenu__Callback(v18, v19, v17, method);
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
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  __int64 *v48; // x8
  System_Action_o *v49; // x20

  if ( (byte_42AFF44 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BoostItemMenu_EndOpen__);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_2626/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/);
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_2628/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/);
    sub_B52984(&StringLiteral_2623/*"BOOST_ITEM_USE_DETAIL"*/);
    sub_B52984(&StringLiteral_2616/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_B52984(&StringLiteral_2622/*"BOOST_ITEM_USE_DECIDE"*/);
    sub_B52984(&StringLiteral_2625/*"BOOST_ITEM_USE_OPTION"*/);
    sub_B52984(&StringLiteral_2627/*"BOOST_ITEM_USE_TITILE"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    sub_B52984(&StringLiteral_2624/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/);
    byte_42AFF44 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)openCallback,
      (System_Boolean_array **)IsFriendChocolate,
      (System_Int32_array **)IsAvailableFriendChocolate,
      (System_Int32_array *)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_B52920(
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
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)openCallback,
      (System_Boolean_array **)IsFriendChocolate,
      (System_Int32_array **)IsAvailableFriendChocolate,
      (System_Int32_array *)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_B52920(
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
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
              sub_B52920(
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
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2628/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !titleLabel )
                goto LABEL_56;
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              titleDetailLabel = this->fields.titleDetailLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2624/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !titleDetailLabel )
                goto LABEL_56;
              UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
              useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2626/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, 0LL);
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
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2627/*"BOOST_ITEM_USE_TITILE"*/, 0LL);
              if ( !titleLabel )
                goto LABEL_56;
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              v42 = this->fields.titleDetailLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2623/*"BOOST_ITEM_USE_DETAIL"*/, 0LL);
              if ( !v42 )
                goto LABEL_56;
              UILabel__set_text(v42, (System_String_o *)Instance, 0LL);
              v43 = this->fields.useConfirmOptionLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2625/*"BOOST_ITEM_USE_OPTION"*/, 0LL);
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
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2622/*"BOOST_ITEM_USE_DECIDE"*/, 0LL);
            if ( decideLabel )
            {
              UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
              cancelLabel = this->fields.cancelLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2616/*"BOOST_ITEM_USE_CANCEL"*/, 0LL);
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
                      v46);
                    Instance = (DataManager_o *)this->fields.itemListViewManager;
                    if ( Instance )
                    {
                      BoostItemListViewManager__SetMode_25038224((BoostItemListViewManager_o *)Instance, 1, v47);
                      Instance = (DataManager_o *)this->fields.setupConfirmSprite;
                      if ( Instance )
                      {
                        if ( this->fields.isBoostItemUseConfirm )
                          v48 = &StringLiteral_17124/*"btn_on"*/;
                        else
                          v48 = &StringLiteral_17123/*"btn_off"*/;
                        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v48, 0LL);
                        this->fields.state = 1;
                        v49 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                        System_Action___ctor(v49, (Il2CppObject *)this, Method_BoostItemMenu_EndOpen__, 0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
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
    sub_B52A5C(Instance, v22);
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

  if ( (byte_42AFF42 & 1) == 0 )
  {
    sub_B52984(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_42AFF42 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_B52D50(v8);
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

  if ( (byte_42AFF43 & 1) == 0 )
  {
    sub_B52984(&BoostItemMenu_CallbackFunc_TypeInfo);
    byte_42AFF43 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_B52D50(v8);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall BoostItemMenu_CallbackFunc__BeginInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = index;
  v12 = result;
  if ( (byte_42AD678 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&BoostItemMenu_ResultKind_TypeInfo);
    byte_42AD678 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(BoostItemMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall BoostItemMenu_CallbackFunc__EndInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BoostItemMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  BoostItemMenu_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&index, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)index, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)index, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, v28, (unsigned int)index, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)index,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)index,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)index, v23);
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
    sub_B52A5C(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_B52920(p_callbackFunc);
  if ( callbackFunc )
    BoostItemMenu_CallbackFunc__Invoke(v5, this->fields.result, this->fields.index, v7);
}