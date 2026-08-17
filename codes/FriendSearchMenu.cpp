void FriendSearchMenu___ctor(FriendSearchMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B0F2 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596B0F2 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void FriendSearchMenu__BlockInput(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_596B0EB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_596B0EB = 1;
  }
  if ( this->fields.state == 2 )
    this->fields.state = 3;
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_2213CDC(searchDataInput, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendSearchMenu__Callback(FriendSearchMenu_o *this, bool result, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x20
  struct FriendSearchMenu_CallbackFunc_o *callbackFunc; // x22
  UILineInput_o *searchDataInput; // x0
  System_String_o *Text; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      sub_2213CDC(0, result);
    Text = UILineInput__GetText(searchDataInput, 0);
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v8, v9, v10, v11, v12, v13);
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

  FriendSearchMenu__Close_39370200(this, 0, v2);
}


void FriendSearchMenu__Close_39370200(FriendSearchMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UnityEngine_Component_o *searchDataInput; // x0
  System_Action_o *v12; // x20

  if ( (byte_596B0EC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&Method_FriendSearchMenu_EndClose__);
    byte_596B0EC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 4;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_2213CDC(searchDataInput, v10);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 0, 0);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FriendSearchMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0);
}


void FriendSearchMenu__EndClose(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendSearchMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void FriendSearchMenu__EndCopyDialog(FriendSearchMenu_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596B0EF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B0EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void FriendSearchMenu__EndOpen(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *searchDataInput; // x0

  if ( (byte_596B0EA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_596B0EA = 1;
  }
  searchDataInput = (UnityEngine_Component_o *)this->fields.searchDataInput;
  this->fields.state = 2;
  if ( !searchDataInput
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0
    || (searchDataInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       searchDataInput,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_2213CDC(searchDataInput, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)searchDataInput, 1, 0);
}


void FriendSearchMenu__Init(FriendSearchMenu_o *this, const MethodInfo *method)
{
  UILabel_o *title1Label; // x0
  UIInput_o *v4; // x20

  if ( (byte_596B0E8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B0E8 = 1;
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
                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0
    || (v4 = (UIInput_o *)title1Label,
        UIInput__set_value((UIInput_o *)title1Label, (System_String_o *)StringLiteral_1/*""*/, 0),
        UIInput__set_defaultText(v4, (System_String_o *)StringLiteral_1/*""*/, 0),
        (title1Label = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)v4,
                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)title1Label, 0, 0),
        (title1Label = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_2213CDC(title1Label, method);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x0
  int32_t stringLength; // w8
  UILineInput_c *klass; // x8
  uint16_t Chars; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596B0ED & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B0ED = 1;
  }
  searchDataInput = this->fields.searchDataInput;
  Chars = 0;
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
      if ( (unsigned __int16)(Chars - 58) >= 0xFFF6u )
      {
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v7, v8);
        v9 = System_Char__ToString((uint16_t)&Chars, 0);
        v5 = System_String__Concat_75651716(v5, v9, 0);
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
                                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
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
    sub_2213CDC(searchDataInput, method);
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

  if ( (byte_596B0F1 & 1) == 0 )
  {
    sub_2213A60(&Method_FriendSearchMenu_OnClickCancel__);
    byte_596B0F1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendSearchMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FriendSearchMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FriendSearchMenu__Callback(this, 0, v5);
  }
}


void FriendSearchMenu__OnClickCopy(FriendSearchMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *myAddressLabel; // x8
  System_String_o *mText; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v14; // x21
  NotificationDialog_ClickDelegate_o *v15; // x22

  if ( (byte_596B0EE & 1) == 0 )
  {
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_FriendSearchMenu_EndCopyDialog__);
    sub_2213A60(&Method_FriendSearchMenu_OnClickCopy__);
    sub_2213A60(&UnityEngine_GUIUtility_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3977/*"COPY_MY_ID"*/);
    byte_596B0EE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FriendSearchMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FriendSearchMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    myAddressLabel = this->fields.myAddressLabel;
    if ( !myAddressLabel )
      goto LABEL_15;
    mText = myAddressLabel->fields.mText;
    if ( System_String__IsNullOrEmpty(mText, 0) )
      return;
    if ( !*(&UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo, v9, v10);
    UnityEngine_GUIUtility__set_systemCopyBuffer(mText, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3977/*"COPY_MY_ID"*/, 0);
    v15 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_FriendSearchMenu_EndCopyDialog__, 0);
    if ( !Instance )
LABEL_15:
      sub_2213CDC(v5, v6);
    CommonUI__OpenNotificationDialog_37376108(
      (CommonUI_o *)Instance,
      0,
      v14,
      v15,
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_596B0F0 & 1) == 0 )
  {
    sub_2213A60(&Method_FriendSearchMenu_OnClickDecide__);
    byte_596B0F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    searchDataInput = this->fields.searchDataInput;
    if ( !searchDataInput )
      sub_2213CDC(0, method);
    Text = UILineInput__GetText(searchDataInput, 0);
    this->fields.searchId = Text;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.searchId, (int32_t)Text, v5, v6, v7, v8, v9, v10);
    this->fields.state = 3;
    v11 = Method_FriendSearchMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendSearchMenu_OnClickDecide__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_2213A78(Method_FriendSearchMenu_OnClickDecide__);
    v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
    FriendSearchMenu__Callback(this, 1, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendSearchMenu__Open(
        FriendSearchMenu_o *this,
        FriendSearchMenu_CallbackFunc_o *callback,
        bool isCodeClear,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v11; // w1
  void *searchDataInput; // x0
  UIInput_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t state; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *title1Label; // x20
  UILabel_o *title2Label; // x20
  UILabel_o *myAddressLabel; // x20
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x1

  if ( (byte_596B0E9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&Method_FriendSearchMenu_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_6848/*"FRIEND_SEARCH_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_6850/*"FRIEND_SEARCH_TITLE1"*/);
    sub_2213A60(&StringLiteral_6851/*"FRIEND_SEARCH_TITLE2"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B0E9 = 1;
  }
  if ( isCodeClear || !this->fields.searchId )
  {
    v11 = (int)StringLiteral_1/*""*/;
    this->fields.searchId = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.searchId,
      v11,
      (System_String_o *)isCodeClear,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
  }
  searchDataInput = this->fields.searchDataInput;
  if ( !searchDataInput )
    goto LABEL_24;
  searchDataInput = UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)searchDataInput,
                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !searchDataInput )
    goto LABEL_24;
  v13 = (UIInput_o *)searchDataInput;
  UIInput__set_value((UIInput_o *)searchDataInput, this->fields.searchId, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_6848/*"FRIEND_SEARCH_EXPLANATION"*/, 0);
  UIInput__set_defaultText(v13, v16, 0);
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    FriendSearchMenu__EndOpen(this, v30);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    title1Label = this->fields.title1Label;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6850/*"FRIEND_SEARCH_TITLE1"*/, 0);
    if ( title1Label )
    {
      UILabel__set_text(title1Label, (System_String_o *)searchDataInput, 0);
      title2Label = this->fields.title2Label;
      searchDataInput = LocalizationManager__Get((System_String_o *)StringLiteral_6851/*"FRIEND_SEARCH_TITLE2"*/, 0);
      if ( title2Label )
      {
        UILabel__set_text(title2Label, (System_String_o *)searchDataInput, 0);
        searchDataInput = UserGameMaster__getSelfUserGame(0);
        if ( searchDataInput )
        {
          myAddressLabel = this->fields.myAddressLabel;
          searchDataInput = LocalizationManager__GetNumberFormat_48247712(
                              *((System_String_o **)searchDataInput + 14),
                              0);
          if ( myAddressLabel )
          {
            UILabel__set_text(myAddressLabel, (System_String_o *)searchDataInput, 0);
            searchDataInput = UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)v13,
                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
                  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(v29, (Il2CppObject *)this, Method_FriendSearchMenu_EndOpen__, 0);
                  BaseMenu__Open((BaseMenu_o *)this, v29, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_24:
    sub_2213CDC(searchDataInput, callback);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FriendSearchMenu_o *v13; // x0
  FriendSearchMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B0E6 & 1) == 0 )
  {
    sub_2213A60(&FriendSearchMenu_CallbackFunc_TypeInfo);
    byte_596B0E6 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FriendSearchMenu_o *)sub_221405C(v8, FriendSearchMenu_CallbackFunc_TypeInfo, v9, v10);
  FriendSearchMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FriendSearchMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B0E7 & 1) == 0 )
  {
    sub_2213A60(&FriendSearchMenu_CallbackFunc_TypeInfo);
    byte_596B0E7 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FriendSearchMenu_o *)sub_221405C(v8, FriendSearchMenu_CallbackFunc_TypeInfo, v9, v10);
  FriendSearchMenu__EndOpen(v13, v14);
}


void FriendSearchMenu_CallbackFunc___ctor(
        FriendSearchMenu_CallbackFunc_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2000F94;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2000F3C;
}


System_IAsyncResult_o *FriendSearchMenu_CallbackFunc__BeginInvoke(
        FriendSearchMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *friendCode,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-48h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(qword_5984328, v12);
  v11[1] = friendCode;
  return (System_IAsyncResult_o *)sub_2213A14(this, v11, callback, object);
}


void FriendSearchMenu_CallbackFunc__EndInvoke(
        FriendSearchMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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