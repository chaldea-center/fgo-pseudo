void __fastcall EventInfoTradeRankControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B18155 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTradeRankControl_TypeInfo, v1, v2);
    byte_4B18155 = 1;
  }
  EventInfoTradeRankControl_TypeInfo->static_fields->oldEventPoint = -1LL;
}


void __fastcall EventInfoTradeRankControl___ctor(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18154 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUIProgressControl_TypeInfo, method, v2);
    byte_4B18154 = 1;
  }
  this->fields.tradeRank = 1;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo, method);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


int32_t __fastcall EventInfoTradeRankControl__GetCurrentTradeRank(
        EventInfoTradeRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  TerminalSceneComponent_c *v10; // x0
  TerminalSceneComponent_o *v11; // x0
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t v13; // w20
  System_String_o *EventProgressValueSaveKey; // x0
  bool HasKey; // w0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  struct EventProgressValueEntity_o *v18; // x8
  System_String_o *v19; // x0
  int32_t Int; // w0
  struct EventProgressValueEntity_o *v21; // x8
  int32_t progressValue; // w8

  if ( (byte_4B18152 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B18152 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_22;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B10F83 = 1;
  }
  v10 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  v11 = v10->static_fields->mInstance;
  if ( !v11 )
    sub_1BCAA3C(0LL, v8);
  if ( !TerminalSceneComponent__IsMapActive(v11, 0LL) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
LABEL_22:
  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(
                                (EventInfoUIProgressControl_o *)this,
                                v8);
  HasKey = UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0LL);
  v18 = this->fields.currentEventProgressValueEntity;
  if ( HasKey )
  {
    if ( v18 )
    {
      v19 = EventInfoUIProgressControl__GetEventProgressValueSaveKey((EventInfoUIProgressControl_o *)this, v16);
      Int = UnityEngine_PlayerPrefs__GetInt(v19, 1, 0LL);
      v21 = this->fields.currentEventProgressValueEntity;
      v13 = Int;
      if ( v21 )
      {
        progressValue = v21->fields.progressValue;
        if ( Int <= progressValue )
          return v13;
      }
      else
      {
        if ( Int <= 1 )
          return v13;
        return 1;
      }
      return progressValue;
    }
    return 1;
  }
  else
  {
    if ( v18 )
      v13 = v18->fields.progressValue;
    else
      v13 = 1;
    EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, v13, v17);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
EventInfoTradeRankControl_ViewData_o *__fastcall EventInfoTradeRankControl__GetViewData(
        EventInfoTradeRankControl_o *this,
        int32_t tradeRank,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *viewDataList; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B1814F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventInfoTradeRankControl_ViewData___,
      *(_QWORD *)&tradeRank,
      method);
    sub_1BCA7E0(&System_Func_EventInfoTradeRankControl_ViewData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoTradeRankControl___c__DisplayClass29_0__GetViewData_b__0__, v8, v9);
    sub_1BCA7E0(&EventInfoTradeRankControl___c__DisplayClass29_0_TypeInfo, v10, v11);
    byte_4B1814F = 1;
  }
  v12 = sub_1BCAA2C(EventInfoTradeRankControl___c__DisplayClass29_0_TypeInfo, *(_QWORD *)&tradeRank, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = tradeRank;
  viewDataList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.viewDataList;
  if ( !viewDataList )
    return 0LL;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_EventInfoTradeRankControl_ViewData__bool__TypeInfo,
                                         v14,
                                         v15,
                                         v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_EventInfoTradeRankControl___c__DisplayClass29_0__GetViewData_b__0__,
    0LL);
  return (EventInfoTradeRankControl_ViewData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                                   viewDataList,
                                                   (System_Func_TSource__bool__o *)v18,
                                                   (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoTradeRankControl_ViewData___);
}


void __fastcall EventInfoTradeRankControl__Initialization(
        EventInfoTradeRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  __int64 v18; // x2
  EventInfoTradeRankControl_c *v19; // x0
  struct EventUiEntity_o *v20; // x8
  int64_t EventPointNoGroup; // x0
  EventInfoTradeRankControl_c *v22; // x8
  int64_t v23; // x19
  TerminalPramsManager_c *v24; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x19
  __int64 v26; // x8
  UserEventPointEntity_o *v27; // x9
  struct EventInfoTradeRankControl_StaticFields *static_fields; // x8
  int64_t value; // x19

  if ( (byte_4B18147 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_EventInfoTradeRankControl__Initialization_b__18_0__, v5, v6);
    sub_1BCA7E0(&EventInfoTradeRankControl_TypeInfo, v7, v8);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B18147 = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, method);
  eventUiEntity = this->fields.eventUiEntity;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventInfoTradeRankControl__Initialization_b__18_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v15, v16);
  v19 = EventInfoTradeRankControl_TypeInfo;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo, v17);
    v19 = EventInfoTradeRankControl_TypeInfo;
  }
  if ( v19->static_fields->oldEventPoint == -1 )
  {
    v20 = this->fields.eventUiEntity;
    if ( !v20 )
      goto LABEL_27;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(v20->fields.eventId, 0LL);
    v22 = EventInfoTradeRankControl_TypeInfo;
    v23 = EventPointNoGroup;
    if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo, v17);
      v22 = EventInfoTradeRankControl_TypeInfo;
    }
    v22->static_fields->oldEventPoint = v23;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
  if ( !byte_4B12DD0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v17, v18);
    byte_4B12DD0 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
    v24 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v24->static_fields->_OldUserEventPoint_k__BackingField;
  if ( OldUserEventPoint_k__BackingField )
  {
    v26 = *(_QWORD *)&OldUserEventPoint_k__BackingField->max_length;
    if ( v26 )
    {
      v19 = EventInfoTradeRankControl_TypeInfo;
      if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo, v17);
        v19 = EventInfoTradeRankControl_TypeInfo;
        v26 = *(_QWORD *)&OldUserEventPoint_k__BackingField->max_length;
      }
      if ( !(_DWORD)v26 )
        sub_1BCAA44(v19, v17);
      v27 = OldUserEventPoint_k__BackingField->m_Items[0];
      if ( v27 )
      {
        static_fields = v19->static_fields;
        value = v27->fields.value;
        if ( static_fields->oldEventPoint < value )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19, v17);
            static_fields = EventInfoTradeRankControl_TypeInfo->static_fields;
          }
          static_fields->oldEventPoint = value;
        }
        return;
      }
