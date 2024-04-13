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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  __int64 v32; // x19
  UnityEngine_Component_o *backSprite; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x6
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v49; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v51; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v53; // x21
  const MethodInfo *v54; // x2

  if ( (byte_42E8DDE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)itemArray, (_DWORD)itemName, totalCount);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v23, v24, v25);
    sub_B5D5C4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__, v26, v27, v28);
    sub_B5D5C4(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, v29, v30, v31);
    byte_42E8DDE = 1;
  }
  v32 = sub_B5D694(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
  EventPointRewardDialogControl___c__DisplayClass3_0___ctor(
    (EventPointRewardDialogControl___c__DisplayClass3_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_17;
  *(_QWORD *)(v32 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  *(_QWORD *)(v32 + 24) = onFinishedDialog;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v32 + 24),
    (System_Int32_array **)onFinishedDialog,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
      v47);
    if ( enableBackground )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v49 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v49 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v49->static_fields->DEFAULT_FADE_TIME;
      v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v51,
        (Il2CppObject *)v32,
        Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v51, 0LL);
        return;
      }
LABEL_17:
      sub_B5D69C(backSprite, v34);
    }
    dialog = this->fields.dialog;
    v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v53,
      (Il2CppObject *)v32,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0LL);
    if ( !dialog )
      goto LABEL_17;
    EventPointRewardDialog__Open(dialog, v53, v54);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v32 + 24), 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x20
  Il2CppClass *v13; // x8
  EventPointRewardDialog_o *v14; // x20
  System_Action_o *v15; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E6583 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_B5D5C4(
                                                                     &Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
                                                                     v8,
                                                                     v9,
                                                                     v10);
    byte_42E6583 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_12;
  namespaze = (System_String_o *)klass->_1.namespaze;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)SoundManager__playSe(namespaze, 0LL);
  v13 = v4[1].klass;
  if ( !v13 )
    goto LABEL_12;
  v14 = *(EventPointRewardDialog_o **)&v13->_1.byval_arg.bits;
  v15 = (System_Action_o *)v4[3].klass;
  if ( !v15 )
  {
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v15, v4, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__, 0LL);
    v4[3].klass = (Il2CppClass *)v15;
    sub_B5D560(&v4[3]);
  }
  if ( !v14 )
LABEL_12:
    sub_B5D69C(this, method);
  EventPointRewardDialog__Open(v14, v15, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__1(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (dialog = (BaseDialog_o *)_4__this->fields.dialog) == 0LL )
    sub_B5D69C(this, method);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppClass *klass; // x8
  BaseDialog_o *v9; // x20
  System_Action_o *monitor; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E6584 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_B5D5C4(
                                                                     &Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
                                                                     v5,
                                                                     v6,
                                                                     v7);
    byte_42E6584 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_8;
  v9 = *(BaseDialog_o **)&klass->_1.byval_arg.bits;
  monitor = (System_Action_o *)v4[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(monitor, v4, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__, 0LL);
    v4[2].monitor = monitor;
    sub_B5D560(&v4[2].monitor);
  }
  if ( !v9 )
LABEL_8:
    sub_B5D69C(this, method);
  BaseDialog__Close(v9, monitor, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__3(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21

  if ( (byte_42E6585 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__, v11, v12, v13);
    byte_42E6585 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B5D560(&this->fields.__9__4);
  }
  if ( !v16 )
    sub_B5D69C(Instance, v15);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, _9__4, 0LL);
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
    sub_B5D69C(backSprite, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL);
}