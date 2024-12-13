void __fastcall EventInfoTradeRankControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B39126 & 1) == 0 )
  {
    sub_1BD3458(&EventInfoTradeRankControl_TypeInfo, v1);
    byte_4B39126 = 1;
  }
  EventInfoTradeRankControl_TypeInfo->static_fields->oldEventPoint = -1LL;
}


void __fastcall EventInfoTradeRankControl___ctor(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B39125 & 1) == 0 )
  {
    sub_1BD3458(&EventInfoUIProgressControl_TypeInfo, method);
    byte_4B39125 = 1;
  }
  this->fields.tradeRank = 1;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


int32_t __fastcall EventInfoTradeRankControl__GetCurrentTradeRank(
        EventInfoTradeRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v6; // x1
  TerminalSceneComponent_c *v7; // x0
  TerminalSceneComponent_o *v8; // x0
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t v10; // w20
  System_String_o *EventProgressValueSaveKey; // x0
  bool HasKey; // w0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct EventProgressValueEntity_o *v15; // x8
  System_String_o *v16; // x0
  int32_t Int; // w0
  struct EventProgressValueEntity_o *v18; // x8
  int32_t progressValue; // w8

  if ( (byte_4B39123 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B39123 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, method);
    byte_4B31F06 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_22;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v6);
    byte_4B31F06 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  v8 = v7->static_fields->mInstance;
  if ( !v8 )
    sub_1BD36B4(0LL, v6);
  if ( !TerminalSceneComponent__IsMapActive(v8, 0LL) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
LABEL_22:
  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(
                                (EventInfoUIProgressControl_o *)this,
                                v6);
  HasKey = UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0LL);
  v15 = this->fields.currentEventProgressValueEntity;
  if ( HasKey )
  {
    if ( v15 )
    {
      v16 = EventInfoUIProgressControl__GetEventProgressValueSaveKey((EventInfoUIProgressControl_o *)this, v13);
      Int = UnityEngine_PlayerPrefs__GetInt(v16, 1, 0LL);
      v18 = this->fields.currentEventProgressValueEntity;
      v10 = Int;
      if ( v18 )
      {
        progressValue = v18->fields.progressValue;
        if ( Int <= progressValue )
          return v10;
      }
      else
      {
        if ( Int <= 1 )
          return v10;
        return 1;
      }
      return progressValue;
    }
    return 1;
  }
  else
  {
    if ( v15 )
      v10 = v15->fields.progressValue;
    else
      v10 = 1;
    EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, v10, v14);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
EventInfoTradeRankControl_ViewData_o *__fastcall EventInfoTradeRankControl__GetViewData(
        EventInfoTradeRankControl_o *this,
        int32_t tradeRank,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *viewDataList; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4B39120 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventInfoTradeRankControl_ViewData___,
      *(_QWORD *)&tradeRank);
    sub_1BD3458(&System_Func_EventInfoTradeRankControl_ViewData__bool__TypeInfo, v5);
    sub_1BD3458(&Method_EventInfoTradeRankControl___c__DisplayClass29_0__GetViewData_b__0__, v6);
    sub_1BD3458(&EventInfoTradeRankControl___c__DisplayClass29_0_TypeInfo, v7);
    byte_4B39120 = 1;
  }
  v8 = sub_1BD36A4(EventInfoTradeRankControl___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BD36B4(v9, v10);
  *(_DWORD *)(v8 + 16) = tradeRank;
  viewDataList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.viewDataList;
  if ( !viewDataList )
    return 0LL;
  v12 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_EventInfoTradeRankControl_ViewData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_EventInfoTradeRankControl___c__DisplayClass29_0__GetViewData_b__0__,
    0LL);
  return (EventInfoTradeRankControl_ViewData_o *)System_Linq_Enumerable__FirstOrDefault_object__49631076(
                                                   viewDataList,
                                                   (System_Func_TSource__bool__o *)v12,
                                                   (const MethodInfo_2F54F64 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoTradeRankControl_ViewData___);
}


