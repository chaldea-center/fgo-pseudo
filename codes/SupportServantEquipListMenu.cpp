void __fastcall SupportServantEquipListMenu___ctor(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC42F & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC42F = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantEquipListMenu__Callback(
        SupportServantEquipListMenu_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, result, classPos, item, 0LL);
}


void __fastcall SupportServantEquipListMenu__Close(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantEquipListMenu__Close_32130424(this, 0LL, v2);
}


void __fastcall SupportServantEquipListMenu__Close_32130424(
        SupportServantEquipListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x1
  System_Action_o *v14; // x20

  if ( (byte_42EC422 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_EndClose__, v10, v11, v12);
    byte_42EC422 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  SupportServantEquipListMenu__SetListManagerStatus(this, v13);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v14, 0LL);
}


void __fastcall SupportServantEquipListMenu__Decide(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SupportServantEquipListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EC424 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_EndDecide__, v8, v9, v10);
    byte_42EC424 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v11 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
  SupportServantEquipListMenu_RequestCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_EndDecide__,
    0LL);
  SupportServantEquipListMenu__StatusRequest(this, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndClickTabChoice(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_B5D69C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_32130752(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndClickTabLock(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_B5D69C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_32130752(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndClickTabNormal(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_B5D69C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_32130752(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 0, method);
}


void __fastcall SupportServantEquipListMenu__EndClose(SupportServantEquipListMenu_o *this, const MethodInfo *method)
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

  SupportServantEquipListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall SupportServantEquipListMenu__EndCloseEventServantWarning(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, 1, this->fields.classPos, 0LL, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndCloseList(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantEquipListMenu__EndCloseShowServantEquip(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x19
  SupportServantEquipListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42EC428 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_OnSelectServantEquip__, v5, v6, v7);
    byte_42EC428 = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v9 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B5D694(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    0LL);
  if ( !supportServantEquipListViewManager )
    sub_B5D69C(v10, v11);
  supportServantEquipListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SupportServantEquipListViewManager__SetMode_32130752(supportServantEquipListViewManager, 2, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndDecide(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2
  SupportServantEquipListViewItem_o *Item; // x20
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_16;
    SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_16;
    SupportServantEquipListViewManager__SetMode_32130752(supportServantEquipListViewManager, 3, v5);
  }
  *(_QWORD *)&isRequest = (unsigned int)this->fields.selectNum;
  this->fields.state = 3;
  if ( (isRequest & 0x80000000) != 0 )
  {
    Item = 0LL;
LABEL_10:
    if ( this->fields.isSelectedSvt )
      goto LABEL_13;
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( supportServantEquipListViewManager )
    {
      ListViewManager__SetScrollBarValue((ListViewManager_o *)supportServantEquipListViewManager, 0LL);
      goto LABEL_13;
    }
LABEL_16:
    sub_B5D69C(supportServantEquipListViewManager, isRequest);
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_16;
  Item = SupportServantEquipListViewManager__GetItem(supportServantEquipListViewManager, isRequest, method);
  if ( !Item )
    goto LABEL_10;
LABEL_13:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, 1, this->fields.classPos, Item, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndOpen(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  CommonUI_o *Instance; // x20
  TutorialFlag_ImageId_array *v13; // x0
  TutorialFlag_ImageId_array *v14; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v16; // x0

  if ( (byte_42EC421 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_ImageId___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v8, v9, v10);
    byte_42EC421 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29295864(110, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (TutorialFlag_ImageId_array *)sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v13 )
      goto LABEL_14;
    max_length = v13->max_length;
    v14 = v13;
    if ( !max_length || (v13->m_Items[1] = 4, max_length == 1) )
    {
      v16 = sub_B5D6C8(v13);
      sub_B5D668(v16, 0LL);
    }
    v13->m_Items[2] = 5;
    if ( !Instance )
LABEL_14:
      sub_B5D69C(v13, v14);
    CommonUI__OpenTutorialImageDialog(Instance, v13, 110, 0LL, 0LL, 0LL, 0LL);
  }
  this->fields.state = 2;
  SupportServantEquipListMenu__SetListManagerStatus(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndShowServantEquip(
        SupportServantEquipListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v13; // x2
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21

  if ( (byte_42EC427 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, v9, v10, v11);
    byte_42EC427 = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B5D69C(supportServantEquipListViewManager, isDecide);
    }
    SupportServantEquipListViewManager__SetMode_32130752(supportServantEquipListViewManager, 3, v13);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog(Instance, v15, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndStatusSync(
        SupportServantEquipListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_requedstCallback; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x19
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (BattleServantConfConponent_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_B5D560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SupportServantEquipListMenu_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall SupportServantEquipListMenu__Init(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v12; // x2

  if ( (byte_42EC41F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_11847/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v5, v6, v7);
    byte_42EC41F = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_10;
  SupportServantEquipListViewManager__DestroyList(supportServantEquipListViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_11847/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/,
                                                                                 0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantEquipListViewManager, 0LL),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_10:
    sub_B5D69C(supportServantEquipListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled(normalTabButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)normalTabButton, enabled, 1, 0LL);
  SupportServantEquipListMenu__setModeTabKind(this, 0, v12);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantEquipListMenu__OnClickCancel(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_42EC425 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_endCancelButton__, v8, v9, v10);
    byte_42EC425 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_B5D69C(0LL, method);
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v12 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_endCancelButton__,
      0LL);
    SupportServantEquipListMenu__StatusRequest(this, v12, v13);
  }
}


void __fastcall SupportServantEquipListMenu__OnClickDecide(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewItem_o *SelectItem; // x0
  const MethodInfo *v5; // x1
  int32_t index; // w8

  if ( this->fields.state == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      sub_B5D69C(0LL, method);
    SelectItem = SupportServantEquipListViewManager__GetSelectItem(supportServantEquipListViewManager, method);
    if ( SelectItem )
      index = SelectItem->fields.index;
    else
      index = -1;
    this->fields.selectNum = index;
    SupportServantEquipListMenu__Decide(this, v5);
  }
}


void __fastcall SupportServantEquipListMenu__OnClickScaleChange(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_42EC42E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC42E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ChangeIconScale(supportServantEquipListViewManager, v5),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                                                         supportServantEquipListViewManager,
                                                                                         v5),
          !scaleChangeTabSprite) )
    {
      sub_B5D69C(supportServantEquipListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantEquipListViewManager, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__OnSelectServantEquip(
        SupportServantEquipListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  SupportServantEquipListMenu_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  SupportServantEquipListViewItem_o *v25; // x20
  int32_t tabModeKind; // w8
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v29; // x22
  char v30; // w20
  int32_t v31; // w8
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  struct SupportServantEquipListViewManager_o *v34; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  const MethodInfo *v37; // x2
  SupportServantEquipServantItem_o *v38; // x0
  SupportServantEquipListMenu_o *v39; // x1
  const MethodInfo *v40; // x2
  SupportServantEquipListViewManager_CallbackFunc_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2
  ServantStatusDialog_EndDelegate_o *v49; // x23
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q1
  const MethodInfo *v52; // x2
  struct SupportServantEquipListViewManager_o *v53; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_42EC426 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, kind, n, method);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&SoundManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_EndShowServantEquip__, v19, v20, v21);
    this = (SupportServantEquipListMenu_o *)sub_B5D5C4(
                                              &Method_SupportServantEquipListMenu_OnSelectServantEquip__,
                                              v22,
                                              v23,
                                              v24);
    byte_42EC426 = 1;
  }
  if ( v6->fields.state == 2 )
  {
    v6->fields.selectNum = n;
    if ( (n & 0x80000000) != 0 )
    {
      v25 = 0LL;
    }
    else
    {
      this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
      if ( !this )
        goto LABEL_85;
      this = (SupportServantEquipListMenu_o *)SupportServantEquipListViewManager__GetItem(
                                                (SupportServantEquipListViewManager_o *)this,
                                                n,
                                                *(const MethodInfo **)&n);
      v25 = (SupportServantEquipListViewItem_o *)this;
    }
    switch ( kind )
    {
      case 1:
        SupportServantEquipListMenu__Decide(v6, *(const MethodInfo **)&kind);
        return;
      case 2:
        if ( v25 )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v6->fields.state = 5;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtEntity = v25->fields.userSvtEntity;
          v29 = (CommonUI_o *)Instance;
          v30 = v25->fields.isUse || v25->fields.isBase;
          v49 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v49,
            (Il2CppObject *)v6,
            Method_SupportServantEquipListMenu_EndShowServantEquip__,
            0LL);
          if ( v29 )
          {
            CommonUI__OpenServantEquipStatusDialog_18217060(v29, 0, userSvtEntity, v30, v49, 0LL, 0LL);
            return;
          }
        }
        else
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          v6->fields.state = 2;
          supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
LABEL_63:
          v41 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B5D694(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
          SupportServantEquipListViewManager_CallbackFunc___ctor(
            v41,
            (Il2CppObject *)v6,
            Method_SupportServantEquipListMenu_OnSelectServantEquip__,
            0LL);
          if ( supportServantEquipListViewManager )
          {
            supportServantEquipListViewManager->fields.callbackFunc = v41;
            sub_B5D560(
              (BattleServantConfConponent_o *)&supportServantEquipListViewManager->fields.callbackFunc,
              (System_Int32_array **)v41,
              v42,
              v43,
              v44,
              v45,
              v46,
              v47);
            SupportServantEquipListViewManager__SetMode_32130752(supportServantEquipListViewManager, 2, v48);
            return;
          }
        }
LABEL_85:
        sub_B5D69C(this, *(_QWORD *)&kind);
      case 3:
        tabModeKind = v6->fields.tabModeKind;
        if ( tabModeKind == 2 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( !v25 )
            goto LABEL_85;
          v25->fields.isSwapChoice ^= 1u;
        }
        else if ( tabModeKind == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          if ( !v25 )
            goto LABEL_85;
          v25->fields.isSwapLock ^= 1u;
        }
        else
        {
          v34 = v6->fields.supportServantEquipListViewManager;
          if ( !v34 || !v25 )
            goto LABEL_85;
          servantItemInfo = v34->fields.servantItemInfo;
          servantItemDraw = v34->fields.servantItemDraw;
          if ( v25->fields.isBase )
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v25->fields.isBase = 0;
            if ( !servantItemInfo )
              goto LABEL_85;
            v38 = servantItemInfo;
            v39 = 0LL;
          }
          else
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_85;
            SupportServantEquipListViewManager__resetEquipItemBaseFlag(
              (SupportServantEquipListViewManager_o *)this,
              *(const MethodInfo **)&kind);
            v50 = v25->fields.userSvtEntity;
            v25->fields.isBase = 1;
            if ( !v50 )
              goto LABEL_85;
            v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
            *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v63.fields.fakeValue = v51;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v62 = v63;
            this = (SupportServantEquipListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                      &v62,
                                                      0LL);
            if ( !servantItemInfo )
              goto LABEL_85;
            v39 = this;
            v38 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v38, (int64_t)v39, v37);
          if ( !servantItemDraw )
            goto LABEL_85;
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, v52);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_85;
          SupportServantEquipListViewManager__RefreshEquipped(
            (SupportServantEquipListViewManager_o *)this,
            *(const MethodInfo **)&kind);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_85;
          SupportServantEquipListViewManager__RefreshListDisp(
            (SupportServantEquipListViewManager_o *)this,
            *(const MethodInfo **)&kind);
        }
        v6->fields.state = 2;
        v53 = v6->fields.supportServantEquipListViewManager;
        v54 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B5D694(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
        SupportServantEquipListViewManager_CallbackFunc___ctor(
          v54,
          (Il2CppObject *)v6,
          Method_SupportServantEquipListMenu_OnSelectServantEquip__,
          0LL);
        if ( !v53 )
          goto LABEL_85;
        v53->fields.callbackFunc = v54;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v53->fields.callbackFunc,
          (System_Int32_array **)v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
        SupportServantEquipListViewManager__SetMode_32130752(v53, 2, v61);
        return;
      case 4:
        v31 = v6->fields.tabModeKind;
        if ( v31 == 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          if ( !v25 )
            goto LABEL_85;
          v25->fields.isSwapLock ^= 1u;
        }
        else if ( v31 == 2 )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( !v25 )
            goto LABEL_85;
          v25->fields.isSwapChoice ^= 1u;
        }
        else
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_85;
          SupportServantEquipListViewManager__checkEquipChange((SupportServantEquipListViewManager_o *)this, v25, v40);
        }
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        v6->fields.state = 2;
        goto LABEL_63;
      default:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        callbackFunc = v6->fields.callbackFunc;
        v6->fields.state = 3;
        if ( callbackFunc )
          SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, 1, v6->fields.classPos, 0LL, 0LL);
        return;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__Open(
        SupportServantEquipListMenu_o *this,
        SupportServantData_array *supportServantDatas,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        SupportServantEquipListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  SupportServantData_o *Equip; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  Il2CppClass **v24; // x28
  struct SupportServantData_o **v25; // x28
  SupportServantData_o *v26; // t1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct SupportServantData_o *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int32_t state; // w8
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v44; // x20
  __int64 v45; // x0
  const MethodInfo *v46; // [xsp+0h] [xbp-60h]

  if ( (byte_42EC420 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)supportServantDatas, nowDeckNum, *(_QWORD *)&classPos);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_EndOpen__, v18, v19, v20);
    byte_42EC420 = 1;
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)supportServantDatas);
  if ( !supportServantDatas )
    goto LABEL_18;
  if ( supportServantDatas->max_length <= nowDeckNum )
    goto LABEL_19;
  v24 = &supportServantDatas->obj.klass + nowDeckNum;
  v26 = (SupportServantData_o *)v24[4];
  v25 = (struct SupportServantData_o **)(v24 + 4);
  Equip = v26;
  if ( !v26 )
    goto LABEL_18;
  Equip = (SupportServantData_o *)SupportServantData__getEquip(Equip, classPos, v23);
  this->fields.isSelectedSvt = (__int64)Equip > 0;
  if ( supportServantDatas->max_length <= nowDeckNum )
  {
LABEL_19:
    v45 = sub_B5D6C8(Equip);
    sub_B5D668(v45, 0LL);
  }
  v33 = *v25;
  this->fields.supportServantData = *v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)v33,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    this->fields.state = 2;
    SupportServantEquipListMenu__SetListManagerStatus(this, v41);
    return;
  }
  if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    this->fields.classPos = classPos;
    Equip = (SupportServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( Equip )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Equip, 1, 0LL);
      Equip = (SupportServantData_o *)this->fields.titleInfo;
      if ( Equip )
      {
        TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Equip, 0LL, 1, 0LL, 23, 0LL);
        Equip = (SupportServantData_o *)this->fields.titleInfo;
        if ( Equip )
        {
          TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)Equip, 1, 0, 0, 0LL);
          Equip = (SupportServantData_o *)this->fields.supportServantEquipListViewManager;
          if ( Equip )
          {
            SupportServantEquipListViewManager__CreateList(
              (SupportServantEquipListViewManager_o *)Equip,
              supportServantDatas,
              nowDeckNum,
              classPos,
              eventSetupInfo,
              nowDeckId,
              fixMainDeckIds,
              fixEventDeckIds,
              v46);
            this->fields.state = 1;
            SupportServantEquipListMenu__SetListManagerStatus(this, v42);
            Equip = (SupportServantData_o *)this->fields.supportServantEquipListViewManager;
            if ( Equip )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Equip = (SupportServantData_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                (SupportServantEquipListViewManager_o *)Equip,
                                                v22);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Equip, 0LL);
                v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(v44, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndOpen__, 0LL);
                BaseMenu__Open((BaseMenu_o *)this, v44, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_B5D69C(Equip, v22);
  }
}


void __fastcall SupportServantEquipListMenu__SetListManagerStatus(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  SupportServantEquipListMenu_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x19
  SupportServantEquipListViewManager_CallbackFunc_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w1

  v4 = this;
  if ( (byte_42EC423 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    this = (SupportServantEquipListMenu_o *)sub_B5D5C4(
                                              &Method_SupportServantEquipListMenu_OnSelectServantEquip__,
                                              v5,
                                              v6,
                                              v7);
    byte_42EC423 = 1;
  }
  supportServantEquipListViewManager = v4->fields.supportServantEquipListViewManager;
  if ( v4->fields.state != 2 )
  {
    if ( supportServantEquipListViewManager )
    {
      v16 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_B5D69C(this, method);
  }
  v9 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_B5D694(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)v4,
    Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    0LL);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  supportServantEquipListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = 2;
LABEL_8:
  SupportServantEquipListViewManager__SetMode_32130752(supportServantEquipListViewManager, v16, v2);
}


void __fastcall SupportServantEquipListMenu__StatusRequest(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t tabModeKind; // w8
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w4
  bool v27; // w5
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  NetworkManager_ResultCallbackFunc_o *v34; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42EC42D & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_EndStatusSync__, v12, v13, v14);
    byte_42EC42D = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_23;
    if ( SupportServantEquipListViewManager__GetSwapChoiceList(
           supportServantEquipListViewManager,
           &choiceList,
           &unchoiceList,
           v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v34,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                     v34,
                                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v24 = unchoiceList;
        v25 = choiceList;
        v27 = 1;
        v26 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B5D69C(supportServantEquipListViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_23;
    if ( SupportServantEquipListViewManager__GetSwapLockList(
           supportServantEquipListViewManager,
           &lockList,
           &unlockList,
           v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                     v23,
                                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v24 = unlockList;
        v25 = lockList;
        v26 = 1;
        v27 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v25,
          v24,
          0,
          v26,
          v27,
          0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    SupportServantEquipListMenu_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall SupportServantEquipListMenu__add_callbackFunc(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportServantEquipListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportServantEquipListMenu_o *v12; // x0
  SupportServantEquipListMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC41D & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC41D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportServantEquipListMenu_CallbackFunc_c *)v9->klass != SupportServantEquipListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportServantEquipListMenu__remove_callbackFunc(v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__endCancelButton(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2
  SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B5D69C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_32130752(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0LL);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantEquipListViewManager, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportServantEquipListMenu_CallbackFunc__Invoke(callbackFunc, 0, this->fields.classPos, 0LL, 0LL);
}


void __fastcall SupportServantEquipListMenu__onClickChoiceTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42EC42B & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_EndClickTabChoice__, v8, v9, v10);
    byte_42EC42B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v13 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabChoice__,
          0LL);
        SupportServantEquipListMenu__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabChoice__,
        0LL);
      SupportServantEquipListMenu__StatusRequest(this, v15, v16);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 2, v11);
  }
}


void __fastcall SupportServantEquipListMenu__onClickLockTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42EC42A & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_EndClickTabLock__, v8, v9, v10);
    byte_42EC42A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v13 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabLock__,
          0LL);
        SupportServantEquipListMenu__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabLock__,
        0LL);
      SupportServantEquipListMenu__StatusRequest(this, v15, v16);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 1, v11);
  }
}