LABEL_27:
      sub_1BCAA3C(v19, v17);
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
    sub_1BCAA3C(this, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2

  if ( (byte_4B18148 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&type, callback);
    sub_1BCA7E0(&Method_EventInfoTradeRankControl___c__DisplayClass20_0__PlayAnim_b__0__, v7, v8);
    sub_1BCA7E0(&EventInfoTradeRankControl___c__DisplayClass20_0_TypeInfo, v9, v10);
    byte_4B18148 = 1;
  }
  v11 = sub_1BCAA2C(EventInfoTradeRankControl___c__DisplayClass20_0_TypeInfo, *(_QWORD *)&type, callback, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  if ( type == 1 )
  {
    v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v11,
      Method_EventInfoTradeRankControl___c__DisplayClass20_0__PlayAnim_b__0__,
      0LL);
    EventInfoTradeRankControl__ShowOpenQuestDialog(this, v29, v30);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
  }
}


void __fastcall EventInfoTradeRankControl__PlayRankUpAnimation(
        EventInfoTradeRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *tradeRankEffect; // x21
  __int64 v8; // x1
  UnityEngine_AnimationState_o *effectAnimationState; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B1814A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, callback, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1814A = 1;
  }
  tradeRankEffect = (UnityEngine_Object_o *)this->fields.tradeRankEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
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
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
    sub_1BCAA3C(effectAnimationState, v8);
  Component_object[2].monitor = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&Component_object[2].monitor,
    (int64_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *tradeRankEffect; // x20
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v15; // x2
  EventInfoTradeRankControl_ViewData_o *ViewData; // x0
  EventInfoTradeRankControl_ViewData_o *v17; // x8
  System_String_o *animationName; // x21
  Il2CppObject *v19; // x0
  struct UnityEngine_Animation_o **p_effectAnimation; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  UnityEngine_Object_o *effectAnimation; // x22
  __int64 v29; // x1
  UnityEngine_Object_o *Clip; // x22
  struct UnityEngine_AnimationState_o *Item; // x0
  struct UnityEngine_AnimationState_o **p_effectAnimationState; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B18150 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&rank, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B18150 = 1;
  }
  this->fields.tradeRank = rank;
  EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, rank, method);
  tradeRankEffect = (UnityEngine_Object_o *)this->fields.tradeRankEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality(tradeRankEffect, 0LL, 0LL) )
  {
    v12 = this->fields.tradeRankEffect;
    if ( !v12 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v12,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_28;
      CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0LL);
    }
    ViewData = EventInfoTradeRankControl__GetViewData(this, this->fields.tradeRank, v15);
    if ( !ViewData )
      return;
    v17 = ViewData;
    v12 = this->fields.tradeRankEffect;
    if ( !v12 )
