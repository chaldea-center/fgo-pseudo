void FriendSearchMenu___ctor(FriendSearchMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C3DC39 & 1) == 0 )
  {
    sub_1C37058(&BaseMenu_TypeInfo);
    byte_4C3DC39 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void FriendSearchMenu__BlockInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_4C3DC32 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_4C3DC32 = 1;
  }
  if ( this->fields.state == 2 )
    this->fields.state = 3;
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C372B4(searchDataInput);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0);
}


void FriendSearchMenu__Callback(FriendSearchMenu_o *this, bool result, const MethodInfo *method)
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
      sub_1C372B4(0);
    Text = UILineInput__GetText(searchDataInput, 0);
    *p_callbackFunc = 0;
    sub_1C36FFC(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, bool, System_String_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      Text,
      callbackFunc->fields.method);
  }
}


void FriendSearchMenu__Close(FriendSearchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendSearchMenu__Close_32826112(this, 0, v2);
}


void FriendSearchMenu__Close_32826112(FriendSearchMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_Component_o *searchDataInput; // x0
  System_Action_o *v6; // x20

  if ( (byte_4C3DC33 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C37058(&Method_FriendSearchMenu_EndClose__);
    byte_4C3DC33 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC(&this->fields.closeCallbackFunc, callback);
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 4;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C372B4(searchDataInput);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0);
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendSearchMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v6, 0);
}


void FriendSearchMenu__EndClose(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendSearchMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v5 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void FriendSearchMenu__EndCopyDialog(FriendSearchMenu_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3DC36 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3DC36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void FriendSearchMenu__EndOpen(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_4C3DC31 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_4C3DC31 = 1;
  }
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 2;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C372B4(searchDataInput);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 1, 0);
}


void FriendSearchMenu__Init(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UILabel_o *title1Label; // x0
  UIInput_o *v4; // x20

  if ( (byte_4C3DC2F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DC2F = 1;
  }
  title1Label = this->fields.title1Label;
  if ( !title1Label )
    goto LABEL_11;
  UILabel__set_text(title1Label, (System_String_o *)StringLiteral_1/*""*/, 0);
  title1Label = this->fields.title2Label;
  if ( !title1Label )
    goto LABEL_11;
  UILabel__set_text(title1Label, (System_String_o *)StringLiteral_1/*""*/, 0);
  title1Label = this->fields.myAddressLabel;
  if ( !title1Label )
    goto LABEL_11;
  UILabel__set_text(title1Label, (System_String_o *)StringLiteral_1/*""*/, 0);
  title1Label = (UILabel_o *)this->fields.searchDataInput;
  if ( !title1Label
    || (title1Label = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)title1Label,
                                     (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0
    || (v4 = (UIInput_o *)title1Label,
        UIInput__set_value((UIInput_o *)title1Label, (System_String_o *)StringLiteral_1/*""*/, 0),
        UIInput__set_defaultText(v4, (System_String_o *)StringLiteral_1/*""*/, 0),
        (title1Label = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)v4,
                                      (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)title1Label, 0, 0),
        (title1Label = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_1C372B4(title1Label);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)title1Label, 0, 0);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void FriendSearchMenu__OnChangeServerInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *searchDataInput; // x0
  System_String_o *v4; // x21
  System_String_o *v5; // x20
  int32_t v6; // w22
  System_String_o *v7; // x0
  int32_t stringLength; // w8
  UILineInput_c *klass; // x8
  uint16_t Chars; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3DC34 & 1) == 0 )
  {
    sub_1C37058(&char_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DC34 = 1;
  }
  Chars = 0;
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_25;
  searchDataInput = (UILineInput_o *)UILineInput__GetText(searchDataInput, 0);
  if ( !searchDataInput )
    goto LABEL_25;
  v4 = (System_String_o *)searchDataInput;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( SLODWORD(searchDataInput->fields.m_CachedPtr) >= 1 )
  {
    v6 = 0;
    do
    {
      Chars = System_String__get_Chars(v4, v6, 0);
      if ( (unsigned __int16)(Chars - 48) <= 9u )
      {
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v7 = System_Char__ToString((uint16_t)&Chars, 0);
        v5 = System_String__Concat_63561656(v5, v7, 0);
      }
      ++v6;
    }
    while ( v6 < v4->fields._stringLength );
  }
  if ( System_String__op_Inequality(v4, v5, 0) )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      goto LABEL_25;
    searchDataInput = (UILineInput_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)searchDataInput,
                                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !searchDataInput )
      goto LABEL_25;
    UIInput__set_value((UIInput_o *)searchDataInput, v5, 0);
    v4 = v5;
    if ( !v5 )
      goto LABEL_25;
  }
  stringLength = v4->fields._stringLength;
  if ( stringLength != 12 && stringLength != 9 )
  {
    searchDataInput = (UILineInput_o *)this->fields.decideButton;
    if ( searchDataInput )
    {
      ((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))searchDataInput->klass[1]._1.name)(
        searchDataInput,
        0,
        searchDataInput->klass[1]._1.namespaze);
      searchDataInput = (UILineInput_o *)this->fields.decideButton;
      if ( searchDataInput )
      {
        klass = searchDataInput->klass;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1C372B4(searchDataInput);
  }
  searchDataInput = (UILineInput_o *)this->fields.decideButton;
  if ( !searchDataInput )
    goto LABEL_25;
  ((void (__fastcall *)(UILineInput_o *, __int64, const char *))searchDataInput->klass[1]._1.name)(
    searchDataInput,
    1,
    searchDataInput->klass[1]._1.namespaze);
  searchDataInput = (UILineInput_o *)this->fields.decideButton;
  if ( !searchDataInput )
    goto LABEL_25;
  klass = searchDataInput->klass;
LABEL_24:
  ((void (*)(void))klass[1]._1.nestedTypes)();
}


