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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x19
  UnityEngine_Component_o *backSprite; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x6
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v43; // x21
  const MethodInfo *v44; // x2

  if ( (byte_41878F8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, itemArray);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B2C35C(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v19);
    sub_B2C35C(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__, v20);
    sub_B2C35C(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, v21);
    byte_41878F8 = 1;
  }
  v22 = sub_B2C42C(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
  EventPointRewardDialogControl___c__DisplayClass3_0___ctor(
    (EventPointRewardDialogControl___c__DisplayClass3_0_o *)v22,
    0LL);
  if ( !v22 )
    goto LABEL_17;
  *(_QWORD *)(v22 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = onFinishedDialog;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v22 + 24),
    (System_Int32_array **)onFinishedDialog,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
      v37);
    if ( enableBackground )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v39 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v39 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
      v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v41,
        (Il2CppObject *)v22,
        Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v41, 0LL);
        return;
      }
LABEL_17:
      sub_B2C434(backSprite, v24);
    }
    dialog = this->fields.dialog;
    v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v22,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0LL);
    if ( !dialog )
      goto LABEL_17;
    EventPointRewardDialog__Open(dialog, v43, v44);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v22 + 24), 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x20
  Il2CppClass *v7; // x8
  EventPointRewardDialog_o *v8; // x20
  System_Action_o *v9; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4184B48 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_B2C35C(
                                                                     &Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
                                                                     v4);
    byte_4184B48 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_12;
  namespaze = (System_String_o *)klass->_1.namespaze;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)SoundManager__playSe(namespaze, 0LL);
  v7 = v2[1].klass;
  if ( !v7 )
    goto LABEL_12;
  v8 = *(EventPointRewardDialog_o **)&v7->_1.byval_arg.bits;
  v9 = (System_Action_o *)v2[3].klass;
  if ( !v9 )
  {
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v9, v2, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__, 0LL);
    v2[3].klass = (Il2CppClass *)v9;
    sub_B2C2F8(&v2[3], v9);
  }
  if ( !v8 )
LABEL_12:
    sub_B2C434(this, method);
  EventPointRewardDialog__Open(v8, v9, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__1(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (dialog = (BaseDialog_o *)_4__this->fields.dialog) == 0LL )
    sub_B2C434(this, method);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  BaseDialog_o *v5; // x20
  System_Action_o *monitor; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4184B49 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_B2C35C(
                                                                     &Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
                                                                     v3);
    byte_4184B49 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  v5 = *(BaseDialog_o **)&klass->_1.byval_arg.bits;
  monitor = (System_Action_o *)v2[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(monitor, v2, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__, 0LL);
    v2[2].monitor = monitor;
    sub_B2C2F8(&v2[2].monitor, monitor);
  }
  if ( !v5 )
LABEL_8:
    sub_B2C434(this, method);
  BaseDialog__Close(v5, monitor, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__3(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21

  if ( (byte_4184B4A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__, v5);
    byte_4184B4A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B2C2F8(&this->fields.__9__4, _9__4);
  }
  if ( !v8 )
    sub_B2C434(Instance, v7);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, _9__4, 0LL);
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
    sub_B2C434(backSprite, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL);
}