void __fastcall EventInfoTradeRankControl__Initialization(
        EventInfoTradeRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  EventInfoTradeRankControl_c *v12; // x0
  struct EventUiEntity_o *v13; // x8
  int64_t EventPointNoGroup; // x0
  EventInfoTradeRankControl_c *v15; // x8
  int64_t v16; // x19
  TerminalPramsManager_c *v17; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x19
  __int64 v19; // x8
  UserEventPointEntity_o *v20; // x9
  struct EventInfoTradeRankControl_StaticFields *static_fields; // x8
  int64_t value; // x19

  if ( (byte_4B39118 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, entity);
    sub_1BD3458(&Method_EventInfoTradeRankControl__Initialization_b__18_0__, v5);
    sub_1BD3458(&EventInfoTradeRankControl_TypeInfo, v6);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v7);
    byte_4B39118 = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, method);
  eventUiEntity = this->fields.eventUiEntity;
  v9 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventInfoTradeRankControl__Initialization_b__18_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v9, v10);
  v12 = EventInfoTradeRankControl_TypeInfo;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
    v12 = EventInfoTradeRankControl_TypeInfo;
  }
  if ( v12->static_fields->oldEventPoint == -1 )
  {
    v13 = this->fields.eventUiEntity;
    if ( !v13 )
      goto LABEL_27;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(v13->fields.eventId, 0LL);
    v15 = EventInfoTradeRankControl_TypeInfo;
    v16 = EventPointNoGroup;
    if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
      v15 = EventInfoTradeRankControl_TypeInfo;
    }
    v15->static_fields->oldEventPoint = v16;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D5A )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v11);
    byte_4B33D5A = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v17->static_fields->_OldUserEventPoint_k__BackingField;
  if ( OldUserEventPoint_k__BackingField )
  {
    v19 = *(_QWORD *)&OldUserEventPoint_k__BackingField->max_length;
    if ( v19 )
    {
      v12 = EventInfoTradeRankControl_TypeInfo;
      if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
        v12 = EventInfoTradeRankControl_TypeInfo;
        v19 = *(_QWORD *)&OldUserEventPoint_k__BackingField->max_length;
      }
      if ( !(_DWORD)v19 )
        sub_1BD36BC(v12, v11);
      v20 = OldUserEventPoint_k__BackingField->m_Items[0];
      if ( v20 )
      {
        static_fields = v12->static_fields;
        value = v20->fields.value;
        if ( static_fields->oldEventPoint < value )
        {
          if ( !v12->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v12);
            static_fields = EventInfoTradeRankControl_TypeInfo->static_fields;
          }
          static_fields->oldEventPoint = value;
        }
        return;
      }
LABEL_27:
      sub_1BD36B4(v12, v11);
    }
  }
}


