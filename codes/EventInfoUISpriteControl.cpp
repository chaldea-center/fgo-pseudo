void __fastcall EventInfoUISpriteControl__CheckAssertions(EventInfoUISpriteControl_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction(
        EventInfoUISpriteControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B18183 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_TypeInfo, method, v2);
    byte_4B18183 = 1;
  }
  v5 = sub_1BCAA2C(EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall EventInfoUISpriteControl__Initialization(
        EventInfoUISpriteControl_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct UISprite_o *IsNullOrWhiteSpace; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  struct System_String_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  UISprite_o *mainSprite; // x20
  System_String_o *spriteName; // x21
  EventInfoUISpriteControl_o *v25; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  System_Collections_IEnumerator_o *v28; // x1

  if ( (byte_4B18181 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, eventUiEntity, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventInfoUISpriteControl__Initialization_b__5_0__, v7, v8);
    byte_4B18181 = 1;
  }
  IsNullOrWhiteSpace = (struct UISprite_o *)System_String__IsNullOrWhiteSpace(this->fields.spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrWhiteSpace & 1) != 0 )
  {
    if ( !eventUiEntity )
      goto LABEL_18;
    v13 = System_Int32__ToString((int)eventUiEntity + 52, 0LL);
    this->fields.spriteName = v13;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spriteName, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  }
  if ( this->fields.isUseLocalAtlas )
  {
    if ( !eventUiEntity )
      goto LABEL_18;
    this->fields.eventId = eventUiEntity->fields.eventId;
    v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_EventInfoUISpriteControl__Initialization_b__5_0__, 0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v20, v21);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.mainSprite,
      this->fields.spriteName,
      v22);
  }
  else
  {
    mainSprite = this->fields.mainSprite;
    spriteName = this->fields.spriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
    AtlasManager__SetEventUI(mainSprite, spriteName, 0LL);
  }
  IsNullOrWhiteSpace = this->fields.mainSprite;
  if ( !IsNullOrWhiteSpace )
LABEL_18:
    sub_1BCAA3C(IsNullOrWhiteSpace, v10);
  v25 = (EventInfoUISpriteControl_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))IsNullOrWhiteSpace->klass->vtable._33_MakePixelPerfect.method)(
                                        IsNullOrWhiteSpace,
                                        IsNullOrWhiteSpace->klass->vtable._34_get_minWidth.methodPtr);
  if ( this->fields.isHideWhileAfterAction && EventInfoUISpriteControl__IsPlayingAfterAction(v25, v26) )
  {
    IsNullOrWhiteSpace = this->fields.mainSprite;
    if ( IsNullOrWhiteSpace )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))IsNullOrWhiteSpace->klass->vtable._8_set_alpha.method)(
        IsNullOrWhiteSpace,
        IsNullOrWhiteSpace->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        0.0);
      v28 = EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction(this, v27);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
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
    sub_1BCAA3C(0LL, method);
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))mainSprite->klass->vtable._7_get_alpha.method)(
           mainSprite,
           mainSprite->klass->vtable._8_set_alpha.methodPtr) >= 1.0;
}


bool __fastcall EventInfoUISpriteControl__IsPlayingAfterAction(
        EventInfoUISpriteControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4B18182 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    byte_4B18182 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_22:
    sub_1BCAA3C(Instance, v6);
  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
  if ( !byte_4B13016 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B13016 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_IsQuestClear_k__BackingField )
    return 1;
  if ( !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9, v7);
  if ( !byte_4B13013 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B13013 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v11 = TerminalPramsManager_TypeInfo;
  }
  return v11->static_fields->_IsPhaseClear_k__BackingField;
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  UISprite_o *mainSprite; // x20
  System_String_o *spriteName; // x21
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_4B18184 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    byte_4B18184 = 1;
  }
  mainSprite = this->fields.mainSprite;
  spriteName = this->fields.spriteName;
  if ( this->fields.isUseLocalAtlas )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.mainSprite,
      this->fields.spriteName,
      v3);
  }
  else
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    AtlasManager__SetEventUI(mainSprite, spriteName, 0LL);
  }
  v8 = this->fields.mainSprite;
  if ( !v8
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v8->klass->vtable._8_set_alpha.method)(
          v8,
          v8->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0),
        (v8 = this->fields.mainSprite) == 0LL) )
  {
    sub_1BCAA3C(v8, v7);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
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
  __int64 v2; // x2
  __int64 v3; // x3
  EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  struct EventInfoUISpriteControl_o *_4__this; // x20
  System_Func_bool__o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  UnityEngine_WaitWhile_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool result; // w0

  v4 = this;
  if ( (byte_4B18185 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventInfoUISpriteControl_IsPlayingAfterAction__, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v5, v6);
    this = (EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *)sub_1BCA7E0(
                                                                               &UnityEngine_WaitWhile_TypeInfo,
                                                                               v7,
                                                                               v8);
    byte_4B18185 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this
      || (this = (EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *)_4__this->fields.mainSprite) == 0LL )
    {
      sub_1BCAA3C(this, method);
    }
    ((void (__fastcall *)(EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
      this,
      this->klass[1]._1.image,
      1.0);
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v11 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(v11, (Il2CppObject *)_4__this, Method_EventInfoUISpriteControl_IsPlayingAfterAction__, 0LL);
    v15 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v12, v13, v14);
    UnityEngine_WaitWhile___ctor(v15, v11, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__2__current, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    result = 1;
    v4->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventInfoUISpriteControl__CoWaitWhilePlayingAfterAction_d__8_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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