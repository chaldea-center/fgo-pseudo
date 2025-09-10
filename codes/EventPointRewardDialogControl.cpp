void EventPointRewardDialogControl___ctor(EventPointRewardDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPointRewardDialogControl__Open(
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
  const MethodInfo *v20; // x6
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_4C21B04 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
    sub_1C2D490(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__);
    sub_1C2D490(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
    byte_4C21B04 = 1;
  }
  v17 = sub_1C2D6DC(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_16;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C2D434(v17 + 16);
  *(_QWORD *)(v17 + 24) = onFinishedDialog;
  sub_1C2D434(v17 + 24);
  if ( itemArray )
  {
    backSprite = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !backSprite )
      goto LABEL_16;
    backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0);
    if ( !backSprite )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, enableBackground, 0);
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
      v20);
    if ( enableBackground )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v22 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
      v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v17,
        (intptr_t)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0);
      if ( Instance )
      {
        CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v24, 0);
        return;
      }
LABEL_16:
      sub_1C2D6EC(backSprite, v19);
    }
    dialog = this->fields.dialog;
    v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v17,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0);
    if ( !dialog )
      goto LABEL_16;
    EventPointRewardDialog__Open(dialog, v26, v27);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v17 + 24), 0);
  }
}


void EventPointRewardDialogControl___c__DisplayClass3_0___ctor(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__0(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  SePlayer_o *v4; // x0
  __int64 v5; // x1
  struct EventPointRewardDialogControl_o *_4__this; // x8
  const MethodInfo *v7; // x2
  struct EventPointRewardDialogControl_o *v8; // x8
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22

  if ( (byte_4C21B05 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
    sub_1C2D490(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__);
    byte_4C21B05 = 1;
  }
  v3 = Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
  v4 = (SePlayer_o *)sub_1C2D474(v3, v3[4]);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v4 = OverwriteAssetSoundName__PlaySe((System_Reflection_MethodBase_o *)v4, _4__this->fields.seName, 0, 0);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_11;
  dialog = v8->fields.dialog;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    v4 = (SePlayer_o *)sub_1C2D434(&this->fields.__9__2);
  }
  if ( !dialog )
LABEL_11:
    sub_1C2D6EC(v4, v5);
  EventPointRewardDialog__Open(dialog, _9__2, v7);
}


void EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__1(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (dialog = (BaseDialog_o *)_4__this->fields.dialog) == 0 )
    sub_1C2D6EC(this, method);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0);
}


void EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  BaseDialog_o *data; // x20
  System_Action_o *monitor; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4C21B06 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_1C2D490(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__);
    byte_4C21B06 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  data = (BaseDialog_o *)klass->_1.this_arg.data;
  monitor = (System_Action_o *)v2[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(monitor, v2, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__, 0);
    v2[2].monitor = monitor;
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_1C2D434(&v2[2].monitor);
  }
  if ( !data )
LABEL_8:
    sub_1C2D6EC(this, method);
  BaseDialog__Close(data, monitor, 0);
}


void EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__3(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21

  if ( (byte_4C21B07 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__);
    byte_4C21B07 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    Instance = (Il2CppObject *)sub_1C2D434(&this->fields.__9__4);
  }
  if ( !v6 )
    sub_1C2D6EC(Instance, v4);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__4, 0);
}


void EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__4(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backSprite; // x0
  __int64 v4; // x1
  struct EventPointRewardDialogControl_o *_4__this; // x8

  ActionExtensions__Call(this->fields.onFinishedDialog, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (backSprite = (UnityEngine_Component_o *)_4__this->fields.backSprite) == 0
    || (backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0)) == 0 )
  {
    sub_1C2D6EC(backSprite, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0);
}