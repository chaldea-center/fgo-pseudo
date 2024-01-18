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
  __int64 v5; // x1
  __int64 v6; // x1
  SchedulerTaskWaitTime_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
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
  SchedulerTaskOrthostichy_o *v23; // x19
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_418956C & 1) == 0 )
  {
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, method);
    sub_B2C35C(&SchedulerTaskOrthostichy_TypeInfo, v5);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v6);
    byte_418956C = 1;
  }
  v7 = (SchedulerTaskWaitTime_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v7, delay, 0LL);
  v8 = sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v8 )
    sub_B2C434(0LL, v9);
  v16 = (SchedulerTaskBase_array *)v8;
  if ( v7 )
  {
    v8 = sub_B2C41C(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
      goto LABEL_12;
  }
  if ( !v16->max_length )
    goto LABEL_11;
  v16->m_Items[0] = (SchedulerTaskBase_o *)v7;
  sub_B2C2F8((BattleServantConfConponent_o *)v16->m_Items, (System_Int32_array **)v7, v10, v11, v12, v13, v14, v15);
  if ( task )
  {
    v8 = sub_B2C41C(task, v16->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_12:
      v26 = sub_B2C454(v8);
      sub_B2C400(v26, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
  {
LABEL_11:
    v25 = sub_B2C460(v8);
    sub_B2C400(v25, 0LL);
  }
  v16->m_Items[1] = task;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v16->m_Items[1],
    (System_Int32_array **)task,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (SchedulerTaskOrthostichy_o *)sub_B2C42C(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v23, v16, 0LL);
  return (SchedulerTaskBase_o *)v23;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v4; // x0

  if ( (byte_418955E & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_418955E = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               1,
                                               0LL,
                                               (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_418955F & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_418955F = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               2,
                                               0LL,
                                               (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_T__o *events; // x21
  ClassBoardSelectViewManager___c_c *v27; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x22
  Il2CppObject *v30; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_AnimationEvent_array *v38; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x21
  UnityEngine_AnimationEvent_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0

  if ( (byte_4189560 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AnimationEvent___ctor__, animClip);
    sub_B2C35C(&System_Action_AnimationEvent__TypeInfo, v8);
    sub_B2C35C(&Method_BasicHelper_Find_AnimationEvent___, v9);
    sub_B2C35C(&Method_BasicHelper_ForEach_AnimationEvent___, v10);
    sub_B2C35C(&Method_System_Func_AnimationEvent__bool___ctor__, v11);
    sub_B2C35C(&System_Func_AnimationEvent__bool__TypeInfo, v12);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__, v13);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__, v14);
    sub_B2C35C(&ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo, v15);
    sub_B2C35C(&ClassBoardSelectViewManager___c_TypeInfo, v16);
    byte_4189560 = 1;
  }
  v17 = sub_B2C42C(ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass26_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass26_0_o *)v17,
    0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 16) = eventName,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v17 + 16),
          (System_Int32_array **)eventName,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        !animClip) )
  {
    sub_B2C434(v18, v19);
  }
  events = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v27 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v27 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AnimationEvent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_0,
      v30,
      Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_AnimationEvent___ctor__);
    v31 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v31->__9__26_0 = (struct System_Action_AnimationEvent__o *)_9__26_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    events,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)events, 0LL);
  v38 = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v17,
    Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_AnimationEvent__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_AnimationEvent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v38,
                                                                                                     (System_Func_T__bool__o *)v39,
                                                                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_AnimationEvent___);
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

  if ( (byte_418955D & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_418955D = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               0,
                                               0LL,
                                               (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  MethodInfo *v6; // x1
  float result; // s0
  ClassBoardSelectIconComponent_o *ClassBoardEnterAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v9; // x8
  UnityEngine_AnimationClip_o *Clip; // x20
  ClassBoardSelectIconComponent_AnimClipInfo_o *v11; // x19

  if ( (byte_418956B & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418956B = 1;
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
      || (v6 = (MethodInfo *)ClassBoardEnterAnimName,
          (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)v9->fields.anim) == 0LL)
      || (Clip = UnityEngine_Animation__GetClip(
                   (UnityEngine_Animation_o *)ClassBoardEnterAnimName,
                   (System_String_o *)v6,
                   0LL),
          v11 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B2C42C(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v11, Clip, 0LL),
          !v11) )
    {
      sub_B2C434(ClassBoardEnterAnimName, v6);
    }
    return v11->fields._ForwardIconAnimStartTime_k__BackingField;
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
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **current; // x1
  __int64 v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x8
  UnityEngine_AnimationState_o *v32; // x0
  System_String_o *name; // x0
  System_String_o *v34; // x22
  UnityEngine_Animation_o *v35; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  ClassBoardSelectIconComponent_AnimClipInfo_o *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  UnityEngine_Animation_o *v40; // x23
  __int64 v41; // x21
  SchedulerTaskBase_TaskCallback_o *v42; // x22
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x0
  __int64 v52; // x1
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-70h] BYREF

  v3 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconCompoentList;
  if ( (byte_4189571 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, iconCompoentList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11);
    sub_B2C35C(&SchedulerTaskAnimation_TypeInfo, v12);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v13);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v14);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__, v15);
    sub_B2C35C(&ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo, v16);
    byte_4189571 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( v3 )
  {
    if ( v3->fields._size )
    {
      v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v17,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v54,
        v3,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v55 = v54;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v55,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v18 = sub_B2C42C(ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
        ClassBoardSelectViewManager___c__DisplayClass45_0___ctor(
          (ClassBoardSelectViewManager___c__DisplayClass45_0_o *)v18,
          0LL);
        if ( !v18 )
          sub_B2C434(v19, v20);
        current = (System_Int32_array **)v55.fields.current;
        *(_QWORD *)(v18 + 16) = v55.fields.current;
        v28 = v18 + 16;
        sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), current, v21, v22, v23, v24, v25, v26);
        v31 = *(_QWORD *)(v18 + 16);
        if ( !v31 )
          sub_B2C434(v29, v30);
        v32 = *(UnityEngine_AnimationState_o **)(v31 + 128);
        if ( v32 )
        {
          name = UnityEngine_AnimationState__get_name(v32, 0LL);
          v31 = *(_QWORD *)v28;
          if ( !*(_QWORD *)v28 )
            sub_B2C434(name, v30);
          v34 = name;
        }
        else
        {
          v34 = 0LL;
        }
        v35 = *(UnityEngine_Animation_o **)(v31 + 80);
        if ( !v35 )
          sub_B2C434(0LL, v30);
        Clip = UnityEngine_Animation__GetClip(v35, v34, 0LL);
        v37 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B2C42C(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v37, Clip, 0LL);
        if ( !*(_QWORD *)v28 )
          sub_B2C434(v38, v39);
        v40 = *(UnityEngine_Animation_o **)(*(_QWORD *)v28 + 80LL);
        v41 = sub_B2C42C(SchedulerTaskAnimation_TypeInfo);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v41, v40, v34, 0LL);
        v42 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v42,
          (Il2CppObject *)v18,
          Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v41 )
          sub_B2C434(v43, v44);
        *(_QWORD *)(v41 + 32) = v42;
        sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 32), (System_Int32_array **)v42, v45, v46, v47, v48, v49, v50);
        if ( !v17 )
          sub_B2C434(v51, v52);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v17,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v55,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      v3 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor_17302252(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v11; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__44_0; // x20
  Il2CppObject *v14; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19

  if ( (byte_4189570 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___, v3);
    sub_B2C35C(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__, v4);
    sub_B2C35C(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo, v7);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__, v8);
    sub_B2C35C(&ClassBoardSelectViewManager___c_TypeInfo, v9);
    byte_4189570 = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v11 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v11 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__44_0,
        v14,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
      v15 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v15->__9__44_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__44_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v15->__9__44_0,
        (System_Int32_array **)_9__44_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__44_0,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                 v22,
                                                                                 (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
  }
  return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v23;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
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
  __int64 v13; // x20
  UnityEngine_GameObject_o *iconRootObj; // x0
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *selectedClassIcon; // x21
  SchedulerTaskParallel_o *v23; // x20
  struct ClassBoardSelectIconComponent_o *v24; // x8
  struct ClassBoardSelectIconComponent_o *v25; // x8
  System_String_o *v26; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v28; // x23
  const MethodInfo *v29; // x1
  float v30; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v32; // x21
  SchedulerTaskAnimation_o *v33; // x25
  const MethodInfo *v34; // x1
  System_Int32_array **v35; // x21
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v38; // x24
  SchedulerTaskBase_TaskCallback_o *v39; // x25
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  SchedulerTaskBase_o *v47; // x0
  System_Int32_array **v48; // x1
  System_Int32_array **v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct ClassBoardSelectIconComponent_o *v56; // x8
  UnityEngine_Animation_o *v57; // x19
  __int64 v58; // x24
  SchedulerTaskBase_TaskCallback_o *v59; // x19
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_GameObject_o *v66; // x19
  __int64 v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v87; // x0
  __int64 v88; // x0

  if ( (byte_4189569 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&SchedulerTaskAnimation_TypeInfo, v5);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v6);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v7);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v8);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__, v10);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__, v11);
    sub_B2C35C(&ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo, v12);
    byte_4189569 = 1;
  }
  v13 = sub_B2C42C(ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass37_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass37_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_33;
  *(_QWORD *)(v13 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( ((unsigned __int8)iconRootObj & 1) == 0 )
  {
    v24 = this->fields.selectedClassIcon;
    if ( v24 )
    {
      iconRootObj = v24->fields.iconRootObj;
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
                                                        v15);
            v25 = this->fields.selectedClassIcon;
            if ( v25 )
            {
              v26 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v25->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v26, 0LL);
                v28 = sub_B2C42C(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v28,
                  Clip,
                  0LL);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v29);
                if ( v28 )
                {
                  v30 = *(float *)(v28 + 28);
                  anim = this->fields.anim;
                  v32 = (System_String_o *)iconRootObj;
                  v33 = (SchedulerTaskAnimation_o *)sub_B2C42C(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v33, anim, v32, 0LL);
                  v35 = (System_Int32_array **)ClassBoardSelectViewManager__DelayAttachedTask(
                                                 v30,
                                                 (SchedulerTaskBase_o *)v33,
                                                 v34);
                  v36 = AvalonSceneManager_TypeInfo;
                  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v36 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v13 + 16) = DEFAULT_FADE_TIME;
                  v38 = sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v38, DEFAULT_FADE_TIME, 0LL);
                  v39 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v39,
                    (Il2CppObject *)v13,
                    Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v38 )
                  {
                    *(_QWORD *)(v38 + 24) = v39;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)(v38 + 24),
                      (System_Int32_array **)v39,
                      v40,
                      v41,
                      v42,
                      v43,
                      v44,
                      v45);
                    v47 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v28 + 24),
                            (SchedulerTaskBase_o *)v38,
                            v46);
                    v48 = (System_Int32_array **)this->fields.selectedClassIcon;
                    v49 = (System_Int32_array **)v47;
                    *(_QWORD *)(v13 + 24) = v48;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), v48, v50, v51, v52, v53, v54, v55);
                    v56 = this->fields.selectedClassIcon;
                    if ( v56 )
                    {
                      v57 = v56->fields.anim;
                      v58 = sub_B2C42C(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v58, v57, v26, 0LL);
                      v59 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v59,
                        (Il2CppObject *)v13,
                        Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v58 )
                      {
                        *(_QWORD *)(v58 + 32) = v59;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)(v58 + 32),
                          (System_Int32_array **)v59,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64,
                          v65);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v66 = iconRootObj;
                          v67 = sub_B2C41C(v58, iconRootObj->klass->_1.element_class);
                          if ( v67 )
                          {
                            if ( !LODWORD(v66[1].klass) )
                              goto LABEL_34;
                            v66[1].monitor = (void *)v58;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)&v66[1].monitor,
                              (System_Int32_array **)v58,
                              v68,
                              v69,
                              v70,
                              v71,
                              v72,
                              v73);
                            if ( !v35 || (v67 = sub_B2C41C(v35, v66->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v66[1].klass) <= 1 )
                                goto LABEL_34;
                              *(_QWORD *)&v66[1].fields.m_CachedPtr = v35;
                              sub_B2C2F8(
                                (BattleServantConfConponent_o *)&v66[1].fields,
                                v35,
                                v74,
                                v75,
                                v76,
                                v77,
                                v78,
                                v79);
                              if ( !v49 || (v67 = sub_B2C41C(v49, v66->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v66[1].klass) > 2 )
                                {
                                  v66[2].klass = (UnityEngine_GameObject_c *)v49;
                                  sub_B2C2F8((BattleServantConfConponent_o *)&v66[2], v49, v80, v81, v82, v83, v84, v85);
                                  v23 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
                                  SchedulerTaskParallel___ctor(v23, (SchedulerTaskBase_array *)v66, 0LL);
                                  return (SchedulerTaskBase_o *)v23;
                                }
LABEL_34:
                                v87 = sub_B2C460(v67);
                                sub_B2C400(v87, 0LL);
                              }
                            }
                          }
                          v88 = sub_B2C454(v67);
                          sub_B2C400(v88, 0LL);
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
    sub_B2C434(iconRootObj, v15);
  }
  v23 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v23, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v23;
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
  __int64 v11; // x1
  System_String_o *v12; // x21
  UnityEngine_AnimationClip_o *Clip; // x0
  const MethodInfo *v14; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v17; // s8
  SchedulerTaskAnimation_o *v18; // x20
  __int64 v19; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  SchedulerTaskBase_TaskCallback_o *_9__36_0; // x21
  Il2CppObject *v28; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  SchedulerTaskBase_array *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  SchedulerTaskParallel_o *v49; // x19
  __int64 v51; // x0
  __int64 v52; // x0

  if ( (byte_4189568 & 1) == 0 )
  {
    sub_B2C35C(&SchedulerTaskAnimation_TypeInfo, method);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v3);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v4);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__, v7);
    sub_B2C35C(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_6545/*"FadeStart"*/, v9);
    byte_4189568 = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_20;
  v12 = (System_String_o *)FirstTransitionAnimName;
  Clip = UnityEngine_Animation__GetClip(this->fields.anim, (System_String_o *)FirstTransitionAnimName, 0LL);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                (ClassBoardSelectViewManager_o *)Clip,
                Clip,
                (System_String_o *)StringLiteral_6545/*"FadeStart"*/,
                0.0,
                v14);
  anim = this->fields.anim;
  v17 = EventTime;
  v18 = (SchedulerTaskAnimation_o *)sub_B2C42C(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v18, anim, v12, 0LL);
  v19 = sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v19, v17, 0LL);
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
    v28 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      _9__36_0,
      v28,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__,
      0LL);
    v29 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v29->__9__36_0 = _9__36_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v19
    || (*(_QWORD *)(v19 + 32) = _9__36_0,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v19 + 32),
          (System_Int32_array **)_9__36_0,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (FirstTransitionAnimName = (void *)sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_20:
    sub_B2C434(FirstTransitionAnimName, v11);
  }
  v42 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v18 )
  {
    FirstTransitionAnimName = (void *)sub_B2C41C(v18, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_22;
  }
  if ( !v42->max_length )
    goto LABEL_21;
  v42->m_Items[0] = (SchedulerTaskBase_o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)v42->m_Items, (System_Int32_array **)v18, v36, v37, v38, v39, v40, v41);
  FirstTransitionAnimName = (void *)sub_B2C41C(v19, v42->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_22:
    v52 = sub_B2C454(FirstTransitionAnimName);
    sub_B2C400(v52, 0LL);
  }
  if ( v42->max_length <= 1 )
  {
LABEL_21:
    v51 = sub_B2C460(FirstTransitionAnimName);
    sub_B2C400(v51, 0LL);
  }
  v42->m_Items[1] = (SchedulerTaskBase_o *)v19;
  sub_B2C2F8((BattleServantConfConponent_o *)&v42->m_Items[1], (System_Int32_array **)v19, v43, v44, v45, v46, v47, v48);
  v49 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v49, v42, 0LL);
  return (SchedulerTaskBase_o *)v49;
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
  const MethodInfo *v25; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x22
  struct ClassBoardSelectIconComponent_o *v28; // x0
  struct ClassBoardSelectIconComponent_o **p_selectedClassIcon; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Object_o *selectedClassIcon; // x22
  SchedulerTaskParallel_o *v37; // x19
  struct ClassBoardSelectIconComponent_o *v38; // x8
  System_String_o *v39; // x23
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v41; // x25
  const MethodInfo *v42; // x1
  float v43; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v45; // x22
  SchedulerTaskAnimation_o *v46; // x26
  const MethodInfo *v47; // x1
  SchedulerTaskBase_o *v48; // x0
  float v49; // s8
  System_Int32_array **v50; // x24
  __int64 v51; // x22
  Il2CppObject *v52; // x26
  SchedulerTaskBase_TaskCallback_o *v53; // x19
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  AvalonSceneManager_c *v60; // x0
  float DEFAULT_FADE_TIME; // w8
  System_Func_bool__o *v62; // x26
  __int64 v63; // x19
  SchedulerTaskBase_TaskCallback_o *v64; // x26
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  const MethodInfo *v71; // x1
  System_Int32_array **v72; // x19
  UnityEngine_Animation_o *v73; // x20
  SchedulerTaskAnimation_o *v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  SchedulerTaskBase_array *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v101; // x0
  __int64 v102; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418956A & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, *(_QWORD *)&baseId);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___, v7);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v8);
    sub_B2C35C(&System_Func_bool__TypeInfo, v9);
    sub_B2C35C(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__, v10);
    sub_B2C35C(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&SchedulerTaskAnimation_TypeInfo, v13);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v14);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v15);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v16);
    sub_B2C35C(&SchedulerTaskWaitWhile_TypeInfo, v17);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v18);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__, v19);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__, v20);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__, v21);
    sub_B2C35C(&ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo, v22);
    byte_418956A = 1;
  }
  v23 = sub_B2C42C(ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass38_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass38_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_38;
  *(_DWORD *)(v23 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v23,
    Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
  v28 = (struct ClassBoardSelectIconComponent_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    iconArray,
                                                    (System_Func_TSource__bool__o *)v27,
                                                    (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  this->fields.selectedClassIcon = v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectedClassIcon,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
          v38 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v38 )
          {
            iconRootObj = (__int64)v38->fields.classIconUi;
            if ( iconRootObj )
            {
              UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 168) + 1, 0LL);
              iconRootObj = (__int64)*p_selectedClassIcon;
              if ( *p_selectedClassIcon )
              {
                iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                         (ClassBoardSelectIconComponent_o *)iconRootObj,
                                         v25);
                if ( *p_selectedClassIcon )
                {
                  v39 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v39, 0LL);
                    v41 = sub_B2C42C(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v41,
                      Clip,
                      0LL);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v42);
                    if ( v41 )
                    {
                      v43 = *(float *)(v41 + 28);
                      anim = this->fields.anim;
                      v45 = (System_String_o *)iconRootObj;
                      v46 = (SchedulerTaskAnimation_o *)sub_B2C42C(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor(v46, anim, v45, 0LL);
                      v48 = ClassBoardSelectViewManager__DelayAttachedTask(v43, (SchedulerTaskBase_o *)v46, v47);
                      v49 = *(float *)(v41 + 44);
                      v50 = (System_Int32_array **)v48;
                      v51 = sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v51, v49, 0LL);
                      v52 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v53 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v53,
                        v52,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v51 )
                      {
                        *(_QWORD *)(v51 + 32) = v53;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)(v51 + 32),
                          (System_Int32_array **)v53,
                          v54,
                          v55,
                          v56,
                          v57,
                          v58,
                          v59);
                        v60 = AvalonSceneManager_TypeInfo;
                        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v60 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v60->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v23 + 20) = 1;
                        *(float *)(v23 + 24) = DEFAULT_FADE_TIME;
                        v62 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
                        System_Func_bool____ctor(
                          v62,
                          (Il2CppObject *)v23,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__,
                          (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
                        v63 = sub_B2C42C(SchedulerTaskWaitWhile_TypeInfo);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v63, v62, 0LL);
                        v64 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v64,
                          (Il2CppObject *)v23,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v63 )
                        {
                          *(_QWORD *)(v63 + 24) = v64;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)(v63 + 24),
                            (System_Int32_array **)v64,
                            v65,
                            v66,
                            v67,
                            v68,
                            v69,
                            v70);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v41 + 24),
                                                   (SchedulerTaskBase_o *)v63,
                                                   v71);
                          if ( *p_selectedClassIcon )
                          {
                            v72 = (System_Int32_array **)iconRootObj;
                            v73 = (*p_selectedClassIcon)->fields.anim;
                            v74 = (SchedulerTaskAnimation_o *)sub_B2C42C(SchedulerTaskAnimation_TypeInfo);
                            SchedulerTaskAnimation___ctor(v74, v73, v39, 0LL);
                            iconRootObj = sub_B2C374(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v81 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v74
                                || (iconRootObj = sub_B2C41C(v74, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v81->max_length )
                                  goto LABEL_39;
                                v81->m_Items[0] = (SchedulerTaskBase_o *)v74;
                                sub_B2C2F8(
                                  (BattleServantConfConponent_o *)v81->m_Items,
                                  (System_Int32_array **)v74,
                                  v75,
                                  v76,
                                  v77,
                                  v78,
                                  v79,
                                  v80);
                                if ( !v50 || (iconRootObj = sub_B2C41C(v50, v81->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v81->max_length <= 1 )
                                    goto LABEL_39;
                                  v81->m_Items[1] = (SchedulerTaskBase_o *)v50;
                                  sub_B2C2F8(
                                    (BattleServantConfConponent_o *)&v81->m_Items[1],
                                    v50,
                                    v82,
                                    v83,
                                    v84,
                                    v85,
                                    v86,
                                    v87);
                                  iconRootObj = sub_B2C41C(v51, v81->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v81->max_length <= 2 )
                                      goto LABEL_39;
                                    v81->m_Items[2] = (SchedulerTaskBase_o *)v51;
                                    sub_B2C2F8(
                                      (BattleServantConfConponent_o *)&v81->m_Items[2],
                                      (System_Int32_array **)v51,
                                      v88,
                                      v89,
                                      v90,
                                      v91,
                                      v92,
                                      v93);
                                    if ( !v72 || (iconRootObj = sub_B2C41C(v72, v81->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v81->max_length > 3 )
                                      {
                                        v81->m_Items[3] = (SchedulerTaskBase_o *)v72;
                                        sub_B2C2F8(
                                          (BattleServantConfConponent_o *)&v81->m_Items[3],
                                          v72,
                                          v94,
                                          v95,
                                          v96,
                                          v97,
                                          v98,
                                          v99);
                                        v37 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
                                        SchedulerTaskParallel___ctor(v37, v81, 0LL);
                                        return (SchedulerTaskBase_o *)v37;
                                      }
LABEL_39:
                                      v101 = sub_B2C460(iconRootObj);
                                      sub_B2C400(v101, 0LL);
                                    }
                                  }
                                }
                              }
                              v102 = sub_B2C454(iconRootObj);
                              sub_B2C400(v102, 0LL);
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
    sub_B2C434(iconRootObj, v25);
  }
  v37 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v37, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v37;
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
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, method);
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
  __int64 v17; // x1
  WarEntity_o *Entity; // x0
  System_String_o *age; // x19

  if ( (byte_4189561 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BgmMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_AnimationState___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_4189561 = 1;
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v9 = (struct UnityEngine_AnimationState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    v8,
                                                    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = v9;
  sub_B2C2F8(
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v17);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.bgmId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_418956F & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&SceneList_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_418956F = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v6 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17292872(v6, SceneName, 0LL);
  if ( !Instance )
    sub_B2C434(v7, v8);
  AvalonSceneManager__transitionScene_19161880(Instance, 32, 0LL, 1, (Il2CppObject *)v6, 0LL);
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
  __int64 v17; // x1
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  struct ClassBoardBaseEntity_o *v19; // x8
  WebViewManager_o *Instance; // x0
  struct ClassBoardBaseEntity_o *v21; // x8
  CommonUI_o *v22; // x20
  System_String_o *v23; // x19
  System_String_o *closedMessage; // x21
  System_String_o *v25; // x19
  CommonUI_o *v26; // x20
  ClassBoardSelectViewManager___c_c *v27; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *v28; // x9
  System_Action_o *_9__35_1; // x22
  System_String_o *v30; // x21
  Il2CppObject *v31; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x22
  Il2CppObject *v41; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_4189567 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__int__Invoke__, icon);
    sub_B2C35C(&System_Action_TypeInfo, v5);
    sub_B2C35C(&Method_ClassBoardSelectViewManager_OnClickIcon__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__, v9);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__, v10);
    sub_B2C35C(&ClassBoardSelectViewManager___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_2991/*"CLASS_BOARD_BASE_UNRELEASED"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4189567 = 1;
  }
  v14 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 75) & 2) != 0 )
    v14 = (_QWORD *)sub_B2C364(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v15 = (System_Reflection_MethodBase_o *)sub_B2C340(v14, v14[3]);
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
        v19 = icon->fields._Entity_k__BackingField;
        if ( v19 )
        {
          System_Action_int__int___Invoke(
            (System_Action_int__int__o *)onSelectClassBoard,
            v19->fields.id,
            v19->fields.iconId,
            (const MethodInfo_24C8494 *)Method_System_Action_int__int__Invoke__);
          return;
        }
LABEL_39:
        sub_B2C434(onSelectClassBoard, v17);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = icon->fields._Entity_k__BackingField;
      v22 = (CommonUI_o *)Instance;
      v23 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v21 )
        closedMessage = v21->fields.closedMessage;
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
        v41 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__35_0, v41, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__, 0LL);
        v42 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        v42->__9__35_0 = _9__35_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v42->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      if ( !v22 )
        goto LABEL_39;
      CommonUI__OpenNotificationDialog(v22, v23, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2991/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    onSelectClassBoard = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = (CommonUI_o *)onSelectClassBoard;
    v27 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v27 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v28 = v27->static_fields;
    _9__35_1 = v28->__9__35_1;
    v30 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__35_1 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v28 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)v28->__9;
      _9__35_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__35_1, v31, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__, 0LL);
      v32 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v32->__9__35_1 = _9__35_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v32->__9__35_1,
        (System_Int32_array **)_9__35_1,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( !v26 )
      goto LABEL_39;
    CommonUI__OpenNotificationDialog(v26, v30, v25, _9__35_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4189565 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__, v4);
    byte_4189565 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 81, v5, 0LL);
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
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Action_o *v23; // x19

  if ( (byte_4189566 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, finishCallback);
    sub_B2C35C(&System_Action_TypeInfo, v5);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__, v6);
    sub_B2C35C(&ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo, v7);
    byte_4189566 = 1;
  }
  v8 = sub_B2C42C(ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass34_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass34_0_o *)v8,
    0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v8 + 24),
    (System_Int32_array **)finishCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v23, 0, 0, 0, 0, 0LL);
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
  System_Action_o *v16; // x20
  System_Action_Action__array *v17; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ActionChain_o *v25; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  MissionNotifyManager_o *v32; // x21
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_4189564 & 1) == 0 )
  {
    sub_B2C35C(&ActionChain_TypeInfo, method);
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, v3);
    sub_B2C35C(&System_Action___TypeInfo, v4);
    sub_B2C35C(&System_Action_Action____TypeInfo, v5);
    sub_B2C35C(&Method_System_Action_Action___ctor__, v6);
    sub_B2C35C(&System_Action_Action__TypeInfo, v7);
    sub_B2C35C(&System_Action_TypeInfo, v8);
    sub_B2C35C(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v9);
    sub_B2C35C(&Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__, v10);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v12);
    byte_4189564 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v13);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v14 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v14
    || (MissionNotifyManager__StartPause(v14, 0LL),
        v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__,
          0LL),
        v17 = (System_Action_Action__array *)sub_B2C374(System_Action_Action____TypeInfo, 1LL),
        v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v18,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__),
        !v17) )
  {
LABEL_18:
    sub_B2C434(v14, v15);
  }
  if ( v18 )
  {
    v14 = (MissionNotifyManager_o *)sub_B2C41C(v18, v17->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_20;
  }
  if ( !v17->max_length )
    goto LABEL_19;
  v17->m_Items[0] = (System_Action_Action__o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)v17->m_Items, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  v25 = (ActionChain_o *)sub_B2C42C(ActionChain_TypeInfo);
  ActionChain___ctor_21119660(v25, v17, 0LL);
  v14 = (MissionNotifyManager_o *)sub_B2C374(System_Action___TypeInfo, 1LL);
  if ( !v14 )
    goto LABEL_18;
  v32 = v14;
  if ( v16 )
  {
    v14 = (MissionNotifyManager_o *)sub_B2C41C(v16, v14->klass->_1.element_class);
    if ( !v14 )
    {
LABEL_20:
      v34 = sub_B2C454(v14);
      sub_B2C400(v34, 0LL);
    }
  }
  if ( !LODWORD(v32->fields.mNoDispInfos) )
  {
LABEL_19:
    v33 = sub_B2C460(v14);
    sub_B2C400(v33, 0LL);
  }
  v32->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v32->fields.mMissionNotifyComps,
    (System_Int32_array **)v16,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !v25 )
    goto LABEL_18;
  v14 = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                    (ChainableActionBase_o *)v25,
                                    (System_Action_array *)v32,
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
  __int64 v5; // x1

  ClassBoardSelectViewManager__SetUpHeaderItemList(this, (const MethodInfo *)classBoardBackground);
  if ( !classBoardBackground )
    sub_B2C434(v4, v5);
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0LL);
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__SetUpHeaderItemList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardSelectViewManager_o *v3; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  ClassBoardUIController_o *classBoardUIController_k__BackingField; // x20
  System_Int32_array *headerDlspItemIdArray; // x19
  unsigned __int64 v8; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v11; // x3

  v3 = this;
  if ( (byte_418956E & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_418956E = 1;
  }
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  classBoardUIController_k__BackingField = v3->fields._classBoardUIController_k__BackingField;
  headerDlspItemIdArray = v3->fields.headerDlspItemIdArray;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_B2C434(this, method);
  ClassBoardUIController__SetItemList(
    classBoardUIController_k__BackingField,
    headerDlspItemIdArray,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    v11);
}


void __fastcall ClassBoardSelectViewManager__SetupClassBoardUIController(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardSelectViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v14; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct UnityEngine_Animation_o *anim; // x20
  UnityEngine_Transform_o *uiRoot; // x21
  System_Int32_array **v19; // x0
  ClassBoardSelectViewManager_o **p_classBoardUIController_k__BackingField; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  System_Action_o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct ClassBoardUIController_o *v35; // x21
  System_Action_o *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x2
  __int64 v44; // x3
  struct IClassBoardResourceCatalog_o *v45; // x21
  IClassBoardResourceCatalog_c *v46; // x8
  ClassBoardUIController_o *v47; // x20
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x1
  __int64 v53; // x3
  struct IClassBoardResourceCatalog_o *v54; // x20
  IClassBoardResourceCatalog_c *v55; // x8
  ClassBoardUIController_o *v56; // x19
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  AtlasManagerUnit_o *v60; // x20
  const MethodInfo *v61; // x3

  v3 = this;
  if ( (byte_418956D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardSelectViewManager_OnClickBack__, v4);
    sub_B2C35C(&Method_ClassBoardSelectViewManager_OpenHelp__, v5);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_19670/*"img_txt_classscore_main"*/, v10);
    this = (ClassBoardSelectViewManager_o *)sub_B2C35C(&StringLiteral_3031/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, v11);
    byte_418956D = 1;
  }
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_40;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_40;
  anim = this->fields.anim;
  uiRoot = v3->fields.uiRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)anim,
                                 uiRoot,
                                 (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v3->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v19;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v3->fields._classBoardUIController_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v3->fields._classBoardUIController_k__BackingField,
    v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this = (ClassBoardSelectViewManager_o *)v3->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_40;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, method);
  classBoardUIController_k__BackingField = v3->fields._classBoardUIController_k__BackingField;
  v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v3, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_40;
  classBoardUIController_k__BackingField->fields.onClickBack = v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = v3->fields._classBoardUIController_k__BackingField;
  v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v3, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v35 )
    goto LABEL_40;
  v35->fields.onClickHelp = v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v35->fields.onClickHelp,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_40;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, v43);
  v45 = v3->fields.resourceCatalog;
  if ( !v45 )
    goto LABEL_40;
  v46 = v45->klass;
  v47 = v3->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v45->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    v49 = &v46->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v49 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)&v45->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v50 = (__int64)&v46->vtable[*v49].method;
  }
  else
  {
LABEL_23:
    v50 = sub_AC5258(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v44);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v50)(
                                            v45,
                                            *(_QWORD *)(v50 + 8));
  if ( !this )
    goto LABEL_40;
  if ( !v47 )
    goto LABEL_40;
  ClassBoardUIController__SetHeaderTitle(
    v47,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_19670/*"img_txt_classscore_main"*/,
    v51);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v3, v52);
  v54 = v3->fields.resourceCatalog;
  if ( !v54 )
    goto LABEL_40;
  v55 = v54->klass;
  v56 = v3->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v54->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v55->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v58 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&v54->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v59 = (__int64)&v55->vtable[*v58].method;
  }
  else
  {
LABEL_32:
    v59 = sub_AC5258(v54, IClassBoardResourceCatalog_TypeInfo, 0LL, v53);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v59)(
                                            v54,
                                            *(_QWORD *)(v59 + 8));
  if ( !this )
    goto LABEL_40;
  v60 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3031/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v56 )
