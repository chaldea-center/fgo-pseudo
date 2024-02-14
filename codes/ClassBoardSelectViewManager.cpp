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
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x1
  SchedulerTaskWaitTime_o *v8; // x21
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  SchedulerTaskBase_array *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  SchedulerTaskOrthostichy_o *v25; // x19
  __int64 v27; // x0
  __int64 v28; // x0

  if ( (byte_4214696 & 1) == 0 )
  {
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, method);
    sub_B0D8A4(&SchedulerTaskOrthostichy_TypeInfo, v6);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v7);
    byte_4214696 = 1;
  }
  v8 = (SchedulerTaskWaitTime_o *)sub_B0D974(SchedulerTaskWaitTime_TypeInfo, method, v3);
  SchedulerTaskWaitTime___ctor(v8, delay, 0LL);
  v9 = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v9 )
    sub_B0D97C(0LL);
  v16 = (SchedulerTaskBase_array *)v9;
  if ( v8 )
  {
    v9 = sub_B0D964(v8, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
      goto LABEL_12;
  }
  if ( !v16->max_length )
    goto LABEL_11;
  v16->m_Items[0] = (SchedulerTaskBase_o *)v8;
  sub_B0D840((BattleServantConfConponent_o *)v16->m_Items, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  if ( task )
  {
    v9 = sub_B0D964(task, v16->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_12:
      v28 = sub_B0D99C(v9);
      sub_B0D948(v28, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
  {
LABEL_11:
    v27 = sub_B0D9A8(v9);
    sub_B0D948(v27, 0LL);
  }
  v16->m_Items[1] = task;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v16->m_Items[1],
    (System_Int32_array **)task,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v25 = (SchedulerTaskOrthostichy_o *)sub_B0D974(SchedulerTaskOrthostichy_TypeInfo, v23, v24);
  SchedulerTaskOrthostichy___ctor(v25, v16, 0LL);
  return (SchedulerTaskBase_o *)v25;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v4; // x0

  if ( (byte_4214688 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4214688 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               1,
                                               0LL,
                                               (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4214689 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4214689 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               2,
                                               0LL,
                                               (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_IEnumerable_T__o *events; // x21
  ClassBoardSelectViewManager___c_c *v28; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x22
  Il2CppObject *v31; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_AnimationEvent_array *v39; // x19
  __int64 v40; // x1
  __int64 v41; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x21
  UnityEngine_AnimationEvent_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0

  if ( (byte_421468A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AnimationEvent___ctor__, animClip);
    sub_B0D8A4(&System_Action_AnimationEvent__TypeInfo, v8);
    sub_B0D8A4(&Method_BasicHelper_Find_AnimationEvent___, v9);
    sub_B0D8A4(&Method_BasicHelper_ForEach_AnimationEvent___, v10);
    sub_B0D8A4(&Method_System_Func_AnimationEvent__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_AnimationEvent__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__, v13);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__, v14);
    sub_B0D8A4(&ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo, v15);
    sub_B0D8A4(&ClassBoardSelectViewManager___c_TypeInfo, v16);
    byte_421468A = 1;
  }
  v17 = sub_B0D974(ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo, animClip, eventName);
  ClassBoardSelectViewManager___c__DisplayClass26_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass26_0_o *)v17,
    0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 16) = eventName,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v17 + 16),
          (System_Int32_array **)eventName,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        !animClip) )
  {
    sub_B0D97C(v18);
  }
  events = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v28 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v28 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_AnimationEvent__TypeInfo,
                                                                                      v25,
                                                                                      v26);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_0,
      v31,
      Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_AnimationEvent___ctor__);
    v32 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v32->__9__26_0 = (struct System_Action_AnimationEvent__o *)_9__26_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v32->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    events,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)events, 0LL);
  v39 = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_AnimationEvent__bool__TypeInfo,
                                                                             v40,
                                                                             v41);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v42,
    (Il2CppObject *)v17,
    Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_AnimationEvent__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_AnimationEvent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v39,
                                                                                                     (System_Func_T__bool__o *)v42,
                                                                                                     (const MethodInfo_170767C *)Method_BasicHelper_Find_AnimationEvent___);
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

  if ( (byte_4214687 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4214687 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               0,
                                               0LL,
                                               (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v3; // x1
  UnityEngine_Object_o *selectedClassIcon; // x20
  bool v5; // w0
  const MethodInfo *v6; // x1
  float result; // s0
  ClassBoardSelectIconComponent_o *ClassBoardEnterAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v9; // x8
  System_String_o *v10; // x1
  UnityEngine_AnimationClip_o *Clip; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  ClassBoardSelectIconComponent_AnimClipInfo_o *v14; // x19

  if ( (byte_4214695 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4214695 = 1;
  }
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  result = 0.0;
  if ( !v5 )
  {
    ClassBoardEnterAnimName = this->fields.selectedClassIcon;
    if ( !ClassBoardEnterAnimName
      || (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                                                         ClassBoardEnterAnimName,
                                                                         v6),
          (v9 = this->fields.selectedClassIcon) == 0LL)
      || (v10 = (System_String_o *)ClassBoardEnterAnimName,
          (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)v9->fields.anim) == 0LL)
      || (Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)ClassBoardEnterAnimName, v10, 0LL),
          v14 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B0D974(
                                                                  ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo,
                                                                  v12,
                                                                  v13),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v14, Clip, 0LL),
          !v14) )
    {
      sub_B0D97C(ClassBoardEnterAnimName);
    }
    return v14->fields._ForwardIconAnimStartTime_k__BackingField;
  }
  return result;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
        ClassBoardSelectViewManager_o *this,
        System_Collections_Generic_List_ClassBoardSelectIconComponent__o *iconCompoentList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  __int64 v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **current; // x1
  __int64 v29; // x21
  __int64 v30; // x0
  __int64 v31; // x8
  UnityEngine_AnimationState_o *v32; // x0
  System_String_o *name; // x0
  System_String_o *v34; // x22
  UnityEngine_Animation_o *v35; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  ClassBoardSelectIconComponent_AnimClipInfo_o *v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_Animation_o *v43; // x23
  __int64 v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  SchedulerTaskBase_TaskCallback_o *v47; // x22
  __int64 v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-70h] BYREF

  v3 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconCompoentList;
  if ( (byte_421469B & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, iconCompoentList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11);
    sub_B0D8A4(&SchedulerTaskAnimation_TypeInfo, v12);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v13);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v14);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__, v15);
    sub_B0D8A4(&ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo, v16);
    byte_421469B = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( v3 )
  {
    if ( v3->fields._size )
    {
      v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, iconCompoentList, method);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v17,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v59,
        v3,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v60 = v59;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v60,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v20 = sub_B0D974(ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo, v18, v19);
        ClassBoardSelectViewManager___c__DisplayClass45_0___ctor(
          (ClassBoardSelectViewManager___c__DisplayClass45_0_o *)v20,
          0LL);
        if ( !v20 )
          sub_B0D97C(v21);
        current = (System_Int32_array **)v60.fields.current;
        *(_QWORD *)(v20 + 16) = v60.fields.current;
        v29 = v20 + 16;
        sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), current, v22, v23, v24, v25, v26, v27);
        v31 = *(_QWORD *)(v20 + 16);
        if ( !v31 )
          sub_B0D97C(v30);
        v32 = *(UnityEngine_AnimationState_o **)(v31 + 128);
        if ( v32 )
        {
          name = UnityEngine_AnimationState__get_name(v32, 0LL);
          v31 = *(_QWORD *)v29;
          if ( !*(_QWORD *)v29 )
            sub_B0D97C(name);
          v34 = name;
        }
        else
        {
          v34 = 0LL;
        }
        v35 = *(UnityEngine_Animation_o **)(v31 + 80);
        if ( !v35 )
          sub_B0D97C(0LL);
        Clip = UnityEngine_Animation__GetClip(v35, v34, 0LL);
        v39 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B0D974(
                                                                ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo,
                                                                v37,
                                                                v38);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v39, Clip, 0LL);
        if ( !*(_QWORD *)v29 )
          sub_B0D97C(v40);
        v43 = *(UnityEngine_Animation_o **)(*(_QWORD *)v29 + 80LL);
        v44 = sub_B0D974(SchedulerTaskAnimation_TypeInfo, v41, v42);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v44, v43, v34, 0LL);
        v47 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v45, v46);
        SchedulerTaskBase_TaskCallback___ctor(
          v47,
          (Il2CppObject *)v20,
          Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v44 )
          sub_B0D97C(v48);
        *(_QWORD *)(v44 + 32) = v47;
        sub_B0D840((BattleServantConfConponent_o *)(v44 + 32), (System_Int32_array **)v47, v49, v50, v51, v52, v53, v54);
        if ( !v17 )
          sub_B0D97C(v55);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v17,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v60,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      v3 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sub_B0D974(
                                                                                            SchedulerTaskParallel_TypeInfo,
                                                                                            v56,
                                                                                            v57);
      SchedulerTaskParallel___ctor_16660936(
        (SchedulerTaskParallel_o *)v3,
        (System_Collections_Generic_List_SchedulerTaskBase__o *)v17,
        0LL);
    }
    else
    {
      return 0LL;
    }
  }
  return (SchedulerTaskBase_o *)v3;
}


