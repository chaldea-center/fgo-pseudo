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
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  const MethodInfo *v28; // x6
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x2

  if ( (byte_4A00564 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, itemArray);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1B640C8(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v19);
    sub_1B640C8(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__, v20);
    sub_1B640C8(&EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, v21);
    byte_4A00564 = 1;
  }
  v22 = sub_1B64314(EventPointRewardDialogControl___c__DisplayClass3_0_TypeInfo, itemArray, itemName);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_16;
  *(_QWORD *)(v22 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v22 + 24) = onFinishedDialog;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)onFinishedDialog, v26, v27);
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
      v28);
    if ( enableBackground )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v34 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
      v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
      System_Action___ctor(
        v36,
        (Il2CppObject *)v22,
        (intptr_t)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v36, 0LL);
        return;
      }
LABEL_16:
      sub_1B64324(backSprite);
    }
    dialog = this->fields.dialog;
    v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v22,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__1__,
      0LL);
    if ( !dialog )
      goto LABEL_16;
    EventPointRewardDialog__Open(dialog, v38, v39);
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
  struct EventPointRewardDialogControl_o *_4__this; // x8
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct EventPointRewardDialogControl_o *v10; // x8
  EventPointRewardDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A00565 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__, v3);
    sub_1B640C8(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__, v4);
    byte_4A00565 = 1;
  }
  v5 = Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__0__);
  v6 = (SePlayer_o *)sub_1B640AC(v5, v5[4]);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v6 = OverwriteAssetSoundName__PlaySe((System_Reflection_MethodBase_o *)v6, _4__this->fields.seName, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_11;
  dialog = v10->fields.dialog;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v13, v14);
  }
  if ( !dialog )
LABEL_11:
    sub_1B64324(v6);
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
    sub_1B64324(this);
  BaseDialog__Close(dialog, this->fields.onFinishedDialog, 0LL);
}


void __fastcall EventPointRewardDialogControl___c__DisplayClass3_0___Open_b__2(
        EventPointRewardDialogControl___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventPointRewardDialogControl___c__DisplayClass3_0_o *v3; // x19
  __int64 v4; // x1
  struct EventPointRewardDialogControl_o *_4__this; // x8
  BaseDialog_o *dialog; // x20
  System_Action_o *_9__3; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  v3 = this;
  if ( (byte_4A00566 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (EventPointRewardDialogControl___c__DisplayClass3_0_o *)sub_1B640C8(
                                                                     &Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
                                                                     v4);
    byte_4A00566 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = (BaseDialog_o *)_4__this->fields.dialog;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !dialog )
LABEL_8:
    sub_1B64324(this);
  BaseDialog__Close(dialog, _9__3, 0LL);
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
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__4; // x21
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A00567 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__, v5);
    byte_4A00567 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventPointRewardDialogControl___c__DisplayClass3_0__Open_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v13, v14);
  }
  if ( !v10 )
    sub_1B64324(Instance);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, _9__4, 0LL);
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
    sub_1B64324(backSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL);
}