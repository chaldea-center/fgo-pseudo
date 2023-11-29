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
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  SchedulerTaskWaitTime_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  SchedulerTaskBase_array *v20; // x20
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  SchedulerTaskOrthostichy_o *v30; // x19

  if ( (byte_40FB9E6 & 1) == 0 )
  {
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, method);
    sub_B16FFC(&SchedulerTaskOrthostichy_TypeInfo, v8);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v9);
    byte_40FB9E6 = 1;
  }
  v10 = (SchedulerTaskWaitTime_o *)sub_B170CC(SchedulerTaskWaitTime_TypeInfo, method, v3, v4, v5);
  SchedulerTaskWaitTime___ctor(v10, delay, 0LL);
  v12 = sub_B17014(SchedulerTaskBase___TypeInfo, 2LL, v11);
  if ( !v12 )
    sub_B170D4();
  v20 = (SchedulerTaskBase_array *)v12;
  if ( v10 )
  {
    v12 = sub_B170BC(v10, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
      goto LABEL_12;
  }
  if ( !v20->max_length )
    goto LABEL_11;
  v20->m_Items[0] = (SchedulerTaskBase_o *)v10;
  sub_B16F98((BattleServantConfConponent_o *)v20->m_Items, (System_Int32_array **)v10, v14, v15, v16, v17, v18, v19);
  if ( task )
  {
    v12 = sub_B170BC(task, v20->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_12:
      sub_B170F4(v12);
      sub_B170A0();
    }
  }
  if ( v20->max_length <= 1 )
  {
LABEL_11:
    sub_B17100(v12, v13, v14);
    sub_B170A0();
  }
  v20->m_Items[1] = task;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->m_Items[1],
    (System_Int32_array **)task,
    v14,
    v21,
    v22,
    v23,
    v24,
    v25);
  v30 = (SchedulerTaskOrthostichy_o *)sub_B170CC(SchedulerTaskOrthostichy_TypeInfo, v26, v27, v28, v29);
  SchedulerTaskOrthostichy___ctor(v30, v20, 0LL);
  return (SchedulerTaskBase_o *)v30;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v4; // x0

  if ( (byte_40FB9D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_40FB9D8 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               1,
                                               0LL,
                                               (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_40FB9D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_40FB9D9 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               2,
                                               0LL,
                                               (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v5; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_IEnumerable_T__o *events; // x21
  ClassBoardSelectViewManager___c_c *v30; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x22
  Il2CppObject *v33; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_AnimationEvent_array *v41; // x19
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v46; // x21
  UnityEngine_AnimationEvent_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0

  if ( (byte_40FB9DA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AnimationEvent___ctor__, animClip);
    sub_B16FFC(&System_Action_AnimationEvent__TypeInfo, v9);
    sub_B16FFC(&Method_BasicHelper_Find_AnimationEvent___, v10);
    sub_B16FFC(&Method_BasicHelper_ForEach_AnimationEvent___, v11);
    sub_B16FFC(&Method_System_Func_AnimationEvent__bool___ctor__, v12);
    sub_B16FFC(&System_Func_AnimationEvent__bool__TypeInfo, v13);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__, v14);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__, v15);
    sub_B16FFC(&ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo, v16);
    sub_B16FFC(&ClassBoardSelectViewManager___c_TypeInfo, v17);
    byte_40FB9DA = 1;
  }
  v18 = sub_B170CC(ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo, animClip, eventName, method, v5);
  ClassBoardSelectViewManager___c__DisplayClass26_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass26_0_o *)v18,
    0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = eventName,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)eventName,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        !animClip) )
  {
    sub_B170D4();
  }
  events = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v30 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v30 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_AnimationEvent__TypeInfo,
                                                                                      v25,
                                                                                      v26,
                                                                                      v27,
                                                                                      v28);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_0,
      v33,
      Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_AnimationEvent___ctor__);
    v34 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v34->__9__26_0 = (struct System_Action_AnimationEvent__o *)_9__26_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    events,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)events, 0LL);
  v41 = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v46 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_AnimationEvent__bool__TypeInfo,
                                                                             v42,
                                                                             v43,
                                                                             v44,
                                                                             v45);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v46,
    (Il2CppObject *)v18,
    Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_AnimationEvent__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_AnimationEvent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v41,
                                                                                                     (System_Func_T__bool__o *)v46,
                                                                                                     (const MethodInfo_18B650C *)Method_BasicHelper_Find_AnimationEvent___);
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

  if ( (byte_40FB9D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_40FB9D7 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               0,
                                               0LL,
                                               (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  ClassBoardSelectIconComponent_o *v8; // x0
  System_String_o *ClassBoardEnterAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v10; // x8
  System_String_o *v11; // x1
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_AnimationClip_o *Clip; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  ClassBoardSelectIconComponent_AnimClipInfo_o *v18; // x19

  if ( (byte_40FB9E5 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB9E5 = 1;
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
    v8 = this->fields.selectedClassIcon;
    if ( !v8
      || (ClassBoardEnterAnimName = ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(v8, v6),
          (v10 = this->fields.selectedClassIcon) == 0LL)
      || (v11 = ClassBoardEnterAnimName, (anim = v10->fields.anim) == 0LL)
      || (Clip = UnityEngine_Animation__GetClip(anim, v11, 0LL),
          v18 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B170CC(
                                                                  ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo,
                                                                  v14,
                                                                  v15,
                                                                  v16,
                                                                  v17),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v18, Clip, 0LL),
          !v18) )
    {
      sub_B170D4();
    }
    return v18->fields._ForwardIconAnimStartTime_k__BackingField;
  }
  return result;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
        ClassBoardSelectViewManager_o *this,
        System_Collections_Generic_List_ClassBoardSelectIconComponent__o *iconCompoentList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v5; // x20
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **current; // x1
  __int64 v32; // x21
  __int64 v33; // x8
  UnityEngine_AnimationState_o *v34; // x0
  System_String_o *name; // x0
  System_String_o *v36; // x22
  UnityEngine_Animation_o *v37; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  ClassBoardSelectIconComponent_AnimClipInfo_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  UnityEngine_Animation_o *v48; // x23
  __int64 v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  SchedulerTaskBase_TaskCallback_o *v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+20h] [xbp-70h] BYREF

  v5 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconCompoentList;
  if ( (byte_40FB9EB & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, iconCompoentList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__, v12);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v13);
    sub_B16FFC(&SchedulerTaskAnimation_TypeInfo, v14);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v15);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v16);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__, v17);
    sub_B16FFC(&ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo, v18);
    byte_40FB9EB = 1;
  }
  memset(&v67, 0, sizeof(v67));
  if ( v5 )
  {
    if ( v5->fields._size )
    {
      v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, iconCompoentList, method, v3, v4);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v19,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v66,
        v5,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v67 = v66;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v67,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v24 = sub_B170CC(ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo, v20, v21, v22, v23);
        ClassBoardSelectViewManager___c__DisplayClass45_0___ctor(
          (ClassBoardSelectViewManager___c__DisplayClass45_0_o *)v24,
          0LL);
        if ( !v24 )
          sub_B170D4();
        current = (System_Int32_array **)v67.fields.current;
        *(_QWORD *)(v24 + 16) = v67.fields.current;
        v32 = v24 + 16;
        sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), current, v25, v26, v27, v28, v29, v30);
        v33 = *(_QWORD *)(v24 + 16);
        if ( !v33 )
          sub_B170D4();
        v34 = *(UnityEngine_AnimationState_o **)(v33 + 128);
        if ( v34 )
        {
          name = UnityEngine_AnimationState__get_name(v34, 0LL);
          v33 = *(_QWORD *)v32;
          if ( !*(_QWORD *)v32 )
            sub_B170D4();
          v36 = name;
        }
        else
        {
          v36 = 0LL;
        }
        v37 = *(UnityEngine_Animation_o **)(v33 + 80);
        if ( !v37 )
          sub_B170D4();
        Clip = UnityEngine_Animation__GetClip(v37, v36, 0LL);
        v43 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B170CC(
                                                                ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo,
                                                                v39,
                                                                v40,
                                                                v41,
                                                                v42);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v43, Clip, 0LL);
        if ( !*(_QWORD *)v32 )
          sub_B170D4();
        v48 = *(UnityEngine_Animation_o **)(*(_QWORD *)v32 + 80LL);
        v49 = sub_B170CC(SchedulerTaskAnimation_TypeInfo, v44, v45, v46, v47);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v49, v48, v36, 0LL);
        v54 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                    SchedulerTaskBase_TaskCallback_TypeInfo,
                                                    v50,
                                                    v51,
                                                    v52,
                                                    v53);
        SchedulerTaskBase_TaskCallback___ctor(
          v54,
          (Il2CppObject *)v24,
          Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v49 )
          sub_B170D4();
        *(_QWORD *)(v49 + 32) = v54;
        sub_B16F98((BattleServantConfConponent_o *)(v49 + 32), (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
        if ( !v19 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v67,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      v5 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sub_B170CC(
                                                                                            SchedulerTaskParallel_TypeInfo,
                                                                                            v61,
                                                                                            v62,
                                                                                            v63,
                                                                                            v64);
      SchedulerTaskParallel___ctor_17170684(
        (SchedulerTaskParallel_o *)v5,
        (System_Collections_Generic_List_SchedulerTaskBase__o *)v19,
        0LL);
    }
    else
    {
      return 0LL;
    }
  }
  return (SchedulerTaskBase_o *)v5;
}