void __fastcall SupportServantEquipListMenu__onClickNormalTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SupportServantEquipListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EC429 & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SupportServantEquipListMenu_EndClickTabNormal__, v8, v9, v10);
    byte_42EC429 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_B5D694(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_EndClickTabNormal__,
      0LL);
    SupportServantEquipListMenu__StatusRequest(this, v11, v12);
  }
}


void __fastcall SupportServantEquipListMenu__remove_callbackFunc(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportServantEquipListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportServantEquipListMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EC41E & 1) == 0 )
  {
    sub_B5D5C4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC41E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportServantEquipListMenu_CallbackFunc_c *)v9->klass != SupportServantEquipListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportServantEquipListMenu__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__setModeTabKind(
        SupportServantEquipListMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v34; // x20
  bool enabled; // w0
  System_String_o **v36; // x8
  UICommonButton_o *lockTabButton; // x20
  bool v38; // w0
  System_String_o **v39; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v41; // w0
  __int64 *v42; // x8
  const MethodInfo *v43; // x1
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x20
  __int64 *v46; // x8
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_42EC42C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11845/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11847/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11846/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v30, v31, v32);
    byte_42EC42C = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_42;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v34 = this->fields.normalTabButton;
    if ( !v34 )
      goto LABEL_42;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v34, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_42;
    v36 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17350/*"button_select_unreg"*/ : &StringLiteral_17349/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v36, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_42;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_42;
    v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v38, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_42;
    v39 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17335/*"button_alllock_reg"*/ : &StringLiteral_17336/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v39, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_42;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_42;
    v41 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v41, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_42;
    if ( this->fields.tabModeKind == 2 )
      v42 = &StringLiteral_17333/*"button_allchoice_reg"*/;
    else
      v42 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v42, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = &StringLiteral_11845/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = &StringLiteral_11846/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( tabModeKind )
      {
LABEL_39:
        SupportServantEquipListMenu__SetListManagerStatus(this, v43);
        supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
        if ( supportServantEquipListViewManager )
        {
          supportServantEquipListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
          return;
        }
LABEL_42:
        sub_B5D69C(normalTabButton, *(_QWORD *)&modeKind);
      }
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = &StringLiteral_11847/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v46, 0LL);
    if ( !explanationLabel )
      goto LABEL_42;
    UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
    goto LABEL_39;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_CallbackFunc___ctor(
        SupportServantEquipListMenu_CallbackFunc_o *this,
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall SupportServantEquipListMenu_CallbackFunc__BeginInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v15[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = result;
  v16 = classPos;
  if ( (byte_42E648E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, classPos, item);
    sub_B5D5C4(&SupportSelectRootComponent_ResultKind_TypeInfo, v11, v12, v13);
    byte_42E648E = 1;
  }
  v15[3] = 0LL;
  v15[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v17);
  v15[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15[2] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B5D568(this, v15, callback, object);
}


void __fastcall SupportServantEquipListMenu_CallbackFunc__EndInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_CallbackFunc__Invoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  SupportServantEquipListMenu_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD); // x0
  SupportServantEquipListMenu_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, SupportServantEquipListViewItem_o *, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  SupportServantEquipListMenu_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (SupportServantEquipListMenu_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, SupportServantEquipListViewItem_o *, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&classPos);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)classPos, item, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)classPos, item, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, v30, (unsigned int)classPos, item, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)classPos,
            item,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 312))(
            v24,
            v36,
            (unsigned int)classPos,
            item,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, SupportServantEquipListViewItem_o *, __int64))v26)(
      v24,
      v36,
      (unsigned int)classPos,
      item,
      v25);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall SupportServantEquipListMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_42E648F & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E648F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__EndInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__Invoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SupportServantEquipListMenu_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  SupportServantEquipListMenu_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SupportServantEquipListMenu_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
}