LABEL_28:
      sub_1BCAA3C(v12, v11);
    animationName = v17->fields.animationName;
    v19 = UnityEngine_GameObject__GetComponent_object_(
            v12,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    this->fields.effectAnimation = (struct UnityEngine_Animation_o *)v19;
    p_effectAnimation = &this->fields.effectAnimation;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectAnimation, (int64_t)v19, v21, v22, v23, v24, v25, v26);
    effectAnimation = (UnityEngine_Object_o *)this->fields.effectAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( !UnityEngine_Object__op_Equality(effectAnimation, 0LL, 0LL) )
    {
      v12 = (UnityEngine_GameObject_o *)*p_effectAnimation;
      if ( *p_effectAnimation )
      {
        Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(
                                         (UnityEngine_Animation_o *)v12,
                                         animationName,
                                         0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
        if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
          return;
        v12 = (UnityEngine_GameObject_o *)*p_effectAnimation;
        if ( *p_effectAnimation )
        {
          UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)v12, (UnityEngine_AnimationClip_o *)Clip, 0LL);
          v12 = (UnityEngine_GameObject_o *)*p_effectAnimation;
          if ( *p_effectAnimation )
          {
            Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v12, animationName, 0LL);
            this->fields.effectAnimationState = Item;
            p_effectAnimationState = &this->fields.effectAnimationState;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)p_effectAnimationState,
              (int64_t)Item,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            v12 = (UnityEngine_GameObject_o *)*p_effectAnimationState;
            if ( *p_effectAnimationState )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v12, 0.0, 0LL);
              v12 = (UnityEngine_GameObject_o *)*p_effectAnimationState;
              if ( *p_effectAnimationState )
              {
                UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v12, 0.0, 0LL);
                v12 = (UnityEngine_GameObject_o *)*p_effectAnimation;
                if ( *p_effectAnimation )
                {
                  UnityEngine_Animation__Play((UnityEngine_Animation_o *)v12, 0LL);
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
  __int64 v6; // x2
  UnityEngine_Object_o *nextRankConditionLabel; // x21
  const MethodInfo *v8; // x2
  EventProgressValueEntity_o *EntityByProgressValue; // x0
  __int64 v10; // x1
  UILabel_o *v11; // x8
  System_String_o **p_condMessage; // x9

  if ( (byte_4B18151 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&rank, method);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v5, v6);
    byte_4B18151 = 1;
  }
  nextRankConditionLabel = (UnityEngine_Object_o *)this->fields.nextRankConditionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&rank);
  if ( !UnityEngine_Object__op_Equality(nextRankConditionLabel, 0LL, 0LL) )
  {
    EntityByProgressValue = EventInfoUIProgressControl__GetEntityByProgressValue(
                              (EventInfoUIProgressControl_o *)this,
                              rank + 1,
                              v8);
    v11 = this->fields.nextRankConditionLabel;
    if ( EntityByProgressValue )
    {
      if ( v11 )
      {
        p_condMessage = &EntityByProgressValue->fields.condMessage;
LABEL_11:
        UILabel__set_text(v11, *p_condMessage, 0LL);
        return;
      }
    }
    else if ( v11 )
    {
      p_condMessage = (System_String_o **)&StringLiteral_915/*"-"*/;
      goto LABEL_11;
    }
    sub_1BCAA3C(EntityByProgressValue, v10);
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
    sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *eventPointLabel; // x20
  System_String_o *NumberFormatLong; // x0
  __int64 v8; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *v10; // x19
  __int64 v11; // x1
  int64_t EventPointNoGroup; // x20

  if ( (byte_4B1814D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1814D = 1;
  }
  eventPointLabel = (UnityEngine_Object_o *)this->fields.eventPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  NumberFormatLong = (System_String_o *)UnityEngine_Object__op_Equality(eventPointLabel, 0LL, 0LL);
  if ( ((unsigned __int8)NumberFormatLong & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_11;
    v10 = this->fields.eventPointLabel;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(EventPointNoGroup, 0LL);
    if ( !v10 )
LABEL_11:
      sub_1BCAA3C(NumberFormatLong, v8);
    UILabel__set_text(v10, NumberFormatLong, 0LL);
  }
}


void __fastcall EventInfoTradeRankControl__SetupEventPointBg(
        EventInfoTradeRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *eventPointBgSprite; // x20
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_4B1814C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1814C = 1;
  }
  eventPointBgSprite = (UnityEngine_Object_o *)this->fields.eventPointBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(eventPointBgSprite, 0LL, 0LL) )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.eventPointBgSprite,
      this->fields.eventPointBgSpriteName,
      v5);
    v7 = this->fields.eventPointBgSprite;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
      v7,
      v7->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventInfoTradeRankControl__SetupTradeRank(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o **p_tradeRankEffect; // x20
  UnityEngine_Object_o *tradeRankEffect; // x21
  const MethodInfo *v10; // x1
  UnityEngine_Transform_o *tradeRankEffectParent; // x21
  Il2CppObject *tradeRankEffectPrefab; // x22
  Il2CppObject *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t CurrentTradeRank; // w0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2

  if ( (byte_4B1814E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1814E = 1;
  }
  p_tradeRankEffect = &this->fields.tradeRankEffect;
  tradeRankEffect = (UnityEngine_Object_o *)this->fields.tradeRankEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(tradeRankEffect, 0LL, 0LL) )
  {
    tradeRankEffectPrefab = (Il2CppObject *)this->fields.tradeRankEffectPrefab;
    tradeRankEffectParent = this->fields.tradeRankEffectParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v13 = UnityEngine_Object__Instantiate_object__49903816(
            tradeRankEffectPrefab,
            tradeRankEffectParent,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    *p_tradeRankEffect = (UnityEngine_GameObject_o *)v13;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tradeRankEffect, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)*p_tradeRankEffect, 0LL, 0LL) )
    {
      if ( !*p_tradeRankEffect )
        sub_1BCAA3C(0LL, v10);
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     *p_tradeRankEffect,
                                     (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
      this->fields.nextRankConditionLabel = (struct UILabel_o *)ComponentInChildren_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.nextRankConditionLabel,
        (int64_t)ComponentInChildren_object,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
  }
  CurrentTradeRank = EventInfoTradeRankControl__GetCurrentTradeRank(this, v10);
  EventInfoTradeRankControl__SetTradeRank(this, CurrentTradeRank, v28);
  EventInfoTradeRankControl__SetTradeRankCondition(this, this->fields.tradeRank, v29);
}


