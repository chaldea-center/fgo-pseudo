void __fastcall FriendSearchMenu___ctor(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B114D7 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B114D7 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchMenu__BlockInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_4B114D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v4, v5);
    byte_4B114D0 = 1;
  }
  if ( this->fields.state == 2 )
    this->fields.state = 3;
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1BCAA3C(searchDataInput, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchMenu__Callback(FriendSearchMenu_o *this, bool result, const MethodInfo *method)
{
  struct FriendSearchMenu_CallbackFunc_o **p_callbackFunc; // x20
  struct FriendSearchMenu_CallbackFunc_o *callbackFunc; // x22
  UILineInput_o *searchDataInput; // x0
  System_String_o *Text; // x21

  p_callbackFunc = &this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      sub_1BCAA3C(0LL, result);
    Text = UILineInput__GetText(searchDataInput, 0LL);
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, System_String_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      Text,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendSearchMenu__Close(FriendSearchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendSearchMenu__Close_31501608(this, 0LL, v2);
}


void __fastcall FriendSearchMenu__Close_31501608(
        FriendSearchMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  UnityEngine_Component_o *searchDataInput; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x20

  if ( (byte_4B114D1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v7, v8);
    sub_1BCA7E0(&Method_FriendSearchMenu_EndClose__, v9, v10);
    byte_4B114D1 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 4;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1BCAA3C(searchDataInput, v11);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0LL);
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_FriendSearchMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
}


void __fastcall FriendSearchMenu__EndClose(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendSearchMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchMenu__EndCopyDialog(FriendSearchMenu_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B114D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B114D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FriendSearchMenu__EndOpen(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_4B114CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v4, v5);
    byte_4B114CF = 1;
  }
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 2;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1BCAA3C(searchDataInput, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 1, 0LL);
}


void __fastcall FriendSearchMenu__Init(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *title1Label; // x0
  UIInput_o *v9; // x20

  if ( (byte_4B114CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B114CD = 1;
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
    || (title1Label = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)title1Label,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (v9 = (UIInput_o *)title1Label,
        UIInput__set_value((UIInput_o *)title1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        UIInput__set_defaultText(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (title1Label = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)v9,
                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)title1Label, 0, 0LL),
        (title1Label = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(title1Label, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)title1Label, 0, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchMenu__OnChangeServerInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILineInput_o *searchDataInput; // x0
  System_String_o *v9; // x21
  System_String_o *v10; // x20
  int32_t v11; // w22
  __int64 v12; // x1
  System_String_o *v13; // x0
  void (*namespaze)(void); // x8
  UILineInput_c *klass; // x8
  uint16_t Chars; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B114D2 & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B114D2 = 1;
  }
  Chars = 0;
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_23;
  searchDataInput = (UILineInput_o *)UILineInput__GetText(searchDataInput, 0LL);
  if ( !searchDataInput )
    goto LABEL_23;
  v9 = (System_String_o *)searchDataInput;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( searchDataInput->fields.m_CachedPtr >= 1 )
  {
    v11 = 0;
    do
    {
      Chars = System_String__get_Chars(v9, v11, 0LL);
      if ( (unsigned __int16)(Chars - 48) <= 9u )
      {
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v12);
        v13 = System_Char__ToString((uint16_t)&Chars, 0LL);
        v10 = System_String__Concat_62401220(v10, v13, 0LL);
      }
      ++v11;
    }
    while ( v11 < v9->fields._stringLength );
  }
  if ( System_String__op_Inequality(v9, v10, 0LL) )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      goto LABEL_23;
    searchDataInput = (UILineInput_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)searchDataInput,
                                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !searchDataInput )
      goto LABEL_23;
    UIInput__set_value((UIInput_o *)searchDataInput, v10, 0LL);
    v9 = v10;
    if ( !v10 )
      goto LABEL_23;
  }
  searchDataInput = (UILineInput_o *)this->fields.decideButton;
  if ( !searchDataInput )
    goto LABEL_23;
  namespaze = (void (*)(void))searchDataInput->klass[1]._1.namespaze;
  if ( v9->fields._stringLength >= 9 )
  {
    namespaze();
    searchDataInput = (UILineInput_o *)this->fields.decideButton;
    if ( searchDataInput )
    {
      klass = searchDataInput->klass;
      goto LABEL_22;
    }
LABEL_23:
    sub_1BCAA3C(searchDataInput, method);
  }
  namespaze();
  searchDataInput = (UILineInput_o *)this->fields.decideButton;
  if ( !searchDataInput )
    goto LABEL_23;
  klass = searchDataInput->klass;
LABEL_22:
  ((void (*)(void))klass[1]._1.implementedInterfaces)();
}


void __fastcall FriendSearchMenu__OnClickCancel(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B114D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendSearchMenu_OnClickCancel__, method, v2);
    byte_4B114D6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_FriendSearchMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FriendSearchMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    FriendSearchMenu__Callback(this, 0, v6);
  }
}


