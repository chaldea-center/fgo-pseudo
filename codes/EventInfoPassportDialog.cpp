void EventInfoPassportDialog___ctor(EventInfoPassportDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5971D36 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5971D36 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoPassportDialog__Awake(EventInfoPassportDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
}


void EventInfoPassportDialog__Init(EventInfoPassportDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
}


void EventInfoPassportDialog__OnClose(EventInfoPassportDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *passportListViewManager; // x20
  const MethodInfo *v5; // x1
  EventInfoPassportListViewManager_o *v6; // x0
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Action_o *v10; // x20

  if ( (byte_5971D35 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoPassportDialog_OnClose__);
    sub_2213A60(&Method_EventInfoPassportDialog__OnClose_b__8_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971D35 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    passportListViewManager = (UnityEngine_Object_o *)this->fields.passportListViewManager;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( UnityEngine_Object__op_Inequality(passportListViewManager, 0, 0) )
    {
      v6 = this->fields.passportListViewManager;
      if ( !v6 )
        sub_2213CDC(0, v5);
      EventInfoPassportListViewManager__LockInputForDialogClosing(v6, v5);
    }
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    v8 = Method_EventInfoPassportDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoPassportDialog_OnClose__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_2213A78(Method_EventInfoPassportDialog_OnClose__);
    v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_EventInfoPassportDialog__OnClose_b__8_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
  }
}


void EventInfoPassportDialog__Open(
        EventInfoPassportDialog_o *this,
        int32_t eventId,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  UnityEngine_Object_o *closeBtn; // x21
  __int64 v13; // x1
  EventInfoPassportDialog___c_c *v14; // x0
  struct EventInfoPassportDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__7_0; // x21
  Il2CppObject *v17; // x22
  struct EventInfoPassportDialog___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *passportListViewManager; // x0
  __int64 v28; // x1
  UILabel_o *infoLabel; // x21
  const MethodInfo *v30; // x2

  if ( (byte_5971D34 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoPassportDialog___c__Open_b__7_0__);
    sub_2213A60(&EventInfoPassportDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_10747/*"PASSPORT_DIALOG_INFO"*/);
    sub_2213A60(&StringLiteral_10748/*"PASSPORT_DIALOG_TITLE"*/);
    byte_5971D34 = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClosed,
    (int32_t)inOnClosed,
    (System_String_o *)inOnClosed,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  v14 = EventInfoPassportDialog___c_TypeInfo;
  if ( !*(&EventInfoPassportDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPassportDialog___c_TypeInfo, v13);
    v14 = EventInfoPassportDialog___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v13);
      static_fields = EventInfoPassportDialog___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__7_0, v17, Method_EventInfoPassportDialog___c__Open_b__7_0__, 0);
    v18 = EventInfoPassportDialog___c_TypeInfo->static_fields;
    v18->__9__7_0 = _9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__7_0, (int32_t)_9__7_0, v19, v20, v21, v22, v23, v24);
  }
  BaseDialog__SafeOpen((BaseDialog_o *)this, _9__7_0, 0, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  passportListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10748/*"PASSPORT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, passportListViewManager, 0),
        infoLabel = this->fields.infoLabel,
        passportListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10747/*"PASSPORT_DIALOG_INFO"*/, 0),
        !infoLabel)
    || (UILabel__set_text(infoLabel, passportListViewManager, 0),
        (passportListViewManager = (System_String_o *)this->fields.passportListViewManager) == 0) )
  {
    sub_2213CDC(passportListViewManager, v28);
  }
  EventInfoPassportListViewManager__CreateList(
    (EventInfoPassportListViewManager_o *)passportListViewManager,
    eventId,
    v30);
}


void EventInfoPassportDialog___OnClose_b__8_0(EventInfoPassportDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5971D37 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971D37 = 1;
  }
  ActionExtensions__Call(this->fields.onClosed, 0);
  this->fields.onClosed = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClosed, 0, v3, v4, v5, v6, v7, v8);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void EventInfoPassportDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971D38 & 1) == 0 )
  {
    sub_2213A60(&EventInfoPassportDialog___c_TypeInfo);
    byte_5971D38 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoPassportDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoPassportDialog___c_TypeInfo->static_fields->__9 = (struct EventInfoPassportDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoPassportDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoPassportDialog___c___ctor(EventInfoPassportDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPassportDialog___c___Open_b__7_0(EventInfoPassportDialog___c_o *this, const MethodInfo *method)
{
  ;
}