void __fastcall EventInfoTradeRankControl__OnDestroy(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v5; // x1

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BD36B4(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTradeRankControl__PlayAnim(
        EventInfoTradeRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2

  if ( (byte_4B39119 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1BD3458(&Method_EventInfoTradeRankControl___c__DisplayClass20_0__PlayAnim_b__0__, v7);
    sub_1BD3458(&EventInfoTradeRankControl___c__DisplayClass20_0_TypeInfo, v8);
    byte_4B39119 = 1;
  }
  v9 = sub_1BD36A4(EventInfoTradeRankControl___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BD36B4(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  if ( type == 1 )
  {
    v24 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v9,
      Method_EventInfoTradeRankControl___c__DisplayClass20_0__PlayAnim_b__0__,
      0LL);
    EventInfoTradeRankControl__ShowOpenQuestDialog(this, v24, v25);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
  }
}


void __fastcall EventInfoTradeRankControl__PlayRankUpAnimation(
        EventInfoTradeRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *tradeRankEffect; // x21
  __int64 v7; // x1
  UnityEngine_AnimationState_o *effectAnimationState; // x0
  Il2CppObject *Component_object; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B3911B & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, callback);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    byte_4B3911B = 1;
  }
  tradeRankEffect = (UnityEngine_Object_o *)this->fields.tradeRankEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tradeRankEffect, 0LL, 0LL)
    || UnityEngine_TrackedReference__op_Equality(
         (UnityEngine_TrackedReference_o *)this->fields.effectAnimationState,
         0LL,
         0LL) )
  {
    goto LABEL_12;
  }
  effectAnimationState = this->fields.effectAnimationState;
  if ( !effectAnimationState )
    goto LABEL_15;
  UnityEngine_AnimationState__set_speed(effectAnimationState, 1.0, 0LL);
  effectAnimationState = (UnityEngine_AnimationState_o *)this->fields.tradeRankEffect;
  if ( !effectAnimationState )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)effectAnimationState,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAnimationState = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Equality(
                                                           (UnityEngine_Object_o *)Component_object,
                                                           0LL,
                                                           0LL);
  if ( ((unsigned __int8)effectAnimationState & 1) != 0 )
  {
LABEL_12:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  if ( !Component_object )
LABEL_15:
    sub_1BD36B4(effectAnimationState, v7);
  Component_object[2].monitor = callback;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&Component_object[2].monitor,
    (int64_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall EventInfoTradeRankControl__Redisplay(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoUIProgressControl__InitEventProgressParams(
      (EventInfoUIProgressControl_o *)this,
      eventUiEntity->fields.eventId,
      v2);
  EventInfoTradeRankControl__SetupEventPointBg(this, method);
  EventInfoTradeRankControl__SetupEventPoint(this, v5);
  EventInfoTradeRankControl__SetupTradeRank(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTradeRankControl__SetTradeRank(
        EventInfoTradeRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *tradeRankEffect; // x20
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v11; // x2
  EventInfoTradeRankControl_ViewData_o *ViewData; // x0
  EventInfoTradeRankControl_ViewData_o *v13; // x8
  System_String_o *animationName; // x21
  Il2CppObject *v15; // x0
  struct UnityEngine_Animation_o **p_effectAnimation; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Object_o *effectAnimation; // x22
  UnityEngine_Object_o *Clip; // x22
  struct UnityEngine_AnimationState_o *Item; // x0
  struct UnityEngine_AnimationState_o **p_effectAnimationState; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B39121 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&rank);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v5);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v6);
    byte_4B39121 = 1;
  }
  this->fields.tradeRank = rank;
  EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, rank, method);
  tradeRankEffect = (UnityEngine_Object_o *)this->fields.tradeRankEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(tradeRankEffect, 0LL, 0LL) )
  {
    v9 = this->fields.tradeRankEffect;
    if ( !v9 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v9,
                         (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_28;
      CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0LL);
    }
    ViewData = EventInfoTradeRankControl__GetViewData(this, this->fields.tradeRank, v11);
    if ( !ViewData )
      return;
    v13 = ViewData;
    v9 = this->fields.tradeRankEffect;
    if ( !v9 )
LABEL_28:
      sub_1BD36B4(v9, v8);
    animationName = v13->fields.animationName;
    v15 = UnityEngine_GameObject__GetComponent_object_(
            v9,
            (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    this->fields.effectAnimation = (struct UnityEngine_Animation_o *)v15;
    p_effectAnimation = &this->fields.effectAnimation;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.effectAnimation, (int64_t)v15, v17, v18, v19, v20, v21, v22);
    effectAnimation = (UnityEngine_Object_o *)this->fields.effectAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(effectAnimation, 0LL, 0LL) )
    {
      v9 = (UnityEngine_GameObject_o *)*p_effectAnimation;
      if ( *p_effectAnimation )
      {
        Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v9, animationName, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
          return;
        v9 = (UnityEngine_GameObject_o *)*p_effectAnimation;
        if ( *p_effectAnimation )
        {
          UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)v9, (UnityEngine_AnimationClip_o *)Clip, 0LL);
          v9 = (UnityEngine_GameObject_o *)*p_effectAnimation;
          if ( *p_effectAnimation )
          {
            Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v9, animationName, 0LL);
            this->fields.effectAnimationState = Item;
            p_effectAnimationState = &this->fields.effectAnimationState;
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)p_effectAnimationState,
              (int64_t)Item,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
            v9 = (UnityEngine_GameObject_o *)*p_effectAnimationState;
            if ( *p_effectAnimationState )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v9, 0.0, 0LL);
              v9 = (UnityEngine_GameObject_o *)*p_effectAnimationState;
              if ( *p_effectAnimationState )
              {
                UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v9, 0.0, 0LL);
                v9 = (UnityEngine_GameObject_o *)*p_effectAnimation;
                if ( *p_effectAnimation )
                {
                  UnityEngine_Animation__Play((UnityEngine_Animation_o *)v9, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
      goto LABEL_28;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTradeRankControl__SetTradeRankCondition(
        EventInfoTradeRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *nextRankConditionLabel; // x21
  const MethodInfo *v7; // x2
  EventProgressValueEntity_o *EntityByProgressValue; // x0
  __int64 v9; // x1
  UILabel_o *v10; // x8
  System_String_o **p_condMessage; // x9

  if ( (byte_4B39122 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, *(_QWORD *)&rank);
    sub_1BD3458(&StringLiteral_915/*"-"*/, v5);
    byte_4B39122 = 1;
  }
  nextRankConditionLabel = (UnityEngine_Object_o *)this->fields.nextRankConditionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nextRankConditionLabel, 0LL, 0LL) )
  {
    EntityByProgressValue = EventInfoUIProgressControl__GetEntityByProgressValue(
                              (EventInfoUIProgressControl_o *)this,
                              rank + 1,
                              v7);
    v10 = this->fields.nextRankConditionLabel;
    if ( EntityByProgressValue )
    {
      if ( v10 )
      {
        p_condMessage = &EntityByProgressValue->fields.condMessage;
LABEL_11:
        UILabel__set_text(v10, *p_condMessage, 0LL);
        return;
      }
    }
    else if ( v10 )
    {
      p_condMessage = (System_String_o **)&StringLiteral_915/*"-"*/;
      goto LABEL_11;
    }
    sub_1BD36B4(EntityByProgressValue, v9);
  }
}