System_Collections_Generic_List_ClassBoardSelectIconComponent__o *__fastcall ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v12; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__44_0; // x20
  Il2CppObject *v15; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19

  if ( (byte_421469A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___, v4);
    sub_B0D8A4(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo, v8);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__, v9);
    sub_B0D8A4(&ClassBoardSelectViewManager___c_TypeInfo, v10);
    byte_421469A = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v12 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v12 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_ClassBoardSelectIconComponent__bool__TypeInfo,
                                                                                      method,
                                                                                      v2);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__44_0,
        v15,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
      v16 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v16->__9__44_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__44_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v16->__9__44_0,
        (System_Int32_array **)_9__44_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__44_0,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                 v23,
                                                                                 (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v24,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
  }
  return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v24;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  UnityEngine_GameObject_o *iconRootObj; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *selectedClassIcon; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  SchedulerTaskParallel_o *v25; // x20
  struct ClassBoardSelectIconComponent_o *v26; // x8
  const MethodInfo *v27; // x1
  struct ClassBoardSelectIconComponent_o *v28; // x8
  System_String_o *v29; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x23
  const MethodInfo *v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  float v37; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v39; // x21
  SchedulerTaskAnimation_o *v40; // x25
  const MethodInfo *v41; // x1
  __int64 v42; // x1
  __int64 v43; // x2
  System_Int32_array **v44; // x21
  AvalonSceneManager_c *v45; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  SchedulerTaskBase_TaskCallback_o *v50; // x25
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x1
  SchedulerTaskBase_o *v58; // x0
  System_Int32_array **v59; // x1
  System_Int32_array **v60; // x23
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  struct ClassBoardSelectIconComponent_o *v69; // x8
  UnityEngine_Animation_o *v70; // x19
  __int64 v71; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  SchedulerTaskBase_TaskCallback_o *v74; // x19
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UnityEngine_GameObject_o *v81; // x19
  __int64 v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v104; // x0
  __int64 v105; // x0

  if ( (byte_4214693 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&SchedulerTaskAnimation_TypeInfo, v6);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v7);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v8);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v9);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v10);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__, v11);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__, v12);
    sub_B0D8A4(&ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo, v13);
    byte_4214693 = 1;
  }
  v14 = sub_B0D974(ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo, method, v2);
  ClassBoardSelectViewManager___c__DisplayClass37_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass37_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_33;
  *(_QWORD *)(v14 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( ((unsigned __int8)iconRootObj & 1) == 0 )
  {
    v26 = this->fields.selectedClassIcon;
    if ( v26 )
    {
      iconRootObj = v26->fields.iconRootObj;
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
                                                        v27);
            v28 = this->fields.selectedClassIcon;
            if ( v28 )
            {
              v29 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v28->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v29, 0LL);
                v33 = sub_B0D974(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, v31, v32);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v33,
                  Clip,
                  0LL);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v34);
                if ( v33 )
                {
                  v37 = *(float *)(v33 + 28);
                  anim = this->fields.anim;
                  v39 = (System_String_o *)iconRootObj;
                  v40 = (SchedulerTaskAnimation_o *)sub_B0D974(SchedulerTaskAnimation_TypeInfo, v35, v36);
                  SchedulerTaskAnimation___ctor(v40, anim, v39, 0LL);
                  v44 = (System_Int32_array **)ClassBoardSelectViewManager__DelayAttachedTask(
                                                 v37,
                                                 (SchedulerTaskBase_o *)v40,
                                                 v41);
                  v45 = AvalonSceneManager_TypeInfo;
                  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v45 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v45->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v14 + 16) = DEFAULT_FADE_TIME;
                  v47 = sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v42, v43);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v47, DEFAULT_FADE_TIME, 0LL);
                  v50 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(
                                                              SchedulerTaskBase_TaskCallback_TypeInfo,
                                                              v48,
                                                              v49);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v50,
                    (Il2CppObject *)v14,
                    Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v47 )
                  {
                    *(_QWORD *)(v47 + 24) = v50;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)(v47 + 24),
                      (System_Int32_array **)v50,
                      v51,
                      v52,
                      v53,
                      v54,
                      v55,
                      v56);
                    v58 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v33 + 24),
                            (SchedulerTaskBase_o *)v47,
                            v57);
                    v59 = (System_Int32_array **)this->fields.selectedClassIcon;
                    v60 = (System_Int32_array **)v58;
                    *(_QWORD *)(v14 + 24) = v59;
                    sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), v59, v61, v62, v63, v64, v65, v66);
                    v69 = this->fields.selectedClassIcon;
                    if ( v69 )
                    {
                      v70 = v69->fields.anim;
                      v71 = sub_B0D974(SchedulerTaskAnimation_TypeInfo, v67, v68);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v71, v70, v29, 0LL);
                      v74 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(
                                                                  SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                  v72,
                                                                  v73);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v74,
                        (Il2CppObject *)v14,
                        Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v71 )
                      {
                        *(_QWORD *)(v71 + 32) = v74;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)(v71 + 32),
                          (System_Int32_array **)v74,
                          v75,
                          v76,
                          v77,
                          v78,
                          v79,
                          v80);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v81 = iconRootObj;
                          v82 = sub_B0D964(v71, iconRootObj->klass->_1.element_class);
                          if ( v82 )
                          {
                            if ( !LODWORD(v81[1].klass) )
                              goto LABEL_34;
                            v81[1].monitor = (void *)v71;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)&v81[1].monitor,
                              (System_Int32_array **)v71,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88);
                            if ( !v44 || (v82 = sub_B0D964(v44, v81->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v81[1].klass) <= 1 )
                                goto LABEL_34;
                              *(_QWORD *)&v81[1].fields.m_CachedPtr = v44;
                              sub_B0D840(
                                (BattleServantConfConponent_o *)&v81[1].fields,
                                v44,
                                v89,
                                v90,
                                v91,
                                v92,
                                v93,
                                v94);
                              if ( !v60 || (v82 = sub_B0D964(v60, v81->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v81[1].klass) > 2 )
                                {
                                  v81[2].klass = (UnityEngine_GameObject_c *)v60;
                                  sub_B0D840(
                                    (BattleServantConfConponent_o *)&v81[2],
                                    v60,
                                    v95,
                                    v96,
                                    v97,
                                    v98,
                                    v99,
                                    v100);
                                  v25 = (SchedulerTaskParallel_o *)sub_B0D974(
                                                                     SchedulerTaskParallel_TypeInfo,
                                                                     v101,
                                                                     v102);
                                  SchedulerTaskParallel___ctor(v25, (SchedulerTaskBase_array *)v81, 0LL);
                                  return (SchedulerTaskBase_o *)v25;
                                }
LABEL_34:
                                v104 = sub_B0D9A8(v82);
                                sub_B0D948(v104, 0LL);
                              }
                            }
                          }
                          v105 = sub_B0D99C(v82);
                          sub_B0D948(v105, 0LL);
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
    sub_B0D97C(iconRootObj);
  }
  v25 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v23, v24);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v25, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v25;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfFirstTransition(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *FirstTransitionAnimName; // x0
  System_String_o *v11; // x21
  UnityEngine_AnimationClip_o *Clip; // x0
  const MethodInfo *v13; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v16; // s8
  __int64 v17; // x1
  __int64 v18; // x2
  SchedulerTaskAnimation_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x19
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  SchedulerTaskBase_TaskCallback_o *_9__36_0; // x21
  Il2CppObject *v32; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  SchedulerTaskBase_array *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  SchedulerTaskParallel_o *v55; // x19
  __int64 v57; // x0
  __int64 v58; // x0

  if ( (byte_4214692 & 1) == 0 )
  {
    sub_B0D8A4(&SchedulerTaskAnimation_TypeInfo, method);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v3);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v4);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__, v7);
    sub_B0D8A4(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_6562/*"FadeStart"*/, v9);
    byte_4214692 = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_20;
  v11 = (System_String_o *)FirstTransitionAnimName;
  Clip = UnityEngine_Animation__GetClip(this->fields.anim, (System_String_o *)FirstTransitionAnimName, 0LL);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                (ClassBoardSelectViewManager_o *)Clip,
                Clip,
                (System_String_o *)StringLiteral_6562/*"FadeStart"*/,
                0.0,
                v13);
  anim = this->fields.anim;
  v16 = EventTime;
  v19 = (SchedulerTaskAnimation_o *)sub_B0D974(SchedulerTaskAnimation_TypeInfo, v17, v18);
  SchedulerTaskAnimation___ctor(v19, anim, v11, 0LL);
  v22 = sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v20, v21);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v22, v16, 0LL);
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
    v32 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v23, v24);
    SchedulerTaskBase_TaskCallback___ctor(
      _9__36_0,
      v32,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__,
      0LL);
    v33 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v33->__9__36_0 = _9__36_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v33->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v22
    || (*(_QWORD *)(v22 + 32) = _9__36_0,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v22 + 32),
          (System_Int32_array **)_9__36_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29),
        (FirstTransitionAnimName = (void *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_20:
    sub_B0D97C(FirstTransitionAnimName);
  }
  v46 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v19 )
  {
    FirstTransitionAnimName = (void *)sub_B0D964(v19, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_22;
  }
  if ( !v46->max_length )
    goto LABEL_21;
  v46->m_Items[0] = (SchedulerTaskBase_o *)v19;
  sub_B0D840((BattleServantConfConponent_o *)v46->m_Items, (System_Int32_array **)v19, v40, v41, v42, v43, v44, v45);
  FirstTransitionAnimName = (void *)sub_B0D964(v22, v46->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_22:
    v58 = sub_B0D99C(FirstTransitionAnimName);
    sub_B0D948(v58, 0LL);
  }
  if ( v46->max_length <= 1 )
  {
LABEL_21:
    v57 = sub_B0D9A8(FirstTransitionAnimName);
    sub_B0D948(v57, 0LL);
  }
  v46->m_Items[1] = (SchedulerTaskBase_o *)v22;
  sub_B0D840((BattleServantConfConponent_o *)&v46->m_Items[1], (System_Int32_array **)v22, v47, v48, v49, v50, v51, v52);
  v55 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskParallel_TypeInfo, v53, v54);
  SchedulerTaskParallel___ctor(v55, v46, 0LL);
  return (SchedulerTaskBase_o *)v55;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 iconRootObj; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x22
  struct ClassBoardSelectIconComponent_o *v29; // x0
  struct ClassBoardSelectIconComponent_o **p_selectedClassIcon; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *selectedClassIcon; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  SchedulerTaskParallel_o *v40; // x19
  struct ClassBoardSelectIconComponent_o *v41; // x8
  const MethodInfo *v42; // x1
  System_String_o *v43; // x23
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x25
  const MethodInfo *v48; // x1
  __int64 v49; // x1
  __int64 v50; // x2
  float v51; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v53; // x22
  SchedulerTaskAnimation_o *v54; // x26
  const MethodInfo *v55; // x1
  SchedulerTaskBase_o *v56; // x0
  float v57; // s8
  System_Int32_array **v58; // x24
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x22
  Il2CppObject *v62; // x26
  __int64 v63; // x1
  __int64 v64; // x2
  SchedulerTaskBase_TaskCallback_o *v65; // x19
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x1
  __int64 v73; // x2
  AvalonSceneManager_c *v74; // x0
  float DEFAULT_FADE_TIME; // w8
  System_Func_bool__o *v76; // x26
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x19
  __int64 v80; // x1
  __int64 v81; // x2
  SchedulerTaskBase_TaskCallback_o *v82; // x26
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  const MethodInfo *v89; // x1
  __int64 v90; // x1
  __int64 v91; // x2
  System_Int32_array **v92; // x19
  UnityEngine_Animation_o *v93; // x20
  SchedulerTaskAnimation_o *v94; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  SchedulerTaskBase_array *v101; // x20
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v123; // x0
  __int64 v124; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4214694 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, *(_QWORD *)&baseId);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___, v7);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v8);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&SchedulerTaskAnimation_TypeInfo, v13);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v14);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v15);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v16);
    sub_B0D8A4(&SchedulerTaskWaitWhile_TypeInfo, v17);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v18);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__, v19);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__, v20);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__, v21);
    sub_B0D8A4(&ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo, v22);
    byte_4214694 = 1;
  }
  v23 = sub_B0D974(ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo, *(_QWORD *)&baseId, method);
  ClassBoardSelectViewManager___c__DisplayClass38_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass38_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_38;
  *(_DWORD *)(v23 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_ClassBoardSelectIconComponent__bool__TypeInfo,
                                                                             v25,
                                                                             v26);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v23,
    Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
  v29 = (struct ClassBoardSelectIconComponent_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    iconArray,
                                                    (System_Func_TSource__bool__o *)v28,
                                                    (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  this->fields.selectedClassIcon = v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectedClassIcon,
    (System_Int32_array **)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
          v41 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v41 )
          {
            iconRootObj = (__int64)v41->fields.classIconUi;
            if ( iconRootObj )
            {
              UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 168) + 1, 0LL);
              iconRootObj = (__int64)*p_selectedClassIcon;
              if ( *p_selectedClassIcon )
              {
                iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                         (ClassBoardSelectIconComponent_o *)iconRootObj,
                                         v42);
                if ( *p_selectedClassIcon )
                {
                  v43 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v43, 0LL);
                    v47 = sub_B0D974(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, v45, v46);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v47,
                      Clip,
                      0LL);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v48);
                    if ( v47 )
                    {
                      v51 = *(float *)(v47 + 28);
                      anim = this->fields.anim;
                      v53 = (System_String_o *)iconRootObj;
                      v54 = (SchedulerTaskAnimation_o *)sub_B0D974(SchedulerTaskAnimation_TypeInfo, v49, v50);
                      SchedulerTaskAnimation___ctor(v54, anim, v53, 0LL);
                      v56 = ClassBoardSelectViewManager__DelayAttachedTask(v51, (SchedulerTaskBase_o *)v54, v55);
                      v57 = *(float *)(v47 + 44);
                      v58 = (System_Int32_array **)v56;
                      v61 = sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v59, v60);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v61, v57, 0LL);
                      v62 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v65 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(
                                                                  SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                  v63,
                                                                  v64);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v65,
                        v62,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v61 )
                      {
                        *(_QWORD *)(v61 + 32) = v65;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)(v61 + 32),
                          (System_Int32_array **)v65,
                          v66,
                          v67,
                          v68,
                          v69,
                          v70,
                          v71);
                        v74 = AvalonSceneManager_TypeInfo;
                        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v74 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v74->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v23 + 20) = 1;
                        *(float *)(v23 + 24) = DEFAULT_FADE_TIME;
                        v76 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v72, v73);
                        System_Func_bool____ctor(
                          v76,
                          (Il2CppObject *)v23,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__,
                          (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
                        v79 = sub_B0D974(SchedulerTaskWaitWhile_TypeInfo, v77, v78);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v79, v76, 0LL);
                        v82 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(
                                                                    SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                    v80,
                                                                    v81);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v82,
                          (Il2CppObject *)v23,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v79 )
                        {
                          *(_QWORD *)(v79 + 24) = v82;
                          sub_B0D840(
                            (BattleServantConfConponent_o *)(v79 + 24),
                            (System_Int32_array **)v82,
                            v83,
                            v84,
                            v85,
                            v86,
                            v87,
                            v88);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v47 + 24),
                                                   (SchedulerTaskBase_o *)v79,
                                                   v89);
                          if ( *p_selectedClassIcon )
                          {
                            v92 = (System_Int32_array **)iconRootObj;
                            v93 = (*p_selectedClassIcon)->fields.anim;
                            v94 = (SchedulerTaskAnimation_o *)sub_B0D974(SchedulerTaskAnimation_TypeInfo, v90, v91);
                            SchedulerTaskAnimation___ctor(v94, v93, v43, 0LL);
                            iconRootObj = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v101 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v94
                                || (iconRootObj = sub_B0D964(v94, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v101->max_length )
                                  goto LABEL_39;
                                v101->m_Items[0] = (SchedulerTaskBase_o *)v94;
                                sub_B0D840(
                                  (BattleServantConfConponent_o *)v101->m_Items,
                                  (System_Int32_array **)v94,
                                  v95,
                                  v96,
                                  v97,
                                  v98,
                                  v99,
                                  v100);
                                if ( !v58 || (iconRootObj = sub_B0D964(v58, v101->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v101->max_length <= 1 )
                                    goto LABEL_39;
                                  v101->m_Items[1] = (SchedulerTaskBase_o *)v58;
                                  sub_B0D840(
                                    (BattleServantConfConponent_o *)&v101->m_Items[1],
                                    v58,
                                    v102,
                                    v103,
                                    v104,
                                    v105,
                                    v106,
                                    v107);
                                  iconRootObj = sub_B0D964(v61, v101->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v101->max_length <= 2 )
                                      goto LABEL_39;
                                    v101->m_Items[2] = (SchedulerTaskBase_o *)v61;
                                    sub_B0D840(
                                      (BattleServantConfConponent_o *)&v101->m_Items[2],
                                      (System_Int32_array **)v61,
                                      v108,
                                      v109,
                                      v110,
                                      v111,
                                      v112,
                                      v113);
                                    if ( !v92 || (iconRootObj = sub_B0D964(v92, v101->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v101->max_length > 3 )
                                      {
                                        v101->m_Items[3] = (SchedulerTaskBase_o *)v92;
                                        sub_B0D840(
                                          (BattleServantConfConponent_o *)&v101->m_Items[3],
                                          v92,
                                          v114,
                                          v115,
                                          v116,
                                          v117,
                                          v118,
                                          v119);
                                        v40 = (SchedulerTaskParallel_o *)sub_B0D974(
                                                                           SchedulerTaskParallel_TypeInfo,
                                                                           v120,
                                                                           v121);
                                        SchedulerTaskParallel___ctor(v40, v101, 0LL);
                                        return (SchedulerTaskBase_o *)v40;
                                      }
LABEL_39:
                                      v123 = sub_B0D9A8(iconRootObj);
                                      sub_B0D948(v123, 0LL);
                                    }
                                  }
                                }
                              }
                              v124 = sub_B0D99C(iconRootObj);
                              sub_B0D948(v124, 0LL);
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
    sub_B0D97C(iconRootObj);
  }
  v40 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v38, v39);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v40, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v40;
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
        v6 = sub_B0D9A8(this);
        sub_B0D948(v6, 0LL);
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
    sub_B0D97C(this);
  }
}