LABEL_40:
    sub_B2C434(this, method);
  ClassBoardUIController__SetHeaderMessage(v56, v60, (System_String_o *)this, v61);
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  ClassBoardResourceCatalogAssetBundle_o **v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct IClassBoardResourceCatalog_o *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Action_o *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x1
  ClassBoardResourceCatalogAssetBundle_o *v56; // x20
  __int64 v57; // x10
  System_Action_o *v58; // x21
  const MethodInfo *v59; // x2
  __int64 v60; // x10

  if ( (byte_4189562 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, classBoardBackground);
    sub_B2C35C(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v9);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__, v10);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__, v11);
    sub_B2C35C(&ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo, v12);
    byte_4189562 = 1;
  }
  v13 = sub_B2C42C(ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass29_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass29_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = classBoardBackground;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)classBoardBackground,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v13 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 32) = resourceCatalog;
  v28 = (ClassBoardResourceCatalogAssetBundle_o **)(v13 + 32);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v13 + 32),
    (System_Int32_array **)resourceCatalog,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v13 + 40),
    (System_Int32_array **)finishCallback,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = *(struct IClassBoardResourceCatalog_o **)(v13 + 32);
  this->fields.resourceCatalog = v41;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v13 + 48) = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 48), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v55)
    || (v56 = *v28) == 0LL
    || (v57 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1),
        *(&v56->klass->_2.bitflags2 + 1) < (unsigned int)v57)
    || (ClassBoardResourceCatalogAssetBundle_c *)v56->klass->_2.typeHierarchy[v57 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 48), 0LL);
    return;
  }
  v58 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__,
    0LL);
  v60 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v56->klass->_2.bitflags2 + 1) < (unsigned int)v60
    || (ClassBoardResourceCatalogAssetBundle_c *)v56->klass->_2.typeHierarchy[v60 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_B2C434(v14, v15);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v56, v58, v59);
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
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
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
    sub_B2C434(this, method);
  }
}


