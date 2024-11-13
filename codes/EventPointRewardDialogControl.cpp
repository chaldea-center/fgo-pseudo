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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x19
  UnityEngine_Component_o *backSprite; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x6
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v38; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v40; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v42; // x21
  const MethodInfo *v43; // x2

  if ( (byte_4B1114C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, itemArray, itemName);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v21, v22);
    sub_1BCA7E0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__, v23, v24);
    sub_1BCA7E0(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, v25, v26);
    byte_4B1114C = 1;
  }
  v27 = sub_1BCAA2C(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, itemArray, itemName, totalCount);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_16;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BCA784(v27 + 16, this);
  *(_QWORD *)(v27 + 24) = onFinishedDialog;
  sub_1BCA784(v27 + 24, onFinishedDialog);
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
      v30);
    if ( enableBackground )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v34);
        v38 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v38->static_fields->DEFAULT_FADE_TIME;
      v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v27,
        (intptr_t)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v40, 0LL);
        return;
      }
LABEL_16:
      sub_1BCAA3C(backSprite, v29);
    }
    dialog = this->fields.dialog;
    v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v27,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0LL);
    if ( !dialog )
      goto LABEL_16;
    EventPointRewardDialog__Open(dialog, v42, v43);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v27 + 24), 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  SePlayer_o *v9; // x0
  __int64 v10; // x1
  struct EventPointRewardDialogControl_o *_4__this; // x8
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  struct EventPointRewardDialogControl_o *v14; // x8
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22

  if ( (byte_4B1114D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v4, v5);
    sub_1BCA7E0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__, v6, v7);
    byte_4B1114D = 1;
  }
  v8 = Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
  v9 = (SePlayer_o *)sub_1BCA7C4(v8, v8[4]);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v9 = OverwriteAssetSoundName__PlaySe((System_Reflection_MethodBase_o *)v9, _4__this->fields.seName, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_11;
  dialog = v14->fields.dialog;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v12, v13);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    v9 = (SePlayer_o *)sub_1BCA784(&this->fields.__9__2, _9__2);
  }
  if ( !dialog )
LABEL_11:
    sub_1BCAA3C(v9, v10);
  EventPointRewardDialog__Open(dialog, _9__2, v12);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__1(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (dialog = (BaseDialog_o *)_4__this->fields.dialog) == 0LL )
    sub_1BCAA3C(this, method);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppClass *klass; // x8
  BaseDialog_o *data; // x20
  System_Action_o *monitor; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_4B1114E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_1BCA7E0(
                                                                     &Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
                                                                     v5,
                                                                     v6);
    byte_4B1114E = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_8;
  data = (BaseDialog_o *)klass->_1.this_arg.data;
  monitor = (System_Action_o *)v4[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(monitor, v4, Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__, 0LL);
    v4[2].monitor = monitor;
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_1BCA784(&v4[2].monitor, monitor);
  }
  if ( !data )
LABEL_8:
    sub_1BCAA3C(this, method);
  BaseDialog__Close(data, monitor, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__3(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21

  if ( (byte_4B1114F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__, v8, v9);
    byte_4B1114F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    Instance = (Il2CppObject *)sub_1BCA784(&this->fields.__9__4, _9__4);
  }
  if ( !v15 )
    sub_1BCAA3C(Instance, v11);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, _9__4, 0LL);
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
    sub_1BCAA3C(backSprite, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL);
}