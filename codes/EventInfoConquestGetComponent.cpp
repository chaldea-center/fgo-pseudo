void EventInfoConquestGetComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C433C0 & 1) == 0 )
  {
    sub_1C37058(&EventInfoConquestGetComponent_TypeInfo);
    sub_1C37058(&StringLiteral_21578/*"military_production_bg"*/);
    byte_4C433C0 = 1;
  }
  EventInfoConquestGetComponent_TypeInfo->static_fields->EVENT_CONQUEST_GET_BG = (struct System_String_o *)StringLiteral_21578/*"military_production_bg"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)EventInfoConquestGetComponent_TypeInfo->static_fields,
    StringLiteral_21578/*"military_production_bg"*/,
    v1,
    v2);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *dialog; // x22
  TerminalPramsManager_c *v12; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v14; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  System_Collections_Generic_List_object__o *v16; // x22
  void **v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x23
  int v21; // w8
  unsigned int v22; // w24
  __int64 v23; // x27
  __int64 v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int v27; // w8
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 klass_low; // x10
  intptr_t v31; // x8
  System_String_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_4C433BF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&EventInfoConquestGetComponent_TypeInfo);
    sub_1C37058(&GiftEntity_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
    sub_1C37058(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
    sub_1C37058(&StringLiteral_5566/*"EVENT_CONQUEST_GET_MESSAGE"*/);
    sub_1C37058(&StringLiteral_5567/*"EVENT_CONQUEST_GET_TITLE"*/);
    byte_4C433BF = 1;
  }
  v5 = sub_1C372A4(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 48) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 48), (int32_t)callback, v9, v10);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dialog, 0, 0) )
    goto LABEL_38;
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( !v12->static_fields->eventConquestInfos )
    goto LABEL_38;
  backSprite = this->fields.backSprite;
  v14 = EventInfoConquestGetComponent_TypeInfo;
  if ( !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo);
    v14 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v14->static_fields->EVENT_CONQUEST_GET_BG;
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
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v5 + 24) = v16;
  v17 = (void **)(v5 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v16, v18, v19);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v20 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 672);
  if ( !v20 )
    goto LABEL_39;
  v21 = *(_DWORD *)(v20 + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v21 )
        sub_1C372BC(gameObject);
      v23 = *(_QWORD *)(v20 + 8LL * (int)v22 + 32);
      v24 = sub_1C372A4(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v24, 0);
      if ( !v24 )
        break;
      *(_DWORD *)(v24 + 16) = 0;
      if ( !v23 )
        break;
      *(_QWORD *)(v24 + 20) = *(_QWORD *)(v23 + 16);
      v27 = *(_DWORD *)(v23 + 28);
      *(_QWORD *)(v24 + 32) = 0;
      *(_DWORD *)(v24 + 28) = v27;
      gameObject = (UnityEngine_Component_o *)*v17;
      if ( !*v17 )
        break;
      m_CachedPtr = gameObject->fields.m_CachedPtr;
      v29 = Method_System_Collections_Generic_List_GiftEntity__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v24,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = m_CachedPtr + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v31 + 32) = v24;
        sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 32), v24, v25, v26);
      }
      v21 = *(_DWORD *)(v20 + 24);
      if ( (int)++v22 >= v21 )
        goto LABEL_31;
    }
LABEL_39:
    sub_1C372B4(gameObject);
  }
LABEL_31:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_CONQUEST_GET_TITLE"*/, 0);
  *(_QWORD *)(v5 + 32) = v32;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v32, v33, v34);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5566/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0);
  *(_QWORD *)(v5 + 40) = v35;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)v35, v36, v37);
  if ( *(_QWORD *)(v5 + 40) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v39 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v39 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
    v41 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v5,
      (intptr_t)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0);
    if ( !Instance )
      goto LABEL_39;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v41, 0);
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
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v9; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C433C1 & 1) == 0 )
  {
    sub_1C37058(&EventConquestGetDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C37058(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
    sub_1C37058(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__);
    byte_4C433C1 = 1;
  }
  v3 = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
                                                            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v9 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (EventConquestGetDialog_ClickDelegate_o *)sub_1C372A4(EventConquestGetDialog_ClickDelegate_TypeInfo);
    EventConquestGetDialog_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v12, v13);
  }
  if ( !dialog )
LABEL_11:
    sub_1C372B4(giftList);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4C433C2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_1C37058(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__);
    byte_4C433C2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = _4__this->fields.dialog;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !dialog )
LABEL_8:
    sub_1C372B4(this);
  EventConquestGetDialog__Close_31626548(dialog, _9__2, 0);
}


void EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C433C3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__);
    byte_4C433C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, _9__3, 0);
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
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  ActionExtensions__Call(v3->fields.callback, 0);
}