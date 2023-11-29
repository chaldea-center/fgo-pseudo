void __fastcall EventPointRewardDialogControl___ctor(EventPointRewardDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Component_o *backSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v37; // x6
  EventPointRewardDialog_o *dialog; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v48; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v50; // x21
  EventPointRewardDialog_o *v51; // x20
  System_Action_o *v52; // x21
  const MethodInfo *v53; // x2

  if ( (byte_40FAC67 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, itemArray);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B16FFC(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v19);
    sub_B16FFC(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__, v20);
    sub_B16FFC(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, v21);
    byte_40FAC67 = 1;
  }
  v22 = sub_B170CC(
          EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo,
          itemArray,
          itemName,
          totalCount,
          *(_QWORD *)&addCount);
  EventPointRewardDialogControl___c__DisplayClass3_0___ctor(
    (EventPointRewardDialogControl___c__DisplayClass3_0_o *)v22,
    0LL);
  if ( !v22 )
    goto LABEL_17;
  *(_QWORD *)(v22 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v22 + 24) = onFinishedDialog;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v22 + 24),
    (System_Int32_array **)onFinishedDialog,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( itemArray )
  {
    backSprite = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !backSprite )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(backSprite, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, enableBackground, 0LL);
    dialog = this->fields.dialog;
    if ( !dialog )
      goto LABEL_17;
    EventPointRewardDialog__SetData(dialog, itemArray, itemName, totalCount, addCount, nextCount, v37);
    if ( enableBackground )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v48 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v48 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v48->static_fields->DEFAULT_FADE_TIME;
      v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v22,
        Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v50, 0LL);
        return;
      }
LABEL_17:
      sub_B170D4();
    }
    v51 = this->fields.dialog;
    v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v22,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0LL);
    if ( !v51 )
      goto LABEL_17;
    EventPointRewardDialog__Open(v51, v52, v53);
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
  struct EventPointRewardDialogControl_o *_4__this; // x8
  System_String_o *seName; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct EventPointRewardDialogControl_o *v11; // x8
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F7014 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__, v4);
    byte_40F7014 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  seName = _4__this->fields.seName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(seName, 0LL);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_12;
  dialog = v11->fields.dialog;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !dialog )
LABEL_12:
    sub_B170D4();
  EventPointRewardDialog__Open(dialog, _9__2, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__1(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (dialog = (BaseDialog_o *)_4__this->fields.dialog) == 0LL )
    sub_B170D4();
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x20
  System_Action_o *_9__3; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F7015 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__, v6);
    byte_40F7015 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = (BaseDialog_o *)_4__this->fields.dialog;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !dialog )
LABEL_8:
    sub_B170D4();
  BaseDialog__Close(dialog, _9__3, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__3(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F7016 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__, v5);
    byte_40F7016 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__4,
      (System_Int32_array **)_9__4,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__4, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__4(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventPointRewardDialogControl_o *_4__this; // x8
  UnityEngine_Component_o *backSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  ActionExtensions__Call(this->fields.onFinishedDialog, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (backSprite = (UnityEngine_Component_o *)_4__this->fields.backSprite) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(backSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}