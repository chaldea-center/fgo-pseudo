void EventInfoTradeRankControl___cctor(const MethodInfo *method)
{
  if ( (byte_4D32882 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoTradeRankControl_TypeInfo);
    byte_4D32882 = 1;
  }
  EventInfoTradeRankControl_TypeInfo->static_fields->oldEventPoint = -1;
}


void EventInfoTradeRankControl___ctor(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_4D32881 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoUIProgressControl_TypeInfo);
    byte_4D32881 = 1;
  }
  this->fields.tradeRank = 1;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


int32_t EventInfoTradeRankControl__GetCurrentTradeRank(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v5; // x1
  TerminalSceneComponent_c *v6; // x0
  TerminalSceneComponent_o *v7; // x0
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t v9; // w20
  System_String_o *EventProgressValueSaveKey; // x0
  bool HasKey; // w0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct EventProgressValueEntity_o *v14; // x8
  System_String_o *v15; // x0
  int32_t Int; // w0
  struct EventProgressValueEntity_o *v17; // x8
  int32_t progressValue; // w8

  if ( (byte_4D3287F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D3287F = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    goto LABEL_22;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  v7 = v6->static_fields->mInstance;
  if ( !v7 )
    sub_1C93D2C(0, v5);
  if ( !TerminalSceneComponent__IsMapActive(v7, 0) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
LABEL_22:
  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(
                                (EventInfoUIProgressControl_o *)this,
                                v5);
  HasKey = UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0);
  v14 = this->fields.currentEventProgressValueEntity;
  if ( HasKey )
  {
    if ( v14 )
    {
      v15 = EventInfoUIProgressControl__GetEventProgressValueSaveKey((EventInfoUIProgressControl_o *)this, v12);
      Int = UnityEngine_PlayerPrefs__GetInt(v15, 1, 0);
      v17 = this->fields.currentEventProgressValueEntity;
      v9 = Int;
      if ( v17 )
      {
        progressValue = v17->fields.progressValue;
        if ( Int <= progressValue )
          return v9;
      }
      else
      {
        if ( Int <= 1 )
          return v9;
        return 1;
      }
      return progressValue;
    }
    return 1;
  }
  else
  {
    if ( v14 )
      v9 = v14->fields.progressValue;
    else
      v9 = 1;
    EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, v9, v13);
  }
  return v9;
}


EventInfoTradeRankControl_ViewData_o *EventInfoTradeRankControl__GetViewData(
        EventInfoTradeRankControl_o *this,
        int32_t tradeRank,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *viewDataList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D3287C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventInfoTradeRankControl_ViewData___);
    sub_1C93AD4(&System_Func_EventInfoTradeRankControl_ViewData__bool__TypeInfo);
    sub_1C93AD4(&Method_EventInfoTradeRankControl___c__DisplayClass29_0__GetViewData_b__0__);
    sub_1C93AD4(&EventInfoTradeRankControl___c__DisplayClass29_0_TypeInfo);
    byte_4D3287C = 1;
  }
  v5 = sub_1C93D20(EventInfoTradeRankControl___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = tradeRank;
  viewDataList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.viewDataList;
  if ( !viewDataList )
    return 0;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventInfoTradeRankControl_ViewData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventInfoTradeRankControl___c__DisplayClass29_0__GetViewData_b__0__,
    0);
  return (EventInfoTradeRankControl_ViewData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                                   viewDataList,
                                                   (System_Func_TSource__bool__o *)v9,
                                                   (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_EventInfoTradeRankControl_ViewData___);
}


