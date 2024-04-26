void __fastcall ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  this->fields.centerPos = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&this->fields.iconEnterAnimEaseType = 0x400000005LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__DelayAttachedTask(
        float delay,
        SchedulerTaskBase_o *task,
        const MethodInfo *method)
{
  SchedulerTaskWaitTime_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  SchedulerTaskBase_array *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  SchedulerTaskOrthostichy_o *v21; // x19
  __int64 v23; // x0
  __int64 v24; // x0

  if ( (byte_4353B75 & 1) == 0 )
  {
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskOrthostichy_TypeInfo);
    sub_B70694(&SchedulerTaskWaitTime_TypeInfo);
    byte_4353B75 = 1;
  }
  v5 = (SchedulerTaskWaitTime_o *)sub_B70764(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v5, delay, 0LL);
  v6 = sub_B706AC(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v6 )
    sub_B7076C(0LL, v7);
  v14 = (SchedulerTaskBase_array *)v6;
  if ( v5 )
  {
    v6 = sub_B70754(v5, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !v14->max_length )
    goto LABEL_11;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v5;
  sub_B70630((BattleServantConfConponent_o *)v14->m_Items, (System_Int32_array **)v5, v8, v9, v10, v11, v12, v13);
  if ( task )
  {
    v6 = sub_B70754(task, v14->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_12:
      v24 = sub_B7078C(v6);
      sub_B70738(v24, 0LL);
    }
  }
  if ( v14->max_length <= 1 )
  {
LABEL_11:
    v23 = sub_B70798(v6);
    sub_B70738(v23, 0LL);
  }
  v14->m_Items[1] = task;
  sub_B70630(
    (BattleServantConfConponent_o *)&v14->m_Items[1],
    (System_Int32_array **)task,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (SchedulerTaskOrthostichy_o *)sub_B70764(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v21, v14, 0LL);
  return (SchedulerTaskBase_o *)v21;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v4; // x0

  if ( (byte_4353B67 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4353B67 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               1,
                                               0LL,
                                               (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v4, 0LL);
  }
  else
  {
    return 0LL;
  }
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardExitAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v4; // x0

  if ( (byte_4353B68 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4353B68 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               2,
                                               0LL,
                                               (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v4, 0LL);
  }
  else
  {
    return 0LL;
  }
}


float __fastcall ClassBoardSelectViewManager__GetEventTime(
        ClassBoardSelectViewManager_o *this,
        UnityEngine_AnimationClip_o *animClip,
        System_String_o *eventName,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_T__o *events; // x21
  ClassBoardSelectViewManager___c_c *v18; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x22
  Il2CppObject *v21; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_AnimationEvent_array *v29; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x21
  UnityEngine_AnimationEvent_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0

  if ( (byte_4353B69 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_AnimationEvent___ctor__);
    sub_B70694(&System_Action_AnimationEvent__TypeInfo);
    sub_B70694(&Method_BasicHelper_Find_AnimationEvent___);
    sub_B70694(&Method_BasicHelper_ForEach_AnimationEvent___);
    sub_B70694(&Method_System_Func_AnimationEvent__bool___ctor__);
    sub_B70694(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__);
    sub_B70694(&ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo);
    sub_B70694(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4353B69 = 1;
  }
  v8 = sub_B70764(ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass26_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass26_0_o *)v8,
    0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = eventName,
        sub_B70630(
          (BattleServantConfConponent_o *)(v8 + 16),
          (System_Int32_array **)eventName,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        !animClip) )
  {
    sub_B7076C(v9, v10);
  }
  events = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v18 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v18 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_AnimationEvent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_0,
      v21,
      Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__,
      (const MethodInfo_264C148 *)Method_System_Action_AnimationEvent___ctor__);
    v22 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v22->__9__26_0 = (struct System_Action_AnimationEvent__o *)_9__26_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v22->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    events,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)events, 0LL);
  v29 = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__,
    (const MethodInfo_29AC578 *)Method_System_Func_AnimationEvent__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_AnimationEvent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v29,
                                                                                                     (System_Func_T__bool__o *)v30,
                                                                                                     (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_AnimationEvent___);
  if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return UnityEngine_AnimationEvent__get_time(USFGOActorBattleActionEventConditional_OverwriteParamCondition, 0LL);
  else
    return defaultValue;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetFirstTransitionAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v4; // x0

  if ( (byte_4353B66 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4353B66 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               0,
                                               0LL,
                                               (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v4, 0LL);
  }
  else
  {
    return 0LL;
  }
}


float __fastcall ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectedClassIcon; // x20
  bool v4; // w0
  MethodInfo *v5; // x1
  float result; // s0
  ClassBoardSelectIconComponent_o *ClassBoardEnterAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v8; // x8
  UnityEngine_AnimationClip_o *Clip; // x20
  ClassBoardSelectIconComponent_AnimClipInfo_o *v10; // x19

  if ( (byte_4353B74 & 1) == 0 )
  {
    sub_B70694(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353B74 = 1;
  }
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  result = 0.0;
  if ( !v4 )
  {
    ClassBoardEnterAnimName = this->fields.selectedClassIcon;
    if ( !ClassBoardEnterAnimName
      || (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                                                         ClassBoardEnterAnimName,
                                                                         v5),
          (v8 = this->fields.selectedClassIcon) == 0LL)
      || (v5 = (MethodInfo *)ClassBoardEnterAnimName,
          (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)v8->fields.anim) == 0LL)
      || (Clip = UnityEngine_Animation__GetClip(
                   (UnityEngine_Animation_o *)ClassBoardEnterAnimName,
                   (System_String_o *)v5,
                   0LL),
          v10 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B70764(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v10, Clip, 0LL),
          !v10) )
    {
      sub_B7076C(ClassBoardEnterAnimName, v5);
    }
    return v10->fields._ForwardIconAnimStartTime_k__BackingField;
  }
  return result;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
        ClassBoardSelectViewManager_o *this,
        System_Collections_Generic_List_ClassBoardSelectIconComponent__o *iconCompoentList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **current; // x1
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  UnityEngine_AnimationState_o *v19; // x0
  System_String_o *name; // x0
  System_String_o *v21; // x22
  UnityEngine_Animation_o *v22; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  ClassBoardSelectIconComponent_AnimClipInfo_o *v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  UnityEngine_Animation_o *v27; // x23
  __int64 v28; // x21
  SchedulerTaskBase_TaskCallback_o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4353B7A & 1) == 0 )
  {
    sub_B70694(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__);
    sub_B70694(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B70694(&SchedulerTaskAnimation_TypeInfo);
    sub_B70694(&SchedulerTaskParallel_TypeInfo);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__);
    sub_B70694(&ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
    byte_4353B7A = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( iconCompoentList )
  {
    if ( iconCompoentList->fields._size )
    {
      v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v4,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v41,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconCompoentList,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v42 = v41;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v42,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v5 = sub_B70764(ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
        ClassBoardSelectViewManager___c__DisplayClass45_0___ctor(
          (ClassBoardSelectViewManager___c__DisplayClass45_0_o *)v5,
          0LL);
        if ( !v5 )
          sub_B7076C(v6, v7);
        current = (System_Int32_array **)v42.fields.current;
        *(_QWORD *)(v5 + 16) = v42.fields.current;
        v15 = v5 + 16;
        sub_B70630((BattleServantConfConponent_o *)(v5 + 16), current, v8, v9, v10, v11, v12, v13);
        v18 = *(_QWORD *)(v5 + 16);
        if ( !v18 )
          sub_B7076C(v16, v17);
        v19 = *(UnityEngine_AnimationState_o **)(v18 + 128);
        if ( v19 )
        {
          name = UnityEngine_AnimationState__get_name(v19, 0LL);
          v18 = *(_QWORD *)v15;
          if ( !*(_QWORD *)v15 )
            sub_B7076C(name, v17);
          v21 = name;
        }
        else
        {
          v21 = 0LL;
        }
        v22 = *(UnityEngine_Animation_o **)(v18 + 80);
        if ( !v22 )
          sub_B7076C(0LL, v17);
        Clip = UnityEngine_Animation__GetClip(v22, v21, 0LL);
        v24 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B70764(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v24, Clip, 0LL);
        if ( !*(_QWORD *)v15 )
          sub_B7076C(v25, v26);
        v27 = *(UnityEngine_Animation_o **)(*(_QWORD *)v15 + 80LL);
        v28 = sub_B70764(SchedulerTaskAnimation_TypeInfo);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v28, v27, v21, 0LL);
        v29 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v29,
          (Il2CppObject *)v5,
          Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v28 )
          sub_B7076C(v30, v31);
        *(_QWORD *)(v28 + 32) = v29;
        sub_B70630((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)v29, v32, v33, v34, v35, v36, v37);
        if ( !v4 )
          sub_B7076C(v38, v39);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v4,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v42,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      iconCompoentList = (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)sub_B70764(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor_17533044(
        (SchedulerTaskParallel_o *)iconCompoentList,
        (System_Collections_Generic_List_SchedulerTaskBase__o *)v4,
        0LL);
    }
    else
    {
      return 0LL;
    }
  }
  return (SchedulerTaskBase_o *)iconCompoentList;
}


System_Collections_Generic_List_ClassBoardSelectIconComponent__o *__fastcall ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v4; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__44_0; // x20
  Il2CppObject *v7; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19

  if ( (byte_4353B79 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    sub_B70694(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
    sub_B70694(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    sub_B70694(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__);
    sub_B70694(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4353B79 = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v4 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v4 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__44_0,
        v7,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__,
        (const MethodInfo_29AC578 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
      v8 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v8->__9__44_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__44_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v8->__9__44_0,
        (System_Int32_array **)_9__44_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__44_0,
            (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                 v15,
                                                                                 (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
  }
  return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v16;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *iconRootObj; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *selectedClassIcon; // x21
  SchedulerTaskParallel_o *v13; // x20
  struct ClassBoardSelectIconComponent_o *v14; // x8
  struct ClassBoardSelectIconComponent_o *v15; // x8
  System_String_o *v16; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v18; // x23
  const MethodInfo *v19; // x1
  float v20; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v22; // x21
  SchedulerTaskAnimation_o *v23; // x25
  const MethodInfo *v24; // x1
  System_Int32_array **v25; // x21
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v28; // x24
  SchedulerTaskBase_TaskCallback_o *v29; // x25
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  SchedulerTaskBase_o *v37; // x0
  System_Int32_array **v38; // x1
  System_Int32_array **v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct ClassBoardSelectIconComponent_o *v46; // x8
  UnityEngine_Animation_o *v47; // x19
  __int64 v48; // x24
  SchedulerTaskBase_TaskCallback_o *v49; // x19
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_GameObject_o *v56; // x19
  __int64 v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v77; // x0
  __int64 v78; // x0

  if ( (byte_4353B72 & 1) == 0 )
  {
    sub_B70694(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SchedulerTaskAnimation_TypeInfo);
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskParallel_TypeInfo);
    sub_B70694(&SchedulerTaskWaitTime_TypeInfo);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__);
    sub_B70694(&ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
    byte_4353B72 = 1;
  }
  v3 = sub_B70764(ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass37_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass37_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_33;
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( ((unsigned __int8)iconRootObj & 1) == 0 )
  {
    v14 = this->fields.selectedClassIcon;
    if ( v14 )
    {
      iconRootObj = v14->fields.iconRootObj;
      if ( iconRootObj )
      {
        iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(iconRootObj, 0LL);
        if ( iconRootObj )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)iconRootObj,
            this->fields.selectedClassIconBasePos,
            0LL);
          iconRootObj = (UnityEngine_GameObject_o *)this->fields.selectedClassIcon;
          if ( iconRootObj )
          {
            iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectIconComponent__GetClassBoardExitAnimName(
                                                        (ClassBoardSelectIconComponent_o *)iconRootObj,
                                                        v5);
            v15 = this->fields.selectedClassIcon;
            if ( v15 )
            {
              v16 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v15->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v16, 0LL);
                v18 = sub_B70764(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v18,
                  Clip,
                  0LL);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v19);
                if ( v18 )
                {
                  v20 = *(float *)(v18 + 28);
                  anim = this->fields.anim;
                  v22 = (System_String_o *)iconRootObj;
                  v23 = (SchedulerTaskAnimation_o *)sub_B70764(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v23, anim, v22, 0LL);
                  v25 = (System_Int32_array **)ClassBoardSelectViewManager__DelayAttachedTask(
                                                 v20,
                                                 (SchedulerTaskBase_o *)v23,
                                                 v24);
                  v26 = AvalonSceneManager_TypeInfo;
                  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v26 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v3 + 16) = DEFAULT_FADE_TIME;
                  v28 = sub_B70764(SchedulerTaskWaitTime_TypeInfo);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v28, DEFAULT_FADE_TIME, 0LL);
                  v29 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v29,
                    (Il2CppObject *)v3,
                    Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v28 )
                  {
                    *(_QWORD *)(v28 + 24) = v29;
                    sub_B70630(
                      (BattleServantConfConponent_o *)(v28 + 24),
                      (System_Int32_array **)v29,
                      v30,
                      v31,
                      v32,
                      v33,
                      v34,
                      v35);
                    v37 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v18 + 24),
                            (SchedulerTaskBase_o *)v28,
                            v36);
                    v38 = (System_Int32_array **)this->fields.selectedClassIcon;
                    v39 = (System_Int32_array **)v37;
                    *(_QWORD *)(v3 + 24) = v38;
                    sub_B70630((BattleServantConfConponent_o *)(v3 + 24), v38, v40, v41, v42, v43, v44, v45);
                    v46 = this->fields.selectedClassIcon;
                    if ( v46 )
                    {
                      v47 = v46->fields.anim;
                      v48 = sub_B70764(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v48, v47, v16, 0LL);
                      v49 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v49,
                        (Il2CppObject *)v3,
                        Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v48 )
                      {
                        *(_QWORD *)(v48 + 32) = v49;
                        sub_B70630(
                          (BattleServantConfConponent_o *)(v48 + 32),
                          (System_Int32_array **)v49,
                          v50,
                          v51,
                          v52,
                          v53,
                          v54,
                          v55);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_B706AC(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v56 = iconRootObj;
                          v57 = sub_B70754(v48, iconRootObj->klass->_1.element_class);
                          if ( v57 )
                          {
                            if ( !LODWORD(v56[1].klass) )
                              goto LABEL_34;
                            v56[1].monitor = (void *)v48;
                            sub_B70630(
                              (BattleServantConfConponent_o *)&v56[1].monitor,
                              (System_Int32_array **)v48,
                              v58,
                              v59,
                              v60,
                              v61,
                              v62,
                              v63);
                            if ( !v25 || (v57 = sub_B70754(v25, v56->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v56[1].klass) <= 1 )
                                goto LABEL_34;
                              *(_QWORD *)&v56[1].fields.m_CachedPtr = v25;
                              sub_B70630(
                                (BattleServantConfConponent_o *)&v56[1].fields,
                                v25,
                                v64,
                                v65,
                                v66,
                                v67,
                                v68,
                                v69);
                              if ( !v39 || (v57 = sub_B70754(v39, v56->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v56[1].klass) > 2 )
                                {
                                  v56[2].klass = (UnityEngine_GameObject_c *)v39;
                                  sub_B70630((BattleServantConfConponent_o *)&v56[2], v39, v70, v71, v72, v73, v74, v75);
                                  v13 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskParallel_TypeInfo);
                                  SchedulerTaskParallel___ctor(v13, (SchedulerTaskBase_array *)v56, 0LL);
                                  return (SchedulerTaskBase_o *)v13;
                                }
LABEL_34:
                                v77 = sub_B70798(v57);
                                sub_B70738(v77, 0LL);
                              }
                            }
                          }
                          v78 = sub_B7078C(v57);
                          sub_B70738(v78, 0LL);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_33:
    sub_B7076C(iconRootObj, v5);
  }
  v13 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v13, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v13;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfFirstTransition(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  void *FirstTransitionAnimName; // x0
  __int64 v4; // x1
  System_String_o *v5; // x21
  UnityEngine_AnimationClip_o *Clip; // x0
  const MethodInfo *v7; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v10; // s8
  SchedulerTaskAnimation_o *v11; // x20
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  SchedulerTaskBase_TaskCallback_o *_9__36_0; // x21
  Il2CppObject *v21; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  SchedulerTaskBase_array *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  SchedulerTaskParallel_o *v42; // x19
  __int64 v44; // x0
  __int64 v45; // x0

  if ( (byte_4353B71 & 1) == 0 )
  {
    sub_B70694(&SchedulerTaskAnimation_TypeInfo);
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskParallel_TypeInfo);
    sub_B70694(&SchedulerTaskWaitTime_TypeInfo);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__);
    sub_B70694(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_B70694(&StringLiteral_6637/*"FadeStart"*/);
    byte_4353B71 = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_20;
  v5 = (System_String_o *)FirstTransitionAnimName;
  Clip = UnityEngine_Animation__GetClip(this->fields.anim, (System_String_o *)FirstTransitionAnimName, 0LL);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                (ClassBoardSelectViewManager_o *)Clip,
                Clip,
                (System_String_o *)StringLiteral_6637/*"FadeStart"*/,
                0.0,
                v7);
  anim = this->fields.anim;
  v10 = EventTime;
  v11 = (SchedulerTaskAnimation_o *)sub_B70764(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v11, anim, v5, 0LL);
  v12 = sub_B70764(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v12, v10, 0LL);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = (struct ClassBoardSelectViewManager___c_StaticFields *)*((_QWORD *)FirstTransitionAnimName + 23);
  _9__36_0 = static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (*((_BYTE *)FirstTransitionAnimName + 307) & 4) != 0 && !*((_DWORD *)FirstTransitionAnimName + 56) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      _9__36_0,
      v21,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__,
      0LL);
    v22 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v22->__9__36_0 = _9__36_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v22->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v12
    || (*(_QWORD *)(v12 + 32) = _9__36_0,
        sub_B70630(
          (BattleServantConfConponent_o *)(v12 + 32),
          (System_Int32_array **)_9__36_0,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (FirstTransitionAnimName = (void *)sub_B706AC(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_20:
    sub_B7076C(FirstTransitionAnimName, v4);
  }
  v35 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v11 )
  {
    FirstTransitionAnimName = (void *)sub_B70754(v11, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_22;
  }
  if ( !v35->max_length )
    goto LABEL_21;
  v35->m_Items[0] = (SchedulerTaskBase_o *)v11;
  sub_B70630((BattleServantConfConponent_o *)v35->m_Items, (System_Int32_array **)v11, v29, v30, v31, v32, v33, v34);
  FirstTransitionAnimName = (void *)sub_B70754(v12, v35->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_22:
    v45 = sub_B7078C(FirstTransitionAnimName);
    sub_B70738(v45, 0LL);
  }
  if ( v35->max_length <= 1 )
  {
LABEL_21:
    v44 = sub_B70798(FirstTransitionAnimName);
    sub_B70738(v44, 0LL);
  }
  v35->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_B70630((BattleServantConfConponent_o *)&v35->m_Items[1], (System_Int32_array **)v12, v36, v37, v38, v39, v40, v41);
  v42 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v42, v35, 0LL);
  return (SchedulerTaskBase_o *)v42;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 iconRootObj; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x22
  struct ClassBoardSelectIconComponent_o *v10; // x0
  struct ClassBoardSelectIconComponent_o **p_selectedClassIcon; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *selectedClassIcon; // x22
  SchedulerTaskParallel_o *v19; // x19
  struct ClassBoardSelectIconComponent_o *v20; // x8
  System_String_o *v21; // x23
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v23; // x25
  const MethodInfo *v24; // x1
  float v25; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v27; // x22
  SchedulerTaskAnimation_o *v28; // x26
  const MethodInfo *v29; // x1
  SchedulerTaskBase_o *v30; // x0
  float v31; // s8
  System_Int32_array **v32; // x24
  __int64 v33; // x22
  Il2CppObject *v34; // x26
  SchedulerTaskBase_TaskCallback_o *v35; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  AvalonSceneManager_c *v42; // x0
  float DEFAULT_FADE_TIME; // w8
  System_Func_bool__o *v44; // x26
  __int64 v45; // x19
  SchedulerTaskBase_TaskCallback_o *v46; // x26
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x1
  System_Int32_array **v54; // x19
  UnityEngine_Animation_o *v55; // x20
  SchedulerTaskAnimation_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  SchedulerTaskBase_array *v63; // x20
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v83; // x0
  __int64 v84; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353B73 & 1) == 0 )
  {
    sub_B70694(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
    sub_B70694(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SchedulerTaskAnimation_TypeInfo);
    sub_B70694(&SchedulerTaskBase___TypeInfo);
    sub_B70694(&SchedulerTaskParallel_TypeInfo);
    sub_B70694(&SchedulerTaskWaitTime_TypeInfo);
    sub_B70694(&SchedulerTaskWaitWhile_TypeInfo);
    sub_B70694(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__);
    sub_B70694(&ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo);
    byte_4353B73 = 1;
  }
  v5 = sub_B70764(ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass38_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass38_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_38;
  *(_DWORD *)(v5 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
  v10 = (struct ClassBoardSelectIconComponent_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    iconArray,
                                                    (System_Func_TSource__bool__o *)v9,
                                                    (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  this->fields.selectedClassIcon = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectedClassIcon,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  iconRootObj = UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( (iconRootObj & 1) == 0 )
  {
    if ( *p_selectedClassIcon )
    {
      iconRootObj = (__int64)(*p_selectedClassIcon)->fields.iconRootObj;
      if ( iconRootObj )
      {
        iconRootObj = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconRootObj, 0LL);
        if ( iconRootObj )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconRootObj, 0LL);
          v20 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v20 )
          {
            iconRootObj = (__int64)v20->fields.classIconUi;
            if ( iconRootObj )
            {
              UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 168) + 1, 0LL);
              iconRootObj = (__int64)*p_selectedClassIcon;
              if ( *p_selectedClassIcon )
              {
                iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                         (ClassBoardSelectIconComponent_o *)iconRootObj,
                                         v7);
                if ( *p_selectedClassIcon )
                {
                  v21 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v21, 0LL);
                    v23 = sub_B70764(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v23,
                      Clip,
                      0LL);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v24);
                    if ( v23 )
                    {
                      v25 = *(float *)(v23 + 28);
                      anim = this->fields.anim;
                      v27 = (System_String_o *)iconRootObj;
                      v28 = (SchedulerTaskAnimation_o *)sub_B70764(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor(v28, anim, v27, 0LL);
                      v30 = ClassBoardSelectViewManager__DelayAttachedTask(v25, (SchedulerTaskBase_o *)v28, v29);
                      v31 = *(float *)(v23 + 44);
                      v32 = (System_Int32_array **)v30;
                      v33 = sub_B70764(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v33, v31, 0LL);
                      v34 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v35 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v35,
                        v34,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v33 )
                      {
                        *(_QWORD *)(v33 + 32) = v35;
                        sub_B70630(
                          (BattleServantConfConponent_o *)(v33 + 32),
                          (System_Int32_array **)v35,
                          v36,
                          v37,
                          v38,
                          v39,
                          v40,
                          v41);
                        v42 = AvalonSceneManager_TypeInfo;
                        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v42 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v42->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v5 + 20) = 1;
                        *(float *)(v5 + 24) = DEFAULT_FADE_TIME;
                        v44 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
                        System_Func_bool____ctor(
                          v44,
                          (Il2CppObject *)v5,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__,
                          (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
                        v45 = sub_B70764(SchedulerTaskWaitWhile_TypeInfo);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v45, v44, 0LL);
                        v46 = (SchedulerTaskBase_TaskCallback_o *)sub_B70764(SchedulerTaskBase_TaskCallback_TypeInfo);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v46,
                          (Il2CppObject *)v5,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v45 )
                        {
                          *(_QWORD *)(v45 + 24) = v46;
                          sub_B70630(
                            (BattleServantConfConponent_o *)(v45 + 24),
                            (System_Int32_array **)v46,
                            v47,
                            v48,
                            v49,
                            v50,
                            v51,
                            v52);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v23 + 24),
                                                   (SchedulerTaskBase_o *)v45,
                                                   v53);
                          if ( *p_selectedClassIcon )
                          {
                            v54 = (System_Int32_array **)iconRootObj;
                            v55 = (*p_selectedClassIcon)->fields.anim;
                            v56 = (SchedulerTaskAnimation_o *)sub_B70764(SchedulerTaskAnimation_TypeInfo);
                            SchedulerTaskAnimation___ctor(v56, v55, v21, 0LL);
                            iconRootObj = sub_B706AC(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v63 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v56
                                || (iconRootObj = sub_B70754(v56, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v63->max_length )
                                  goto LABEL_39;
                                v63->m_Items[0] = (SchedulerTaskBase_o *)v56;
                                sub_B70630(
                                  (BattleServantConfConponent_o *)v63->m_Items,
                                  (System_Int32_array **)v56,
                                  v57,
                                  v58,
                                  v59,
                                  v60,
                                  v61,
                                  v62);
                                if ( !v32 || (iconRootObj = sub_B70754(v32, v63->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v63->max_length <= 1 )
                                    goto LABEL_39;
                                  v63->m_Items[1] = (SchedulerTaskBase_o *)v32;
                                  sub_B70630(
                                    (BattleServantConfConponent_o *)&v63->m_Items[1],
                                    v32,
                                    v64,
                                    v65,
                                    v66,
                                    v67,
                                    v68,
                                    v69);
                                  iconRootObj = sub_B70754(v33, v63->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v63->max_length <= 2 )
                                      goto LABEL_39;
                                    v63->m_Items[2] = (SchedulerTaskBase_o *)v33;
                                    sub_B70630(
                                      (BattleServantConfConponent_o *)&v63->m_Items[2],
                                      (System_Int32_array **)v33,
                                      v70,
                                      v71,
                                      v72,
                                      v73,
                                      v74,
                                      v75);
                                    if ( !v54 || (iconRootObj = sub_B70754(v54, v63->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v63->max_length > 3 )
                                      {
                                        v63->m_Items[3] = (SchedulerTaskBase_o *)v54;
                                        sub_B70630(
                                          (BattleServantConfConponent_o *)&v63->m_Items[3],
                                          v54,
                                          v76,
                                          v77,
                                          v78,
                                          v79,
                                          v80,
                                          v81);
                                        v19 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskParallel_TypeInfo);
                                        SchedulerTaskParallel___ctor(v19, v63, 0LL);
                                        return (SchedulerTaskBase_o *)v19;
                                      }
LABEL_39:
                                      v83 = sub_B70798(iconRootObj);
                                      sub_B70738(v83, 0LL);
                                    }
                                  }
                                }
                              }
                              v84 = sub_B7078C(iconRootObj);
                              sub_B70738(v84, 0LL);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_B7076C(iconRootObj, v7);
  }
  v19 = (SchedulerTaskParallel_o *)sub_B70764(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v19, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v19;
}


void __fastcall ClassBoardSelectViewManager__HideSelectIconsActiveParticles(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ClassBoardSelectIconComponent_array *iconArray; // x19
  int max_length; // w8
  unsigned int v5; // w20
  __int64 v6; // x0

  iconArray = this->fields.iconArray;
  if ( !iconArray )
    goto LABEL_9;
  max_length = iconArray->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v6 = sub_B70798(this);
        sub_B70738(v6, 0LL);
      }
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_B7076C(this, method);
  }
}


void __fastcall ClassBoardSelectViewManager__Init(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  struct UnityEngine_AnimationState_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0
  System_String_o *age; // x19

  if ( (byte_4353B6A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353B6A = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v4 = (struct UnityEngine_AnimationState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    v3,
                                                    (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.animationStateArray,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v12);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.bgmId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
  if ( Entity )
  {
    age = Entity->fields.age;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(age, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OnClickBack(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x19
  System_String_o *SceneName; // x21
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4353B78 & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&SceneList_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4353B78 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v4 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17523664(v4, SceneName, 0LL);
  if ( !Instance )
    sub_B7076C(v5, v6);
  AvalonSceneManager__transitionScene_20803936(Instance, 32, 0LL, 1, (Il2CppObject *)v4, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OnClickIcon(
        ClassBoardSelectViewManager_o *this,
        ClassBoardSelectIconComponent_o *icon,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  void *onSelectClassBoard; // x0
  __int64 v8; // x1
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  struct ClassBoardBaseEntity_o *v10; // x8
  WebViewManager_o *Instance; // x0
  struct ClassBoardBaseEntity_o *v12; // x8
  CommonUI_o *v13; // x20
  System_String_o *v14; // x19
  System_String_o *closedMessage; // x21
  System_String_o *v16; // x19
  CommonUI_o *v17; // x20
  ClassBoardSelectViewManager___c_c *v18; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *v19; // x9
  System_Action_o *_9__35_1; // x22
  System_String_o *v21; // x21
  Il2CppObject *v22; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x22
  Il2CppObject *v32; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_4353B70 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int__int__Invoke__);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__);
    sub_B70694(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_B70694(&StringLiteral_3059/*"CLASS_BOARD_BASE_UNRELEASED"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353B70 = 1;
  }
  v5 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B7069C(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v6 = (System_Reflection_MethodBase_o *)sub_B70678(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !icon )
    goto LABEL_39;
  if ( *(&icon->fields.isReleased + 4) )
  {
    Entity_k__BackingField = icon->fields._Entity_k__BackingField;
    if ( Entity_k__BackingField && ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0LL) )
    {
      onSelectClassBoard = this->fields.onSelectClassBoard;
      if ( onSelectClassBoard )
      {
        v10 = icon->fields._Entity_k__BackingField;
        if ( v10 )
        {
          System_Action_int__int___Invoke(
            (System_Action_int__int__o *)onSelectClassBoard,
            v10->fields.id,
            v10->fields.iconId,
            (const MethodInfo_2658B04 *)Method_System_Action_int__int__Invoke__);
          return;
        }
LABEL_39:
        sub_B7076C(onSelectClassBoard, v8);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = icon->fields._Entity_k__BackingField;
      v13 = (CommonUI_o *)Instance;
      v14 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v12 )
        closedMessage = v12->fields.closedMessage;
      else
        closedMessage = 0LL;
      onSelectClassBoard = ClassBoardSelectViewManager___c_TypeInfo;
      if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
        onSelectClassBoard = ClassBoardSelectViewManager___c_TypeInfo;
      }
      static_fields = (struct ClassBoardSelectViewManager___c_StaticFields *)*((_QWORD *)onSelectClassBoard + 23);
      _9__35_0 = static_fields->__9__35_0;
      if ( !_9__35_0 )
      {
        if ( (*((_BYTE *)onSelectClassBoard + 307) & 4) != 0 && !*((_DWORD *)onSelectClassBoard + 56) )
        {
          j_il2cpp_runtime_class_init_0(onSelectClassBoard);
          static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        }
        v32 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(_9__35_0, v32, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__, 0LL);
        v33 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        v33->__9__35_0 = _9__35_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v33->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      if ( !v13 )
        goto LABEL_39;
      CommonUI__OpenNotificationDialog(v13, v14, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3059/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    onSelectClassBoard = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (CommonUI_o *)onSelectClassBoard;
    v18 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v18 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v19 = v18->static_fields;
    _9__35_1 = v19->__9__35_1;
    v21 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__35_1 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v19 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v19->__9;
      _9__35_1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(_9__35_1, v22, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__, 0LL);
      v23 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v23->__9__35_1 = _9__35_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v23->__9__35_1,
        (System_Int32_array **)_9__35_1,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    if ( !v17 )
      goto LABEL_39;
    CommonUI__OpenNotificationDialog(v17, v21, v16, _9__35_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4353B6E & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_bool___);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__);
    byte_4353B6E = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 81, v3, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OpenHelpIfNotYet(
        ClassBoardSelectViewManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x19

  if ( (byte_4353B6F & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_bool___);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__);
    sub_B70694(&ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo);
    byte_4353B6F = 1;
  }
  v5 = sub_B70764(ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass34_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass34_0_o *)v5,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
  v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v20, 0, 0, 0, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__PlayStartAction(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  MissionNotifyManager_o *v4; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20
  System_Action_Action__array *v7; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  ActionChain_o *v15; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  MissionNotifyManager_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x0

  if ( (byte_4353B6D & 1) == 0 )
  {
    sub_B70694(&ActionChain_TypeInfo);
    sub_B70694(&Method_ActionExtensions_Call_bool___);
    sub_B70694(&System_Action___TypeInfo);
    sub_B70694(&System_Action_Action____TypeInfo);
    sub_B70694(&Method_System_Action_Action___ctor__);
    sub_B70694(&System_Action_Action__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_B70694(&Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4353B6D = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v3);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4
    || (MissionNotifyManager__StartPause(v4, 0LL),
        v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__,
          0LL),
        v7 = (System_Action_Action__array *)sub_B706AC(System_Action_Action____TypeInfo, 1LL),
        v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v8,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
          (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__),
        !v7) )
  {
LABEL_18:
    sub_B7076C(v4, v5);
  }
  if ( v8 )
  {
    v4 = (MissionNotifyManager_o *)sub_B70754(v8, v7->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_20;
  }
  if ( !v7->max_length )
    goto LABEL_19;
  v7->m_Items[0] = (System_Action_Action__o *)v8;
  sub_B70630((BattleServantConfConponent_o *)v7->m_Items, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  v15 = (ActionChain_o *)sub_B70764(ActionChain_TypeInfo);
  ActionChain___ctor_21332936(v15, v7, 0LL);
  v4 = (MissionNotifyManager_o *)sub_B706AC(System_Action___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_18;
  v22 = v4;
  if ( v6 )
  {
    v4 = (MissionNotifyManager_o *)sub_B70754(v6, v4->klass->_1.element_class);
    if ( !v4 )
    {
LABEL_20:
      v24 = sub_B7078C(v4);
      sub_B70738(v24, 0LL);
    }
  }
  if ( !LODWORD(v22->fields.mNoDispInfos) )
  {
LABEL_19:
    v23 = sub_B70798(v4);
    sub_B70738(v23, 0LL);
  }
  v22->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v6;
  sub_B70630(
    (BattleServantConfConponent_o *)&v22->fields.mMissionNotifyComps,
    (System_Int32_array **)v6,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !v15 )
    goto LABEL_18;
  v4 = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                   (ChainableActionBase_o *)v15,
                                   (System_Action_array *)v22,
                                   0LL);
  if ( !v4 )
    goto LABEL_18;
  ChainableActionBase__Execute((ChainableActionBase_o *)v4, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Resume(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1

  ClassBoardSelectViewManager__SetUpHeaderItemList(this, (const MethodInfo *)classBoardBackground);
  if ( !classBoardBackground )
    sub_B7076C(v4, v5);
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0LL);
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__SetUpHeaderItemList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  ClassBoardUIController_o *classBoardUIController_k__BackingField; // x20
  System_Int32_array *headerDlspItemIdArray; // x19
  unsigned __int64 v7; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v10; // x3

  v2 = this;
  if ( (byte_4353B77 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_B70694(&IClassBoardResourceCatalog_TypeInfo);
    byte_4353B77 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  headerDlspItemIdArray = v2->fields.headerDlspItemIdArray;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_B7076C(this, method);
  ClassBoardUIController__SetItemList(
    classBoardUIController_k__BackingField,
    headerDlspItemIdArray,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    v10);
}


void __fastcall ClassBoardSelectViewManager__SetupClassBoardUIController(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v5; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct UnityEngine_Animation_o *anim; // x20
  UnityEngine_Transform_o *uiRoot; // x21
  System_Int32_array **v10; // x0
  ClassBoardSelectViewManager_o **p_classBoardUIController_k__BackingField; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  System_Action_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct ClassBoardUIController_o *v26; // x21
  System_Action_o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  struct IClassBoardResourceCatalog_o *v35; // x21
  IClassBoardResourceCatalog_c *v36; // x8
  ClassBoardUIController_o *v37; // x20
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1
  struct IClassBoardResourceCatalog_o *v43; // x20
  IClassBoardResourceCatalog_c *v44; // x8
  ClassBoardUIController_o *v45; // x19
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  AtlasManagerUnit_o *v49; // x20
  const MethodInfo *v50; // x3

  v2 = this;
  if ( (byte_4353B76 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager_OnClickBack__);
    sub_B70694(&Method_ClassBoardSelectViewManager_OpenHelp__);
    sub_B70694(&IClassBoardResourceCatalog_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_19978/*"img_txt_classscore_main"*/);
    this = (ClassBoardSelectViewManager_o *)sub_B70694(&StringLiteral_3099/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/);
    byte_4353B76 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_40;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_40;
  anim = this->fields.anim;
  uiRoot = v2->fields.uiRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)anim,
                                 uiRoot,
                                 (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v2->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v10;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v2->fields._classBoardUIController_k__BackingField;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields._classBoardUIController_k__BackingField,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this = (ClassBoardSelectViewManager_o *)v2->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_40;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, method);
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_40;
  classBoardUIController_k__BackingField->fields.onClickBack = v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = v2->fields._classBoardUIController_k__BackingField;
  v27 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v26 )
    goto LABEL_40;
  v26->fields.onClickHelp = v27;
  sub_B70630(
    (BattleServantConfConponent_o *)&v26->fields.onClickHelp,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_40;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, v34);
  v35 = v2->fields.resourceCatalog;
  if ( !v35 )
    goto LABEL_40;
  v36 = v35->klass;
  v37 = v2->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v35->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v36->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v39 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v40 = (__int64)&v36->vtable[*v39].method;
  }
  else
  {
LABEL_23:
    v40 = sub_B08590(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v40)(
                                            v35,
                                            *(_QWORD *)(v40 + 8));
  if ( !this )
    goto LABEL_40;
  if ( !v37 )
    goto LABEL_40;
  ClassBoardUIController__SetHeaderTitle(
    v37,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_19978/*"img_txt_classscore_main"*/,
    v41);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v2, v42);
  v43 = v2->fields.resourceCatalog;
  if ( !v43 )
    goto LABEL_40;
  v44 = v43->klass;
  v45 = v2->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v43->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v44->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v47 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&v43->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v48 = (__int64)&v44->vtable[*v47].method;
  }
  else
  {
LABEL_32:
    v48 = sub_B08590(v43, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v48)(
                                            v43,
                                            *(_QWORD *)(v48 + 8));
  if ( !this )
    goto LABEL_40;
  v49 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3099/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v45 )
LABEL_40:
    sub_B7076C(this, method);
  ClassBoardUIController__SetHeaderMessage(v45, v49, (System_String_o *)this, v50);
}


void __fastcall ClassBoardSelectViewManager__StartUp(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        IClassBoardResourceCatalog_o *resourceCatalog,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ClassBoardResourceCatalogAssetBundle_o **v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct IClassBoardResourceCatalog_o *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Action_o *v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x1
  ClassBoardResourceCatalogAssetBundle_o *v52; // x20
  __int64 v53; // x10
  System_Action_o *v54; // x21
  const MethodInfo *v55; // x2
  __int64 v56; // x10

  if ( (byte_4353B6B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__);
    sub_B70694(&ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo);
    byte_4353B6B = 1;
  }
  v9 = sub_B70764(ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass29_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass29_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = classBoardBackground;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)classBoardBackground,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = resourceCatalog;
  v24 = (ClassBoardResourceCatalogAssetBundle_o **)(v9 + 32);
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 32),
    (System_Int32_array **)resourceCatalog,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  *(_QWORD *)(v9 + 40) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 40),
    (System_Int32_array **)finishCallback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = *(struct IClassBoardResourceCatalog_o **)(v9 + 32);
  this->fields.resourceCatalog = v37;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v9,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v9 + 48) = v44;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v51)
    || (v52 = *v24) == 0LL
    || (v53 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1),
        *(&v52->klass->_2.bitflags2 + 1) < (unsigned int)v53)
    || (ClassBoardResourceCatalogAssetBundle_c *)v52->klass->_2.typeHierarchy[v53 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0LL);
    return;
  }
  v54 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v9,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__,
    0LL);
  v56 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v52->klass->_2.bitflags2 + 1) < (unsigned int)v56
    || (ClassBoardResourceCatalogAssetBundle_c *)v52->klass->_2.typeHierarchy[v56 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_B7076C(v10, v11);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v52, v54, v55);
}


void __fastcall ClassBoardSelectViewManager__UpdateSelectIconsActiveParticles(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  struct ClassBoardSelectIconComponent_array *iconArray; // x20
  int max_length; // w8
  unsigned int v4; // w21
  Il2CppClass **v5; // x8
  ClassBoardSelectIconComponent_o *v6; // x19
  bool IsShowActiveIcon; // w0
  const MethodInfo *v8; // x2
  __int64 v9; // x0

  iconArray = this->fields.iconArray;
  if ( !iconArray )
    goto LABEL_9;
  max_length = iconArray->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
      }
      v5 = &iconArray->obj.klass + (int)v4;
      v6 = (ClassBoardSelectIconComponent_o *)v5[4];
      if ( !v6 )
        break;
      IsShowActiveIcon = ClassBoardSelectIconComponent__IsShowActiveIcon(
                           (ClassBoardSelectIconComponent_o *)v5[4],
                           method);
      ClassBoardSelectIconComponent__SetParticlesActivate(v6, IsShowActiveIcon, v8);
      max_length = iconArray->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_B7076C(this, method);
  }
}


bool __fastcall ClassBoardSelectViewManager__ValidateBoardUIAtlas(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v5; // x10
  int *p_offset; // x11
  __int64 p_method; // x0

  v2 = this;
  if ( (byte_4353B6C & 1) == 0 )
  {
    sub_B70694(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardSelectViewManager_o *)sub_B70694(&StringLiteral_19978/*"img_txt_classscore_main"*/);
    byte_4353B6C = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_B7076C(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_19978/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__33_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B7C & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_bool___);
    byte_4353B7C = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__32_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4353B7B & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_bool___);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4353B7B = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
}


ClassBoardUIController_o *__fastcall ClassBoardSelectViewManager__get_classBoardUIController(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._classBoardUIController_k__BackingField;
}


void __fastcall ClassBoardSelectViewManager__set_classBoardUIController(
        ClassBoardSelectViewManager_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._classBoardUIController_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._classBoardUIController_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardSelectViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_434EDA4 & 1) == 0 )
  {
    sub_B70694(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_434EDA4 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall ClassBoardSelectViewManager___c___ctor(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___GetEventTime_b__26_0(
        ClassBoardSelectViewManager___c_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  if ( !ev )
    sub_B7076C(this, 0LL);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__44_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__36_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_434EDA5 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434EDA5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
    sub_B7076C(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___OnClickIcon_b__35_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___c___OnClickIcon_b__35_1(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___c___StartUp_b__29_2(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !x
    || (this = (ClassBoardSelectViewManager___c_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)x,
                                                      0LL)) == 0LL
    || (this = (ClassBoardSelectViewManager___c_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)this,
                                                      0LL)) == 0LL )
  {
    sub_B7076C(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32499584(gameObject, 0.0, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass26_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c__DisplayClass26_0___GetEventTime_b__1(
        ClassBoardSelectViewManager___c__DisplayClass26_0_o *this,
        UnityEngine_AnimationEvent_o *x,
        const MethodInfo *method)
{
  System_String_o *functionName; // x0

  if ( !x )
    sub_B7076C(this, 0LL);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.eventName, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass29_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass29_0___StartUp_b__0(
        ClassBoardSelectViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  ClassBoardBackground_o *classBoardBackground; // x0
  struct ClassBoardSelectViewManager_o *_4__this; // x8
  struct UITexture_o *bgTexture; // x20
  struct ClassBoardSelectViewManager_o *v6; // x8
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  struct ClassBoardSelectViewManager_o *v9; // x8
  System_Collections_Generic_IEnumerable_T__o *v10; // x20
  ClassBoardSelectViewManager___c_c *v11; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__29_2; // x21
  Il2CppObject *v14; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v15; // x0
  struct ClassBoardSelectViewManager_o *v16; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t klass; // w8

  if ( (byte_434EDA6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    sub_B70694(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
    sub_B70694(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__);
    sub_B70694(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_434EDA6 = 1;
  }
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_27;
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0LL);
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_27;
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_27;
  bgTexture = _4__this->fields.bgTexture;
  classBoardBackground = (ClassBoardBackground_o *)ClassBoardBackground__GetRenderTexture(classBoardBackground, 0LL);
  if ( !bgTexture )
    goto LABEL_27;
  classBoardBackground = (ClassBoardBackground_o *)((__int64 (__fastcall *)(struct UITexture_o *, ClassBoardBackground_o *, Il2CppMethodPointer))bgTexture->klass->vtable._27_set_mainTexture.method)(
                                                     bgTexture,
                                                     classBoardBackground,
                                                     bgTexture->klass->vtable._28_get_shader.methodPtr);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_27;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_B70764(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__,
      (const MethodInfo_264C148 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B70630(&this->fields.__9__1);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_27;
  v10 = (System_Collections_Generic_IEnumerable_T__o *)v9->fields.iconArray;
  v11 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v11 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__29_2;
  if ( !_9__29_2 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_2,
      v14,
      Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__,
      (const MethodInfo_264C148 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    v15 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v15->__9__29_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__29_2;
    sub_B70630(&v15->__9__29_2);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v10,
    (System_Action_T__o *)_9__29_2,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_27;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v16->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
  if ( classBoardBackground )
  {
    bgObject = classBoardBackground->fields.bgObject;
    if ( !bgObject )
      goto LABEL_27;
    klass = (int32_t)bgObject[7].klass;
  }
  else
  {
    klass = 0;
  }
  v16->fields.iconDefaultDepth = klass;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_27:
    sub_B7076C(classBoardBackground, method);
  ClassBoardSelectViewManager__SetupClassBoardUIController((ClassBoardSelectViewManager_o *)classBoardBackground, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass29_0___StartUp_b__1(
        ClassBoardSelectViewManager___c__DisplayClass29_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  IClassBoardResourceCatalog_o *resourceCatalog; // x20
  Il2CppObject *_4__this; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_434EDA7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    sub_B70694(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_B70694(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    byte_434EDA7 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v7,
    _4__this,
    (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__,
    (const MethodInfo_264C148 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
  if ( !x )
    sub_B7076C(v8, v9);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v7, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass29_0___StartUp_b__3(
        ClassBoardSelectViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.startUpAction, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass34_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass34_0___OpenHelpIfNotYet_b__0(
        ClassBoardSelectViewManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager___c__DisplayClass34_0_o *v2; // x19
  struct ClassBoardSelectViewManager_o *_4__this; // x8

  v2 = this;
  if ( (byte_434EDA8 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass34_0_o *)sub_B70694(&Method_ActionExtensions_Call_bool___);
    byte_434EDA8 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2BFC23C *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(v2->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass37_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass37_0___GetTaskOfComingFromClassBoard_b__0(
        ClassBoardSelectViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_434EDA9 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434EDA9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__maskFadein(Instance, this->fields.fadeTime, 0LL, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass37_0___GetTaskOfComingFromClassBoard_b__1(
        ClassBoardSelectViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardSelectIconComponent_o *tmpSelectedIcon; // x9
  struct ClassBoardSelectViewManager_o *_4__this; // x8

  tmpSelectedIcon = this->fields.tmpSelectedIcon;
  if ( !tmpSelectedIcon
    || (_4__this = this->fields.__4__this) == 0LL
    || (this = (ClassBoardSelectViewManager___c__DisplayClass37_0_o *)tmpSelectedIcon->fields.classIconUi) == 0LL )
  {
    sub_B7076C(this, method);
  }
  UIWidget__set_depth((UIWidget_o *)this, _4__this->fields.iconDefaultDepth, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass38_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c__DisplayClass38_0___GetTaskOfGoingToClassBoard_b__0(
        ClassBoardSelectViewManager___c__DisplayClass38_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8

  if ( !x || (Entity_k__BackingField = x->fields._Entity_k__BackingField) == 0LL )
    sub_B7076C(this, x);
  return Entity_k__BackingField->fields.id == this->fields.baseId;
}


bool __fastcall ClassBoardSelectViewManager___c__DisplayClass38_0___GetTaskOfGoingToClassBoard_b__1(
        ClassBoardSelectViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  return this->fields.fading;
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass38_0___GetTaskOfGoingToClassBoard_b__2(
        ClassBoardSelectViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__3; // x21
  CommonUI_o *v6; // x20
  float fadeTime; // s8

  if ( (byte_434EDAA & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__);
    byte_434EDAA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B70630(&this->fields.__9__3);
  }
  if ( !v6 )
    sub_B7076C(Instance, v4);
  CommonUI__maskFadeout(v6, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass38_0___GetTaskOfGoingToClassBoard_b__3(
        ClassBoardSelectViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass45_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass45_0___GetPlayClassBoardReleaseEffect_b__0(
        ClassBoardSelectViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectIconComponent_o *iconComponent; // x0

  iconComponent = this->fields.iconComponent;
  if ( !iconComponent )
    sub_B7076C(0LL, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, 0LL);
}