void __fastcall ClassBoardSelectViewManager__Init(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  struct UnityEngine_AnimationState_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  System_String_o *age; // x19

  if ( (byte_421468B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BgmMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_AnimationState___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    byte_421468B = 1;
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v9 = (struct UnityEngine_AnimationState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    v8,
                                                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.animationStateArray,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.bgmId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
  __int64 v2; // x1
  __int64 v3; // x1
  AvalonSceneManager_o *Instance; // x19
  System_String_o *SceneName; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  SceneJumpInfo_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_4214699 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&SceneList_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4214699 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v8 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v6, v7);
  SceneJumpInfo___ctor_16651556(v8, SceneName, 0LL);
  if ( !Instance )
    sub_B0D97C(v9);
  AvalonSceneManager__transitionScene_18659372(Instance, 32, 0LL, 1, (Il2CppObject *)v8, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OnClickIcon(
        ClassBoardSelectViewManager_o *this,
        ClassBoardSelectIconComponent_o *icon,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  void *onSelectClassBoard; // x0
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  struct ClassBoardBaseEntity_o *v18; // x8
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct ClassBoardBaseEntity_o *v22; // x8
  CommonUI_o *v23; // x20
  System_String_o *v24; // x19
  System_String_o *closedMessage; // x21
  System_String_o *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  CommonUI_o *v29; // x20
  ClassBoardSelectViewManager___c_c *v30; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *v31; // x9
  System_Action_o *_9__35_1; // x22
  System_String_o *v33; // x21
  Il2CppObject *v34; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x22
  Il2CppObject *v44; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_4214691 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__int__Invoke__, icon);
    sub_B0D8A4(&System_Action_TypeInfo, v5);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager_OnClickIcon__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__, v9);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__, v10);
    sub_B0D8A4(&ClassBoardSelectViewManager___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_3003/*"CLASS_BOARD_BASE_UNRELEASED"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4214691 = 1;
  }
  v14 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 75) & 2) != 0 )
    v14 = (_QWORD *)sub_B0D8AC(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v15 = (System_Reflection_MethodBase_o *)sub_B0D888(v14, v14[3]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
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
        v18 = icon->fields._Entity_k__BackingField;
        if ( v18 )
        {
          System_Action_int__int___Invoke(
            (System_Action_int__int__o *)onSelectClassBoard,
            v18->fields.id,
            v18->fields.iconId,
            (const MethodInfo_247B3F8 *)Method_System_Action_int__int__Invoke__);
          return;
        }
LABEL_39:
        sub_B0D97C(onSelectClassBoard);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = icon->fields._Entity_k__BackingField;
      v23 = (CommonUI_o *)Instance;
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v22 )
        closedMessage = v22->fields.closedMessage;
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
        v44 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21);
        System_Action___ctor(_9__35_0, v44, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__, 0LL);
        v45 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        v45->__9__35_0 = _9__35_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v45->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      if ( !v23 )
        goto LABEL_39;
      CommonUI__OpenNotificationDialog(v23, v24, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3003/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    onSelectClassBoard = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (CommonUI_o *)onSelectClassBoard;
    v30 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v30 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v31 = v30->static_fields;
    _9__35_1 = v31->__9__35_1;
    v33 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__35_1 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v31 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)v31->__9;
      _9__35_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
      System_Action___ctor(_9__35_1, v34, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__, 0LL);
      v35 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v35->__9__35_1 = _9__35_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v35->__9__35_1,
        (System_Int32_array **)_9__35_1,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    if ( !v29 )
      goto LABEL_39;
    CommonUI__OpenNotificationDialog(v29, v33, v26, _9__35_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_421468F & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__, v4);
    byte_421468F = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 81, v7, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OpenHelpIfNotYet(
        ClassBoardSelectViewManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x19

  if ( (byte_4214690 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, finishCallback);
    sub_B0D8A4(&System_Action_TypeInfo, v5);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__, v6);
    sub_B0D8A4(&ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo, v7);
    byte_4214690 = 1;
  }
  v8 = sub_B0D974(ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo, finishCallback, method);
  ClassBoardSelectViewManager___c__DisplayClass34_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass34_0_o *)v8,
    0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v8 + 24),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v24, 0, 0, 0, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__PlayStartAction(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  MissionNotifyManager_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20
  System_Action_Action__array *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  ActionChain_o *v30; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  MissionNotifyManager_o *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x0

  if ( (byte_421468E & 1) == 0 )
  {
    sub_B0D8A4(&ActionChain_TypeInfo, method);
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, v3);
    sub_B0D8A4(&System_Action___TypeInfo, v4);
    sub_B0D8A4(&System_Action_Action____TypeInfo, v5);
    sub_B0D8A4(&Method_System_Action_Action___ctor__, v6);
    sub_B0D8A4(&System_Action_Action__TypeInfo, v7);
    sub_B0D8A4(&System_Action_TypeInfo, v8);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v9);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__, v10);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v12);
    byte_421468E = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v13);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v14 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v14
    || (MissionNotifyManager__StartPause(v14, 0LL),
        v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16),
        System_Action___ctor(
          v17,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__,
          0LL),
        v18 = (System_Action_Action__array *)sub_B0D8BC(System_Action_Action____TypeInfo, 1LL),
        v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_Action__TypeInfo,
                                                                                     v19,
                                                                                     v20),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v21,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
          (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__),
        !v18) )
  {
LABEL_18:
    sub_B0D97C(v14);
  }
  if ( v21 )
  {
    v14 = (MissionNotifyManager_o *)sub_B0D964(v21, v18->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_20;
  }
  if ( !v18->max_length )
    goto LABEL_19;
  v18->m_Items[0] = (System_Action_Action__o *)v21;
  sub_B0D840((BattleServantConfConponent_o *)v18->m_Items, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  v30 = (ActionChain_o *)sub_B0D974(ActionChain_TypeInfo, v28, v29);
  ActionChain___ctor_20848392(v30, v18, 0LL);
  v14 = (MissionNotifyManager_o *)sub_B0D8BC(System_Action___TypeInfo, 1LL);
  if ( !v14 )
    goto LABEL_18;
  v37 = v14;
  if ( v17 )
  {
    v14 = (MissionNotifyManager_o *)sub_B0D964(v17, v14->klass->_1.element_class);
    if ( !v14 )
    {
LABEL_20:
      v39 = sub_B0D99C(v14);
      sub_B0D948(v39, 0LL);
    }
  }
  if ( !LODWORD(v37->fields.mNoDispInfos) )
  {
LABEL_19:
    v38 = sub_B0D9A8(v14);
    sub_B0D948(v38, 0LL);
  }
  v37->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v37->fields.mMissionNotifyComps,
    (System_Int32_array **)v17,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !v30 )
    goto LABEL_18;
  v14 = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                    (ChainableActionBase_o *)v30,
                                    (System_Action_array *)v37,
                                    0LL);
  if ( !v14 )
    goto LABEL_18;
  ChainableActionBase__Execute((ChainableActionBase_o *)v14, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Resume(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        const MethodInfo *method)
{
  __int64 v4; // x0

  ClassBoardSelectViewManager__SetUpHeaderItemList(this, (const MethodInfo *)classBoardBackground);
  if ( !classBoardBackground )
    sub_B0D97C(v4);
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
  if ( (byte_4214698 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_4214698 = 1;
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
    p_method = sub_AA67A0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v13; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct UnityEngine_Animation_o *anim; // x20
  UnityEngine_Transform_o *uiRoot; // x21
  System_Int32_array **v18; // x0
  ClassBoardSelectViewManager_o **p_classBoardUIController_k__BackingField; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct ClassBoardUIController_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x2
  struct IClassBoardResourceCatalog_o *v48; // x21
  IClassBoardResourceCatalog_c *v49; // x8
  ClassBoardUIController_o *v50; // x20
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x1
  struct IClassBoardResourceCatalog_o *v56; // x20
  IClassBoardResourceCatalog_c *v57; // x8
  ClassBoardUIController_o *v58; // x19
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  AtlasManagerUnit_o *v62; // x20
  const MethodInfo *v63; // x3

  v2 = this;
  if ( (byte_4214697 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager_OnClickBack__, v3);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager_OpenHelp__, v4);
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_19732/*"img_txt_classscore_main"*/, v9);
    this = (ClassBoardSelectViewManager_o *)sub_B0D8A4(&StringLiteral_3043/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, v10);
    byte_4214697 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_40;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  v18 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)anim,
                                 uiRoot,
                                 (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v2->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v18;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v2->fields._classBoardUIController_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields._classBoardUIController_k__BackingField,
    v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this = (ClassBoardSelectViewManager_o *)v2->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_40;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, v26);
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  v30 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(v30, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_40;
  classBoardUIController_k__BackingField->fields.onClickBack = v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = v2->fields._classBoardUIController_k__BackingField;
  v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v37 )
    goto LABEL_40;
  v37->fields.onClickHelp = v40;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v37->fields.onClickHelp,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_40;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, v47);
  v48 = v2->fields.resourceCatalog;
  if ( !v48 )
    goto LABEL_40;
  v49 = v48->klass;
  v50 = v2->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v48->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v49->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v52 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v53 = (__int64)&v49->vtable[*v52].method;
  }
  else
  {
LABEL_23:
    v53 = sub_AA67A0(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v53)(
                                            v48,
                                            *(_QWORD *)(v53 + 8));
  if ( !this )
    goto LABEL_40;
  if ( !v50 )
    goto LABEL_40;
  ClassBoardUIController__SetHeaderTitle(
    v50,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_19732/*"img_txt_classscore_main"*/,
    v54);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v2, v55);
  v56 = v2->fields.resourceCatalog;
  if ( !v56 )
    goto LABEL_40;
  v57 = v56->klass;
  v58 = v2->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v56->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v57->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v60 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v61 = (__int64)&v57->vtable[*v60].method;
  }
  else
  {
LABEL_32:
    v61 = sub_AA67A0(v56, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v61)(
                                            v56,
                                            *(_QWORD *)(v61 + 8));
  if ( !this )
    goto LABEL_40;
  v62 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3043/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v58 )
