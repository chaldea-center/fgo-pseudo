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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x6
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x2

  if ( (byte_4A5F350 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
    sub_1B885B0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__);
    sub_1B885B0(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
    byte_4A5F350 = 1;
  }
  v17 = sub_1B887FC(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_16;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 24) = onFinishedDialog;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)onFinishedDialog, v22, v23);
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
      v24);
    if ( enableBackground )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v26 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
      v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v28,
        (Il2CppObject *)v17,
        (intptr_t)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v28, 0LL);
        return;
      }
LABEL_16:
      sub_1B8880C(backSprite, v19);
    }
    dialog = this->fields.dialog;
    v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v17,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0LL);
    if ( !dialog )
      goto LABEL_16;
    EventPointRewardDialog__Open(dialog, v30, v31);
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
  _QWORD *v3; // x0
  SePlayer_o *v4; // x0
  __int64 v5; // x1
  struct EventPointRewardDialogControl_o *_4__this; // x8
  const MethodInfo *v7; // x2
  struct EventPointRewardDialogControl_o *v8; // x8
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5F351 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
    sub_1B885B0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__);
    byte_4A5F351 = 1;
  }
  v3 = Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
  v4 = (SePlayer_o *)sub_1B88594(v3, v3[4]);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v4 = OverwriteAssetSoundName__PlaySe((System_Reflection_MethodBase_o *)v4, _4__this->fields.seName, 0LL);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_11;
  dialog = v8->fields.dialog;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !dialog )
LABEL_11:
    sub_1B8880C(v4, v5);
  EventPointRewardDialog__Open(dialog, _9__2, v7);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__1(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (dialog = (BaseDialog_o *)_4__this->fields.dialog) == 0LL )
    sub_1B8880C(this, method);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  EventPointRewardDialogControl___c__DisplayClass3_0_o *v2; // x19
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x20
  System_Action_o *_9__3; // x22
  int32_t v6; // w2
  int32_t v7; // w3

  v2 = this;
  if ( (byte_4A5F352 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_1B885B0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__);
    byte_4A5F352 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = (BaseDialog_o *)_4__this->fields.dialog;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v6, v7);
  }
  if ( !dialog )
LABEL_8:
    sub_1B8880C(this, method);
  BaseDialog__Close(dialog, _9__3, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__3(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5F353 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__);
    byte_4A5F353 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v9, v10);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__4, 0LL);
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
    sub_1B8880C(backSprite, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL);
}