void __fastcall EventInfoTradeRankControl__ShowOpenQuestDialog(
        EventInfoTradeRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_o *v34; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v36; // x19
  int32_t eventId; // w21

  if ( (byte_4B18149 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&EventInfoTradeRankControl_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_EventInfoTradeRankControl___c__DisplayClass23_0__ShowOpenQuestDialog_b__0__, v10, v11);
    sub_1BCA7E0(&EventInfoTradeRankControl___c__DisplayClass23_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B18149 = 1;
  }
  v16 = sub_1BCAA2C(EventInfoTradeRankControl___c__DisplayClass23_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)callback, v25, v26, v27, v28, v29, v30);
  v34 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v16,
    Method_EventInfoTradeRankControl___c__DisplayClass23_0__ShowOpenQuestDialog_b__0__,
    0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_10;
  v36 = Instance;
  eventId = eventUiEntity->fields.eventId;
  Instance = (CommonUI_o *)EventInfoTradeRankControl_TypeInfo;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo, v18);
  if ( !v36 )
LABEL_10:
    sub_1BCAA3C(Instance, v18);
  if ( !CommonUI__CheckOpenQuestByEventPoint(
          v36,
          eventId,
          EventInfoTradeRankControl_TypeInfo->static_fields->oldEventPoint,
          v34,
          1,
          0.0,
          0,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL) )
    ActionExtensions__Call(v34, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTradeRankControl__ShowTradeRankUpDialog(
        EventInfoTradeRankControl_o *this,
        int32_t tradeRank,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  BaseDialog_o *Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2
  EventProgressValueEntity_o *EntityByProgressValue; // x0
  Il2CppObject *tradeRankUpDialog; // x22
  EventProgressValueEntity_o *v29; // x21
  UnityEngine_Transform_o *basePanelList; // x23
  Il2CppObject *v31; // x0
  BaseDialog_o **v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  TradeRankUpDialog_o *v39; // x23
  System_Collections_Generic_List_UIAtlas__o *atlasList; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x24
  const MethodInfo *v45; // x4

  if ( (byte_4B1814B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&tradeRank, callback);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_TradeRankUpDialog___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_EventInfoTradeRankControl___c__DisplayClass25_0__ShowTradeRankUpDialog_b__0__, v13, v14);
    sub_1BCA7E0(&EventInfoTradeRankControl___c__DisplayClass25_0_TypeInfo, v15, v16);
    byte_4B1814B = 1;
  }
  v17 = sub_1BCAA2C(EventInfoTradeRankControl___c__DisplayClass25_0_TypeInfo, *(_QWORD *)&tradeRank, callback, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_11;
  *(_QWORD *)(v17 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  EntityByProgressValue = EventInfoUIProgressControl__GetEntityByProgressValue(
                            (EventInfoUIProgressControl_o *)this,
                            tradeRank,
                            v26);
  tradeRankUpDialog = (Il2CppObject *)this->fields.tradeRankUpDialog;
  v29 = EntityByProgressValue;
  Instance = (BaseDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  basePanelList = (UnityEngine_Transform_o *)Instance[1].fields.basePanelList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  v31 = UnityEngine_Object__Instantiate_object__49903928(
          tradeRankUpDialog,
          basePanelList,
          0,
          (const MethodInfo_2F97938 *)Method_UnityEngine_Object_Instantiate_TradeRankUpDialog___);
  *(_QWORD *)(v17 + 24) = v31;
  v32 = (BaseDialog_o **)(v17 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)v31, v33, v34, v35, v36, v37, v38);
  Instance = *(BaseDialog_o **)(v17 + 24);
  if ( !Instance
    || (BaseDialog__Init(Instance, 0LL),
        v39 = *(TradeRankUpDialog_o **)(v17 + 24),
        atlasList = this->fields.atlasList,
        v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43),
        System_Action___ctor(
          v44,
          (Il2CppObject *)v17,
          Method_EventInfoTradeRankControl___c__DisplayClass25_0__ShowTradeRankUpDialog_b__0__,
          0LL),
        !v39)
    || (TradeRankUpDialog__Setup(v39, v29, atlasList, v44, v45), (Instance = *v32) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(Instance, v19);
  }
  BaseDialog__Open(Instance, 0LL, 0, 0LL);
}


void __fastcall EventInfoTradeRankControl__UpdateOldPoint(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t EventPointNoGroup; // x0
  __int64 v5; // x1
  EventInfoTradeRankControl_c *v6; // x8
  int64_t v7; // x19

  if ( (byte_4B18153 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTradeRankControl_TypeInfo, method, v2);
    byte_4B18153 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  v6 = EventInfoTradeRankControl_TypeInfo;
  v7 = EventPointNoGroup;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo, v5);
    v6 = EventInfoTradeRankControl_TypeInfo;
  }
  v6->static_fields->oldEventPoint = v7;
}


void __fastcall EventInfoTradeRankControl___Initialization_b__18_0(
        EventInfoTradeRankControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x2
  __int64 v19; // x3
  struct EventInfoTradeRankControl_o *_4__this; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int progressValue; // w8
  System_Action_o *v23; // x19
  const MethodInfo *v24; // x2

  if ( (byte_4B18156 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__1__, v5, v6);
    sub_1BCA7E0(&EventInfoTradeRankControl___c__DisplayClass20_1_TypeInfo, v7, v8);
    byte_4B18156 = 1;
  }
  v9 = sub_1BCAA2C(EventInfoTradeRankControl___c__DisplayClass20_1_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(v10, v11);
  }
  currentEventProgressValueEntity = _4__this->fields.currentEventProgressValueEntity;
  if ( currentEventProgressValueEntity )
    progressValue = currentEventProgressValueEntity->fields.progressValue;
  else
    progressValue = 1;
  *(_DWORD *)(v9 + 16) = progressValue;
  if ( _4__this->fields.tradeRank >= progressValue )
  {
    ActionExtensions__Call(this->fields.callback, 0LL);
  }
  else
  {
    v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v18, v19);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v9,
      Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__1__,
      0LL);
    EventInfoTradeRankControl__PlayRankUpAnimation(_4__this, v23, v24);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventInfoTradeRankControl___c__DisplayClass20_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct EventInfoTradeRankControl___c__DisplayClass20_0_o *CS___8__locals1; // x8
  EventInfoTradeRankControl_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  int32_t afterRank; // w21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v4 = this;
  if ( (byte_4B18157 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventInfoTradeRankControl___c__DisplayClass20_1_o *)sub_1BCA7E0(
                                                                  &Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__2__,
                                                                  v5,
                                                                  v6);
    byte_4B18157 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = CS___8__locals1->fields.__4__this;
  _9__2 = v4->fields.__9__2;
  afterRank = v4->fields.afterRank;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__2, (int64_t)_9__2, v11, v12, v13, v14, v15, v16);
  }
  if ( !_4__this )