void __fastcall EventInfoTradeRankControl__SetUIDisp(
        EventInfoTradeRankControl_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BD36B4(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
}


void __fastcall EventInfoTradeRankControl__Setup(
        EventInfoTradeRankControl_o *this,
        EventUiValueEntity_array *entities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  EventInfoTradeRankControl__SetupEventPointBg(this, (const MethodInfo *)entities);
  EventInfoTradeRankControl__SetupEventPoint(this, v4);
  EventInfoTradeRankControl__SetupTradeRank(this, v5);
}


void __fastcall EventInfoTradeRankControl__SetupEventPoint(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *eventPointLabel; // x20
  System_String_o *NumberFormatLong; // x0
  __int64 v6; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *v8; // x19
  int64_t EventPointNoGroup; // x20

  if ( (byte_4B3911E & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B3911E = 1;
  }
  eventPointLabel = (UnityEngine_Object_o *)this->fields.eventPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  NumberFormatLong = (System_String_o *)UnityEngine_Object__op_Equality(eventPointLabel, 0LL, 0LL);
  if ( ((unsigned __int8)NumberFormatLong & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_11;
    v8 = this->fields.eventPointLabel;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(EventPointNoGroup, 0LL);
    if ( !v8 )
LABEL_11:
      sub_1BD36B4(NumberFormatLong, v6);
    UILabel__set_text(v8, NumberFormatLong, 0LL);
  }
}


void __fastcall EventInfoTradeRankControl__SetupEventPointBg(
        EventInfoTradeRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventPointBgSprite; // x20
  const MethodInfo *v4; // x3
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4B3911D & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3911D = 1;
  }
  eventPointBgSprite = (UnityEngine_Object_o *)this->fields.eventPointBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventPointBgSprite, 0LL, 0LL) )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.eventPointBgSprite,
      this->fields.eventPointBgSpriteName,
      v4);
    v6 = this->fields.eventPointBgSprite;
    if ( !v6 )
      sub_1BD36B4(0LL, v5);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
      v6,
      v6->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventInfoTradeRankControl__SetupTradeRank(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o **p_tradeRankEffect; // x20
  UnityEngine_Object_o *tradeRankEffect; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *tradeRankEffectParent; // x21
  Il2CppObject *tradeRankEffectPrefab; // x22
  Il2CppObject *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t CurrentTradeRank; // w0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2

  if ( (byte_4B3911F & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, method);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject____77057344, v3);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v4);
    byte_4B3911F = 1;
  }
  p_tradeRankEffect = &this->fields.tradeRankEffect;
  tradeRankEffect = (UnityEngine_Object_o *)this->fields.tradeRankEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tradeRankEffect, 0LL, 0LL) )
  {
    tradeRankEffectPrefab = (Il2CppObject *)this->fields.tradeRankEffectPrefab;
    tradeRankEffectParent = this->fields.tradeRankEffectParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object__50031952(
            tradeRankEffectPrefab,
            tradeRankEffectParent,
            (const MethodInfo_2FB6D50 *)Method_UnityEngine_Object_Instantiate_GameObject____77057344);
    *p_tradeRankEffect = (UnityEngine_GameObject_o *)v10;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.tradeRankEffect, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)*p_tradeRankEffect, 0LL, 0LL) )
    {
      if ( !*p_tradeRankEffect )
        sub_1BD36B4(0LL, v7);
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     *p_tradeRankEffect,
                                     (const MethodInfo_2F81CE0 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
      this->fields.nextRankConditionLabel = (struct UILabel_o *)ComponentInChildren_object;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&this->fields.nextRankConditionLabel,
        (int64_t)ComponentInChildren_object,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
  }
  CurrentTradeRank = EventInfoTradeRankControl__GetCurrentTradeRank(this, v7);
  EventInfoTradeRankControl__SetTradeRank(this, CurrentTradeRank, v25);
  EventInfoTradeRankControl__SetTradeRankCondition(this, this->fields.tradeRank, v26);
}