LABEL_40:
    sub_B0D97C(this);
  ClassBoardUIController__SetHeaderMessage(v58, v62, (System_String_o *)this, v63);
}


void __fastcall ClassBoardSelectViewManager__StartUp(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        IClassBoardResourceCatalog_o *resourceCatalog,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  ClassBoardResourceCatalogAssetBundle_o **v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct IClassBoardResourceCatalog_o *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x1
  __int64 v57; // x1
  __int64 v58; // x2
  ClassBoardResourceCatalogAssetBundle_o *v59; // x20
  __int64 v60; // x10
  System_Action_o *v61; // x21
  const MethodInfo *v62; // x2
  __int64 v63; // x10

  if ( (byte_421468C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, classBoardBackground);
    sub_B0D8A4(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v9);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__, v10);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__, v11);
    sub_B0D8A4(&ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo, v12);
    byte_421468C = 1;
  }
  v13 = sub_B0D974(ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo, classBoardBackground, resourceCatalog);
  ClassBoardSelectViewManager___c__DisplayClass29_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass29_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = classBoardBackground;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)classBoardBackground,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v13 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v13 + 32) = resourceCatalog;
  v27 = (ClassBoardResourceCatalogAssetBundle_o **)(v13 + 32);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v13 + 32),
    (System_Int32_array **)resourceCatalog,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v13 + 40),
    (System_Int32_array **)finishCallback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = *(struct IClassBoardResourceCatalog_o **)(v13 + 32);
  this->fields.resourceCatalog = v40;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v13 + 48) = v49;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 48), (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v56)
    || (v59 = *v27) == 0LL
    || (v60 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1),
        *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v60)
    || (ClassBoardResourceCatalogAssetBundle_c *)v59->klass->_2.typeHierarchy[v60 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 48), 0LL);
    return;
  }
  v61 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v57, v58);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__,
    0LL);
  v63 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v63
    || (ClassBoardResourceCatalogAssetBundle_c *)v59->klass->_2.typeHierarchy[v63 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_B0D97C(v14);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v59, v61, v62);
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
        v9 = sub_B0D9A8(this);
        sub_B0D948(v9, 0LL);
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
    sub_B0D97C(this);
  }
}


