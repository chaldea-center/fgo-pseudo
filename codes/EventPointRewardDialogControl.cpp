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
  const MethodInfo *v25; // x6
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x2

  if ( (byte_4BC2907 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, itemArray);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1C1ABD4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v19);
    sub_1C1ABD4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__, v20);
    sub_1C1ABD4(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, v21);
    byte_4BC2907 = 1;
  }
  v22 = sub_1C1AE20(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_16;
  *(_QWORD *)(v22 + 16) = this;
  sub_1C1AB78(v22 + 16);
  *(_QWORD *)(v22 + 24) = onFinishedDialog;
  sub_1C1AB78(v22 + 24);
  if ( itemArray )
  {
    backSprite = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !backSprite )
      goto LABEL_16;
    backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0LL);
    if ( !backSprite )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, enableBackground, 0LL);
    backSprite = (UnityEngine_Component_o *)this->fields.dialog;
    if ( !backSprite )
      goto LABEL_16;
    EventPointRewardDialog__SetData(
      (EventPointRewardDialog_o *)backSprite,
      itemArray,
      itemName,
      totalCount,
      addCount,
      nextCount,
      v25);
    if ( enableBackground )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v27 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
      v29 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v29,
        (Il2CppObject *)v22,
        (intptr_t)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v29, 0LL);
        return;
      }
LABEL_16:
      sub_1C1AE30(backSprite, v24);
    }
    dialog = this->fields.dialog;
    v31 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v22,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0LL);
    if ( !dialog )
      goto LABEL_16;
    EventPointRewardDialog__Open(dialog, v31, v32);
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
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  SePlayer_o *v6; // x0
  __int64 v7; // x1
  struct EventPointRewardDialogControl_o *_4__this; // x8
  const MethodInfo *v9; // x2
  struct EventPointRewardDialogControl_o *v10; // x8
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22

  if ( (byte_4BC2908 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v3);
    sub_1C1ABD4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__, v4);
    byte_4BC2908 = 1;
  }
  v5 = Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C1ABEC(Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
  v6 = (SePlayer_o *)sub_1C1ABB8(v5, v5[4]);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v6 = OverwriteAssetSoundName__PlaySe((System_Reflection_MethodBase_o *)v6, _4__this->fields.seName, 0, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_11;
  dialog = v10->fields.dialog;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    v6 = (SePlayer_o *)sub_1C1AB78(&this->fields.__9__2);
  }
  if ( !dialog )
LABEL_11:
    sub_1C1AE30(v6, v7);
  EventPointRewardDialog__Open(dialog, _9__2, v9);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__1(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (dialog = (BaseDialog_o *)_4__this->fields.dialog) == 0LL )
    sub_1C1AE30(this, method);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  BaseDialog_o *data; // x20
  System_Action_o *monitor; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4BC2909 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_1C1ABD4(
                                                                     &Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
                                                                     v3);
    byte_4BC2909 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  data = (BaseDialog_o *)klass->_1.this_arg.data;
  monitor = (System_Action_o *)v2[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(monitor, v2, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__, 0LL);
    v2[2].monitor = monitor;
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_1C1AB78(&v2[2].monitor);
  }
  if ( !data )
LABEL_8:
    sub_1C1AE30(this, method);
  BaseDialog__Close(data, monitor, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__3(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21

  if ( (byte_4BC290A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C1ABD4(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__, v5);
    byte_4BC290A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    Instance = (Il2CppObject *)sub_1C1AB78(&this->fields.__9__4);
  }
  if ( !v9 )
    sub_1C1AE30(Instance, v7);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, _9__4, 0LL);
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
    sub_1C1AE30(backSprite, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL);
}