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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x6
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x2

  if ( (byte_596AABB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
    sub_2213A60(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__);
    sub_2213A60(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
    byte_596AABB = 1;
  }
  v17 = sub_2213CCC(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_16;
  *(_QWORD *)(v17 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = onFinishedDialog;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 24), (int32_t)onFinishedDialog, v26, v27, v28, v29, v30, v31);
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
      v32);
    if ( enableBackground )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v36 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v33, v34);
        v36 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
      v38 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)v17,
        (intptr_t)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0);
      if ( Instance )
      {
        CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v38, 0);
        return;
      }
LABEL_16:
      sub_2213CDC(backSprite, v19);
    }
    dialog = this->fields.dialog;
    v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v40,
      (Il2CppObject *)v17,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0);
    if ( !dialog )
      goto LABEL_16;
    EventPointRewardDialog__Open(dialog, v40, v41);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596AABC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
    sub_2213A60(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__);
    byte_596AABC = 1;
  }
  v3 = Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
  v4 = (SePlayer_o *)sub_2213A44(v3, v3[4]);
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
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12, v13, v14, v15, v16);
  }
  if ( !dialog )
LABEL_11:
    sub_2213CDC(v4, v5);
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
    sub_2213CDC(this, method);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0);
}


void EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  EventPointRewardDialogControl___c__DisplayClass3_0_o *v2; // x19
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x20
  System_Action_o *_9__3; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v2 = this;
  if ( (byte_596AABD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_2213A60(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__);
    byte_596AABD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = (BaseDialog_o *)_4__this->fields.dialog;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v6, v7, v8, v9, v10, v11);
  }
  if ( !dialog )
LABEL_8:
    sub_2213CDC(this, method);
  BaseDialog__Close(dialog, _9__3, 0);
}


void EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__3(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  System_Action_o *_9__4; // x21
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596AABE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__);
    byte_596AABE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  _9__4 = this->fields.__9__4;
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__4, (int32_t)_9__4, v10, v11, v12, v13, v14, v15);
  }
  if ( !v7 )
    sub_2213CDC(Instance, v4);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__4, 0);
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
    sub_2213CDC(backSprite, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0);
}