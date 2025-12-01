void EventInfoConquestGetComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CC7807 & 1) == 0 )
  {
    sub_1C713B0(&EventInfoConquestGetComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_21679/*"military_production_bg"*/);
    byte_4CC7807 = 1;
  }
  EventInfoConquestGetComponent_TypeInfo->static_fields->EVENT_CONQUEST_GET_BG = (struct System_String_o *)StringLiteral_21679/*"military_production_bg"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventInfoConquestGetComponent_TypeInfo->static_fields,
    StringLiteral_21679/*"military_production_bg"*/,
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *dialog; // x22
  TerminalPramsManager_c *v21; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v23; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  System_Collections_Generic_List_object__o *v25; // x22
  void **v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 v33; // x23
  int v34; // w8
  unsigned int v35; // w24
  __int64 v36; // x27
  __int64 v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int v44; // w8
  intptr_t m_CachedPtr; // x8
  _QWORD *v46; // x9
  __int64 klass_low; // x10
  intptr_t v48; // x8
  System_String_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_String_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v64; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v66; // x21

  if ( (byte_4CC7806 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&EventInfoConquestGetComponent_TypeInfo);
    sub_1C713B0(&GiftEntity_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
    sub_1C713B0(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
    sub_1C713B0(&StringLiteral_5559/*"EVENT_CONQUEST_GET_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_5560/*"EVENT_CONQUEST_GET_TITLE"*/);
    byte_4CC7806 = 1;
  }
  v5 = sub_1C715FC(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dialog, 0, 0) )
    goto LABEL_38;
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( !v21->static_fields->eventConquestInfos )
    goto LABEL_38;
  backSprite = this->fields.backSprite;
  v23 = EventInfoConquestGetComponent_TypeInfo;
  if ( !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo);
    v23 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v23->static_fields->EVENT_CONQUEST_GET_BG;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
  v25 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v5 + 24) = v25;
  v26 = (void **)(v5 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v25, v27, v28, v29, v30, v31, v32);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v33 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 672);
  if ( !v33 )
    goto LABEL_39;
  v34 = *(_DWORD *)(v33 + 24);
  if ( v34 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= v34 )
        sub_1C71610(gameObject);
      v36 = *(_QWORD *)(v33 + 8LL * (int)v35 + 32);
      v37 = sub_1C715FC(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v37, 0);
      if ( !v37 )
        break;
      *(_DWORD *)(v37 + 16) = 0;
      if ( !v36 )
        break;
      *(_QWORD *)(v37 + 20) = *(_QWORD *)(v36 + 16);
      v44 = *(_DWORD *)(v36 + 28);
      *(_QWORD *)(v37 + 32) = 0;
      *(_DWORD *)(v37 + 28) = v44;
      gameObject = (UnityEngine_Component_o *)*v26;
      if ( !*v26 )
        break;
      m_CachedPtr = gameObject->fields.m_CachedPtr;
      v46 = Method_System_Collections_Generic_List_GiftEntity__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v37,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = m_CachedPtr + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v48 + 32) = v37;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v48 + 32), v37, v38, v39, v40, v41, v42, v43);
      }
      v34 = *(_DWORD *)(v33 + 24);
      if ( (int)++v35 >= v34 )
        goto LABEL_31;
    }
LABEL_39:
    sub_1C71608(gameObject, v7);
  }
LABEL_31:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_CONQUEST_GET_TITLE"*/, 0);
  *(_QWORD *)(v5 + 32) = v49;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v49, v50, v51, v52, v53, v54, v55);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_5559/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0);
  *(_QWORD *)(v5 + 40) = v56;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)v56, v57, v58, v59, v60, v61, v62);
  if ( *(_QWORD *)(v5 + 40) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v64 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v64 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v64->static_fields->DEFAULT_FADE_TIME;
    v66 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v66,
      (Il2CppObject *)v5,
      (intptr_t)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0);
    if ( !Instance )
      goto LABEL_39;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v66, 0);
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
  EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v10; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CC7808 & 1) == 0 )
  {
    sub_1C713B0(&EventConquestGetDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C713B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
    sub_1C713B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__);
    byte_4CC7808 = 1;
  }
  v3 = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
                                                            (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v10 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (EventConquestGetDialog_ClickDelegate_o *)sub_1C715FC(EventConquestGetDialog_ClickDelegate_TypeInfo);
    EventConquestGetDialog_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !dialog )
LABEL_11:
    sub_1C71608(giftList, v6);
  EventConquestGetDialog__Open(dialog, v10, title, message, _9__1, 0);
}


void EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  EventInfoConquestGetComponent___c__DisplayClass3_0_o *v2; // x19
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v2 = this;
  if ( (byte_4CC7809 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_1C713B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__);
    byte_4CC7809 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = _4__this->fields.dialog;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !dialog )
LABEL_8:
    sub_1C71608(this, method);
  EventConquestGetDialog__Close_31859476(dialog, _9__2, 0);
}


void EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
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
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC780A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__);
    byte_4CC780A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
    sub_1C71608(Instance, v4);
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
    sub_1C71608(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  ActionExtensions__Call(v3->fields.callback, 0);
}