LABEL_8:
    sub_1BCAA3C(this, method);
  EventInfoTradeRankControl__ShowTradeRankUpDialog(_4__this, afterRank, _9__2, v3);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  EventInfoTradeRankControl___c__DisplayClass23_0_o *v3; // x19
  struct EventInfoTradeRankControl_o *_4__this; // x8
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t EventPointNoGroup; // x0
  __int64 v7; // x1
  EventInfoTradeRankControl_c *v8; // x8
  int64_t v9; // x20

  v3 = this;
  if ( (byte_4B18158 & 1) == 0 )
  {
    this = (EventInfoTradeRankControl___c__DisplayClass23_0_o *)sub_1BCA7E0(
                                                                  &EventInfoTradeRankControl_TypeInfo,
                                                                  method,
                                                                  v2);
    byte_4B18158 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this || (eventUiEntity = _4__this->fields.eventUiEntity) == 0LL )
    sub_1BCAA3C(this, method);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0LL);
  v8 = EventInfoTradeRankControl_TypeInfo;
  v9 = EventPointNoGroup;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo, v7);
    v8 = EventInfoTradeRankControl_TypeInfo;
  }
  v8->static_fields->oldEventPoint = v9;
  ActionExtensions__Call(v3->fields.callback, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Component_o *dialog; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B18159 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18159 = 1;
  }
  ActionExtensions__Call(this->fields.callback, 0LL);
  dialog = (UnityEngine_Component_o *)this->fields.dialog;
  if ( !dialog )
    sub_1BCAA3C(0LL, v4);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(dialog, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return v->fields.tradeRank == this->fields.tradeRank;
}