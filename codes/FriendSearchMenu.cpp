void __fastcall FriendSearchMenu___ctor(FriendSearchMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49B5EDB & 1) == 0 )
  {
    sub_1B4CF90(&BaseMenu_TypeInfo, method);
    byte_49B5EDB = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchMenu__BlockInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_49B5ED4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    byte_49B5ED4 = 1;
  }
  if ( this->fields.state == 2 )
    this->fields.state = 3;
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1B4D1EC(searchDataInput, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0LL);
}


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
      sub_1B4D1EC(0LL, result);
    Text = UILineInput__GetText(searchDataInput, 0LL);
    *p_callbackFunc = 0LL;
    sub_1B4CF34(p_callbackFunc);
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

  FriendSearchMenu__Close_31018456(this, 0LL, v2);
}


void __fastcall FriendSearchMenu__Close_31018456(
        FriendSearchMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *searchDataInput; // x0
  System_Action_o *v10; // x20

  if ( (byte_49B5ED5 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIInput___, v6);
    sub_1B4CF90(&Method_FriendSearchMenu_EndClose__, v7);
    byte_49B5ED5 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B4CF34(&this->fields.closeCallbackFunc);
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 4;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1B4D1EC(searchDataInput, v8);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0LL);
  v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendSearchMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
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
    sub_1B4D1EC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B4CF34(p_closeCallbackFunc);
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

  if ( (byte_49B5ED8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49B5ED8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FriendSearchMenu__EndOpen(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_49B5ED3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    byte_49B5ED3 = 1;
  }
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 2;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1B4D1EC(searchDataInput, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 1, 0LL);
}


void __fastcall FriendSearchMenu__Init(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *title1Label; // x0
  UIInput_o *v6; // x20

  if ( (byte_49B5ED1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49B5ED1 = 1;
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
                                     (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL
    || (v6 = (UIInput_o *)title1Label,
        UIInput__set_value((UIInput_o *)title1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        UIInput__set_defaultText(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (title1Label = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)v6,
                                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)title1Label, 0, 0LL),
        (title1Label = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1B4D1EC(title1Label, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)title1Label, 0, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall FriendSearchMenu__OnChangeServerInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILineInput_o *searchDataInput; // x0
  System_String_o *v6; // x21
  System_String_o *v7; // x20
  int32_t v8; // w22
  System_String_o *v9; // x0
  int32_t stringLength; // w8
  UILineInput_c *klass; // x8
  uint16_t Chars; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49B5ED6 & 1) == 0 )
  {
    sub_1B4CF90(&char_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49B5ED6 = 1;
  }
  Chars = 0;
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_25;
  searchDataInput = (UILineInput_o *)UILineInput__GetText(searchDataInput, 0LL);
  if ( !searchDataInput )
    goto LABEL_25;
  v6 = (System_String_o *)searchDataInput;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( searchDataInput->fields.m_CachedPtr >= 1 )
  {
    v8 = 0;
    do
    {
      Chars = System_String__get_Chars(v6, v8, 0LL);
      if ( (unsigned __int16)(Chars - 48) <= 9u )
      {
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v9 = System_Char__ToString((uint16_t)&Chars, 0LL);
        v7 = System_String__Concat_61093468(v7, v9, 0LL);
      }
      ++v8;
    }
    while ( v8 < v6->fields._stringLength );
  }
  if ( System_String__op_Inequality(v6, v7, 0LL) )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      goto LABEL_25;
    searchDataInput = (UILineInput_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)searchDataInput,
                                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !searchDataInput )
      goto LABEL_25;
    UIInput__set_value((UIInput_o *)searchDataInput, v7, 0LL);
    v6 = v7;
    if ( !v7 )
      goto LABEL_25;
  }
  stringLength = v6->fields._stringLength;
  if ( stringLength != 12 && stringLength != 9 )
  {
    searchDataInput = (UILineInput_o *)this->fields.decideButton;
    if ( searchDataInput )
    {
      ((void (__fastcall *)(UILineInput_o *, _QWORD, void *))searchDataInput->klass[1]._1.namespaze)(
        searchDataInput,
        0LL,
        searchDataInput->klass[1]._1.byval_arg.data);
      searchDataInput = (UILineInput_o *)this->fields.decideButton;
      if ( searchDataInput )
      {
        klass = searchDataInput->klass;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1B4D1EC(searchDataInput, method);
  }
  searchDataInput = (UILineInput_o *)this->fields.decideButton;
  if ( !searchDataInput )
    goto LABEL_25;
  ((void (__fastcall *)(UILineInput_o *, __int64, void *))searchDataInput->klass[1]._1.namespaze)(
    searchDataInput,
    1LL,
    searchDataInput->klass[1]._1.byval_arg.data);
  searchDataInput = (UILineInput_o *)this->fields.decideButton;
  if ( !searchDataInput )
    goto LABEL_25;
  klass = searchDataInput->klass;
LABEL_24:
  ((void (*)(void))klass[1]._1.implementedInterfaces)();
}


void __fastcall FriendSearchMenu__OnClickCancel(FriendSearchMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49B5EDA & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendSearchMenu_OnClickCancel__, method);
    byte_49B5EDA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_FriendSearchMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    FriendSearchMenu__Callback(this, 0, v5);
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
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  struct UILabel_o *myAddressLabel; // x8
  System_String_o *mText; // x20
  Il2CppObject *Instance; // x20
  System_String_o *v16; // x21
  NotificationDialog_ClickDelegate_o *v17; // x22

  if ( (byte_49B5ED7 & 1) == 0 )
  {
    sub_1B4CF90(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_1B4CF90(&Method_FriendSearchMenu_EndCopyDialog__, v3);
    sub_1B4CF90(&Method_FriendSearchMenu_OnClickCopy__, v4);
    sub_1B4CF90(&UnityEngine_GUIUtility_TypeInfo, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&StringLiteral_3795/*"COPY_MY_ID"*/, v8);
    byte_49B5ED7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v9 = Method_FriendSearchMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickCopy__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B4CFA8(Method_FriendSearchMenu_OnClickCopy__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    myAddressLabel = this->fields.myAddressLabel;
    if ( !myAddressLabel )
      goto LABEL_15;
    mText = myAddressLabel->fields.mText;
    if ( System_String__IsNullOrEmpty(mText, 0LL) )
      return;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COPY_MY_ID"*/, 0LL);
    v17 = (NotificationDialog_ClickDelegate_o *)sub_1B4D1DC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_FriendSearchMenu_EndCopyDialog__, 0LL);
    if ( !Instance )
LABEL_15:
      sub_1B4D1EC(v11, v12);
    CommonUI__OpenNotificationDialog_30250652(
      (CommonUI_o *)Instance,
      0LL,
      v16,
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49B5ED9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendSearchMenu_OnClickDecide__, method);
    byte_49B5ED9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      sub_1B4D1EC(0LL, method);
    this->fields.searchId = UILineInput__GetText(searchDataInput, 0LL);
    sub_1B4CF34(&this->fields.searchId);
    this->fields.state = 3;
    v4 = Method_FriendSearchMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B4CFA8(Method_FriendSearchMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    FriendSearchMenu__Callback(this, 1, v6);
  }
}


void __fastcall FriendSearchMenu__Open(
        FriendSearchMenu_o *this,
        FriendSearchMenu_CallbackFunc_o *callback,
        bool isCodeClear,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *searchDataInput; // x0
  UIInput_o *v16; // x21
  System_String_o *v17; // x0
  int32_t state; // w8
  UILabel_o *title1Label; // x20
  UILabel_o *title2Label; // x20
  UILabel_o *myAddressLabel; // x20
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x1

  if ( (byte_49B5ED2 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIInput___, v8);
    sub_1B4CF90(&Method_FriendSearchMenu_EndOpen__, v9);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_6453/*"FRIEND_SEARCH_EXPLANATION"*/, v11);
    sub_1B4CF90(&StringLiteral_6455/*"FRIEND_SEARCH_TITLE1"*/, v12);
    sub_1B4CF90(&StringLiteral_6456/*"FRIEND_SEARCH_TITLE2"*/, v13);
    sub_1B4CF90(&StringLiteral_1/*""*/, v14);
    byte_49B5ED2 = 1;
  }
  if ( isCodeClear || !this->fields.searchId )
  {
    this->fields.searchId = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B4CF34(&this->fields.searchId);
  }
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_24;
  searchDataInput = UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)searchDataInput,
                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !searchDataInput )
    goto LABEL_24;
  v16 = (UIInput_o *)searchDataInput;
  UIInput__set_value((UIInput_o *)searchDataInput, this->fields.searchId, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6453/*"FRIEND_SEARCH_EXPLANATION"*/, 0LL);
  UIInput__set_defaultText(v16, v17, 0LL);
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_1B4CF34(&this->fields.callbackFunc);
    FriendSearchMenu__EndOpen(this, v23);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1B4CF34(&this->fields.callbackFunc);
    title1Label = this->fields.title1Label;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6455/*"FRIEND_SEARCH_TITLE1"*/, 0LL);
    if ( title1Label )
    {
      UILabel__set_text(title1Label, (System_String_o *)searchDataInput, 0LL);
      title2Label = this->fields.title2Label;
      searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6456/*"FRIEND_SEARCH_TITLE2"*/, 0LL);
      if ( title2Label )
      {
        UILabel__set_text(title2Label, (System_String_o *)searchDataInput, 0LL);
        searchDataInput = UserGameMaster__getSelfUserGame(0LL);
        if ( searchDataInput )
        {
          myAddressLabel = this->fields.myAddressLabel;
          searchDataInput = LocalizationManager__GetNumberFormat_38939144(
                              *((System_String_o **)searchDataInput + 13),
                              0LL);
          if ( myAddressLabel )
          {
            UILabel__set_text(myAddressLabel, (System_String_o *)searchDataInput, 0LL);
            searchDataInput = UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)v16,
                                (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                  v22 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                  System_Action___ctor(v22, (Il2CppObject *)this, Method_FriendSearchMenu_EndOpen__, 0LL);
                  BaseMenu__Open((BaseMenu_o *)this, v22, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_24:
    sub_1B4D1EC(searchDataInput, callback);
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

  if ( (byte_49B5ECF & 1) == 0 )
  {
    sub_1B4CF90(&FriendSearchMenu_CallbackFunc_TypeInfo, value);
    byte_49B5ECF = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchMenu_o *)sub_1B4D4AC(v8);
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

  if ( (byte_49B5ED0 & 1) == 0 )
  {
    sub_1B4CF90(&FriendSearchMenu_CallbackFunc_TypeInfo, value);
    byte_49B5ED0 = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchMenu_o *)sub_1B4D4AC(v8);
  FriendSearchMenu__Init(v11, v12);
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
  sub_1B4CF34(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1994BE8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1994B90;
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
  if ( (byte_49B5EDC & 1) == 0 )
  {
    sub_1B4CF90(&bool_TypeInfo, result);
    byte_49B5EDC = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, friendCode, callback, object);
  v11[1] = (__int64)friendCode;
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v11, callback, object);
}


void __fastcall FriendSearchMenu_CallbackFunc__EndInvoke(
        FriendSearchMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
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