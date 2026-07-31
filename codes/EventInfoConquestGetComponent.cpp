void EventInfoConquestGetComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593990D & 1) == 0 )
  {
    sub_21FFC50(&EventInfoConquestGetComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_22632/*"military_production_bg"*/);
    byte_593990D = 1;
  }
  v7 = StringLiteral_22632/*"military_production_bg"*/;
  EventInfoConquestGetComponent_TypeInfo->static_fields->EVENT_CONQUEST_GET_BG = (struct System_String_o *)StringLiteral_22632/*"military_production_bg"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoConquestGetComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventInfoConquestGetComponent___ctor(EventInfoConquestGetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoConquestGetComponent__Open(
        EventInfoConquestGetComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *dialog; // x22
  __int64 v22; // x1
  TerminalPramsManager_c *v23; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v25; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  System_Collections_Generic_List_object__o *v27; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x23
  int v35; // w8
  unsigned int v36; // w26
  __int64 v37; // x27
  __int64 v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int v45; // w8
  intptr_t m_CachedPtr; // x8
  _QWORD *v47; // x9
  __int64 klass_low; // x10
  intptr_t v49; // x8
  System_String_o *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  __int64 v64; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v66; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v68; // x21

  if ( (byte_593990C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&EventInfoConquestGetComponent_TypeInfo);
    sub_21FFC50(&GiftEntity_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
    sub_21FFC50(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
    sub_21FFC50(&StringLiteral_5754/*"EVENT_CONQUEST_GET_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_5755/*"EVENT_CONQUEST_GET_TITLE"*/);
    byte_593990C = 1;
  }
  v5 = sub_21FFEBC(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Equality(dialog, 0, 0) )
    goto LABEL_38;
  v23 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( !v23->static_fields->eventConquestInfos )
    goto LABEL_38;
  backSprite = this->fields.backSprite;
  v25 = EventInfoConquestGetComponent_TypeInfo;
  if ( !*(&EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo, v22);
    v25 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v25->static_fields->EVENT_CONQUEST_GET_BG;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
  AtlasManager__SetEventUI(backSprite, EVENT_CONQUEST_GET_BG, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !gameObject )
    goto LABEL_39;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
    gameObject,
    gameObject->klass[2]._1.generic_class);
  gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v27 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v5 + 24) = v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v27, v28, v29, v30, v31, v32, v33);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v34 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 728);
  if ( !v34 )
    goto LABEL_39;
  v35 = *(_DWORD *)(v34 + 24);
  if ( v35 >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= v35 )
        sub_21FFED4(gameObject);
      v37 = *(_QWORD *)(v34 + 8LL * (int)v36 + 32);
      v38 = sub_21FFEBC(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v38, 0);
      if ( !v38 )
        break;
      *(_DWORD *)(v38 + 16) = 0;
      if ( !v37 )
        break;
      *(_QWORD *)(v38 + 20) = *(_QWORD *)(v37 + 16);
      v45 = *(_DWORD *)(v37 + 28);
      *(_QWORD *)(v38 + 32) = 0;
      gameObject = *(UnityEngine_Component_o **)(v5 + 24);
      *(_DWORD *)(v38 + 28) = v45;
      if ( !gameObject )
        break;
      m_CachedPtr = gameObject->fields.m_CachedPtr;
      v47 = Method_System_Collections_Generic_List_GiftEntity__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v38,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = m_CachedPtr + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v49 + 32) = v38;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 32), v38, v39, v40, v41, v42, v43, v44);
      }
      v35 = *(_DWORD *)(v34 + 24);
      if ( (int)++v36 >= v35 )
        goto LABEL_31;
    }
LABEL_39:
    sub_21FFECC(gameObject, v7);
  }
LABEL_31:
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_5755/*"EVENT_CONQUEST_GET_TITLE"*/, 0);
  *(_QWORD *)(v5 + 32) = v50;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v50, v51, v52, v53, v54, v55, v56);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_5754/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0);
  *(_QWORD *)(v5 + 40) = v57;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)v57, v58, v59, v60, v61, v62, v63);
  if ( *(_QWORD *)(v5 + 40) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v66 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v64);
      v66 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v66->static_fields->DEFAULT_FADE_TIME;
    v68 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v68,
      (Il2CppObject *)v5,
      (intptr_t)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0);
    if ( !Instance )
      goto LABEL_39;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v68, 0);
  }
  else
  {
LABEL_38:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 48), 0);
  }
}


void EventInfoConquestGetComponent___c__DisplayClass3_0___ctor(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__0(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_List_object__o *giftList; // x0
  __int64 v6; // x1
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  GiftEntity_array *v9; // x23
  EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  System_String_o *title; // x21
  System_String_o *message; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_593990E & 1) == 0 )
  {
    sub_21FFC50(&EventConquestGetDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_21FFC50(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
    sub_21FFC50(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__);
    byte_593990E = 1;
  }
  v3 = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 29, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  giftList = (System_Collections_Generic_List_object__o *)this->fields.giftList;
  if ( !giftList )
    goto LABEL_11;
  dialog = _4__this->fields.dialog;
  giftList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                            giftList,
                                                            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  v9 = (GiftEntity_array *)giftList;
  _9__1 = this->fields.__9__1;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (EventConquestGetDialog_ClickDelegate_o *)sub_21FFEBC(EventConquestGetDialog_ClickDelegate_TypeInfo);
    EventConquestGetDialog_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !dialog )
LABEL_11:
    sub_21FFECC(giftList, v6);
  EventConquestGetDialog__Open(dialog, v9, title, message, _9__1, 0);
}


void EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  EventInfoConquestGetComponent___c__DisplayClass3_0_o *v2; // x19
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v2 = this;
  if ( (byte_593990F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_21FFC50(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__);
    byte_593990F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = _4__this->fields.dialog;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !dialog )
LABEL_8:
    sub_21FFECC(this, method);
  EventConquestGetDialog__Close_38057680(dialog, _9__2, 0);
}


void EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  System_Action_o *_9__3; // x21
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5939910 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__);
    byte_5939910 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4);
    v5 = AvalonSceneManager_TypeInfo;
  }
  _9__3 = this->fields.__9__3;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
    sub_21FFECC(Instance, v4);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__3, 0);
}


void EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__3(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventInfoConquestGetComponent___c__DisplayClass3_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)_4__this->fields.backSprite) == 0)
    || (this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0)) == 0 )
  {
    sub_21FFECC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  ActionExtensions__Call(v3->fields.callback, 0);
}