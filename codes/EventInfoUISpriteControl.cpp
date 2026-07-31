void EventInfoUISpriteControl__CheckAssertions(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction(
        EventInfoUISpriteControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593AD87 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_TypeInfo);
    byte_593AD87 = 1;
  }
  v3 = sub_21FFEBC(EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void EventInfoUISpriteControl__Initialization(
        EventInfoUISpriteControl_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  struct UISprite_o *IsNullOrWhiteSpace; // x0
  __int64 v6; // x1
  struct System_String_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x0
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  UISprite_o *mainSprite; // x20
  System_String_o *spriteName; // x21
  EventInfoUISpriteControl_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  System_Collections_IEnumerator_o *v23; // x1

  if ( (byte_593AD85 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoUISpriteControl__Initialization_b__5_0__);
    byte_593AD85 = 1;
  }
  IsNullOrWhiteSpace = (struct UISprite_o *)System_String__IsNullOrWhiteSpace(this->fields.spriteName, 0);
  if ( ((unsigned __int8)IsNullOrWhiteSpace & 1) != 0 )
  {
    if ( !eventUiEntity )
      goto LABEL_18;
    v7 = System_Int32__ToString((int)eventUiEntity + 52, 0);
    this->fields.spriteName = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.spriteName, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  }
  if ( this->fields.isUseLocalAtlas )
  {
    if ( !eventUiEntity )
      goto LABEL_18;
    v14 = System_Action_TypeInfo;
    this->fields.eventId = eventUiEntity->fields.eventId;
    v15 = (System_Action_o *)sub_21FFEBC(v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_EventInfoUISpriteControl__Initialization_b__5_0__, 0);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v15, v16);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.mainSprite,
      this->fields.spriteName,
      v17);
  }
  else
  {
    mainSprite = this->fields.mainSprite;
    spriteName = this->fields.spriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
    AtlasManager__SetEventUI(mainSprite, spriteName, 0);
  }
  IsNullOrWhiteSpace = this->fields.mainSprite;
  if ( !IsNullOrWhiteSpace )
LABEL_18:
    sub_21FFECC(IsNullOrWhiteSpace, v6);
  v20 = (EventInfoUISpriteControl_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))IsNullOrWhiteSpace->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                        IsNullOrWhiteSpace,
                                        IsNullOrWhiteSpace->klass->vtable._33_MakePixelPerfect.method);
  if ( this->fields.isHideWhileAfterAction && EventInfoUISpriteControl__IsPlayingAfterAction(v20, v21) )
  {
    IsNullOrWhiteSpace = this->fields.mainSprite;
    if ( IsNullOrWhiteSpace )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, double))IsNullOrWhiteSpace->klass->vtable._8_set_alpha.methodPtr)(
        IsNullOrWhiteSpace,
        IsNullOrWhiteSpace->klass->vtable._8_set_alpha.method,
        0.0);
      v23 = EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction(this, v22);
      UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v23, 0);
      return;
    }
    goto LABEL_18;
  }
}


bool EventInfoUISpriteControl__IsDisplaying(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  struct UISprite_o *mainSprite; // x0

  mainSprite = this->fields.mainSprite;
  if ( !mainSprite )
    sub_21FFECC(0, method);
  return ((float (__fastcall *)(struct UISprite_o *, const MethodInfo *))mainSprite->klass->vtable._7_get_alpha.methodPtr)(
           mainSprite,
           mainSprite->klass->vtable._7_get_alpha.method) >= 1.0;
}


bool EventInfoUISpriteControl__IsPlayingAfterAction(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v7; // x0

  if ( (byte_593AD86 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AD86 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_22:
    sub_21FFECC(Instance, v3);
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
    return 1;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_5935066 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935066 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_IsQuestClear_k__BackingField )
    return 1;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, v4);
  if ( !byte_5935063 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935063 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v7 = TerminalPramsManager_TypeInfo;
  }
  return v7->static_fields->_IsPhaseClear_k__BackingField;
}


void EventInfoUISpriteControl__OnDestroy(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  if ( this->fields.isUseLocalAtlas )
  {
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, v2);
    EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v4);
  }
}


void EventInfoUISpriteControl__Redisplay(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UISprite_o *mainSprite; // x20
  System_String_o *spriteName; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_593AD88 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_593AD88 = 1;
  }
  mainSprite = this->fields.mainSprite;
  spriteName = this->fields.spriteName;
  if ( this->fields.isUseLocalAtlas )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.mainSprite,
      this->fields.spriteName,
      v2);
  }
  else
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    AtlasManager__SetEventUI(mainSprite, spriteName, 0);
  }
  v7 = this->fields.mainSprite;
  if ( !v7
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))v7->klass->vtable._8_set_alpha.methodPtr)(
          v7,
          v7->klass->vtable._8_set_alpha.method,
          1.0),
        (v7 = this->fields.mainSprite) == 0) )
  {
    sub_21FFECC(v7, v6);
  }
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v7,
    v7->klass->vtable._33_MakePixelPerfect.method);
}


void EventInfoUISpriteControl___Initialization_b__5_0(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, this->fields.eventId, v2);
}


void EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8___ctor(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__MoveNext(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *v2; // x19
  int32_t _1__state; // w22
  struct EventInfoUISpriteControl_o *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitWhile_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v2 = this;
  if ( (byte_593AD89 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventInfoUISpriteControl_IsPlayingAfterAction__);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    this = (EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *)sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_593AD89 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this
        || (this = (EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *)_4__this->fields.mainSprite) == 0 )
      {
        sub_21FFECC(this, method);
      }
      ((void (__fastcall *)(EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
        this,
        this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
        1.0);
    }
  }
  else
  {
    v2->fields.__1__state = -1;
    v5 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, (Il2CppObject *)_4__this, Method_EventInfoUISpriteControl_IsPlayingAfterAction__, 0);
    v6 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    v2->fields.__2__current = (Il2CppObject *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    v2->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__System_Collections_IEnumerator_Reset(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__System_Collections_IEnumerator_get_Current(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__System_IDisposable_Dispose(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  ;
}