void EventInfoTradeRankControl__Initialization(
        EventInfoTradeRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  EventInfoTradeRankControl_c *v9; // x0
  struct EventUiEntity_o *v10; // x8
  int64_t EventPointNoGroup; // x0
  EventInfoTradeRankControl_c *v12; // x8
  int64_t v13; // x19
  TerminalPramsManager_c *v14; // x0
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x19
  il2cpp_array_size_t max_length; // x8
  UserEventPointEntity_o *v17; // x9
  struct EventInfoTradeRankControl_StaticFields *static_fields; // x8
  int64_t value; // x19

  if ( (byte_4D32874 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoTradeRankControl__Initialization_b__18_0__);
    sub_1C93AD4(&EventInfoTradeRankControl_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D32874 = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, method);
  eventUiEntity = this->fields.eventUiEntity;
  v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoTradeRankControl__Initialization_b__18_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v6, v7);
  v9 = EventInfoTradeRankControl_TypeInfo;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
    v9 = EventInfoTradeRankControl_TypeInfo;
  }
  if ( v9->static_fields->oldEventPoint == -1 )
  {
    v10 = this->fields.eventUiEntity;
    if ( !v10 )
      goto LABEL_27;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(v10->fields.eventId, 0);
    v12 = EventInfoTradeRankControl_TypeInfo;
    v13 = EventPointNoGroup;
    if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
      v12 = EventInfoTradeRankControl_TypeInfo;
    }
    v12->static_fields->oldEventPoint = v13;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D319 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D319 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v14->static_fields->_OldUserEventPoint_k__BackingField;
  if ( OldUserEventPoint_k__BackingField )
  {
    max_length = OldUserEventPoint_k__BackingField->max_length;
    if ( max_length )
    {
      v9 = EventInfoTradeRankControl_TypeInfo;
      if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
        v9 = EventInfoTradeRankControl_TypeInfo;
        max_length = OldUserEventPoint_k__BackingField->max_length;
      }
      if ( !(_DWORD)max_length )
        sub_1C93D34(v9);
      v17 = OldUserEventPoint_k__BackingField->m_Items[0];
      if ( v17 )
      {
        static_fields = v9->static_fields;
        value = v17->fields.value;
        if ( static_fields->oldEventPoint < value )
        {
          if ( !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
            static_fields = EventInfoTradeRankControl_TypeInfo->static_fields;
          }
          static_fields->oldEventPoint = value;
        }
        return;
      }
LABEL_27:
      sub_1C93D2C(v9, v8);
    }
  }
}


void EventInfoTradeRankControl__OnDestroy(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v5; // x1

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C93D2C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v5);
}


void EventInfoTradeRankControl__PlayAnim(
        EventInfoTradeRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_4D32875 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoTradeRankControl___c__DisplayClass20_0__PlayAnim_b__0__);
    sub_1C93AD4(&EventInfoTradeRankControl___c__DisplayClass20_0_TypeInfo);
    byte_4D32875 = 1;
  }
  v7 = sub_1C93D20(EventInfoTradeRankControl___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( type == 1 )
  {
    v22 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v7,
      Method_EventInfoTradeRankControl___c__DisplayClass20_0__PlayAnim_b__0__,
      0);
    EventInfoTradeRankControl__ShowOpenQuestDialog(this, v22, v23);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
}


void EventInfoTradeRankControl__PlayRankUpAnimation(
        EventInfoTradeRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tradeRankEffect; // x21
  __int64 v6; // x1
  UnityEngine_AnimationState_o *effectAnimationState; // x0
  Il2CppObject *Component_object; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D32877 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32877 = 1;
  }
  tradeRankEffect = (UnityEngine_Object_o *)this->fields.tradeRankEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tradeRankEffect, 0, 0)
    || UnityEngine_TrackedReference__op_Equality(
         (UnityEngine_TrackedReference_o *)this->fields.effectAnimationState,
         0,
         0) )
  {
    goto LABEL_12;
  }
  effectAnimationState = this->fields.effectAnimationState;
  if ( !effectAnimationState )
    goto LABEL_15;
  UnityEngine_AnimationState__set_speed(effectAnimationState, 1.0, 0);
  effectAnimationState = (UnityEngine_AnimationState_o *)this->fields.tradeRankEffect;
  if ( !effectAnimationState )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)effectAnimationState,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAnimationState = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Equality(
                                                           (UnityEngine_Object_o *)Component_object,
                                                           0,
                                                           0);
  if ( ((unsigned __int8)effectAnimationState & 1) != 0 )
  {
LABEL_12:
    ActionExtensions__Call(callback, 0);
    return;
  }
  if ( !Component_object )
LABEL_15:
    sub_1C93D2C(effectAnimationState, v6);
  Component_object[2].monitor = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&Component_object[2].monitor,
    (int32_t)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void EventInfoTradeRankControl__Redisplay(EventInfoTradeRankControl_o *this, const MethodInfo *method)
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


