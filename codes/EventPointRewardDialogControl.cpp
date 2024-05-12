void __fastcall EventPointRewardDialogControl___ctor(EventPointRewardDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointRewardDialogControl__Open(
        EventPointRewardDialogControl_o *this,
        BattleDropItem_array *itemArray,
        System_String_o *itemName,
        int64_t totalCount,
        int32_t addCount,
        int64_t nextCount,
        System_Action_o *onFinishedDialog,
        bool enableBackground,
        const MethodInfo *method)
{
  __int64 v17; // x19
  UnityEngine_Component_o *backSprite; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x6
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x2

  if ( (byte_438BCE0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
    sub_B775C4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__);
    sub_B775C4(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
    byte_438BCE0 = 1;
  }
  v17 = sub_B77694(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
  EventPointRewardDialogControl___c__DisplayClass3_0___ctor(
    (EventPointRewardDialogControl___c__DisplayClass3_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_17;
  *(_QWORD *)(v17 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = onFinishedDialog;
  sub_B77560(
    (BattleServantConfConponent_o *)(v17 + 24),
    (System_Int32_array **)onFinishedDialog,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( itemArray )
  {
    backSprite = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !backSprite )
      goto LABEL_17;
    backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0LL);
    if ( !backSprite )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, enableBackground, 0LL);
    backSprite = (UnityEngine_Component_o *)this->fields.dialog;
    if ( !backSprite )
      goto LABEL_17;
    EventPointRewardDialog__SetData(
      (EventPointRewardDialog_o *)backSprite,
      itemArray,
      itemName,
      totalCount,
      addCount,
      nextCount,
      v32);
    if ( enableBackground )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v34 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
      v36 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)v17,
        Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v36, 0LL);
        return;
      }
LABEL_17:
      sub_B7769C(backSprite, v19);
    }
    dialog = this->fields.dialog;
    v38 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v17,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0LL);
    if ( !dialog )
      goto LABEL_17;
    EventPointRewardDialog__Open(dialog, v38, v39);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v17 + 24), 0LL);
  }
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___ctor(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__0(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x20
  Il2CppClass *v5; // x8
  EventPointRewardDialog_o *v6; // x20
  System_Action_o *v7; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4387FEC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_B775C4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__);
    byte_4387FEC = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_12;
  namespaze = (System_String_o *)klass->_1.namespaze;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)SoundManager__playSe(namespaze, 0LL);
  v5 = v2[1].klass;
  if ( !v5 )
    goto LABEL_12;
  v6 = *(EventPointRewardDialog_o **)&v5->_1.byval_arg.bits;
  v7 = (System_Action_o *)v2[3].klass;
  if ( !v7 )
  {
    v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v7, v2, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__, 0LL);
    v2[3].klass = (Il2CppClass *)v7;
    sub_B77560(&v2[3]);
  }
  if ( !v6 )
LABEL_12:
    sub_B7769C(this, method);
  EventPointRewardDialog__Open(v6, v7, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__1(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (dialog = (BaseDialog_o *)_4__this->fields.dialog) == 0LL )
    sub_B7769C(this, method);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  BaseDialog_o *v4; // x20
  System_Action_o *monitor; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4387FED & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_B775C4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__);
    byte_4387FED = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  v4 = *(BaseDialog_o **)&klass->_1.byval_arg.bits;
  monitor = (System_Action_o *)v2[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(monitor, v2, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__, 0LL);
    v2[2].monitor = monitor;
    sub_B77560(&v2[2].monitor);
  }
  if ( !v4 )
LABEL_8:
    sub_B7769C(this, method);
  BaseDialog__Close(v4, monitor, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__3(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21

  if ( (byte_4387FEE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__);
    byte_4387FEE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B77560(&this->fields.__9__4);
  }
  if ( !v5 )
    sub_B7769C(Instance, v4);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, _9__4, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__4(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backSprite; // x0
  __int64 v4; // x1
  struct EventPointRewardDialogControl_o *_4__this; // x8

  ActionExtensions__Call(this->fields.onFinishedDialog, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (backSprite = (UnityEngine_Component_o *)_4__this->fields.backSprite) == 0LL
    || (backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0LL)) == 0LL )
  {
    sub_B7769C(backSprite, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL);
}