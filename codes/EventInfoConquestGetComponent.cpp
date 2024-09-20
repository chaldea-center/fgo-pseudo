void __fastcall EventInfoConquestGetComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5BAFC & 1) == 0 )
  {
    sub_1B885B0(&EventInfoConquestGetComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_21433/*"military_production_bg"*/);
    byte_4A5BAFC = 1;
  }
  EventInfoConquestGetComponent_TypeInfo->static_fields->EVENT_CONQUEST_GET_BG = (struct System_String_o *)StringLiteral_21433/*"military_production_bg"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoConquestGetComponent_TypeInfo->static_fields,
    StringLiteral_21433/*"military_production_bg"*/,
    v1,
    v2);
}


void __fastcall EventInfoConquestGetComponent___ctor(EventInfoConquestGetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoConquestGetComponent__Open(
        EventInfoConquestGetComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *dialog; // x22
  TerminalPramsManager_c *v13; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v15; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  System_Collections_Generic_List_object__o *v17; // x22
  void **v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x23
  int v22; // w8
  unsigned int v23; // w24
  __int64 v24; // x27
  __int64 v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w8
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 klass_low; // x10
  __int64 v32; // x8
  System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v40; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v42; // x21

  if ( (byte_4A5BAFB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&EventInfoConquestGetComponent_TypeInfo);
    sub_1B885B0(&GiftEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
    sub_1B885B0(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5588/*"EVENT_CONQUEST_GET_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_5589/*"EVENT_CONQUEST_GET_TITLE"*/);
    byte_4A5BAFB = 1;
  }
  v5 = sub_1B887FC(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)callback, v10, v11);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dialog, 0LL, 0LL) )
    goto LABEL_38;
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !v13->static_fields->eventConquestInfos )
    goto LABEL_38;
  backSprite = this->fields.backSprite;
  v15 = EventInfoConquestGetComponent_TypeInfo;
  if ( !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo);
    v15 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v15->static_fields->EVENT_CONQUEST_GET_BG;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(backSprite, EVENT_CONQUEST_GET_BG, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !gameObject )
    goto LABEL_39;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
    gameObject,
    gameObject->klass[2]._1.interopData);
  gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v5 + 24) = v17;
  v18 = (void **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v17, v19, v20);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v21 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 664LL);
  if ( !v21 )
    goto LABEL_39;
  v22 = *(_DWORD *)(v21 + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= v22 )
        sub_1B88814(gameObject, v7);
      v24 = *(_QWORD *)(v21 + 8LL * (int)v23 + 32);
      v25 = sub_1B887FC(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v25, 0LL);
      if ( !v25 )
        break;
      *(_DWORD *)(v25 + 16) = 0;
      if ( !v24 )
        break;
      *(_QWORD *)(v25 + 20) = *(_QWORD *)(v24 + 16);
      v28 = *(_DWORD *)(v24 + 28);
      *(_QWORD *)(v25 + 32) = 0LL;
      *(_DWORD *)(v25 + 28) = v28;
      gameObject = (UnityEngine_Component_o *)*v18;
      if ( !*v18 )
        break;
      v29 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v30 = Method_System_Collections_Generic_List_GiftEntity__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v29 )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v25,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v32 + 32) = v25;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 32), v25, v26, v27);
      }
      v22 = *(_DWORD *)(v21 + 24);
      if ( (int)++v23 >= v22 )
        goto LABEL_31;
    }
LABEL_39:
    sub_1B8880C(gameObject, v7);
  }
LABEL_31:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5589/*"EVENT_CONQUEST_GET_TITLE"*/, 0LL);
  *(_QWORD *)(v5 + 32) = v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v33, v34, v35);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5588/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0LL);
  *(_QWORD *)(v5 + 40) = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)v36, v37, v38);
  if ( *(_QWORD *)(v5 + 40) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v40 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v40 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v40->static_fields->DEFAULT_FADE_TIME;
    v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v5,
      (intptr_t)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_39;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v42, 0LL);
  }
  else
  {
LABEL_38:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 48), 0LL);
  }
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___ctor(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__0(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_List_object__o *giftList; // x0
  __int64 v6; // x1
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v10; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5BAFD & 1) == 0 )
  {
    sub_1B885B0(&EventConquestGetDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1B885B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
    sub_1B885B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__);
    byte_4A5BAFD = 1;
  }
  v3 = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 29, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  giftList = (System_Collections_Generic_List_object__o *)this->fields.giftList;
  if ( !giftList )
    goto LABEL_11;
  dialog = _4__this->fields.dialog;
  giftList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                            giftList,
                                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v10 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (EventConquestGetDialog_ClickDelegate_o *)sub_1B887FC(EventConquestGetDialog_ClickDelegate_TypeInfo);
    EventConquestGetDialog_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  if ( !dialog )
LABEL_11:
    sub_1B8880C(giftList, v6);
  EventConquestGetDialog__Open(dialog, v10, title, message, _9__1, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  EventInfoConquestGetComponent___c__DisplayClass3_0_o *v2; // x19
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22
  int32_t v6; // w2
  int32_t v7; // w3

  v2 = this;
  if ( (byte_4A5BAFE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_1B885B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__);
    byte_4A5BAFE = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = _4__this->fields.dialog;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !dialog )
LABEL_8:
    sub_1B8880C(this, method);
  EventConquestGetDialog__Close_45500488(dialog, _9__2, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5BAFF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__);
    byte_4A5BAFF = 1;
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
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__3(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventInfoConquestGetComponent___c__DisplayClass3_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)_4__this->fields.backSprite) == 0LL)
    || (this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL )
  {
    sub_1B8880C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}