void __fastcall EventInfoTradeRankControl__ShowOpenQuestDialog(
        EventInfoTradeRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_o *v25; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v27; // x19
  int32_t eventId; // w21

  if ( (byte_4B3911A & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, callback);
    sub_1BD3458(&EventInfoTradeRankControl_TypeInfo, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BD3458(&Method_EventInfoTradeRankControl___c__DisplayClass23_0__ShowOpenQuestDialog_b__0__, v7);
    sub_1BD3458(&EventInfoTradeRankControl___c__DisplayClass23_0_TypeInfo, v8);
    sub_1BD3458(&StringLiteral_1/*""*/, v9);
    byte_4B3911A = 1;
  }
  v10 = sub_1BD36A4(EventInfoTradeRankControl___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = callback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)callback, v19, v20, v21, v22, v23, v24);
  v25 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v10,
    Method_EventInfoTradeRankControl___c__DisplayClass23_0__ShowOpenQuestDialog_b__0__,
    0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_10;
  v27 = Instance;
  eventId = eventUiEntity->fields.eventId;
  Instance = (CommonUI_o *)EventInfoTradeRankControl_TypeInfo;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
  if ( !v27 )
LABEL_10:
    sub_1BD36B4(Instance, v12);
  if ( !CommonUI__CheckOpenQuestByEventPoint(
          v27,
          eventId,
          EventInfoTradeRankControl_TypeInfo->static_fields->oldEventPoint,
          v25,
          1,
          0.0,
          0,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL) )
    ActionExtensions__Call(v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTradeRankControl__ShowTradeRankUpDialog(
        EventInfoTradeRankControl_o *this,
        int32_t tradeRank,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  BaseDialog_o *Instance; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2
  EventProgressValueEntity_o *EntityByProgressValue; // x0
  Il2CppObject *tradeRankUpDialog; // x22
  EventProgressValueEntity_o *v24; // x21
  UnityEngine_Transform_o *basePanelList; // x23
  Il2CppObject *v26; // x0
  BaseDialog_o **v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  TradeRankUpDialog_o *v34; // x23
  System_Collections_Generic_List_UIAtlas__o *atlasList; // x19
  System_Action_o *v36; // x24
  const MethodInfo *v37; // x4

  if ( (byte_4B3911C & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&tradeRank);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_TradeRankUpDialog___, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BD3458(&Method_EventInfoTradeRankControl___c__DisplayClass25_0__ShowTradeRankUpDialog_b__0__, v10);
    sub_1BD3458(&EventInfoTradeRankControl___c__DisplayClass25_0_TypeInfo, v11);
    byte_4B3911C = 1;
  }
  v12 = sub_1BD36A4(EventInfoTradeRankControl___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)callback, v15, v16, v17, v18, v19, v20);
  EntityByProgressValue = EventInfoUIProgressControl__GetEntityByProgressValue(
                            (EventInfoUIProgressControl_o *)this,
                            tradeRank,
                            v21);
  tradeRankUpDialog = (Il2CppObject *)this->fields.tradeRankUpDialog;
  v24 = EntityByProgressValue;
  Instance = (BaseDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  basePanelList = (UnityEngine_Transform_o *)Instance[1].fields.basePanelList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v26 = UnityEngine_Object__Instantiate_object__50032064(
          tradeRankUpDialog,
          basePanelList,
          0,
          (const MethodInfo_2FB6DC0 *)Method_UnityEngine_Object_Instantiate_TradeRankUpDialog___);
  *(_QWORD *)(v12 + 24) = v26;
  v27 = (BaseDialog_o **)(v12 + 24);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)v26, v28, v29, v30, v31, v32, v33);
  Instance = *(BaseDialog_o **)(v12 + 24);
  if ( !Instance
    || (BaseDialog__Init(Instance, 0LL),
        v34 = *(TradeRankUpDialog_o **)(v12 + 24),
        atlasList = this->fields.atlasList,
        v36 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v12,
          Method_EventInfoTradeRankControl___c__DisplayClass25_0__ShowTradeRankUpDialog_b__0__,
          0LL),
        !v34)
    || (TradeRankUpDialog__Setup(v34, v24, atlasList, v36, v37), (Instance = *v27) == 0LL) )
  {
LABEL_11:
    sub_1BD36B4(Instance, v14);
  }
  BaseDialog__Open(Instance, 0LL, 0, 0LL);
}