void EventInfoTradeRankControl__SetTradeRank(EventInfoTradeRankControl_o *this, int32_t rank, const MethodInfo *method)
{
  UnityEngine_Object_o *tradeRankEffect; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v9; // x2
  EventInfoTradeRankControl_ViewData_o *ViewData; // x0
  EventInfoTradeRankControl_ViewData_o *v11; // x8
  System_String_o *animationName; // x21
  Il2CppObject *v13; // x0
  struct UnityEngine_Animation_o **p_effectAnimation; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *effectAnimation; // x22
  UnityEngine_Object_o *Clip; // x22
  struct UnityEngine_AnimationState_o *Item; // x0
  struct UnityEngine_AnimationState_o **p_effectAnimationState; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D3287D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3287D = 1;
  }
  this->fields.tradeRank = rank;
  EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, rank, method);
  tradeRankEffect = (UnityEngine_Object_o *)this->fields.tradeRankEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(tradeRankEffect, 0, 0) )
  {
    v7 = this->fields.tradeRankEffect;
    if ( !v7 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v7,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_28;
      CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0);
    }
    ViewData = EventInfoTradeRankControl__GetViewData(this, this->fields.tradeRank, v9);
    if ( !ViewData )
      return;
    v11 = ViewData;
    v7 = this->fields.tradeRankEffect;
    if ( !v7 )
LABEL_28:
      sub_1C93D2C(v7, v6);
    animationName = v11->fields.animationName;
    v13 = UnityEngine_GameObject__GetComponent_object_(
            v7,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    this->fields.effectAnimation = (struct UnityEngine_Animation_o *)v13;
    p_effectAnimation = &this->fields.effectAnimation;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.effectAnimation,
      (int32_t)v13,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    effectAnimation = (UnityEngine_Object_o *)this->fields.effectAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(effectAnimation, 0, 0) )
    {
      v7 = (UnityEngine_GameObject_o *)*p_effectAnimation;
      if ( *p_effectAnimation )
      {
        Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v7, animationName, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(Clip, 0, 0) )
          return;
        v7 = (UnityEngine_GameObject_o *)*p_effectAnimation;
        if ( *p_effectAnimation )
        {
          UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)v7, (UnityEngine_AnimationClip_o *)Clip, 0);
          v7 = (UnityEngine_GameObject_o *)*p_effectAnimation;
          if ( *p_effectAnimation )
          {
            Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v7, animationName, 0);
            this->fields.effectAnimationState = Item;
            p_effectAnimationState = &this->fields.effectAnimationState;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)p_effectAnimationState,
              (int32_t)Item,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
            v7 = (UnityEngine_GameObject_o *)*p_effectAnimationState;
            if ( *p_effectAnimationState )
            {
              UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)v7, 0.0, 0);
              v7 = (UnityEngine_GameObject_o *)*p_effectAnimationState;
              if ( *p_effectAnimationState )
              {
                UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)v7, 0.0, 0);
                v7 = (UnityEngine_GameObject_o *)*p_effectAnimation;
                if ( *p_effectAnimation )
                {
                  UnityEngine_Animation__Play((UnityEngine_Animation_o *)v7, 0);
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


void EventInfoTradeRankControl__SetTradeRankCondition(
        EventInfoTradeRankControl_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextRankConditionLabel; // x21
  const MethodInfo *v6; // x2
  EventProgressValueEntity_o *EntityByProgressValue; // x0
  __int64 v8; // x1
  UILabel_o *v9; // x8
  System_String_o **p_condMessage; // x9

  if ( (byte_4D3287E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    byte_4D3287E = 1;
  }
  nextRankConditionLabel = (UnityEngine_Object_o *)this->fields.nextRankConditionLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nextRankConditionLabel, 0, 0) )
  {
    EntityByProgressValue = EventInfoUIProgressControl__GetEntityByProgressValue(
                              (EventInfoUIProgressControl_o *)this,
                              rank + 1,
                              v6);
    v9 = this->fields.nextRankConditionLabel;
    if ( EntityByProgressValue )
    {
      if ( v9 )
      {
        p_condMessage = &EntityByProgressValue->fields.condMessage;
LABEL_11:
        UILabel__set_text(v9, *p_condMessage, 0);
        return;
      }
    }
    else if ( v9 )
    {
      p_condMessage = (System_String_o **)&StringLiteral_859/*"-"*/;
      goto LABEL_11;
    }
    sub_1C93D2C(EntityByProgressValue, v8);
  }
}


void EventInfoTradeRankControl__SetUIDisp(EventInfoTradeRankControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0);
}