void FriendSearchMenu__OnClickCancel(FriendSearchMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3DC38 & 1) == 0 )
  {
    sub_1C37058(&Method_FriendSearchMenu_OnClickCancel__);
    byte_4C3DC38 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_FriendSearchMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FriendSearchMenu__Callback(this, 0, v5);
  }
}


void FriendSearchMenu__OnClickCopy(FriendSearchMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct UILabel_o *myAddressLabel; // x8
  System_String_o *mText; // x20
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x21
  NotificationDialog_ClickDelegate_o *v10; // x22

  if ( (byte_4C3DC35 & 1) == 0 )
  {
    sub_1C37058(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_FriendSearchMenu_EndCopyDialog__);
    sub_1C37058(&Method_FriendSearchMenu_OnClickCopy__);
    sub_1C37058(&UnityEngine_GUIUtility_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_3833/*"COPY_MY_ID"*/);
    byte_4C3DC35 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FriendSearchMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_FriendSearchMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    myAddressLabel = this->fields.myAddressLabel;
    if ( !myAddressLabel )
      goto LABEL_15;
    mText = myAddressLabel->fields.mText;
    if ( System_String__IsNullOrEmpty(mText, 0) )
      return;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3833/*"COPY_MY_ID"*/, 0);
    v10 = (NotificationDialog_ClickDelegate_o *)sub_1C372A4(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(v10, (Il2CppObject *)this, Method_FriendSearchMenu_EndCopyDialog__, 0);
    if ( !Instance )
LABEL_15:
      sub_1C372B4(v5);
    CommonUI__OpenNotificationDialog_31210584(
      (CommonUI_o *)Instance,
      0,
      v9,
      v10,
      -1,
      0,
      0,
      0,
      1,
      0,
      0,
      0,
      0,
      0,
      0,
      1,
      0,
      0,
      0,
      0);
  }
}


void FriendSearchMenu__OnClickDecide(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *searchDataInput; // x0
  struct System_String_o *Text; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C3DC37 & 1) == 0 )
  {
    sub_1C37058(&Method_FriendSearchMenu_OnClickDecide__);
    byte_4C3DC37 = 1;
  }
  if ( this->fields.state == 2 )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      sub_1C372B4(0);
    Text = UILineInput__GetText(searchDataInput, 0);
    this->fields.searchId = Text;
    sub_1C36FFC(&this->fields.searchId, Text);
    this->fields.state = 3;
    v5 = Method_FriendSearchMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_FriendSearchMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    FriendSearchMenu__Callback(this, 1, v7);
  }
}