void __fastcall FriendSearchMenu__OnClickCopy(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  struct UILabel_o *myAddressLabel; // x8
  System_String_o *mText; // x20
  __int64 v22; // x1
  __int64 v23; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  NotificationDialog_ClickDelegate_o *v29; // x22

  if ( (byte_4B114D3 & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendSearchMenu_EndCopyDialog__, v4, v5);
    sub_1BCA7E0(&Method_FriendSearchMenu_OnClickCopy__, v6, v7);
    sub_1BCA7E0(&UnityEngine_GUIUtility_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_3923/*"COPY_MY_ID"*/, v14, v15);
    byte_4B114D3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v16 = Method_FriendSearchMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickCopy__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_FriendSearchMenu_OnClickCopy__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    myAddressLabel = this->fields.myAddressLabel;
    if ( !myAddressLabel )
      goto LABEL_15;
    mText = myAddressLabel->fields.mText;
    if ( System_String__IsNullOrEmpty(mText, 0LL) )
      return;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo, v22);
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3923/*"COPY_MY_ID"*/, 0LL);
    v29 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v26, v27, v28);
    NotificationDialog_ClickDelegate___ctor(v29, (Il2CppObject *)this, Method_FriendSearchMenu_EndCopyDialog__, 0LL);
    if ( !Instance )
LABEL_15:
      sub_1BCAA3C(v18, v19);
    CommonUI__OpenNotificationDialog_30768824(
      (CommonUI_o *)Instance,
      0LL,
      v25,
      v29,
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
  __int64 v2; // x2
  UILineInput_o *searchDataInput; // x0
  struct System_String_o *Text; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B114D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendSearchMenu_OnClickDecide__, method, v2);
    byte_4B114D5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      sub_1BCAA3C(0LL, method);
    Text = UILineInput__GetText(searchDataInput, 0LL);
    this->fields.searchId = Text;
    sub_1BCA784(&this->fields.searchId, Text);
    this->fields.state = 3;
    v6 = Method_FriendSearchMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_FriendSearchMenu_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    FriendSearchMenu__Callback(this, 1, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendSearchMenu__Open(
        FriendSearchMenu_o *this,
        FriendSearchMenu_CallbackFunc_o *callback,
        bool isCodeClear,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  void *v23; // x1
  void *searchDataInput; // x0
  UIInput_o *v25; // x21
  __int64 v26; // x1
  System_String_o *v27; // x0
  int32_t state; // w8
  __int64 v29; // x1
  UILabel_o *title1Label; // x20
  UILabel_o *title2Label; // x20
  UILabel_o *myAddressLabel; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x1

  if ( (byte_4B114CE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, isCodeClear);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v9, v10);
    sub_1BCA7E0(&Method_FriendSearchMenu_EndOpen__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_6650/*"FRIEND_SEARCH_EXPLANATION"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_6652/*"FRIEND_SEARCH_TITLE1"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_6653/*"FRIEND_SEARCH_TITLE2"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B114CE = 1;
  }
  if ( isCodeClear || !this->fields.searchId )
  {
    v23 = StringLiteral_1/*""*/;
    this->fields.searchId = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784(&this->fields.searchId, v23);
  }
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_24;
  searchDataInput = UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)searchDataInput,
                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !searchDataInput )
    goto LABEL_24;
  v25 = (UIInput_o *)searchDataInput;
  UIInput__set_value((UIInput_o *)searchDataInput, this->fields.searchId, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6650/*"FRIEND_SEARCH_EXPLANATION"*/, 0LL);
  UIInput__set_defaultText(v25, v27, 0LL);
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    FriendSearchMenu__EndOpen(this, v37);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    title1Label = this->fields.title1Label;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6652/*"FRIEND_SEARCH_TITLE1"*/, 0LL);
    if ( title1Label )
    {
      UILabel__set_text(title1Label, (System_String_o *)searchDataInput, 0LL);
      title2Label = this->fields.title2Label;
      searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6653/*"FRIEND_SEARCH_TITLE2"*/, 0LL);
      if ( title2Label )
      {
        UILabel__set_text(title2Label, (System_String_o *)searchDataInput, 0LL);
        searchDataInput = UserGameMaster__getSelfUserGame(0LL);
        if ( searchDataInput )
        {
          myAddressLabel = this->fields.myAddressLabel;
          searchDataInput = LocalizationManager__GetNumberFormat_39108640(
                              *((System_String_o **)searchDataInput + 13),
                              0LL);
          if ( myAddressLabel )
          {
            UILabel__set_text(myAddressLabel, (System_String_o *)searchDataInput, 0LL);
            searchDataInput = UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)v25,
                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
                  System_Action___ctor(v36, (Il2CppObject *)this, Method_FriendSearchMenu_EndOpen__, 0LL);
                  BaseMenu__Open((BaseMenu_o *)this, v36, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(searchDataInput, callback);
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

  if ( (byte_4B114CB & 1) == 0 )
  {
    sub_1BCA7E0(&FriendSearchMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B114CB = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B114CC & 1) == 0 )
  {
    sub_1BCA7E0(&FriendSearchMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B114CC = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchMenu_o *)sub_1BCACFC(v8);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05790;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05738;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = result;
  if ( (byte_4B114D8 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, friendCode);
    byte_4B114D8 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)friendCode;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall FriendSearchMenu_CallbackFunc__EndInvoke(
        FriendSearchMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall FriendSearchMenu_CallbackFunc__Invoke(
        FriendSearchMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    friendCode,
    *(_QWORD *)&this->fields.extra_arg);
}