System_Collections_Generic_List_ClassBoardSelectIconComponent__o *__fastcall ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v14; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__44_0; // x20
  Il2CppObject *v17; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19

  if ( (byte_40FB9EA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___, v6);
    sub_B16FFC(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__, v7);
    sub_B16FFC(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo, v10);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__, v11);
    sub_B16FFC(&ClassBoardSelectViewManager___c_TypeInfo, v12);
    byte_40FB9EA = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v14 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v14 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_ClassBoardSelectIconComponent__bool__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__44_0,
        v17,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
      v18 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v18->__9__44_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__44_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v18->__9__44_0,
        (System_Int32_array **)_9__44_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__44_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                 v25,
                                                                                 (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v26,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
  }
  return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v26;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *selectedClassIcon; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  SchedulerTaskParallel_o *v28; // x20
  struct ClassBoardSelectIconComponent_o *v29; // x8
  UnityEngine_GameObject_o *iconRootObj; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v32; // x1
  ClassBoardSelectIconComponent_o *v33; // x0
  System_String_o *ClassBoardExitAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v35; // x8
  System_String_o *v36; // x22
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x23
  const MethodInfo *v44; // x1
  System_String_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  float v50; // s8
  UnityEngine_Animation_o *v51; // x24
  System_String_o *v52; // x21
  SchedulerTaskAnimation_o *v53; // x25
  const MethodInfo *v54; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Int32_array **v59; // x21
  AvalonSceneManager_c *v60; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v62; // x24
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  SchedulerTaskBase_TaskCallback_o *v67; // x25
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo *v74; // x1
  SchedulerTaskBase_o *v75; // x0
  System_Int32_array **v76; // x1
  System_Int32_array **v77; // x23
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  struct ClassBoardSelectIconComponent_o *v88; // x8
  UnityEngine_Animation_o *v89; // x19
  __int64 v90; // x24
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  SchedulerTaskBase_TaskCallback_o *v95; // x19
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  __int64 v102; // x2
  __int64 v103; // x0
  __int64 v104; // x19
  __int64 v105; // x0
  __int64 v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4

  if ( (byte_40FB9E3 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&SchedulerTaskAnimation_TypeInfo, v8);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v9);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v10);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v11);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v12);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__, v13);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__, v14);
    sub_B16FFC(&ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo, v15);
    byte_40FB9E3 = 1;
  }
  v16 = sub_B170CC(ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo, method, v2, v3, v4);
  ClassBoardSelectViewManager___c__DisplayClass37_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass37_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_33;
  *(_QWORD *)(v16 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL) )
  {
    v29 = this->fields.selectedClassIcon;
    if ( v29 )
    {
      iconRootObj = v29->fields.iconRootObj;
      if ( iconRootObj )
      {
        transform = UnityEngine_GameObject__get_transform(iconRootObj, 0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localPosition(transform, this->fields.selectedClassIconBasePos, 0LL);
          v33 = this->fields.selectedClassIcon;
          if ( v33 )
          {
            ClassBoardExitAnimName = ClassBoardSelectIconComponent__GetClassBoardExitAnimName(v33, v32);
            v35 = this->fields.selectedClassIcon;
            if ( v35 )
            {
              v36 = ClassBoardExitAnimName;
              anim = v35->fields.anim;
              if ( anim )
              {
                Clip = UnityEngine_Animation__GetClip(anim, v36, 0LL);
                v43 = sub_B170CC(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, v39, v40, v41, v42);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v43,
                  Clip,
                  0LL);
                v45 = ClassBoardSelectViewManager__GetClassBoardExitAnimName(this, v44);
                if ( v43 )
                {
                  v50 = *(float *)(v43 + 28);
                  v51 = this->fields.anim;
                  v52 = v45;
                  v53 = (SchedulerTaskAnimation_o *)sub_B170CC(SchedulerTaskAnimation_TypeInfo, v46, v47, v48, v49);
                  SchedulerTaskAnimation___ctor(v53, v51, v52, 0LL);
                  v59 = (System_Int32_array **)ClassBoardSelectViewManager__DelayAttachedTask(
                                                 v50,
                                                 (SchedulerTaskBase_o *)v53,
                                                 v54);
                  v60 = AvalonSceneManager_TypeInfo;
                  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v60 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v60->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v16 + 16) = DEFAULT_FADE_TIME;
                  v62 = sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v55, v56, v57, v58);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v62, DEFAULT_FADE_TIME, 0LL);
                  v67 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                              SchedulerTaskBase_TaskCallback_TypeInfo,
                                                              v63,
                                                              v64,
                                                              v65,
                                                              v66);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v67,
                    (Il2CppObject *)v16,
                    Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v62 )
                  {
                    *(_QWORD *)(v62 + 24) = v67;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)(v62 + 24),
                      (System_Int32_array **)v67,
                      v68,
                      v69,
                      v70,
                      v71,
                      v72,
                      v73);
                    v75 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v43 + 24),
                            (SchedulerTaskBase_o *)v62,
                            v74);
                    v76 = (System_Int32_array **)this->fields.selectedClassIcon;
                    v77 = (System_Int32_array **)v75;
                    *(_QWORD *)(v16 + 24) = v76;
                    sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), v76, v78, v79, v80, v81, v82, v83);
                    v88 = this->fields.selectedClassIcon;
                    if ( v88 )
                    {
                      v89 = v88->fields.anim;
                      v90 = sub_B170CC(SchedulerTaskAnimation_TypeInfo, v84, v85, v86, v87);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v90, v89, v36, 0LL);
                      v95 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                                  SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                  v91,
                                                                  v92,
                                                                  v93,
                                                                  v94);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v95,
                        (Il2CppObject *)v16,
                        Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v90 )
                      {
                        *(_QWORD *)(v90 + 32) = v95;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)(v90 + 32),
                          (System_Int32_array **)v95,
                          v96,
                          v97,
                          v98,
                          v99,
                          v100,
                          v101);
                        v103 = sub_B17014(SchedulerTaskBase___TypeInfo, 3LL, v102);
                        if ( v103 )
                        {
                          v104 = v103;
                          v105 = sub_B170BC(v90, *(_QWORD *)(*(_QWORD *)v103 + 64LL));
                          if ( v105 )
                          {
                            if ( !*(_DWORD *)(v104 + 24) )
                              goto LABEL_34;
                            *(_QWORD *)(v104 + 32) = v90;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)(v104 + 32),
                              (System_Int32_array **)v90,
                              v107,
                              v108,
                              v109,
                              v110,
                              v111,
                              v112);
                            if ( !v59 || (v105 = sub_B170BC(v59, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
                            {
                              if ( *(_DWORD *)(v104 + 24) <= 1u )
                                goto LABEL_34;
                              *(_QWORD *)(v104 + 40) = v59;
                              sub_B16F98(
                                (BattleServantConfConponent_o *)(v104 + 40),
                                v59,
                                v107,
                                v113,
                                v114,
                                v115,
                                v116,
                                v117);
                              if ( !v77 || (v105 = sub_B170BC(v77, *(_QWORD *)(*(_QWORD *)v104 + 64LL))) != 0 )
                              {
                                if ( *(_DWORD *)(v104 + 24) > 2u )
                                {
                                  *(_QWORD *)(v104 + 48) = v77;
                                  sub_B16F98(
                                    (BattleServantConfConponent_o *)(v104 + 48),
                                    v77,
                                    v107,
                                    v118,
                                    v119,
                                    v120,
                                    v121,
                                    v122);
                                  v28 = (SchedulerTaskParallel_o *)sub_B170CC(
                                                                     SchedulerTaskParallel_TypeInfo,
                                                                     v123,
                                                                     v124,
                                                                     v125,
                                                                     v126);
                                  SchedulerTaskParallel___ctor(v28, (SchedulerTaskBase_array *)v104, 0LL);
                                  return (SchedulerTaskBase_o *)v28;
                                }
LABEL_34:
                                sub_B17100(v105, v106, v107);
                                sub_B170A0();
                              }
                            }
                          }
                          sub_B170F4(v105);
                          sub_B170A0();
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
    sub_B170D4();
  }
  v28 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v24, v25, v26, v27);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v28, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v28;
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
  System_String_o *FirstTransitionAnimName; // x0
  System_String_o *v11; // x21
  UnityEngine_AnimationClip_o *Clip; // x0
  const MethodInfo *v13; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v16; // s8
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  SchedulerTaskAnimation_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x19
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ClassBoardSelectViewManager___c_c *v34; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  SchedulerTaskBase_TaskCallback_o *_9__36_0; // x21
  Il2CppObject *v37; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x2
  __int64 v46; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  SchedulerTaskBase_array *v54; // x21
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  SchedulerTaskParallel_o *v64; // x19

  if ( (byte_40FB9E2 & 1) == 0 )
  {
    sub_B16FFC(&SchedulerTaskAnimation_TypeInfo, method);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v3);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v4);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__, v7);
    sub_B16FFC(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_6521, v9);
    byte_40FB9E2 = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_20;
  v11 = FirstTransitionAnimName;
  Clip = UnityEngine_Animation__GetClip(this->fields.anim, FirstTransitionAnimName, 0LL);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                (ClassBoardSelectViewManager_o *)Clip,
                Clip,
                (System_String_o *)StringLiteral_6521,
                0.0,
                v13);
  anim = this->fields.anim;
  v16 = EventTime;
  v21 = (SchedulerTaskAnimation_o *)sub_B170CC(SchedulerTaskAnimation_TypeInfo, v17, v18, v19, v20);
  SchedulerTaskAnimation___ctor(v21, anim, v11, 0LL);
  v26 = sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v22, v23, v24, v25);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v26, v16, 0LL);
  v34 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v34 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__36_0 = static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                     SchedulerTaskBase_TaskCallback_TypeInfo,
                                                     v27,
                                                     v28,
                                                     v29,
                                                     v30);
    SchedulerTaskBase_TaskCallback___ctor(
      _9__36_0,
      v37,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__,
      0LL);
    v38 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v38->__9__36_0 = _9__36_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v38->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !v26
    || (*(_QWORD *)(v26 + 32) = _9__36_0,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v26 + 32),
          (System_Int32_array **)_9__36_0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33),
        (v46 = sub_B17014(SchedulerTaskBase___TypeInfo, 2LL, v45)) == 0) )
  {
LABEL_20:
    sub_B170D4();
  }
  v54 = (SchedulerTaskBase_array *)v46;
  if ( v21 )
  {
    v46 = sub_B170BC(v21, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
    if ( !v46 )
      goto LABEL_22;
  }
  if ( !v54->max_length )
    goto LABEL_21;
  v54->m_Items[0] = (SchedulerTaskBase_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)v54->m_Items, (System_Int32_array **)v21, v48, v49, v50, v51, v52, v53);
  v46 = sub_B170BC(v26, v54->obj.klass->_1.element_class);
  if ( !v46 )
  {
LABEL_22:
    sub_B170F4(v46);
    sub_B170A0();
  }
  if ( v54->max_length <= 1 )
  {
LABEL_21:
    sub_B17100(v46, v47, v48);
    sub_B170A0();
  }
  v54->m_Items[1] = (SchedulerTaskBase_o *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&v54->m_Items[1], (System_Int32_array **)v26, v48, v55, v56, v57, v58, v59);
  v64 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskParallel_TypeInfo, v60, v61, v62, v63);
  SchedulerTaskParallel___ctor(v64, v54, 0LL);
  return (SchedulerTaskBase_o *)v64;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x22
  struct ClassBoardSelectIconComponent_o *v32; // x0
  ClassBoardSelectIconComponent_o **p_selectedClassIcon; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *selectedClassIcon; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  SchedulerTaskParallel_o *v45; // x19
  UnityEngine_GameObject_o *iconRootObj; // x0
  UnityEngine_Transform_o *transform; // x0
  struct ClassBoardSelectIconComponent_o *v48; // x8
  UIWidget_o *classIconUi; // x0
  const MethodInfo *v50; // x1
  System_String_o *ClassBoardEnterAnimName; // x0
  System_String_o *v52; // x23
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x25
  const MethodInfo *v60; // x1
  System_String_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  float v66; // s8
  UnityEngine_Animation_o *v67; // x24
  System_String_o *v68; // x22
  SchedulerTaskAnimation_o *v69; // x26
  const MethodInfo *v70; // x1
  SchedulerTaskBase_o *v71; // x0
  float v72; // s8
  System_Int32_array **v73; // x24
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  __int64 v78; // x22
  Il2CppObject *v79; // x26
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  SchedulerTaskBase_TaskCallback_o *v84; // x19
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  AvalonSceneManager_c *v95; // x0
  float DEFAULT_FADE_TIME; // w8
  System_Func_bool__o *v97; // x26
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  __int64 v102; // x19
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  SchedulerTaskBase_TaskCallback_o *v107; // x26
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  const MethodInfo *v114; // x1
  SchedulerTaskBase_o *v115; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  System_Int32_array **v120; // x19
  UnityEngine_Animation_o *v121; // x20
  SchedulerTaskAnimation_o *v122; // x21
  __int64 v123; // x2
  __int64 v124; // x0
  __int64 v125; // x1
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  SchedulerTaskBase_array *v132; // x20
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB9E4 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, *(_QWORD *)&baseId);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___, v9);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v10);
    sub_B16FFC(&System_Func_bool__TypeInfo, v11);
    sub_B16FFC(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__, v12);
    sub_B16FFC(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&SchedulerTaskAnimation_TypeInfo, v15);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v16);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v17);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v18);
    sub_B16FFC(&SchedulerTaskWaitWhile_TypeInfo, v19);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v20);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__, v21);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__, v22);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__, v23);
    sub_B16FFC(&ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo, v24);
    byte_40FB9E4 = 1;
  }
  v25 = sub_B170CC(ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo, *(_QWORD *)&baseId, method, v3, v4);
  ClassBoardSelectViewManager___c__DisplayClass38_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass38_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_38;
  *(_DWORD *)(v25 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ClassBoardSelectIconComponent__bool__TypeInfo,
                                                                             v26,
                                                                             v27,
                                                                             v28,
                                                                             v29);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v25,
    Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
  v32 = (struct ClassBoardSelectIconComponent_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    iconArray,
                                                    (System_Func_TSource__bool__o *)v31,
                                                    (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  this->fields.selectedClassIcon = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectedClassIcon,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL) )
  {
    if ( *p_selectedClassIcon )
    {
      iconRootObj = (*p_selectedClassIcon)->fields.iconRootObj;
      if ( iconRootObj )
      {
        transform = UnityEngine_GameObject__get_transform(iconRootObj, 0LL);
        if ( transform )
        {
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          v48 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v48 )
          {
            classIconUi = (UIWidget_o *)v48->fields.classIconUi;
            if ( classIconUi )
            {
              UIWidget__set_depth(classIconUi, classIconUi->fields.mDepth + 1, 0LL);
              if ( *p_selectedClassIcon )
              {
                ClassBoardEnterAnimName = ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                            *p_selectedClassIcon,
                                            v50);
                if ( *p_selectedClassIcon )
                {
                  v52 = ClassBoardEnterAnimName;
                  anim = (*p_selectedClassIcon)->fields.anim;
                  if ( anim )
                  {
                    Clip = UnityEngine_Animation__GetClip(anim, v52, 0LL);
                    v59 = sub_B170CC(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, v55, v56, v57, v58);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v59,
                      Clip,
                      0LL);
                    v61 = ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v60);
                    if ( v59 )
                    {
                      v66 = *(float *)(v59 + 28);
                      v67 = this->fields.anim;
                      v68 = v61;
                      v69 = (SchedulerTaskAnimation_o *)sub_B170CC(SchedulerTaskAnimation_TypeInfo, v62, v63, v64, v65);
                      SchedulerTaskAnimation___ctor(v69, v67, v68, 0LL);
                      v71 = ClassBoardSelectViewManager__DelayAttachedTask(v66, (SchedulerTaskBase_o *)v69, v70);
                      v72 = *(float *)(v59 + 44);
                      v73 = (System_Int32_array **)v71;
                      v78 = sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v74, v75, v76, v77);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v78, v72, 0LL);
                      v79 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v84 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                                  SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                  v80,
                                                                  v81,
                                                                  v82,
                                                                  v83);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v84,
                        v79,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v78 )
                      {
                        *(_QWORD *)(v78 + 32) = v84;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)(v78 + 32),
                          (System_Int32_array **)v84,
                          v85,
                          v86,
                          v87,
                          v88,
                          v89,
                          v90);
                        v95 = AvalonSceneManager_TypeInfo;
                        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v95 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v95->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v25 + 20) = 1;
                        *(float *)(v25 + 24) = DEFAULT_FADE_TIME;
                        v97 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v91, v92, v93, v94);
                        System_Func_bool____ctor(
                          v97,
                          (Il2CppObject *)v25,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__,
                          (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
                        v102 = sub_B170CC(SchedulerTaskWaitWhile_TypeInfo, v98, v99, v100, v101);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v102, v97, 0LL);
                        v107 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                                     SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                     v103,
                                                                     v104,
                                                                     v105,
                                                                     v106);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v107,
                          (Il2CppObject *)v25,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v102 )
                        {
                          *(_QWORD *)(v102 + 24) = v107;
                          sub_B16F98(
                            (BattleServantConfConponent_o *)(v102 + 24),
                            (System_Int32_array **)v107,
                            v108,
                            v109,
                            v110,
                            v111,
                            v112,
                            v113);
                          v115 = ClassBoardSelectViewManager__DelayAttachedTask(
                                   *(float *)(v59 + 24),
                                   (SchedulerTaskBase_o *)v102,
                                   v114);
                          if ( *p_selectedClassIcon )
                          {
                            v120 = (System_Int32_array **)v115;
                            v121 = (*p_selectedClassIcon)->fields.anim;
                            v122 = (SchedulerTaskAnimation_o *)sub_B170CC(
                                                                 SchedulerTaskAnimation_TypeInfo,
                                                                 v116,
                                                                 v117,
                                                                 v118,
                                                                 v119);
                            SchedulerTaskAnimation___ctor(v122, v121, v52, 0LL);
                            v124 = sub_B17014(SchedulerTaskBase___TypeInfo, 4LL, v123);
                            if ( v124 )
                            {
                              v132 = (SchedulerTaskBase_array *)v124;
                              if ( !v122 || (v124 = sub_B170BC(v122, *(_QWORD *)(*(_QWORD *)v124 + 64LL))) != 0 )
                              {
                                if ( !v132->max_length )
                                  goto LABEL_39;
                                v132->m_Items[0] = (SchedulerTaskBase_o *)v122;
                                sub_B16F98(
                                  (BattleServantConfConponent_o *)v132->m_Items,
                                  (System_Int32_array **)v122,
                                  v126,
                                  v127,
                                  v128,
                                  v129,
                                  v130,
                                  v131);
                                if ( !v73 || (v124 = sub_B170BC(v73, v132->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v132->max_length <= 1 )
                                    goto LABEL_39;
                                  v132->m_Items[1] = (SchedulerTaskBase_o *)v73;
                                  sub_B16F98(
                                    (BattleServantConfConponent_o *)&v132->m_Items[1],
                                    v73,
                                    v126,
                                    v133,
                                    v134,
                                    v135,
                                    v136,
                                    v137);
                                  v124 = sub_B170BC(v78, v132->obj.klass->_1.element_class);
                                  if ( v124 )
                                  {
                                    if ( v132->max_length <= 2 )
                                      goto LABEL_39;
                                    v132->m_Items[2] = (SchedulerTaskBase_o *)v78;
                                    sub_B16F98(
                                      (BattleServantConfConponent_o *)&v132->m_Items[2],
                                      (System_Int32_array **)v78,
                                      v126,
                                      v138,
                                      v139,
                                      v140,
                                      v141,
                                      v142);
                                    if ( !v120 || (v124 = sub_B170BC(v120, v132->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v132->max_length > 3 )
                                      {
                                        v132->m_Items[3] = (SchedulerTaskBase_o *)v120;
                                        sub_B16F98(
                                          (BattleServantConfConponent_o *)&v132->m_Items[3],
                                          v120,
                                          v126,
                                          v143,
                                          v144,
                                          v145,
                                          v146,
                                          v147);
                                        v45 = (SchedulerTaskParallel_o *)sub_B170CC(
                                                                           SchedulerTaskParallel_TypeInfo,
                                                                           v148,
                                                                           v149,
                                                                           v150,
                                                                           v151);
                                        SchedulerTaskParallel___ctor(v45, v132, 0LL);
                                        return (SchedulerTaskBase_o *)v45;
                                      }
LABEL_39:
                                      sub_B17100(v124, v125, v126);
                                      sub_B170A0();
                                    }
                                  }
                                }
                              }
                              sub_B170F4(v124);
                              sub_B170A0();
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
    sub_B170D4();
  }
  v45 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskWaitTime_TypeInfo, v41, v42, v43, v44);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v45, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v45;
}


void __fastcall ClassBoardSelectViewManager__HideSelectIconsActiveParticles(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ClassBoardSelectIconComponent_array *iconArray; // x19
  int max_length; // w8
  unsigned int v5; // w20
  ClassBoardSelectIconComponent_o *v6; // x0

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
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v6 = iconArray->m_Items[v5];
      if ( !v6 )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate(v6, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
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

  if ( (byte_40FB9DB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BgmMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_AnimationState___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FB9DB = 1;
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v9 = (struct UnityEngine_AnimationState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    v8,
                                                    (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = v9;
  sub_B16F98(
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.bgmId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
  __int64 v8; // x3
  __int64 v9; // x4
  SceneJumpInfo_o *v10; // x20

  if ( (byte_40FB9E9 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&SceneList_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_40FB9E9 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v10 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v6, v7, v8, v9);
  SceneJumpInfo___ctor_29747932(v10, SceneName, 0LL);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene_19205640(Instance, 32, 0LL, 1, (Il2CppObject *)v10, 0LL);
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
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  System_Action_int__int__o *onSelectClassBoard; // x0
  struct ClassBoardBaseEntity_o *v18; // x8
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct ClassBoardBaseEntity_o *v24; // x8
  CommonUI_o *v25; // x20
  System_String_o *v26; // x19
  System_String_o *closedMessage; // x21
  System_String_o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  CommonUI_o *v33; // x20
  ClassBoardSelectViewManager___c_c *v34; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *v35; // x9
  System_Action_o *_9__35_1; // x22
  System_String_o *v37; // x21
  Il2CppObject *v38; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  ClassBoardSelectViewManager___c_c *v46; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x22
  Il2CppObject *v49; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_40FB9E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__int__Invoke__, icon);
    sub_B16FFC(&System_Action_TypeInfo, v5);
    sub_B16FFC(&Method_ClassBoardSelectViewManager_OnClickIcon__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__, v9);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__, v10);
    sub_B16FFC(&ClassBoardSelectViewManager___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_2982, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40FB9E1 = 1;
  }
  v14 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 75) & 2) != 0 )
    v14 = (_QWORD *)sub_B17004(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v15 = (System_Reflection_MethodBase_o *)sub_B16FE0(v14, v14[3]);
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
            onSelectClassBoard,
            v18->fields.id,
            v18->fields.iconId,
            (const MethodInfo_24C3668 *)Method_System_Action_int__int__Invoke__);
          return;
        }
LABEL_39:
        sub_B170D4();
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = icon->fields._Entity_k__BackingField;
      v25 = (CommonUI_o *)Instance;
      v26 = (System_String_o *)StringLiteral_1;
      if ( v24 )
        closedMessage = v24->fields.closedMessage;
      else
        closedMessage = 0LL;
      v46 = ClassBoardSelectViewManager___c_TypeInfo;
      if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
        v46 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      static_fields = v46->static_fields;
      _9__35_0 = static_fields->__9__35_0;
      if ( !_9__35_0 )
      {
        if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        }
        v49 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
        System_Action___ctor(_9__35_0, v49, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__, 0LL);
        v50 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        v50->__9__35_0 = _9__35_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v50->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      if ( !v25 )
        goto LABEL_39;
      CommonUI__OpenNotificationDialog(v25, v26, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2982, 0LL);
    v33 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v34 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v34 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v35 = v34->static_fields;
    _9__35_1 = v35->__9__35_1;
    v37 = (System_String_o *)StringLiteral_1;
    if ( !_9__35_1 )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v35 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)v35->__9;
      _9__35_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
      System_Action___ctor(_9__35_1, v38, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__, 0LL);
      v39 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v39->__9__35_1 = _9__35_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v39->__9__35_1,
        (System_Int32_array **)_9__35_1,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    if ( !v33 )
      goto LABEL_39;
    CommonUI__OpenNotificationDialog(v33, v37, v28, _9__35_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40FB9DF & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__, v4);
    byte_40FB9DF = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 81, v9, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OpenHelpIfNotYet(
        ClassBoardSelectViewManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x19

  if ( (byte_40FB9E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, finishCallback);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__, v8);
    sub_B16FFC(&ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo, v9);
    byte_40FB9E0 = 1;
  }
  v10 = sub_B170CC(ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo, finishCallback, method, v3, v4);
  ClassBoardSelectViewManager___c__DisplayClass34_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass34_0_o *)v10,
    0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v10 + 24),
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
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
  v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v27, 0, 0, 0, 0, 0LL);
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
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x20
  __int64 v20; // x2
  System_Action_Action__array *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  ActionChain_o *v39; // x19
  __int64 v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x21
  ChainableActionBase_o *v47; // x0

  if ( (byte_40FB9DE & 1) == 0 )
  {
    sub_B16FFC(&ActionChain_TypeInfo, method);
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, v3);
    sub_B16FFC(&System_Action___TypeInfo, v4);
    sub_B16FFC(&System_Action_Action____TypeInfo, v5);
    sub_B16FFC(&Method_System_Action_Action___ctor__, v6);
    sub_B16FFC(&System_Action_Action__TypeInfo, v7);
    sub_B16FFC(&System_Action_TypeInfo, v8);
    sub_B16FFC(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v9);
    sub_B16FFC(&Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__, v10);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v12);
    byte_40FB9DE = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v13);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v14 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v14
    || (MissionNotifyManager__StartPause(v14, 0LL),
        v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18),
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__,
          0LL),
        v21 = (System_Action_Action__array *)sub_B17014(System_Action_Action____TypeInfo, 1LL, v20),
        v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_Action__TypeInfo,
                                                                                     v22,
                                                                                     v23,
                                                                                     v24,
                                                                                     v25),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v26,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
          (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__),
        !v21) )
  {
LABEL_18:
    sub_B170D4();
  }
  if ( v26 )
  {
    v27 = sub_B170BC(v26, v21->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_20;
  }
  if ( !v21->max_length )
    goto LABEL_19;
  v21->m_Items[0] = (System_Action_Action__o *)v26;
  sub_B16F98((BattleServantConfConponent_o *)v21->m_Items, (System_Int32_array **)v26, v29, v30, v31, v32, v33, v34);
  v39 = (ActionChain_o *)sub_B170CC(ActionChain_TypeInfo, v35, v36, v37, v38);
  ActionChain___ctor_21125816(v39, v21, 0LL);
  v27 = sub_B17014(System_Action___TypeInfo, 1LL, v40);
  if ( !v27 )
    goto LABEL_18;
  v46 = v27;
  if ( v19 )
  {
    v27 = sub_B170BC(v19, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
    if ( !v27 )
    {
LABEL_20:
      sub_B170F4(v27);
      sub_B170A0();
    }
  }
  if ( !*(_DWORD *)(v46 + 24) )
  {
LABEL_19:
    sub_B17100(v27, v28, v29);
    sub_B170A0();
  }
  *(_QWORD *)(v46 + 32) = v19;
  sub_B16F98((BattleServantConfConponent_o *)(v46 + 32), (System_Int32_array **)v19, v29, v41, v42, v43, v44, v45);
  if ( !v39 )
    goto LABEL_18;
  v47 = ChainableActionBase__Final((ChainableActionBase_o *)v39, (System_Action_array *)v46, 0LL);
  if ( !v47 )
    goto LABEL_18;
  ChainableActionBase__Execute(v47, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Resume(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager__SetUpHeaderItemList(this, (const MethodInfo *)classBoardBackground);
  if ( !classBoardBackground )
    sub_B170D4();
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0LL);
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__SetUpHeaderItemList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  ClassBoardUIController_o *classBoardUIController_k__BackingField; // x20
  System_Int32_array *headerDlspItemIdArray; // x19
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_40FB9E8 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_40FB9E8 = 1;
  }
  resourceCatalog = this->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  classBoardUIController_k__BackingField = this->fields._classBoardUIController_k__BackingField;
  headerDlspItemIdArray = this->fields.headerDlspItemIdArray;
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
    p_method = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v10 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
          resourceCatalog,
          *(_QWORD *)(p_method + 8));
  if ( !v10 || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_B170D4();
  ClassBoardUIController__SetItemList(
    classBoardUIController_k__BackingField,
    headerDlspItemIdArray,
    *(AtlasManagerUnit_o **)(v10 + 120),
    v11);
}


void __fastcall ClassBoardSelectViewManager__SetupClassBoardUIController(
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
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x0
  UILabel_o *v17; // x20
  UnityEngine_Transform_o *uiRoot; // x21
  UILabel_o *v19; // x0
  ClassBoardUIController_o **p_classBoardUIController_k__BackingField; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct ClassBoardUIController_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Action_o *v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x2
  struct IClassBoardResourceCatalog_o *v53; // x21
  IClassBoardResourceCatalog_c *v54; // x8
  ClassBoardUIController_o *v55; // x20
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x0
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x1
  struct IClassBoardResourceCatalog_o *v62; // x20
  IClassBoardResourceCatalog_c *v63; // x8
  ClassBoardUIController_o *v64; // x19
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x0
  AtlasManagerUnit_o *v69; // x20
  System_String_o *v70; // x0
  const MethodInfo *v71; // x3

  if ( (byte_40FB9E7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardSelectViewManager_OnClickBack__, v3);
    sub_B16FFC(&Method_ClassBoardSelectViewManager_OpenHelp__, v4);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19596, v9);
    sub_B16FFC(&StringLiteral_3022, v10);
    byte_40FB9E7 = 1;
  }
  resourceCatalog = this->fields.resourceCatalog;
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
    p_method = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
          resourceCatalog,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    goto LABEL_40;
  v17 = *(UILabel_o **)(v16 + 88);
  uiRoot = this->fields.uiRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = UnityEngine_Object__Instantiate_UILabel_(
          v17,
          uiRoot,
          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  this->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v19;
  p_classBoardUIController_k__BackingField = &this->fields._classBoardUIController_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._classBoardUIController_k__BackingField,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !this->fields._classBoardUIController_k__BackingField )
    goto LABEL_40;
  ClassBoardUIController__Init(this->fields._classBoardUIController_k__BackingField, v27);
  classBoardUIController_k__BackingField = this->fields._classBoardUIController_k__BackingField;
  v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_40;
  classBoardUIController_k__BackingField->fields.onClickBack = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = this->fields._classBoardUIController_k__BackingField;
  v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v40 )
    goto LABEL_40;
  v40->fields.onClickHelp = v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v40->fields.onClickHelp,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_40;
  ClassBoardUIController__ActivateEffectListButton(*p_classBoardUIController_k__BackingField, 0, v52);
  v53 = this->fields.resourceCatalog;
  if ( !v53 )
    goto LABEL_40;
  v54 = v53->klass;
  v55 = this->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v53->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v54->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v57 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&v53->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v58 = (__int64)&v54->vtable[*v57].method;
  }
  else
  {
LABEL_23:
    v58 = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v59 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v58)(v53, *(_QWORD *)(v58 + 8));
  if ( !v59 )
    goto LABEL_40;
  if ( !v55 )
    goto LABEL_40;
  ClassBoardUIController__SetHeaderTitle(
    v55,
    *(AtlasManagerUnit_o **)(v59 + 120),
    (System_String_o *)StringLiteral_19596,
    v60);
  ClassBoardSelectViewManager__SetUpHeaderItemList(this, v61);
  v62 = this->fields.resourceCatalog;
  if ( !v62 )
    goto LABEL_40;
  v63 = v62->klass;
  v64 = this->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v62->klass->_2.bitflags1 )
  {
    v65 = 0LL;
    v66 = &v63->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v66 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v65;
      v66 += 4;
      if ( v65 >= *(unsigned __int16 *)&v62->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v67 = (__int64)&v63->vtable[*v66].method;
  }
  else
  {
LABEL_32:
    v67 = sub_AAFEF8(v62, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v68 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v67)(v62, *(_QWORD *)(v67 + 8));
  if ( !v68 )
    goto LABEL_40;
  v69 = *(AtlasManagerUnit_o **)(v68 + 120);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3022, 0LL);
  if ( !v64 )
LABEL_40:
    sub_B170D4();
  ClassBoardUIController__SetHeaderMessage(v64, v69, v70, v71);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ClassBoardResourceCatalogAssetBundle_o **v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct IClassBoardResourceCatalog_o *v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x1
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  ClassBoardResourceCatalogAssetBundle_o *v62; // x20
  __int64 v63; // x10
  System_Action_o *v64; // x21
  const MethodInfo *v65; // x2
  __int64 v66; // x10

  if ( (byte_40FB9DC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, classBoardBackground);
    sub_B16FFC(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v9);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__, v10);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__, v11);
    sub_B16FFC(&ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo, v12);
    byte_40FB9DC = 1;
  }
  v13 = sub_B170CC(
          ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo,
          classBoardBackground,
          resourceCatalog,
          finishCallback,
          method);
  ClassBoardSelectViewManager___c__DisplayClass29_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass29_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = classBoardBackground;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)classBoardBackground,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_QWORD *)(v13 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v13 + 32) = resourceCatalog;
  v26 = (ClassBoardResourceCatalogAssetBundle_o **)(v13 + 32);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 32),
    (System_Int32_array **)resourceCatalog,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 40),
    (System_Int32_array **)finishCallback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = *(struct IClassBoardResourceCatalog_o **)(v13 + 32);
  this->fields.resourceCatalog = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v13 + 48) = v50;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 48), (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v57)
    || (v62 = *v26) == 0LL
    || (v63 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1),
        *(&v62->klass->_2.bitflags2 + 1) < (unsigned int)v63)
    || (ClassBoardResourceCatalogAssetBundle_c *)v62->klass->_2.typeHierarchy[v63 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 48), 0LL);
    return;
  }
  v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v58, v59, v60, v61);
  System_Action___ctor(
    v64,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__,
    0LL);
  v66 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v62->klass->_2.bitflags2 + 1) < (unsigned int)v66
    || (ClassBoardResourceCatalogAssetBundle_c *)v62->klass->_2.typeHierarchy[v66 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_B170D4();
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v62, v64, v65);
}