void EventInfoTradeRankControl__Setup(
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


void EventInfoTradeRankControl__SetupEventPoint(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventPointLabel; // x20
  System_String_o *NumberFormatLong; // x0
  __int64 v5; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *v7; // x19
  int64_t EventPointNoGroup; // x20

  if ( (byte_4D3287A & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3287A = 1;
  }
  eventPointLabel = (UnityEngine_Object_o *)this->fields.eventPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  NumberFormatLong = (System_String_o *)UnityEngine_Object__op_Equality(eventPointLabel, 0, 0);
  if ( ((unsigned __int8)NumberFormatLong & 1) == 0 )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_11;
    v7 = this->fields.eventPointLabel;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(EventPointNoGroup, 0);
    if ( !v7 )
LABEL_11:
      sub_1C93D2C(NumberFormatLong, v5);
    UILabel__set_text(v7, NumberFormatLong, 0);
  }
}


void EventInfoTradeRankControl__SetupEventPointBg(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventPointBgSprite; // x20
  const MethodInfo *v4; // x3
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4D32879 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32879 = 1;
  }
  eventPointBgSprite = (UnityEngine_Object_o *)this->fields.eventPointBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventPointBgSprite, 0, 0) )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.eventPointBgSprite,
      this->fields.eventPointBgSpriteName,
      v4);
    v6 = this->fields.eventPointBgSprite;
    if ( !v6 )
      sub_1C93D2C(0, v5);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
}


void EventInfoTradeRankControl__SetupTradeRank(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_tradeRankEffect; // x20
  UnityEngine_Object_o *tradeRankEffect; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Transform_o *tradeRankEffectParent; // x21
  Il2CppObject *tradeRankEffectPrefab; // x22
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t CurrentTradeRank; // w0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2

  if ( (byte_4D3287B & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3287B = 1;
  }
  p_tradeRankEffect = &this->fields.tradeRankEffect;
  tradeRankEffect = (UnityEngine_Object_o *)this->fields.tradeRankEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tradeRankEffect, 0, 0) )
  {
    tradeRankEffectPrefab = (Il2CppObject *)this->fields.tradeRankEffectPrefab;
    tradeRankEffectParent = this->fields.tradeRankEffectParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__Instantiate_object__52629400(
           tradeRankEffectPrefab,
           tradeRankEffectParent,
           (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    *p_tradeRankEffect = (UnityEngine_GameObject_o *)v8;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tradeRankEffect, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)*p_tradeRankEffect, 0, 0) )
    {
      if ( !*p_tradeRankEffect )
        sub_1C93D2C(0, v5);
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     *p_tradeRankEffect,
                                     (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
      this->fields.nextRankConditionLabel = (struct UILabel_o *)ComponentInChildren_object;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.nextRankConditionLabel,
        (int32_t)ComponentInChildren_object,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
  }
  CurrentTradeRank = EventInfoTradeRankControl__GetCurrentTradeRank(this, v5);
  EventInfoTradeRankControl__SetTradeRank(this, CurrentTradeRank, v23);
  EventInfoTradeRankControl__SetTradeRankCondition(this, this->fields.tradeRank, v24);
}