bool __fastcall ClassBoardSelectViewManager__ValidateBoardUIAtlas(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager_o *v2; // x19
  __int64 v3; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v6; // x10
  int *p_offset; // x11
  __int64 p_method; // x0

  v2 = this;
  if ( (byte_421468D & 1) == 0 )
  {
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, method);
    this = (ClassBoardSelectViewManager_o *)sub_B0D8A4(&StringLiteral_19732/*"img_txt_classscore_main"*/, v3);
    byte_421468D = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_B0D97C(this);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_19732/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__33_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_421469D & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, method);
    byte_421469D = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__32_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MissionNotifyManager_o *v5; // x0

  if ( (byte_421469C & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, method);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_421469C = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v5 )
    sub_B0D97C(0LL);
  MissionNotifyManager__EndPause(v5, 0LL);
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
  sub_B0D840(
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211E30 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardSelectViewManager___c_TypeInfo, v1);
    byte_4211E30 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ClassBoardSelectViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__44_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__36_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  CommonUI_o *v4; // x19

  if ( (byte_4211E31 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4211E31 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
    sub_B0D97C(Instance);
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
    sub_B0D97C(this);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_31180844(gameObject, 0.0, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ClassBoardBackground_o *classBoardBackground; // x0
  struct ClassBoardSelectViewManager_o *_4__this; // x8
  struct UITexture_o *bgTexture; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  struct ClassBoardSelectViewManager_o *v14; // x8
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  struct ClassBoardSelectViewManager_o *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  ClassBoardSelectViewManager___c_c *v21; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__29_2; // x21
  Il2CppObject *v24; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v25; // x0
  struct ClassBoardSelectViewManager_o *v26; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t klass; // w8

  if ( (byte_4211E32 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ClassBoardSelectIconComponent___ctor__, method);
    sub_B0D8A4(&System_Action_ClassBoardSelectIconComponent__TypeInfo, v3);
    sub_B0D8A4(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___, v4);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___, v5);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__, v6);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__, v7);
    sub_B0D8A4(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    byte_4211E32 = 1;
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
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_27;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v14->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_B0D974(
                                                                       System_Action_ClassBoardSelectIconComponent__TypeInfo,
                                                                       v12,
                                                                       v13);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__,
      (const MethodInfo_246EA3C *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_27;
  v20 = (System_Collections_Generic_IEnumerable_T__o *)v19->fields.iconArray;
  v21 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v21 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__29_2;
  if ( !_9__29_2 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_ClassBoardSelectIconComponent__TypeInfo,
                                                                                      v17,
                                                                                      v18);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_2,
      v24,
      Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__,
      (const MethodInfo_246EA3C *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    v25 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v25->__9__29_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__29_2;
    sub_B0D840(&v25->__9__29_2, _9__29_2);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v20,
    (System_Action_T__o *)_9__29_2,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_27;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v26->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
  v26->fields.iconDefaultDepth = klass;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_27:
    sub_B0D97C(classBoardBackground);
  ClassBoardSelectViewManager__SetupClassBoardUIController((ClassBoardSelectViewManager_o *)classBoardBackground, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass29_0___StartUp_b__1(
        ClassBoardSelectViewManager___c__DisplayClass29_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  IClassBoardResourceCatalog_o *resourceCatalog; // x20
  Il2CppObject *_4__this; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21
  __int64 v10; // x0

  if ( (byte_4211E33 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ClassBoardSelectIconComponent___ctor__, x);
    sub_B0D8A4(&System_Action_ClassBoardSelectIconComponent__TypeInfo, v5);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager_OnClickIcon__, v6);
    byte_4211E33 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_ClassBoardSelectIconComponent__TypeInfo,
                                                                              x,
                                                                              method);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    _4__this,
    (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__,
    (const MethodInfo_246EA3C *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
  if ( !x )
    sub_B0D97C(v10);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v9, 0LL);
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
  if ( (byte_4211E34 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass34_0_o *)sub_B0D8A4(
                                                                    &Method_ActionExtensions_Call_bool___,
                                                                    method);
    byte_4211E34 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(this);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
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

  if ( (byte_4211E35 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211E35 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__3; // x21
  CommonUI_o *v9; // x20
  float fadeTime; // s8

  if ( (byte_4211E36 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__, v4);
    byte_4211E36 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v9 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B0D840(&this->fields.__9__3, _9__3);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  CommonUI__maskFadeout(v9, 2, fadeTime, _9__3, 0LL);
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
    sub_B0D97C(0LL);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, 0LL);
}