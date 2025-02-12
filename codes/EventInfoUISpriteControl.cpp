void __fastcall EventInfoUISpriteControl__CheckAssertions(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction(
        EventInfoUISpriteControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB6701 & 1) == 0 )
  {
    sub_1C13D24(&EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_TypeInfo, method);
    byte_4BB6701 = 1;
  }
  v3 = sub_1C13F70(EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall EventInfoUISpriteControl__Initialization(
        EventInfoUISpriteControl_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UISprite_o *IsNullOrWhiteSpace; // x0
  __int64 v8; // x1
  struct System_String_o *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  UISprite_o *mainSprite; // x20
  System_String_o *spriteName; // x21
  EventInfoUISpriteControl_o *v21; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  System_Collections_IEnumerator_o *v24; // x1

  if ( (byte_4BB66FF & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, eventUiEntity);
    sub_1C13D24(&AtlasManager_TypeInfo, v5);
    sub_1C13D24(&Method_EventInfoUISpriteControl__Initialization_b__5_0__, v6);
    byte_4BB66FF = 1;
  }
  IsNullOrWhiteSpace = (struct UISprite_o *)System_String__IsNullOrWhiteSpace(this->fields.spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrWhiteSpace & 1) != 0 )
  {
    if ( !eventUiEntity )
      goto LABEL_18;
    v9 = System_Int32__ToString((int)eventUiEntity + 52, 0LL);
    this->fields.spriteName = v9;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.spriteName, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
  if ( this->fields.isUseLocalAtlas )
  {
    if ( !eventUiEntity )
      goto LABEL_18;
    this->fields.eventId = eventUiEntity->fields.eventId;
    v16 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_EventInfoUISpriteControl__Initialization_b__5_0__, 0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v16, v17);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.mainSprite,
      this->fields.spriteName,
      v18);
  }
  else
  {
    mainSprite = this->fields.mainSprite;
    spriteName = this->fields.spriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(mainSprite, spriteName, 0LL);
  }
  IsNullOrWhiteSpace = this->fields.mainSprite;
  if ( !IsNullOrWhiteSpace )
LABEL_18:
    sub_1C13F80(IsNullOrWhiteSpace, v8);
  v21 = (EventInfoUISpriteControl_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrWhiteSpace->klass->vtable._33_MakePixelPerfect.method)(
                                        IsNullOrWhiteSpace,
                                        IsNullOrWhiteSpace->klass->vtable._34_get_minWidth.methodPtr);
  if ( this->fields.isHideWhileAfterAction && EventInfoUISpriteControl__IsPlayingAfterAction(v21, v22) )
  {
    IsNullOrWhiteSpace = this->fields.mainSprite;
    if ( IsNullOrWhiteSpace )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))IsNullOrWhiteSpace->klass->vtable._8_set_alpha.method)(
        IsNullOrWhiteSpace,
        IsNullOrWhiteSpace->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        0.0);
      v24 = EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction(this, v23);
      UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
      return;
    }
    goto LABEL_18;
  }
}


bool __fastcall EventInfoUISpriteControl__IsDisplaying(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  struct UISprite_o *mainSprite; // x0

  mainSprite = this->fields.mainSprite;
  if ( !mainSprite )
    sub_1C13F80(0LL, method);
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))mainSprite->klass->vtable._7_get_alpha.method)(
           mainSprite,
           mainSprite->klass->vtable._8_set_alpha.methodPtr) >= 1.0;
}


bool __fastcall EventInfoUISpriteControl__IsPlayingAfterAction(
        EventInfoUISpriteControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4BB6700 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, method);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v2);
    byte_4BB6700 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_22:
    sub_1C13F80(Instance, v4);
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB149A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB149A = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( v6->static_fields->_IsQuestClear_k__BackingField )
    return 1;
  if ( !v6->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v6);
  if ( !byte_4BB1497 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB1497 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  return v8->static_fields->_IsPhaseClear_k__BackingField;
}


void __fastcall EventInfoUISpriteControl__OnDestroy(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  if ( this->fields.isUseLocalAtlas )
  {
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, v2);
    EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v4);
  }
}


void __fastcall EventInfoUISpriteControl__Redisplay(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UISprite_o *mainSprite; // x20
  System_String_o *spriteName; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_4BB6702 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    byte_4BB6702 = 1;
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
    AtlasManager__SetEventUI(mainSprite, spriteName, 0LL);
  }
  v7 = this->fields.mainSprite;
  if ( !v7
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v7->klass->vtable._8_set_alpha.method)(
          v7,
          v7->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0),
        (v7 = this->fields.mainSprite) == 0LL) )
  {
    sub_1C13F80(v7, v6);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
    v7,
    v7->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall EventInfoUISpriteControl___Initialization_b__5_0(
        EventInfoUISpriteControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, this->fields.eventId, v2);
}


void __fastcall EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8___ctor(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__MoveNext(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct EventInfoUISpriteControl_o *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitWhile_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4BB6703 & 1) == 0 )
  {
    sub_1C13D24(&Method_EventInfoUISpriteControl_IsPlayingAfterAction__, method);
    sub_1C13D24(&System_Func_bool__TypeInfo, v3);
    this = (EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *)sub_1C13D24(
                                                                               &UnityEngine_WaitWhile_TypeInfo,
                                                                               v4);
    byte_4BB6703 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *)_4__this->fields.mainSprite) == 0LL )
    {
      sub_1C13F80(this, method);
    }
    ((void (__fastcall *)(EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
      this,
      this->klass[1]._1.image,
      1.0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v7 = (System_Func_bool__o *)sub_1C13F70(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v7, (Il2CppObject *)_4__this, Method_EventInfoUISpriteControl_IsPlayingAfterAction__, 0LL);
    v8 = (UnityEngine_WaitWhile_o *)sub_1C13F70(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v8, v7, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v8;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__System_Collections_IEnumerator_Reset(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
}


Il2CppObject *__fastcall EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__System_Collections_IEnumerator_get_Current(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8__System_IDisposable_Dispose(
        EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *this,
        const MethodInfo *method)
{
  ;
}