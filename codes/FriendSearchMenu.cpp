void __fastcall FriendSearchMenu___ctor(FriendSearchMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418A486 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_418A486 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchMenu__BlockInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_418A47F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    byte_418A47F = 1;
  }
  if ( this->fields.state == 2 )
    this->fields.state = 3;
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       searchDataInput,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       searchDataInput,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B2C434(searchDataInput, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0LL);
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
      sub_B2C434(0LL, result);
    Text = UILineInput__GetText(searchDataInput, 0LL);
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
    FriendSearchMenu_CallbackFunc__Invoke(callbackFunc, result, Text, 0LL);
  }
}


void __fastcall FriendSearchMenu__Close(FriendSearchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendSearchMenu__Close_29801240(this, 0LL, v2);
}


void __fastcall FriendSearchMenu__Close_29801240(
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
  __int64 v13; // x1
  UnityEngine_Component_o *searchDataInput; // x0
  System_Action_o *v15; // x20

  if ( (byte_418A480 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, v11);
    sub_B2C35C(&Method_FriendSearchMenu_EndClose__, v12);
    byte_418A480 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
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
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       searchDataInput,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       searchDataInput,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B2C434(searchDataInput, v13);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0LL);
  v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendSearchMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0LL);
}


void __fastcall FriendSearchMenu__EndClose(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendSearchMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchMenu__EndCopyDialog(FriendSearchMenu_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418A483 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418A483 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall FriendSearchMenu__EndOpen(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_418A47E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    byte_418A47E = 1;
  }
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 2;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       searchDataInput,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       searchDataInput,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B2C434(searchDataInput, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 1, 0LL);
}


void __fastcall FriendSearchMenu__Init(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *title1Label; // x0
  UIInput_o *v6; // x20

  if ( (byte_418A47C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418A47C = 1;
  }
  title1Label = this->fields.title1Label;
  if ( !title1Label )
    goto LABEL_11;
  UILabel__set_text(title1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  title1Label = this->fields.title2Label;
  if ( !title1Label )
    goto LABEL_11;
  UILabel__set_text(title1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  title1Label = this->fields.myAddressLabel;
  if ( !title1Label )
    goto LABEL_11;
  UILabel__set_text(title1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  title1Label = (UILabel_o *)this->fields.searchDataInput;
  if ( !title1Label
    || (title1Label = (UILabel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)title1Label,
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (v6 = (UIInput_o *)title1Label,
        UIInput__set_value((UIInput_o *)title1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        UIInput__set_defaultText(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (title1Label = (UILabel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)v6,
                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)title1Label, 0, 0LL),
        (title1Label = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B2C434(title1Label, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)title1Label, 0, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchMenu__OnChangeServerInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILineInput_o *searchDataInput; // x0
  System_String_o *v5; // x21
  System_String_o *v6; // x20
  int32_t v7; // w22
  System_String_o *v8; // x0
  void (*namespaze)(void); // x8
  UILineInput_c *klass; // x8
  uint16_t Chars; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418A481 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418A481 = 1;
  }
  Chars = 0;
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_21;
  searchDataInput = (UILineInput_o *)UILineInput__GetText(searchDataInput, 0LL);
  if ( !searchDataInput )
    goto LABEL_21;
  v5 = (System_String_o *)searchDataInput;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( searchDataInput->fields.m_CachedPtr >= 1 )
  {
    v7 = 0;
    do
    {
      Chars = System_String__get_Chars(v5, v7, 0LL);
      if ( (unsigned __int16)(Chars - 48) <= 9u )
      {
        v8 = System_Char__ToString((uint16_t)&Chars, 0LL);
        v6 = System_String__Concat_44305532(v6, v8, 0LL);
      }
      ++v7;
    }
    while ( v7 < v5->fields.m_stringLength );
  }
  if ( System_String__op_Inequality(v5, v6, 0LL) )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      goto LABEL_21;
    searchDataInput = (UILineInput_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                         (UnityEngine_Component_o *)searchDataInput,
                                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !searchDataInput )
      goto LABEL_21;
    UIInput__set_value((UIInput_o *)searchDataInput, v6, 0LL);
    v5 = v6;
    if ( !v6 )
      goto LABEL_21;
  }
  searchDataInput = (UILineInput_o *)this->fields.decideButton;
  if ( !searchDataInput )
    goto LABEL_21;
  namespaze = (void (*)(void))searchDataInput->klass[1]._1.namespaze;
  if ( v5->fields.m_stringLength >= 9 )
  {
    namespaze();
    searchDataInput = (UILineInput_o *)this->fields.decideButton;
    if ( searchDataInput )
    {
      klass = searchDataInput->klass;
      goto LABEL_20;
    }
LABEL_21:
    sub_B2C434(searchDataInput, method);
  }
  namespaze();
  searchDataInput = (UILineInput_o *)this->fields.decideButton;
  if ( !searchDataInput )
    goto LABEL_21;
  klass = searchDataInput->klass;
LABEL_20:
  ((void (*)(void))klass[1]._1.implementedInterfaces)();
}


void __fastcall FriendSearchMenu__OnClickCancel(FriendSearchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418A485 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A485 = 1;
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
  __int64 v9; // x0
  __int64 v10; // x1
  struct UILabel_o *myAddressLabel; // x8
  System_String_o *mText; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v14; // x21
  NotificationDialog_ClickDelegate_o *v15; // x22

  if ( (byte_418A482 & 1) == 0 )
  {
    sub_B2C35C(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_FriendSearchMenu_EndCopyDialog__, v3);
    sub_B2C35C(&UnityEngine_GUIUtility_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_3393/*"COPY_MY_ID"*/, v8);
    byte_418A482 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"COPY_MY_ID"*/, 0LL);
    v15 = (NotificationDialog_ClickDelegate_o *)sub_B2C42C(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_FriendSearchMenu_EndCopyDialog__, 0LL);
    if ( !Instance )
LABEL_18:
      sub_B2C434(v9, v10);
    CommonUI__OpenNotificationDialog_17973524(
      Instance,
      0LL,
      v14,
      v15,
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

  if ( (byte_418A484 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A484 = 1;
  }
  if ( this->fields.state == 2 )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      sub_B2C434(0LL, method);
    Text = UILineInput__GetText(searchDataInput, 0LL);
    this->fields.searchId = Text;
    sub_B2C2F8(
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
  void *searchDataInput; // x0
  UIInput_o *v22; // x20
  System_String_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t state; // w8
  UILabel_o *title1Label; // x21
  UILabel_o *title2Label; // x21
  UILabel_o *myAddressLabel; // x21
  System_Action_o *v34; // x20
  const MethodInfo *v35; // x1

  if ( (byte_418A47D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v11);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, v12);
    sub_B2C35C(&Method_FriendSearchMenu_EndOpen__, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_6497/*"FRIEND_SEARCH_EXPLANATION"*/, v15);
    sub_B2C35C(&StringLiteral_6499/*"FRIEND_SEARCH_TITLE1"*/, v16);
    sub_B2C35C(&StringLiteral_6500/*"FRIEND_SEARCH_TITLE2"*/, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    byte_418A47D = 1;
  }
  p_searchId = (BattleServantConfConponent_o *)&this->fields.searchId;
  if ( isCodeClear || !p_searchId->klass )
  {
    v20 = (System_Int32_array **)StringLiteral_1/*""*/;
    p_searchId->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
    sub_B2C2F8(p_searchId, v20, (System_String_array **)isCodeClear, (System_String_array **)method, v4, v5, v6, v7);
  }
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_26;
  searchDataInput = UnityEngine_Component__GetComponent_WebViewObject_(
                      (UnityEngine_Component_o *)searchDataInput,
                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !searchDataInput )
    goto LABEL_26;
  v22 = (UIInput_o *)searchDataInput;
  UIInput__set_value((UIInput_o *)searchDataInput, this->fields.searchId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6497/*"FRIEND_SEARCH_EXPLANATION"*/, 0LL);
  UIInput__set_defaultText(v22, v23, 0LL);
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    FriendSearchMenu__EndOpen(this, v35);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    title1Label = this->fields.title1Label;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6499/*"FRIEND_SEARCH_TITLE1"*/, 0LL);
    if ( title1Label )
    {
      UILabel__set_text(title1Label, (System_String_o *)searchDataInput, 0LL);
      title2Label = this->fields.title2Label;
      searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6500/*"FRIEND_SEARCH_TITLE2"*/, 0LL);
      if ( title2Label )
      {
        UILabel__set_text(title2Label, (System_String_o *)searchDataInput, 0LL);
        searchDataInput = UserGameMaster__getSelfUserGame(0LL);
        if ( searchDataInput )
        {
          myAddressLabel = this->fields.myAddressLabel;
          searchDataInput = LocalizationManager__GetNumberFormat_33986032(
                              *((System_String_o **)searchDataInput + 13),
                              0LL);
          if ( myAddressLabel )
          {
            UILabel__set_text(myAddressLabel, (System_String_o *)searchDataInput, 0LL);
            searchDataInput = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)v22,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( searchDataInput )
            {
              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0LL);
              searchDataInput = this->fields.decideButton;
              if ( searchDataInput )
              {
                (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)searchDataInput + 392LL))(
                  searchDataInput,
                  0LL,
                  *(_QWORD *)(*(_QWORD *)searchDataInput + 400LL));
                searchDataInput = this->fields.decideButton;
                if ( searchDataInput )
                {
                  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)searchDataInput + 536LL))(
                    searchDataInput,
                    3LL,
                    0LL,
                    *(_QWORD *)(*(_QWORD *)searchDataInput + 544LL));
                  this->fields.state = 1;
                  v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(v34, (Il2CppObject *)this, Method_FriendSearchMenu_EndOpen__, 0LL);
                  BaseMenu__Open((BaseMenu_o *)this, v34, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(searchDataInput, callback);
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

  if ( (byte_418A47A & 1) == 0 )
  {
    sub_B2C35C(&FriendSearchMenu_CallbackFunc_TypeInfo, value);
    byte_418A47A = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418A47B & 1) == 0 )
  {
    sub_B2C35C(&FriendSearchMenu_CallbackFunc_TypeInfo, value);
    byte_418A47B = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  FriendSearchMenu__EndOpen(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchMenu_CallbackFunc___ctor(
        FriendSearchMenu_CallbackFunc_o *this,
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41841E4 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41841E4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)friendCode;
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall FriendSearchMenu_CallbackFunc__EndInvoke(
        FriendSearchMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, bool, System_String_o *, _QWORD); // x0
  FriendSearchMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, System_String_o *, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  FriendSearchMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
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
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, System_String_o *, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, result, friendCode, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(result, friendCode, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AC5258(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, result, friendCode, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))v17)(
            v22,
            result,
            friendCode,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))(*v22
                                                                             + 16LL * *(unsigned __int16 *)(v23 + 72)
                                                                             + 312))(
            v22,
            result,
            friendCode,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, System_String_o *, __int64))v24)(v22, result, friendCode, v23);
    goto LABEL_36;
  }
}