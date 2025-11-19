void EventInfoUISpriteControl__CheckAssertions(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction(
        EventInfoUISpriteControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB81A2 & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_TypeInfo);
    byte_4CB81A2 = 1;
  }
  v3 = sub_1C6BC54(EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  UISprite_o *mainSprite; // x20
  System_String_o *spriteName; // x21
  EventInfoUISpriteControl_o *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_4CB81A0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_EventInfoUISpriteControl__Initialization_b__5_0__);
    byte_4CB81A0 = 1;
  }
  IsNullOrWhiteSpace = (struct UISprite_o *)System_String__IsNullOrWhiteSpace(this->fields.spriteName, 0);
  if ( ((unsigned __int8)IsNullOrWhiteSpace & 1) != 0 )
  {
    if ( !eventUiEntity )
      goto LABEL_18;
    v7 = System_Int32__ToString((int)eventUiEntity + 52, 0);
    this->fields.spriteName = v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.spriteName, (int32_t)v7, v8, v9);
  }
  if ( this->fields.isUseLocalAtlas )
  {
    if ( !eventUiEntity )
      goto LABEL_18;
    this->fields.eventId = eventUiEntity->fields.eventId;
    v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_EventInfoUISpriteControl__Initialization_b__5_0__, 0);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v10, v11);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.mainSprite,
      this->fields.spriteName,
      v12);
  }
  else
  {
    mainSprite = this->fields.mainSprite;
    spriteName = this->fields.spriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(mainSprite, spriteName, 0);
  }
  IsNullOrWhiteSpace = this->fields.mainSprite;
  if ( !IsNullOrWhiteSpace )
LABEL_18:
    sub_1C6BC60(IsNullOrWhiteSpace, v6);
  v15 = (EventInfoUISpriteControl_o *)((__int64 (__fastcall *)(struct UISprite_o *, const MethodInfo *))IsNullOrWhiteSpace->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                        IsNullOrWhiteSpace,
                                        IsNullOrWhiteSpace->klass->vtable._33_MakePixelPerfect.method);
  if ( this->fields.isHideWhileAfterAction && EventInfoUISpriteControl__IsPlayingAfterAction(v15, v16) )
  {
    IsNullOrWhiteSpace = this->fields.mainSprite;
    if ( IsNullOrWhiteSpace )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))IsNullOrWhiteSpace->klass->vtable._8_set_alpha.methodPtr)(
        IsNullOrWhiteSpace,
        IsNullOrWhiteSpace->klass->vtable._8_set_alpha.method,
        0.0);
      v18 = EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction(this, v17);
      UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v18, 0);
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
    sub_1C6BC60(0, method);
  return ((float (__fastcall *)(struct UISprite_o *, const MethodInfo *))mainSprite->klass->vtable._7_get_alpha.methodPtr)(
           mainSprite,
           mainSprite->klass->vtable._7_get_alpha.method) >= 1.0;
}


bool EventInfoUISpriteControl__IsPlayingAfterAction(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4CB81A1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB81A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_22:
    sub_1C6BC60(Instance, v3);
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2E3C )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2E3C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_IsQuestClear_k__BackingField )
    return 1;
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  if ( !byte_4CB2E39 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2E39 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  return v6->static_fields->_IsPhaseClear_k__BackingField;
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

  if ( (byte_4CB81A3 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    byte_4CB81A3 = 1;
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
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
    sub_1C6BC60(v7, v6);
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
  int32_t _1__state; // w8
  struct EventInfoUISpriteControl_o *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitWhile_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0

  v2 = this;
  if ( (byte_4CB81A4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventInfoUISpriteControl_IsPlayingAfterAction__);
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    this = (EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *)sub_1C6BA08(&UnityEngine_WaitWhile_TypeInfo);
    byte_4CB81A4 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *)_4__this->fields.mainSprite) == 0 )
    {
      sub_1C6BC60(this, method);
    }
    ((void (__fastcall *)(EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
      this,
      this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
      1.0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v5 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, (Il2CppObject *)_4__this, Method_EventInfoUISpriteControl_IsPlayingAfterAction__, 0);
    v6 = (UnityEngine_WaitWhile_o *)sub_1C6BC54(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    v2->fields.__2__current = (Il2CppObject *)v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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