bool __fastcall ClassBoardSelectViewManager__ValidateBoardUIAtlas(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  ClassBoardSelectViewManager_o *v3; // x19
  __int64 v4; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v7; // x10
  int *p_offset; // x11
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_4189563 & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, method);
    this = (ClassBoardSelectViewManager_o *)sub_B2C35C(&StringLiteral_19670/*"img_txt_classscore_main"*/, v4);
    byte_4189563 = 1;
  }
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
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
    p_method = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v2);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_B2C434(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_19670/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__33_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189573 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_4189573 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__32_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MissionNotifyManager_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4189572 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_4189572 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v5 )
    sub_B2C434(0LL, v6);
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
  sub_B2C2F8(
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
  Il2CppObject *v2; // x19
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184EF3 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSelectViewManager___c_TypeInfo, v1);
    byte_4184EF3 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__44_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__36_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4184EF4 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4184EF4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
    sub_B2C434(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_B2C434(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_31328080(gameObject, 0.0, 0LL);
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
    sub_B2C434(this, 0LL);
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
  struct ClassBoardSelectViewManager_o *v12; // x8
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  struct ClassBoardSelectViewManager_o *v15; // x8
  System_Collections_Generic_IEnumerable_T__o *v16; // x20
  ClassBoardSelectViewManager___c_c *v17; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__29_2; // x21
  Il2CppObject *v20; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v21; // x0
  struct ClassBoardSelectViewManager_o *v22; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t klass; // w8

  if ( (byte_4184EF5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ClassBoardSelectIconComponent___ctor__, method);
    sub_B2C35C(&System_Action_ClassBoardSelectIconComponent__TypeInfo, v3);
    sub_B2C35C(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___, v4);
    sub_B2C35C(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___, v5);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__, v6);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__, v7);
    sub_B2C35C(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    byte_4184EF5 = 1;
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
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_27;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v12->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_B2C42C(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_27;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)v15->fields.iconArray;
  v17 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v17 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__29_2;
  if ( !_9__29_2 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_2,
      v20,
      Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    v21 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v21->__9__29_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__29_2;
    sub_B2C2F8(&v21->__9__29_2, _9__29_2);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v16,
    (System_Action_T__o *)_9__29_2,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_27;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v22->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
  v22->fields.iconDefaultDepth = klass;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_27:
    sub_B2C434(classBoardBackground, method);
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
  __int64 v11; // x1

  if ( (byte_4184EF6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ClassBoardSelectIconComponent___ctor__, x);
    sub_B2C35C(&System_Action_ClassBoardSelectIconComponent__TypeInfo, v5);
    sub_B2C35C(&Method_ClassBoardSelectViewManager_OnClickIcon__, v6);
    byte_4184EF6 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    _4__this,
    (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
  if ( !x )
    sub_B2C434(v10, v11);
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
  if ( (byte_4184EF7 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass34_0_o *)sub_B2C35C(
                                                                    &Method_ActionExtensions_Call_bool___,
                                                                    method);
    byte_4184EF7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
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

  if ( (byte_4184EF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184EF8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, x);
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
  System_Action_o *_9__3; // x21
  CommonUI_o *v8; // x20
  float fadeTime; // s8

  if ( (byte_4184EF9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__, v4);
    byte_4184EF9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B2C2F8(&this->fields.__9__3, _9__3);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__maskFadeout(v8, 2, fadeTime, _9__3, 0LL);
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
    sub_B2C434(0LL, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, 0LL);
}