void FriendSearchMenu__Open(
        FriendSearchMenu_o *this,
        FriendSearchMenu_CallbackFunc_o *callback,
        bool isCodeClear,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *searchDataInput; // x0
  UIInput_o *v9; // x21
  System_String_o *v10; // x0
  int32_t state; // w8
  UILabel_o *title1Label; // x20
  UILabel_o *title2Label; // x20
  UILabel_o *myAddressLabel; // x20
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x1

  if ( (byte_4C3DC30 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C37058(&Method_FriendSearchMenu_EndOpen__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_6563/*"FRIEND_SEARCH_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_6565/*"FRIEND_SEARCH_TITLE1"*/);
    sub_1C37058(&StringLiteral_6566/*"FRIEND_SEARCH_TITLE2"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DC30 = 1;
  }
  if ( isCodeClear || !this->fields.searchId )
  {
    v7 = StringLiteral_1/*""*/;
    this->fields.searchId = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C36FFC(&this->fields.searchId, v7);
  }
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_24;
  searchDataInput = UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)searchDataInput,
                      (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !searchDataInput )
    goto LABEL_24;
  v9 = (UIInput_o *)searchDataInput;
  UIInput__set_value((UIInput_o *)searchDataInput, this->fields.searchId, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6563/*"FRIEND_SEARCH_EXPLANATION"*/, 0);
  UIInput__set_defaultText(v9, v10, 0);
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_1C36FFC(&this->fields.callbackFunc, callback);
    FriendSearchMenu__EndOpen(this, v16);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C36FFC(&this->fields.callbackFunc, callback);
    title1Label = this->fields.title1Label;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6565/*"FRIEND_SEARCH_TITLE1"*/, 0);
    if ( title1Label )
    {
      UILabel__set_text(title1Label, (System_String_o *)searchDataInput, 0);
      title2Label = this->fields.title2Label;
      searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6566/*"FRIEND_SEARCH_TITLE2"*/, 0);
      if ( title2Label )
      {
        UILabel__set_text(title2Label, (System_String_o *)searchDataInput, 0);
        searchDataInput = UserGameMaster__getSelfUserGame(0);
        if ( searchDataInput )
        {
          myAddressLabel = this->fields.myAddressLabel;
          searchDataInput = LocalizationManager__GetNumberFormat_41274664(
                              *((System_String_o **)searchDataInput + 14),
                              0);
          if ( myAddressLabel )
          {
            UILabel__set_text(myAddressLabel, (System_String_o *)searchDataInput, 0);
            searchDataInput = UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)v9,
                                (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( searchDataInput )
            {
              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0);
              searchDataInput = this->fields.decideButton;
              if ( searchDataInput )
              {
                (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)searchDataInput + 392LL))(
                  searchDataInput,
                  0,
                  *(_QWORD *)(*(_QWORD *)searchDataInput + 400LL));
                searchDataInput = this->fields.decideButton;
                if ( searchDataInput )
                {
                  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)searchDataInput + 536LL))(
                    searchDataInput,
                    3,
                    0,
                    *(_QWORD *)(*(_QWORD *)searchDataInput + 544LL));
                  this->fields.state = 1;
                  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                  System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendSearchMenu_EndOpen__, 0);
                  BaseMenu__Open((BaseMenu_o *)this, v15, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C372B4(searchDataInput);
  }
}


void FriendSearchMenu__add_callbackFunc(
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

  if ( (byte_4C3DC2D & 1) == 0 )
  {
    sub_1C37058(&FriendSearchMenu_CallbackFunc_TypeInfo);
    byte_4C3DC2D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendSearchMenu_CallbackFunc_c *)v8->klass != FriendSearchMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchMenu_o *)sub_1C37574(v8);
  FriendSearchMenu__remove_callbackFunc(v11, v12, v13);
}


void FriendSearchMenu__remove_callbackFunc(
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

  if ( (byte_4C3DC2E & 1) == 0 )
  {
    sub_1C37058(&FriendSearchMenu_CallbackFunc_TypeInfo);
    byte_4C3DC2E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendSearchMenu_CallbackFunc_c *)v8->klass != FriendSearchMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendSearchMenu_o *)sub_1C37574(v8);
  FriendSearchMenu__Init(v11, v12);
}


void FriendSearchMenu_CallbackFunc___ctor(
        FriendSearchMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A73A54;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A739FC;
}


System_IAsyncResult_o *FriendSearchMenu_CallbackFunc__BeginInvoke(
        FriendSearchMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *friendCode,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v14[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v14[0] = result;
  if ( (byte_4C3DC3A & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3DC3A = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v14, friendCode, callback, object, method, v6, v7);
  v13[1] = friendCode;
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void FriendSearchMenu_CallbackFunc__EndInvoke(
        FriendSearchMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void FriendSearchMenu_CallbackFunc__Invoke(
        FriendSearchMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    friendCode,
    this->fields.method);
}