void __fastcall FriendSearchMenu___ctor(FriendSearchMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FB292 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FB292 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchMenu__BlockInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *searchDataInput; // x0
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Collider_o *v6; // x0

  if ( (byte_40FB28B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    byte_40FB28B = 1;
  }
  if ( this->fields.state == 2 )
    this->fields.state = 3;
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  if ( !searchDataInput
    || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               searchDataInput,
                                                               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (v6 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                         Component_WebViewObject,
                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(v6, 0, 0LL);
}


void __fastcall FriendSearchMenu__Callback(FriendSearchMenu_o *this, bool result, const MethodInfo *method)
{
  FriendSearchMenu_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x21
  UILineInput_o *searchDataInput; // x0
  System_String_o *Text; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      sub_B170D4();
    Text = UILineInput__GetText(searchDataInput, 0LL);
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    FriendSearchMenu_CallbackFunc__Invoke(callbackFunc, result, Text, 0LL);
  }
}


void __fastcall FriendSearchMenu__Close(FriendSearchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendSearchMenu__Close_27329712(this, 0LL, v2);
}


void __fastcall FriendSearchMenu__Close_27329712(
        FriendSearchMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *searchDataInput; // x0
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Collider_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x20

  if ( (byte_40FB28C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, v11);
    sub_B16FFC(&Method_FriendSearchMenu_EndClose__, v12);
    byte_40FB28C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 4;
  if ( !searchDataInput
    || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               searchDataInput,
                                                               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (v15 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          Component_WebViewObject,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(v15, 0, 0LL);
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_FriendSearchMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v20, 0LL);
}


void __fastcall FriendSearchMenu__EndClose(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendSearchMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchMenu__EndCopyDialog(FriendSearchMenu_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FB28F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FB28F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall FriendSearchMenu__EndOpen(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *searchDataInput; // x0
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Collider_o *v6; // x0

  if ( (byte_40FB28A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    byte_40FB28A = 1;
  }
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 2;
  if ( !searchDataInput
    || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               searchDataInput,
                                                               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (v6 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                         Component_WebViewObject,
                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(v6, 1, 0LL);
}


void __fastcall FriendSearchMenu__Init(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *title1Label; // x0
  UILabel_o *title2Label; // x0
  UILabel_o *myAddressLabel; // x0
  UnityEngine_Component_o *searchDataInput; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIInput_o *v10; // x20
  UnityEngine_Collider_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FB288 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FB288 = 1;
  }
  title1Label = this->fields.title1Label;
  if ( !title1Label )
    goto LABEL_11;
  UILabel__set_text(title1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  title2Label = this->fields.title2Label;
  if ( !title2Label )
    goto LABEL_11;
  UILabel__set_text(title2Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  myAddressLabel = this->fields.myAddressLabel;
  if ( !myAddressLabel )
    goto LABEL_11;
  UILabel__set_text(myAddressLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  if ( !searchDataInput
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    searchDataInput,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (v10 = (UIInput_o *)Component_WebViewObject,
        UIInput__set_value((UIInput_o *)Component_WebViewObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        UIInput__set_defaultText(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (v11 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)v10,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled(v11, 0, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchMenu__OnChangeServerInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILineInput_o *searchDataInput; // x0
  System_String_o *Text; // x0
  System_String_o *v6; // x21
  System_String_o *v7; // x20
  int32_t v8; // w22
  System_String_o *v9; // x0
  UnityEngine_Component_o *v10; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct UICommonButton_o *decideButton; // x0
  void (*v13)(void); // x8
  struct UICommonButton_o *v14; // x0
  UICommonButton_c *klass; // x8
  struct UICommonButton_o *v16; // x0
  uint16_t Chars; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FB28D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FB28D = 1;
  }
  Chars = 0;
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_21;
  Text = UILineInput__GetText(searchDataInput, 0LL);
  if ( !Text )
    goto LABEL_21;
  v6 = Text;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( Text->fields.m_stringLength >= 1 )
  {
    v8 = 0;
    do
    {
      Chars = System_String__get_Chars(v6, v8, 0LL);
      if ( (unsigned __int16)(Chars - 48) <= 9u )
      {
        v9 = System_Char__ToString((uint16_t)&Chars, 0LL);
        v7 = System_String__Concat_43743732(v7, v9, 0LL);
      }
      ++v8;
    }
    while ( v8 < v6->fields.m_stringLength );
  }
  if ( System_String__op_Inequality(v6, v7, 0LL) )
  {
    v10 = (UnityEngine_Component_o *)this->fields.searchDataInput;
    if ( !v10 )
      goto LABEL_21;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v10,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !Component_WebViewObject )
      goto LABEL_21;
    UIInput__set_value((UIInput_o *)Component_WebViewObject, v7, 0LL);
    v6 = v7;
    if ( !v7 )
      goto LABEL_21;
  }
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_21;
  v13 = (void (*)(void))decideButton->klass->vtable._5_set_isEnabled.method;
  if ( v6->fields.m_stringLength >= 9 )
  {
    v13();
    v16 = this->fields.decideButton;
    if ( v16 )
    {
      klass = v16->klass;
      goto LABEL_20;
    }
LABEL_21:
    sub_B170D4();
  }
  v13();
  v14 = this->fields.decideButton;
  if ( !v14 )
    goto LABEL_21;
  klass = v14->klass;
LABEL_20:
  ((void (*)(void))klass->vtable._14_SetState.method)();
}


void __fastcall FriendSearchMenu__OnClickCancel(FriendSearchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FB291 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB291 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    FriendSearchMenu__Callback(this, 0, v3);
  }
}


void __fastcall FriendSearchMenu__OnClickCopy(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UILabel_o *myAddressLabel; // x8
  System_String_o *mText; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  NotificationDialog_ClickDelegate_o *v17; // x22

  if ( (byte_40FB28E & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_FriendSearchMenu_EndCopyDialog__, v3);
    sub_B16FFC(&UnityEngine_GUIUtility_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_3379/*"COPY_MY_ID"*/, v8);
    byte_40FB28E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    myAddressLabel = this->fields.myAddressLabel;
    if ( !myAddressLabel )
      goto LABEL_18;
    mText = myAddressLabel->fields.mText;
    if ( System_String__IsNullOrEmpty(mText, 0LL) )
      return;
    if ( (BYTE3(UnityEngine_GUIUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    }
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"COPY_MY_ID"*/, 0LL);
    v17 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(
                                                  NotificationDialog_ClickDelegate_TypeInfo,
                                                  v13,
                                                  v14,
                                                  v15,
                                                  v16);
    NotificationDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_FriendSearchMenu_EndCopyDialog__, 0LL);
    if ( !Instance )
LABEL_18:
      sub_B170D4();
    CommonUI__OpenNotificationDialog_18239760(
      Instance,
      0LL,
      v12,
      v17,
      -1,
      0,
      0,
      0,
      1,
      0,
      0LL,
      0LL,
      0,
      0,
      0LL,
      1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}


void __fastcall FriendSearchMenu__OnClickDecide(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *searchDataInput; // x0
  struct System_String_o *Text; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x2

  if ( (byte_40FB290 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB290 = 1;
  }
  if ( this->fields.state == 2 )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      sub_B170D4();
    Text = UILineInput__GetText(searchDataInput, 0LL);
    this->fields.searchId = Text;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.searchId,
      (System_Int32_array **)Text,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendSearchMenu__Callback(this, 1, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchMenu__Open(
        FriendSearchMenu_o *this,
        FriendSearchMenu_CallbackFunc_o *callback,
        bool isCodeClear,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  BattleServantConfConponent_o *p_searchId; // x0
  System_Int32_array **v20; // x1
  UnityEngine_Component_o *searchDataInput; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIInput_o *v23; // x20
  System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t state; // w8
  UILabel_o *title1Label; // x21
  System_String_o *v33; // x0
  UILabel_o *title2Label; // x21
  System_String_o *v35; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *myAddressLabel; // x21
  System_String_o *NumberFormat_23125544; // x0
  UnityEngine_Collider_o *v39; // x0
  struct UICommonButton_o *decideButton; // x0
  struct UICommonButton_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_o *v46; // x20
  const MethodInfo *v47; // x1

  if ( (byte_40FB289 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v11);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, v12);
    sub_B16FFC(&Method_FriendSearchMenu_EndOpen__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_6473/*"FRIEND_SEARCH_EXPLANATION"*/, v15);
    sub_B16FFC(&StringLiteral_6475/*"FRIEND_SEARCH_TITLE1"*/, v16);
    sub_B16FFC(&StringLiteral_6476/*"FRIEND_SEARCH_TITLE2"*/, v17);
    sub_B16FFC(&StringLiteral_1/*""*/, v18);
    byte_40FB289 = 1;
  }
  p_searchId = (BattleServantConfConponent_o *)&this->fields.searchId;
  if ( isCodeClear || !p_searchId->klass )
  {
    v20 = (System_Int32_array **)StringLiteral_1/*""*/;
    p_searchId->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
    sub_B16F98(p_searchId, v20, (System_String_array **)isCodeClear, (System_String_array **)method, v4, v5, v6, v7);
  }
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_26;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              searchDataInput,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !Component_WebViewObject )
    goto LABEL_26;
  v23 = (UIInput_o *)Component_WebViewObject;
  UIInput__set_value((UIInput_o *)Component_WebViewObject, this->fields.searchId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6473/*"FRIEND_SEARCH_EXPLANATION"*/, 0LL);
  UIInput__set_defaultText(v23, v24, 0LL);
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    FriendSearchMenu__EndOpen(this, v47);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    title1Label = this->fields.title1Label;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_6475/*"FRIEND_SEARCH_TITLE1"*/, 0LL);
    if ( title1Label )
    {
      UILabel__set_text(title1Label, v33, 0LL);
      title2Label = this->fields.title2Label;
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_6476/*"FRIEND_SEARCH_TITLE2"*/, 0LL);
      if ( title2Label )
      {
        UILabel__set_text(title2Label, v35, 0LL);
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        if ( SelfUserGame )
        {
          myAddressLabel = this->fields.myAddressLabel;
          NumberFormat_23125544 = LocalizationManager__GetNumberFormat_23125544(SelfUserGame->fields.friendCode, 0LL);
          if ( myAddressLabel )
          {
            UILabel__set_text(myAddressLabel, NumberFormat_23125544, 0LL);
            v39 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              (UnityEngine_Component_o *)v23,
                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( v39 )
            {
              UnityEngine_Collider__set_enabled(v39, 0, 0LL);
              decideButton = this->fields.decideButton;
              if ( decideButton )
              {
                ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._5_set_isEnabled.method)(
                  decideButton,
                  0LL,
                  decideButton->klass->vtable._6_OnInit.methodPtr);
                v41 = this->fields.decideButton;
                if ( v41 )
                {
                  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v41->klass->vtable._14_SetState.method)(
                    v41,
                    3LL,
                    0LL,
                    v41->klass->vtable._15_OnPress.methodPtr);
                  this->fields.state = 1;
                  v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
                  System_Action___ctor(v46, (Il2CppObject *)this, Method_FriendSearchMenu_EndOpen__, 0LL);
                  BaseMenu__Open((BaseMenu_o *)this, v46, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall FriendSearchMenu__add_callbackFunc(
        FriendSearchMenu_o *this,
        FriendSearchMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendSearchMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendSearchMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendSearchMenu_o *v11; // x0
  FriendSearchMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FB286 & 1) == 0 )
  {
    sub_B16FFC(&FriendSearchMenu_CallbackFunc_TypeInfo, value);
    byte_40FB286 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendSearchMenu_CallbackFunc_c *)v8->klass != FriendSearchMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchMenu_o *)sub_B173C8(v8);
  FriendSearchMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FriendSearchMenu__remove_callbackFunc(
        FriendSearchMenu_o *this,
        FriendSearchMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendSearchMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendSearchMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendSearchMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FB287 & 1) == 0 )
  {
    sub_B16FFC(&FriendSearchMenu_CallbackFunc_TypeInfo, value);
    byte_40FB287 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendSearchMenu_CallbackFunc_c *)v8->klass != FriendSearchMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchMenu_o *)sub_B173C8(v8);
  FriendSearchMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchMenu_CallbackFunc___ctor(
        FriendSearchMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FriendSearchMenu_CallbackFunc__BeginInvoke(
        FriendSearchMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *friendCode,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  if ( (byte_40F68CE & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F68CE = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)friendCode;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall FriendSearchMenu_CallbackFunc__EndInvoke(
        FriendSearchMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchMenu_CallbackFunc__Invoke(
        FriendSearchMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  FriendSearchMenu_CallbackFunc_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, System_String_o *, _QWORD); // x0
  FriendSearchMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(bool, System_String_o *, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  FriendSearchMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (FriendSearchMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, System_String_o *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, result, friendCode);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23(result, friendCode, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_AAFEF8(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, result, friendCode, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))v16)(
            v21,
            result,
            friendCode,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))(*v21
                                                                             + 16LL * *(unsigned __int16 *)(v22 + 72)
                                                                             + 312))(
            v21,
            result,
            friendCode,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, System_String_o *, __int64))v23)(v21, result, friendCode, v22);
    goto LABEL_36;
  }
}