void __fastcall EventInfoTradeRankControl__UpdateOldPoint(int32_t eventId, const MethodInfo *method)
{
  int64_t EventPointNoGroup; // x0
  EventInfoTradeRankControl_c *v4; // x8
  int64_t v5; // x19

  if ( (byte_4B39124 & 1) == 0 )
  {
    sub_1BD3458(&EventInfoTradeRankControl_TypeInfo, method);
    byte_4B39124 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  v4 = EventInfoTradeRankControl_TypeInfo;
  v5 = EventPointNoGroup;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
    v4 = EventInfoTradeRankControl_TypeInfo;
  }
  v4->static_fields->oldEventPoint = v5;
}


void __fastcall EventInfoTradeRankControl___Initialization_b__18_0(
        EventInfoTradeRankControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BD36B4(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
}


int32_t __fastcall EventInfoTradeRankControl__get_CurrentTradeRank(
        EventInfoTradeRankControl_o *this,
        const MethodInfo *method)
{
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8

  currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
  if ( currentEventProgressValueEntity )
    return currentEventProgressValueEntity->fields.progressValue;
  else
    return 1;
}


void __fastcall EventInfoTradeRankControl_ViewData___ctor(
        EventInfoTradeRankControl_ViewData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass20_0___ctor(
        EventInfoTradeRankControl___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass20_0___PlayAnim_b__0(
        EventInfoTradeRankControl___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct EventInfoTradeRankControl_o *_4__this; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int progressValue; // w8
  System_Action_o *v17; // x19
  const MethodInfo *v18; // x2

  if ( (byte_4B39127 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__1__, v3);
    sub_1BD3458(&EventInfoTradeRankControl___c__DisplayClass20_1_TypeInfo, v4);
    byte_4B39127 = 1;
  }
  v5 = sub_1BD36A4(EventInfoTradeRankControl___c__DisplayClass20_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BD36B4(v6, v7);
  }
  currentEventProgressValueEntity = _4__this->fields.currentEventProgressValueEntity;
  if ( currentEventProgressValueEntity )
    progressValue = currentEventProgressValueEntity->fields.progressValue;
  else
    progressValue = 1;
  *(_DWORD *)(v5 + 16) = progressValue;
  if ( _4__this->fields.tradeRank >= progressValue )
  {
    ActionExtensions__Call(this->fields.callback, 0LL);
  }
  else
  {
    v17 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__1__,
      0LL);
    EventInfoTradeRankControl__PlayRankUpAnimation(_4__this, v17, v18);
  }
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass20_1___ctor(
        EventInfoTradeRankControl___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass20_1___PlayAnim_b__1(
        EventInfoTradeRankControl___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventInfoTradeRankControl___c__DisplayClass20_1_o *v3; // x19
  __int64 v4; // x1
  struct EventInfoTradeRankControl___c__DisplayClass20_0_o *CS___8__locals1; // x8
  EventInfoTradeRankControl_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  int32_t afterRank; // w21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v3 = this;
  if ( (byte_4B39128 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    this = (EventInfoTradeRankControl___c__DisplayClass20_1_o *)sub_1BD3458(
                                                                  &Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__2__,
                                                                  v4);
    byte_4B39128 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = CS___8__locals1->fields.__4__this;
  _9__2 = v3->fields.__9__2;
  afterRank = v3->fields.afterRank;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
LABEL_8:
    sub_1BD36B4(this, method);
  EventInfoTradeRankControl__ShowTradeRankUpDialog(_4__this, afterRank, _9__2, v2);
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass20_1___PlayAnim_b__2(
        EventInfoTradeRankControl___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoTradeRankControl___c__DisplayClass20_0_o *CS___8__locals1; // x8
  EventInfoTradeRankControl___c__DisplayClass20_1_o *v4; // x19
  int32_t afterRank; // w1
  const MethodInfo *v6; // x2
  struct EventInfoTradeRankControl___c__DisplayClass20_0_o *v7; // x8
  struct EventInfoTradeRankControl___c__DisplayClass20_0_o *v8; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_7;
  v4 = this;
  this = (EventInfoTradeRankControl___c__DisplayClass20_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this
    || (afterRank = v4->fields.afterRank,
        LODWORD(this[4].monitor) = afterRank,
        EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, afterRank, v2),
        (v7 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (EventInfoTradeRankControl___c__DisplayClass20_1_o *)v7->fields.__4__this) == 0LL
    || (EventInfoTradeRankControl__SetTradeRankCondition((EventInfoTradeRankControl_o *)this, v4->fields.afterRank, v6),
        (v8 = v4->fields.CS___8__locals1) == 0LL) )
  {
LABEL_7:
    sub_1BD36B4(this, method);
  }
  ActionExtensions__Call(v8->fields.callback, 0LL);
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass23_0___ctor(
        EventInfoTradeRankControl___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass23_0___ShowOpenQuestDialog_b__0(
        EventInfoTradeRankControl___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  EventInfoTradeRankControl___c__DisplayClass23_0_o *v2; // x19
  struct EventInfoTradeRankControl_o *_4__this; // x8
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t EventPointNoGroup; // x0
  EventInfoTradeRankControl_c *v6; // x8
  int64_t v7; // x20

  v2 = this;
  if ( (byte_4B39129 & 1) == 0 )
  {
    this = (EventInfoTradeRankControl___c__DisplayClass23_0_o *)sub_1BD3458(&EventInfoTradeRankControl_TypeInfo, method);
    byte_4B39129 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (eventUiEntity = _4__this->fields.eventUiEntity) == 0LL )
    sub_1BD36B4(this, method);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0LL);
  v6 = EventInfoTradeRankControl_TypeInfo;
  v7 = EventPointNoGroup;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
    v6 = EventInfoTradeRankControl_TypeInfo;
  }
  v6->static_fields->oldEventPoint = v7;
  ActionExtensions__Call(v2->fields.callback, 0LL);
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass25_0___ctor(
        EventInfoTradeRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass25_0___ShowTradeRankUpDialog_b__0(
        EventInfoTradeRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *dialog; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B3912A & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3912A = 1;
  }
  ActionExtensions__Call(this->fields.callback, 0LL);
  dialog = (UnityEngine_Component_o *)this->fields.dialog;
  if ( !dialog )
    sub_1BD36B4(0LL, v3);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(dialog, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
}


void __fastcall EventInfoTradeRankControl___c__DisplayClass29_0___ctor(
        EventInfoTradeRankControl___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTradeRankControl___c__DisplayClass29_0___GetViewData_b__0(
        EventInfoTradeRankControl___c__DisplayClass29_0_o *this,
        EventInfoTradeRankControl_ViewData_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1BD36B4(this, 0LL);
  return v->fields.tradeRank == this->fields.tradeRank;
}