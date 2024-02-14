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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x6
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v42; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v44; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v46; // x21
  const MethodInfo *v47; // x2

  if ( (byte_421496F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, itemArray);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B0D8A4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v19);
    sub_B0D8A4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__, v20);
    sub_B0D8A4(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, v21);
    byte_421496F = 1;
  }
  v22 = sub_B0D974(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, itemArray, itemName);
  EventPointRewardDialogControl___c__DisplayClass3_0___ctor(
    (EventPointRewardDialogControl___c__DisplayClass3_0_o *)v22,
    0LL);
  if ( !v22 )
    goto LABEL_17;
  *(_QWORD *)(v22 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v22 + 24) = onFinishedDialog;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v22 + 24),
    (System_Int32_array **)onFinishedDialog,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
      v36);
    if ( enableBackground )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v42 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v42 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v42->static_fields->DEFAULT_FADE_TIME;
      v44 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v39, v40);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v22,
        Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v44, 0LL);
        return;
      }
LABEL_17:
      sub_B0D97C(backSprite);
    }
    dialog = this->fields.dialog;
    v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v37, v38);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v22,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0LL);
    if ( !dialog )
      goto LABEL_17;
    EventPointRewardDialog__Open(dialog, v46, v47);
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppClass *v9; // x8
  EventPointRewardDialog_o *v10; // x20
  System_Action_o *v11; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4211BAE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_B0D8A4(
                                                                     &Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
                                                                     v4);
    byte_4211BAE = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_12;
  namespaze = (System_String_o *)klass->_1.namespaze;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)SoundManager__playSe(namespaze, 0LL);
  v9 = v2[1].klass;
  if ( !v9 )
    goto LABEL_12;
  v10 = *(EventPointRewardDialog_o **)&v9->_1.byval_arg.bits;
  v11 = (System_Action_o *)v2[3].klass;
  if ( !v11 )
  {
    v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v11, v2, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__, 0LL);
    v2[3].klass = (Il2CppClass *)v11;
    sub_B0D840(&v2[3], v11);
  }
  if ( !v10 )
LABEL_12:
    sub_B0D97C(this);
  EventPointRewardDialog__Open(v10, v11, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__1(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (dialog = (BaseDialog_o *)_4__this->fields.dialog) == 0LL )
    sub_B0D97C(this);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  BaseDialog_o *v6; // x20
  System_Action_o *monitor; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4211BAF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_B0D8A4(
                                                                     &Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
                                                                     v4);
    byte_4211BAF = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_8;
  v6 = *(BaseDialog_o **)&klass->_1.byval_arg.bits;
  monitor = (System_Action_o *)v3[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(monitor, v3, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__, 0LL);
    v3[2].monitor = monitor;
    sub_B0D840(&v3[2].monitor, monitor);
  }
  if ( !v6 )
LABEL_8:
    sub_B0D97C(this);
  BaseDialog__Close(v6, monitor, 0LL);
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
  __int64 v8; // x2
  CommonUI_o *v9; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21

  if ( (byte_4211BB0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__, v5);
    byte_4211BB0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B0D840(&this->fields.__9__4, _9__4);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, _9__4, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__4(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backSprite; // x0
  struct EventPointRewardDialogControl_o *_4__this; // x8

  ActionExtensions__Call(this->fields.onFinishedDialog, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (backSprite = (UnityEngine_Component_o *)_4__this->fields.backSprite) == 0LL
    || (backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0LL)) == 0LL )
  {
    sub_B0D97C(backSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL);
}