void EventInfoTradeRankControl__ShowOpenQuestDialog(
        EventInfoTradeRankControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  CommonUI_o *Instance; // x0
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
  System_Action_o *v20; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  CommonUI_o *v22; // x19
  int32_t eventId; // w21

  if ( (byte_4D32876 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&EventInfoTradeRankControl_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventInfoTradeRankControl___c__DisplayClass23_0__ShowOpenQuestDialog_b__0__);
    sub_1C93AD4(&EventInfoTradeRankControl___c__DisplayClass23_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32876 = 1;
  }
  v5 = sub_1C93D20(EventInfoTradeRankControl___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_EventInfoTradeRankControl___c__DisplayClass23_0__ShowOpenQuestDialog_b__0__,
    0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_10;
  v22 = Instance;
  eventId = eventUiEntity->fields.eventId;
  Instance = (CommonUI_o *)EventInfoTradeRankControl_TypeInfo;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
  if ( !v22 )
LABEL_10:
    sub_1C93D2C(Instance, v7);
  if ( !CommonUI__CheckOpenQuestByEventPoint(
          v22,
          eventId,
          EventInfoTradeRankControl_TypeInfo->static_fields->oldEventPoint,
          v20,
          1,
          0.0,
          0,
          (System_String_o *)StringLiteral_1/*""*/,
          0) )
    ActionExtensions__Call(v20, 0);
}


void EventInfoTradeRankControl__ShowTradeRankUpDialog(
        EventInfoTradeRankControl_o *this,
        int32_t tradeRank,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  BaseDialog_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  EventProgressValueEntity_o *EntityByProgressValue; // x0
  Il2CppObject *tradeRankUpDialog; // x22
  EventProgressValueEntity_o *v19; // x21
  UnityEngine_Transform_o *m_CachedPtr; // x23
  Il2CppObject *v21; // x0
  BaseDialog_o **v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  TradeRankUpDialog_o *v29; // x23
  System_Collections_Generic_List_UIAtlas__o *atlasList; // x19
  System_Action_o *v31; // x24

  if ( (byte_4D32878 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_TradeRankUpDialog___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventInfoTradeRankControl___c__DisplayClass25_0__ShowTradeRankUpDialog_b__0__);
    sub_1C93AD4(&EventInfoTradeRankControl___c__DisplayClass25_0_TypeInfo);
    byte_4D32878 = 1;
  }
  v7 = sub_1C93D20(EventInfoTradeRankControl___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  EntityByProgressValue = EventInfoUIProgressControl__GetEntityByProgressValue(
                            (EventInfoUIProgressControl_o *)this,
                            tradeRank,
                            v16);
  tradeRankUpDialog = (Il2CppObject *)this->fields.tradeRankUpDialog;
  v19 = EntityByProgressValue;
  Instance = (BaseDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  m_CachedPtr = (UnityEngine_Transform_o *)Instance[1].fields.m_CachedPtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__Instantiate_object__52629512(
          tradeRankUpDialog,
          m_CachedPtr,
          0,
          (const MethodInfo_3231008 *)Method_UnityEngine_Object_Instantiate_TradeRankUpDialog___);
  *(_QWORD *)(v7 + 24) = v21;
  v22 = (BaseDialog_o **)(v7 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v21, v23, v24, v25, v26, v27, v28);
  Instance = *(BaseDialog_o **)(v7 + 24);
  if ( !Instance
    || (BaseDialog__Init(Instance, 0),
        v29 = *(TradeRankUpDialog_o **)(v7 + 24),
        atlasList = this->fields.atlasList,
        v31 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v31,
          (Il2CppObject *)v7,
          Method_EventInfoTradeRankControl___c__DisplayClass25_0__ShowTradeRankUpDialog_b__0__,
          0),
        !v29)
    || (TradeRankUpDialog__Setup(v29, v19, atlasList, v31, 0), (Instance = *v22) == 0) )
  {
LABEL_11:
    sub_1C93D2C(Instance, v9);
  }
  BaseDialog__Open(Instance, 0, 0, 0, 0);
}


void EventInfoTradeRankControl__UpdateOldPoint(int32_t eventId, const MethodInfo *method)
{
  int64_t EventPointNoGroup; // x0
  EventInfoTradeRankControl_c *v4; // x8
  int64_t v5; // x19

  if ( (byte_4D32880 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoTradeRankControl_TypeInfo);
    byte_4D32880 = 1;
  }
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  v4 = EventInfoTradeRankControl_TypeInfo;
  v5 = EventPointNoGroup;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
    v4 = EventInfoTradeRankControl_TypeInfo;
  }
  v4->static_fields->oldEventPoint = v5;
}


void EventInfoTradeRankControl___Initialization_b__18_0(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C93D2C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
}


int32_t EventInfoTradeRankControl__get_CurrentTradeRank(EventInfoTradeRankControl_o *this, const MethodInfo *method)
{
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8

  currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
  if ( currentEventProgressValueEntity )
    return currentEventProgressValueEntity->fields.progressValue;
  else
    return 1;
}


void EventInfoTradeRankControl_ViewData___ctor(EventInfoTradeRankControl_ViewData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTradeRankControl___c__DisplayClass20_0___ctor(
        EventInfoTradeRankControl___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTradeRankControl___c__DisplayClass20_0___PlayAnim_b__0(
        EventInfoTradeRankControl___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct EventInfoTradeRankControl_o *_4__this; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int progressValue; // w8
  System_Action_o *v15; // x19
  const MethodInfo *v16; // x2

  if ( (byte_4D32883 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__1__);
    sub_1C93AD4(&EventInfoTradeRankControl___c__DisplayClass20_1_TypeInfo);
    byte_4D32883 = 1;
  }
  v3 = sub_1C93D20(EventInfoTradeRankControl___c__DisplayClass20_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3
    || (*(_QWORD *)(v3 + 24) = this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(v4, v5);
  }
  currentEventProgressValueEntity = _4__this->fields.currentEventProgressValueEntity;
  if ( currentEventProgressValueEntity )
    progressValue = currentEventProgressValueEntity->fields.progressValue;
  else
    progressValue = 1;
  *(_DWORD *)(v3 + 16) = progressValue;
  if ( _4__this->fields.tradeRank >= progressValue )
  {
    ActionExtensions__Call(this->fields.callback, 0);
  }
  else
  {
    v15 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v3,
      Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__1__,
      0);
    EventInfoTradeRankControl__PlayRankUpAnimation(_4__this, v15, v16);
  }
}


void EventInfoTradeRankControl___c__DisplayClass20_1___ctor(
        EventInfoTradeRankControl___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTradeRankControl___c__DisplayClass20_1___PlayAnim_b__1(
        EventInfoTradeRankControl___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventInfoTradeRankControl___c__DisplayClass20_1_o *v3; // x19
  struct EventInfoTradeRankControl___c__DisplayClass20_0_o *CS___8__locals1; // x8
  EventInfoTradeRankControl_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  int32_t afterRank; // w21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v3 = this;
  if ( (byte_4D32884 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (EventInfoTradeRankControl___c__DisplayClass20_1_o *)sub_1C93AD4(&Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__2__);
    byte_4D32884 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = CS___8__locals1->fields.__4__this;
  _9__2 = v3->fields.__9__2;
  afterRank = v3->fields.afterRank;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_EventInfoTradeRankControl___c__DisplayClass20_1__PlayAnim_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
LABEL_8:
    sub_1C93D2C(this, method);
  EventInfoTradeRankControl__ShowTradeRankUpDialog(_4__this, afterRank, _9__2, v2);
}


void EventInfoTradeRankControl___c__DisplayClass20_1___PlayAnim_b__2(
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
        *((_DWORD *)this + 42) = afterRank,
        EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, afterRank, v2),
        (v7 = v4->fields.CS___8__locals1) == 0)
    || (this = (EventInfoTradeRankControl___c__DisplayClass20_1_o *)v7->fields.__4__this) == 0
    || (EventInfoTradeRankControl__SetTradeRankCondition((EventInfoTradeRankControl_o *)this, v4->fields.afterRank, v6),
        (v8 = v4->fields.CS___8__locals1) == 0) )
  {
LABEL_7:
    sub_1C93D2C(this, method);
  }
  ActionExtensions__Call(v8->fields.callback, 0);
}


void EventInfoTradeRankControl___c__DisplayClass23_0___ctor(
        EventInfoTradeRankControl___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTradeRankControl___c__DisplayClass23_0___ShowOpenQuestDialog_b__0(
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
  if ( (byte_4D32885 & 1) == 0 )
  {
    this = (EventInfoTradeRankControl___c__DisplayClass23_0_o *)sub_1C93AD4(&EventInfoTradeRankControl_TypeInfo);
    byte_4D32885 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (eventUiEntity = _4__this->fields.eventUiEntity) == 0 )
    sub_1C93D2C(this, method);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0);
  v6 = EventInfoTradeRankControl_TypeInfo;
  v7 = EventPointNoGroup;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
    v6 = EventInfoTradeRankControl_TypeInfo;
  }
  v6->static_fields->oldEventPoint = v7;
  ActionExtensions__Call(v2->fields.callback, 0);
}


void EventInfoTradeRankControl___c__DisplayClass25_0___ctor(
        EventInfoTradeRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTradeRankControl___c__DisplayClass25_0___ShowTradeRankUpDialog_b__0(
        EventInfoTradeRankControl___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *dialog; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D32886 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32886 = 1;
  }
  ActionExtensions__Call(this->fields.callback, 0);
  dialog = (UnityEngine_Component_o *)this->fields.dialog;
  if ( !dialog )
    sub_1C93D2C(0, v3);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(dialog, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
}


void EventInfoTradeRankControl___c__DisplayClass29_0___ctor(
        EventInfoTradeRankControl___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoTradeRankControl___c__DisplayClass29_0___GetViewData_b__0(
        EventInfoTradeRankControl___c__DisplayClass29_0_o *this,
        EventInfoTradeRankControl_ViewData_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C93D2C(this, 0);
  return v->fields.tradeRank == this->fields.tradeRank;
}