void __fastcall ClassBoardSelectViewManager__UpdateSelectIconsActiveParticles(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ClassBoardSelectIconComponent_array *iconArray; // x20
  int max_length; // w8
  unsigned int v5; // w21
  Il2CppClass **v6; // x8
  ClassBoardSelectIconComponent_o *v7; // x19
  bool IsShowActiveIcon; // w0
  const MethodInfo *v9; // x2

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
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v6 = &iconArray->obj.klass + (int)v5;
      v7 = (ClassBoardSelectIconComponent_o *)v6[4];
      if ( !v7 )
        break;
      IsShowActiveIcon = ClassBoardSelectIconComponent__IsShowActiveIcon(
                           (ClassBoardSelectIconComponent_o *)v6[4],
                           method);
      ClassBoardSelectIconComponent__SetParticlesActivate(v7, IsShowActiveIcon, v9);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


bool __fastcall ClassBoardSelectViewManager__ValidateBoardUIAtlas(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v9; // x0
  AtlasManagerUnit_o *v10; // x0

  if ( (byte_40FB9DD & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19596, v3);
    byte_40FB9DD = 1;
  }
  resourceCatalog = this->fields.resourceCatalog;
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
    p_method = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v9 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
         resourceCatalog,
         *(_QWORD *)(p_method + 8));
  if ( !v9 || (v10 = *(AtlasManagerUnit_o **)(v9 + 120)) == 0LL )
LABEL_13:
    sub_B170D4();
  return AtlasManagerUnit__ValidateLoadSprite(v10, (System_String_o *)StringLiteral_19596, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__33_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9ED & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40FB9ED = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__32_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MissionNotifyManager_o *v5; // x0

  if ( (byte_40FB9EC & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_40FB9EC = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v5 )
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70EB & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSelectViewManager___c_TypeInfo, v1);
    byte_40F70EB = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardSelectViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__44_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__36_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x19

  if ( (byte_40F70EC & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40F70EC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !x
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x, 0LL)) == 0LL
    || (parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(gameObject, 0.0, 0LL);
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
    sub_B170D4();
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
  ClassBoardBackground_o *v10; // x0
  struct ClassBoardSelectViewManager_o *_4__this; // x8
  ClassBoardBackground_o *v12; // x0
  struct UITexture_o *bgTexture; // x20
  UnityEngine_RenderTexture_o *RenderTexture; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct ClassBoardSelectViewManager_o *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct ClassBoardSelectViewManager_o *v32; // x8
  System_Collections_Generic_IEnumerable_T__o *v33; // x20
  ClassBoardSelectViewManager___c_c *v34; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__29_2; // x21
  Il2CppObject *v37; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct ClassBoardSelectViewManager_o *v45; // x20
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v46; // x0
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_c *klass; // x8
  int32_t implementedInterfaces; // w8
  ClassBoardSelectViewManager_o *v49; // x0

  if ( (byte_40F70ED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ClassBoardSelectIconComponent___ctor__, method);
    sub_B16FFC(&System_Action_ClassBoardSelectIconComponent__TypeInfo, v3);
    sub_B16FFC(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___, v4);
    sub_B16FFC(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___, v5);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__, v6);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__, v7);
    sub_B16FFC(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    byte_40F70ED = 1;
  }
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_27;
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0LL);
  v10 = this->fields.classBoardBackground;
  if ( !v10 )
    goto LABEL_27;
  ClassBoardBackground__ActivateEarthAccessories(v10, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  v12 = this->fields.classBoardBackground;
  if ( !v12 )
    goto LABEL_27;
  bgTexture = _4__this->fields.bgTexture;
  RenderTexture = ClassBoardBackground__GetRenderTexture(v12, 0LL);
  if ( !bgTexture )
    goto LABEL_27;
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_RenderTexture_o *, Il2CppMethodPointer))bgTexture->klass->vtable._27_set_mainTexture.method)(
    bgTexture,
    RenderTexture,
    bgTexture->klass->vtable._28_get_shader.methodPtr);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_27;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v19->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_B170CC(
                                                                       System_Action_ClassBoardSelectIconComponent__TypeInfo,
                                                                       v15,
                                                                       v16,
                                                                       v17,
                                                                       v18);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__,
      (const MethodInfo_24B7310 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_27;
  v33 = (System_Collections_Generic_IEnumerable_T__o *)v32->fields.iconArray;
  v34 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v34 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__29_2;
  if ( !_9__29_2 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_ClassBoardSelectIconComponent__TypeInfo,
                                                                                      v28,
                                                                                      v29,
                                                                                      v30,
                                                                                      v31);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_2,
      v37,
      Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__,
      (const MethodInfo_24B7310 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    v38 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v38->__9__29_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__29_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v38->__9__29_2,
      (System_Int32_array **)_9__29_2,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v33,
    (System_Action_T__o *)_9__29_2,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v45 = this->fields.__4__this;
  if ( !v45 )
    goto LABEL_27;
  v46 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v45->fields.iconArray,
          0,
          0LL,
          (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
  if ( v46 )
  {
    klass = v46[1].klass;
    if ( !klass )
      goto LABEL_27;
    implementedInterfaces = (int32_t)klass->_1.implementedInterfaces;
  }
  else
  {
    implementedInterfaces = 0;
  }
  v45->fields.iconDefaultDepth = implementedInterfaces;
  v49 = this->fields.__4__this;
  if ( !v49 )
LABEL_27:
    sub_B170D4();
  ClassBoardSelectViewManager__SetupClassBoardUIController(v49, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass29_0___StartUp_b__1(
        ClassBoardSelectViewManager___c__DisplayClass29_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  IClassBoardResourceCatalog_o *resourceCatalog; // x20
  Il2CppObject *_4__this; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x21

  if ( (byte_40F70EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ClassBoardSelectIconComponent___ctor__, x);
    sub_B16FFC(&System_Action_ClassBoardSelectIconComponent__TypeInfo, v7);
    sub_B16FFC(&Method_ClassBoardSelectViewManager_OnClickIcon__, v8);
    byte_40F70EE = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_ClassBoardSelectIconComponent__TypeInfo,
                                                                               x,
                                                                               method,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v11,
    _4__this,
    (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__,
    (const MethodInfo_24B7310 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
  if ( !x )
    sub_B170D4();
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v11, 0LL);
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
  struct ClassBoardSelectViewManager_o *_4__this; // x8

  if ( (byte_40F70EF & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40F70EF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
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

  if ( (byte_40F70F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F70F0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, this->fields.fadeTime, 0LL, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass37_0___GetTaskOfComingFromClassBoard_b__1(
        ClassBoardSelectViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardSelectIconComponent_o *tmpSelectedIcon; // x9
  struct ClassBoardSelectViewManager_o *_4__this; // x8
  UIWidget_o *classIconUi; // x0

  tmpSelectedIcon = this->fields.tmpSelectedIcon;
  if ( !tmpSelectedIcon
    || (_4__this = this->fields.__4__this) == 0LL
    || (classIconUi = (UIWidget_o *)tmpSelectedIcon->fields.classIconUi) == 0LL )
  {
    sub_B170D4();
  }
  UIWidget__set_depth(classIconUi, _4__this->fields.iconDefaultDepth, 0LL);
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
    sub_B170D4();
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
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__3; // x21
  CommonUI_o *v11; // x20
  float fadeTime; // s8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F70F1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__, v4);
    byte_40F70F1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v11 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__maskFadeout(v11, 2, fadeTime, _9__3, 0LL);
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
    sub_B170D4();
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, 0LL);
}