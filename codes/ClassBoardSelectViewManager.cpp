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
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  SchedulerTaskWaitTime_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  SchedulerTaskBase_array *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  SchedulerTaskOrthostichy_o *v29; // x19
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_42EA881 & 1) == 0 )
  {
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&SchedulerTaskOrthostichy_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v10, v11, v12);
    byte_42EA881 = 1;
  }
  v13 = (SchedulerTaskWaitTime_o *)sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v13, delay, 0LL);
  v14 = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v14 )
    sub_B5D69C(0LL, v15);
  v22 = (SchedulerTaskBase_array *)v14;
  if ( v13 )
  {
    v14 = sub_B5D684(v13, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
    if ( !v14 )
      goto LABEL_12;
  }
  if ( !v22->max_length )
    goto LABEL_11;
  v22->m_Items[0] = (SchedulerTaskBase_o *)v13;
  sub_B5D560((BattleServantConfConponent_o *)v22->m_Items, (System_Int32_array **)v13, v16, v17, v18, v19, v20, v21);
  if ( task )
  {
    v14 = sub_B5D684(task, v22->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_12:
      v32 = sub_B5D6BC(v14);
      sub_B5D668(v32, 0LL);
    }
  }
  if ( v22->max_length <= 1 )
  {
LABEL_11:
    v31 = sub_B5D6C8(v14);
    sub_B5D668(v31, 0LL);
  }
  v22->m_Items[1] = task;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v22->m_Items[1],
    (System_Int32_array **)task,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (SchedulerTaskOrthostichy_o *)sub_B5D694(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v29, v22, 0LL);
  return (SchedulerTaskBase_o *)v29;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v6; // x0

  if ( (byte_42EA873 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_AnimationState___, (_DWORD)method, v2, v3);
    byte_42EA873 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               1,
                                               0LL,
                                               (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v6; // x0

  if ( (byte_42EA874 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_AnimationState___, (_DWORD)method, v2, v3);
    byte_42EA874 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               2,
                                               0LL,
                                               (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v6, 0LL);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x20
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_T__o *events; // x21
  ClassBoardSelectViewManager___c_c *v45; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x22
  Il2CppObject *v48; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_AnimationEvent_array *v56; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v57; // x21
  UnityEngine_AnimationEvent_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0

  if ( (byte_42EA875 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AnimationEvent___ctor__, (_DWORD)animClip, (_DWORD)eventName, method);
    sub_B5D5C4(&System_Action_AnimationEvent__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BasicHelper_Find_AnimationEvent___, v11, v12, v13);
    sub_B5D5C4(&Method_BasicHelper_ForEach_AnimationEvent___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_AnimationEvent__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_AnimationEvent__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__, v23, v24, v25);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__, v26, v27, v28);
    sub_B5D5C4(&ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&ClassBoardSelectViewManager___c_TypeInfo, v32, v33, v34);
    byte_42EA875 = 1;
  }
  v35 = sub_B5D694(ClassBoardSelectViewManager___c__DisplayClass26_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass26_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass26_0_o *)v35,
    0LL);
  if ( !v35
    || (*(_QWORD *)(v35 + 16) = eventName,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v35 + 16),
          (System_Int32_array **)eventName,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43),
        !animClip) )
  {
    sub_B5D69C(v36, v37);
  }
  events = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v45 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v45 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AnimationEvent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_0,
      v48,
      Method_ClassBoardSelectViewManager___c__GetEventTime_b__26_0__,
      (const MethodInfo_258B320 *)Method_System_Action_AnimationEvent___ctor__);
    v49 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v49->__9__26_0 = (struct System_Action_AnimationEvent__o *)_9__26_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    events,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)events, 0LL);
  v56 = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v57 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v57,
    (Il2CppObject *)v35,
    Method_ClassBoardSelectViewManager___c__DisplayClass26_0__GetEventTime_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_AnimationEvent__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_AnimationEvent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v56,
                                                                                                     (System_Func_T__bool__o *)v57,
                                                                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_AnimationEvent___);
  if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return UnityEngine_AnimationEvent__get_time(USFGOActorBattleActionEventConditional_OverwriteParamCondition, 0LL);
  else
    return defaultValue;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetFirstTransitionAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v6; // x0

  if ( (byte_42EA872 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_AnimationState___, (_DWORD)method, v2, v3);
    byte_42EA872 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               0,
                                               0LL,
                                               (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *selectedClassIcon; // x20
  bool v9; // w0
  MethodInfo *v10; // x1
  float result; // s0
  ClassBoardSelectIconComponent_o *ClassBoardEnterAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v13; // x8
  UnityEngine_AnimationClip_o *Clip; // x20
  ClassBoardSelectIconComponent_AnimClipInfo_o *v15; // x19

  if ( (byte_42EA880 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EA880 = 1;
  }
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  result = 0.0;
  if ( !v9 )
  {
    ClassBoardEnterAnimName = this->fields.selectedClassIcon;
    if ( !ClassBoardEnterAnimName
      || (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                                                         ClassBoardEnterAnimName,
                                                                         v10),
          (v13 = this->fields.selectedClassIcon) == 0LL)
      || (v10 = (MethodInfo *)ClassBoardEnterAnimName,
          (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)v13->fields.anim) == 0LL)
      || (Clip = UnityEngine_Animation__GetClip(
                   (UnityEngine_Animation_o *)ClassBoardEnterAnimName,
                   (System_String_o *)v10,
                   0LL),
          v15 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B5D694(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v15, Clip, 0LL),
          !v15) )
    {
      sub_B5D69C(ClassBoardEnterAnimName, v10);
    }
    return v15->fields._ForwardIconAnimStartTime_k__BackingField;
  }
  return result;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
        ClassBoardSelectViewManager_o *this,
        System_Collections_Generic_List_ClassBoardSelectIconComponent__o *iconCompoentList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x19
  __int64 v45; // x20
  __int64 v46; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **current; // x1
  __int64 v55; // x21
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x8
  UnityEngine_AnimationState_o *v59; // x0
  System_String_o *name; // x0
  System_String_o *v61; // x22
  UnityEngine_Animation_o *v62; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  ClassBoardSelectIconComponent_AnimClipInfo_o *v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  UnityEngine_Animation_o *v67; // x23
  __int64 v68; // x21
  SchedulerTaskBase_TaskCallback_o *v69; // x22
  __int64 v70; // x0
  __int64 v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x0
  __int64 v79; // x1
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+20h] [xbp-70h] BYREF

  v4 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconCompoentList;
  if ( (byte_42EA886 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, (_DWORD)iconCompoentList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SchedulerTaskAnimation_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v35, v36, v37);
    sub_B5D5C4(
      &Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__,
      v38,
      v39,
      v40);
    sub_B5D5C4(&ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo, v41, v42, v43);
    byte_42EA886 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  if ( v4 )
  {
    if ( v4->fields._size )
    {
      v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v44,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v81,
        v4,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v82 = v81;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v82,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v45 = sub_B5D694(ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
        ClassBoardSelectViewManager___c__DisplayClass45_0___ctor(
          (ClassBoardSelectViewManager___c__DisplayClass45_0_o *)v45,
          0LL);
        if ( !v45 )
          sub_B5D69C(v46, v47);
        current = (System_Int32_array **)v82.fields.current;
        *(_QWORD *)(v45 + 16) = v82.fields.current;
        v55 = v45 + 16;
        sub_B5D560((BattleServantConfConponent_o *)(v45 + 16), current, v48, v49, v50, v51, v52, v53);
        v58 = *(_QWORD *)(v45 + 16);
        if ( !v58 )
          sub_B5D69C(v56, v57);
        v59 = *(UnityEngine_AnimationState_o **)(v58 + 128);
        if ( v59 )
        {
          name = UnityEngine_AnimationState__get_name(v59, 0LL);
          v58 = *(_QWORD *)v55;
          if ( !*(_QWORD *)v55 )
            sub_B5D69C(name, v57);
          v61 = name;
        }
        else
        {
          v61 = 0LL;
        }
        v62 = *(UnityEngine_Animation_o **)(v58 + 80);
        if ( !v62 )
          sub_B5D69C(0LL, v57);
        Clip = UnityEngine_Animation__GetClip(v62, v61, 0LL);
        v64 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_B5D694(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v64, Clip, 0LL);
        if ( !*(_QWORD *)v55 )
          sub_B5D69C(v65, v66);
        v67 = *(UnityEngine_Animation_o **)(*(_QWORD *)v55 + 80LL);
        v68 = sub_B5D694(SchedulerTaskAnimation_TypeInfo);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v68, v67, v61, 0LL);
        v69 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v69,
          (Il2CppObject *)v45,
          Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v68 )
          sub_B5D69C(v70, v71);
        *(_QWORD *)(v68 + 32) = v69;
        sub_B5D560((BattleServantConfConponent_o *)(v68 + 32), (System_Int32_array **)v69, v72, v73, v74, v75, v76, v77);
        if ( !v44 )
          sub_B5D69C(v78, v79);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v44,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v82,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      v4 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor_17518364(
        (SchedulerTaskParallel_o *)v4,
        (System_Collections_Generic_List_SchedulerTaskBase__o *)v44,
        0LL);
    }
    else
    {
      return 0LL;
    }
  }
  return (SchedulerTaskBase_o *)v4;
}


System_Collections_Generic_List_ClassBoardSelectIconComponent__o *__fastcall ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v27; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__44_0; // x20
  Il2CppObject *v30; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19

  if ( (byte_42EA885 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__, v20, v21, v22);
    sub_B5D5C4(&ClassBoardSelectViewManager___c_TypeInfo, v23, v24, v25);
    byte_42EA885 = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v27 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v27 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__44_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__44_0,
        v30,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
      v31 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v31->__9__44_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__44_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v31->__9__44_0,
        (System_Int32_array **)_9__44_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__44_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                 v38,
                                                                                 (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v39,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
  }
  return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v39;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x20
  UnityEngine_GameObject_o *iconRootObj; // x0
  const MethodInfo *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *selectedClassIcon; // x21
  SchedulerTaskParallel_o *v45; // x20
  struct ClassBoardSelectIconComponent_o *v46; // x8
  struct ClassBoardSelectIconComponent_o *v47; // x8
  System_String_o *v48; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v50; // x23
  const MethodInfo *v51; // x1
  float v52; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v54; // x21
  SchedulerTaskAnimation_o *v55; // x25
  const MethodInfo *v56; // x1
  System_Int32_array **v57; // x21
  AvalonSceneManager_c *v58; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v60; // x24
  SchedulerTaskBase_TaskCallback_o *v61; // x25
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x1
  SchedulerTaskBase_o *v69; // x0
  System_Int32_array **v70; // x1
  System_Int32_array **v71; // x23
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct ClassBoardSelectIconComponent_o *v78; // x8
  UnityEngine_Animation_o *v79; // x19
  __int64 v80; // x24
  SchedulerTaskBase_TaskCallback_o *v81; // x19
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  UnityEngine_GameObject_o *v88; // x19
  __int64 v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  __int64 v109; // x0
  __int64 v110; // x0

  if ( (byte_42EA87E & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SchedulerTaskAnimation_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v23, v24, v25);
    sub_B5D5C4(
      &Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__,
      v29,
      v30,
      v31);
    sub_B5D5C4(&ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo, v32, v33, v34);
    byte_42EA87E = 1;
  }
  v35 = sub_B5D694(ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass37_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass37_0_o *)v35,
    0LL);
  if ( !v35 )
    goto LABEL_33;
  *(_QWORD *)(v35 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 32), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( ((unsigned __int8)iconRootObj & 1) == 0 )
  {
    v46 = this->fields.selectedClassIcon;
    if ( v46 )
    {
      iconRootObj = v46->fields.iconRootObj;
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
                                                        v37);
            v47 = this->fields.selectedClassIcon;
            if ( v47 )
            {
              v48 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v47->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v48, 0LL);
                v50 = sub_B5D694(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v50,
                  Clip,
                  0LL);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v51);
                if ( v50 )
                {
                  v52 = *(float *)(v50 + 28);
                  anim = this->fields.anim;
                  v54 = (System_String_o *)iconRootObj;
                  v55 = (SchedulerTaskAnimation_o *)sub_B5D694(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v55, anim, v54, 0LL);
                  v57 = (System_Int32_array **)ClassBoardSelectViewManager__DelayAttachedTask(
                                                 v52,
                                                 (SchedulerTaskBase_o *)v55,
                                                 v56);
                  v58 = AvalonSceneManager_TypeInfo;
                  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v58 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v58->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v35 + 16) = DEFAULT_FADE_TIME;
                  v60 = sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v60, DEFAULT_FADE_TIME, 0LL);
                  v61 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v61,
                    (Il2CppObject *)v35,
                    Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v60 )
                  {
                    *(_QWORD *)(v60 + 24) = v61;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)(v60 + 24),
                      (System_Int32_array **)v61,
                      v62,
                      v63,
                      v64,
                      v65,
                      v66,
                      v67);
                    v69 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v50 + 24),
                            (SchedulerTaskBase_o *)v60,
                            v68);
                    v70 = (System_Int32_array **)this->fields.selectedClassIcon;
                    v71 = (System_Int32_array **)v69;
                    *(_QWORD *)(v35 + 24) = v70;
                    sub_B5D560((BattleServantConfConponent_o *)(v35 + 24), v70, v72, v73, v74, v75, v76, v77);
                    v78 = this->fields.selectedClassIcon;
                    if ( v78 )
                    {
                      v79 = v78->fields.anim;
                      v80 = sub_B5D694(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v80, v79, v48, 0LL);
                      v81 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v81,
                        (Il2CppObject *)v35,
                        Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v80 )
                      {
                        *(_QWORD *)(v80 + 32) = v81;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)(v80 + 32),
                          (System_Int32_array **)v81,
                          v82,
                          v83,
                          v84,
                          v85,
                          v86,
                          v87);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v88 = iconRootObj;
                          v89 = sub_B5D684(v80, iconRootObj->klass->_1.element_class);
                          if ( v89 )
                          {
                            if ( !LODWORD(v88[1].klass) )
                              goto LABEL_34;
                            v88[1].monitor = (void *)v80;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)&v88[1].monitor,
                              (System_Int32_array **)v80,
                              v90,
                              v91,
                              v92,
                              v93,
                              v94,
                              v95);
                            if ( !v57 || (v89 = sub_B5D684(v57, v88->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v88[1].klass) <= 1 )
                                goto LABEL_34;
                              *(_QWORD *)&v88[1].fields.m_CachedPtr = v57;
                              sub_B5D560(
                                (BattleServantConfConponent_o *)&v88[1].fields,
                                v57,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100,
                                v101);
                              if ( !v71 || (v89 = sub_B5D684(v71, v88->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v88[1].klass) > 2 )
                                {
                                  v88[2].klass = (UnityEngine_GameObject_c *)v71;
                                  sub_B5D560(
                                    (BattleServantConfConponent_o *)&v88[2],
                                    v71,
                                    v102,
                                    v103,
                                    v104,
                                    v105,
                                    v106,
                                    v107);
                                  v45 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
                                  SchedulerTaskParallel___ctor(v45, (SchedulerTaskBase_array *)v88, 0LL);
                                  return (SchedulerTaskBase_o *)v45;
                                }
LABEL_34:
                                v109 = sub_B5D6C8(v89);
                                sub_B5D668(v109, 0LL);
                              }
                            }
                          }
                          v110 = sub_B5D6BC(v89);
                          sub_B5D668(v110, 0LL);
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
    sub_B5D69C(iconRootObj, v37);
  }
  v45 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v45, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v45;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfFirstTransition(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  void *FirstTransitionAnimName; // x0
  __int64 v27; // x1
  System_String_o *v28; // x21
  UnityEngine_AnimationClip_o *Clip; // x0
  const MethodInfo *v30; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v33; // s8
  SchedulerTaskAnimation_o *v34; // x20
  __int64 v35; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  SchedulerTaskBase_TaskCallback_o *_9__36_0; // x21
  Il2CppObject *v44; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  SchedulerTaskBase_array *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  SchedulerTaskParallel_o *v65; // x19
  __int64 v67; // x0
  __int64 v68; // x0

  if ( (byte_42EA87D & 1) == 0 )
  {
    sub_B5D5C4(&SchedulerTaskAnimation_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__, v17, v18, v19);
    sub_B5D5C4(&ClassBoardSelectViewManager___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_6624/*"FadeStart"*/, v23, v24, v25);
    byte_42EA87D = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_20;
  v28 = (System_String_o *)FirstTransitionAnimName;
  Clip = UnityEngine_Animation__GetClip(this->fields.anim, (System_String_o *)FirstTransitionAnimName, 0LL);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                (ClassBoardSelectViewManager_o *)Clip,
                Clip,
                (System_String_o *)StringLiteral_6624/*"FadeStart"*/,
                0.0,
                v30);
  anim = this->fields.anim;
  v33 = EventTime;
  v34 = (SchedulerTaskAnimation_o *)sub_B5D694(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v34, anim, v28, 0LL);
  v35 = sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v35, v33, 0LL);
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
    v44 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      _9__36_0,
      v44,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__36_0__,
      0LL);
    v45 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v45->__9__36_0 = _9__36_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v45->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  if ( !v35
    || (*(_QWORD *)(v35 + 32) = _9__36_0,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v35 + 32),
          (System_Int32_array **)_9__36_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41),
        (FirstTransitionAnimName = (void *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_20:
    sub_B5D69C(FirstTransitionAnimName, v27);
  }
  v58 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v34 )
  {
    FirstTransitionAnimName = (void *)sub_B5D684(v34, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_22;
  }
  if ( !v58->max_length )
    goto LABEL_21;
  v58->m_Items[0] = (SchedulerTaskBase_o *)v34;
  sub_B5D560((BattleServantConfConponent_o *)v58->m_Items, (System_Int32_array **)v34, v52, v53, v54, v55, v56, v57);
  FirstTransitionAnimName = (void *)sub_B5D684(v35, v58->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_22:
    v68 = sub_B5D6BC(FirstTransitionAnimName);
    sub_B5D668(v68, 0LL);
  }
  if ( v58->max_length <= 1 )
  {
LABEL_21:
    v67 = sub_B5D6C8(FirstTransitionAnimName);
    sub_B5D668(v67, 0LL);
  }
  v58->m_Items[1] = (SchedulerTaskBase_o *)v35;
  sub_B5D560((BattleServantConfConponent_o *)&v58->m_Items[1], (System_Int32_array **)v35, v59, v60, v61, v62, v63, v64);
  v65 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v65, v58, 0LL);
  return (SchedulerTaskBase_o *)v65;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  __int64 v60; // x20
  __int64 iconRootObj; // x0
  const MethodInfo *v62; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v64; // x22
  struct ClassBoardSelectIconComponent_o *v65; // x0
  struct ClassBoardSelectIconComponent_o **p_selectedClassIcon; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UnityEngine_Object_o *selectedClassIcon; // x22
  SchedulerTaskParallel_o *v74; // x19
  struct ClassBoardSelectIconComponent_o *v75; // x8
  System_String_o *v76; // x23
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v78; // x25
  const MethodInfo *v79; // x1
  float v80; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v82; // x22
  SchedulerTaskAnimation_o *v83; // x26
  const MethodInfo *v84; // x1
  SchedulerTaskBase_o *v85; // x0
  float v86; // s8
  System_Int32_array **v87; // x24
  __int64 v88; // x22
  Il2CppObject *v89; // x26
  SchedulerTaskBase_TaskCallback_o *v90; // x19
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  AvalonSceneManager_c *v97; // x0
  float DEFAULT_FADE_TIME; // w8
  System_Func_bool__o *v99; // x26
  __int64 v100; // x19
  SchedulerTaskBase_TaskCallback_o *v101; // x26
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  const MethodInfo *v108; // x1
  System_Int32_array **v109; // x19
  UnityEngine_Animation_o *v110; // x20
  SchedulerTaskAnimation_o *v111; // x21
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  SchedulerTaskBase_array *v118; // x20
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  __int64 v138; // x0
  __int64 v139; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA87F & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, baseId, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&SchedulerTaskAnimation_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&SchedulerTaskWaitWhile_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v45, v46, v47);
    sub_B5D5C4(
      &Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__,
      v48,
      v49,
      v50);
    sub_B5D5C4(
      &Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__,
      v51,
      v52,
      v53);
    sub_B5D5C4(
      &Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__,
      v54,
      v55,
      v56);
    sub_B5D5C4(&ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo, v57, v58, v59);
    byte_42EA87F = 1;
  }
  v60 = sub_B5D694(ClassBoardSelectViewManager___c__DisplayClass38_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass38_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass38_0_o *)v60,
    0LL);
  if ( !v60 )
    goto LABEL_38;
  *(_DWORD *)(v60 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v64 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v64,
    (Il2CppObject *)v60,
    Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardSelectIconComponent__bool___ctor__);
  v65 = (struct ClassBoardSelectIconComponent_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    iconArray,
                                                    (System_Func_TSource__bool__o *)v64,
                                                    (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  this->fields.selectedClassIcon = v65;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectedClassIcon,
    (System_Int32_array **)v65,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
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
          v75 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v75 )
          {
            iconRootObj = (__int64)v75->fields.classIconUi;
            if ( iconRootObj )
            {
              UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 168) + 1, 0LL);
              iconRootObj = (__int64)*p_selectedClassIcon;
              if ( *p_selectedClassIcon )
              {
                iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                         (ClassBoardSelectIconComponent_o *)iconRootObj,
                                         v62);
                if ( *p_selectedClassIcon )
                {
                  v76 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v76, 0LL);
                    v78 = sub_B5D694(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v78,
                      Clip,
                      0LL);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v79);
                    if ( v78 )
                    {
                      v80 = *(float *)(v78 + 28);
                      anim = this->fields.anim;
                      v82 = (System_String_o *)iconRootObj;
                      v83 = (SchedulerTaskAnimation_o *)sub_B5D694(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor(v83, anim, v82, 0LL);
                      v85 = ClassBoardSelectViewManager__DelayAttachedTask(v80, (SchedulerTaskBase_o *)v83, v84);
                      v86 = *(float *)(v78 + 44);
                      v87 = (System_Int32_array **)v85;
                      v88 = sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v88, v86, 0LL);
                      v89 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v90 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v90,
                        v89,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v88 )
                      {
                        *(_QWORD *)(v88 + 32) = v90;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)(v88 + 32),
                          (System_Int32_array **)v90,
                          v91,
                          v92,
                          v93,
                          v94,
                          v95,
                          v96);
                        v97 = AvalonSceneManager_TypeInfo;
                        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v97 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v97->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v60 + 20) = 1;
                        *(float *)(v60 + 24) = DEFAULT_FADE_TIME;
                        v99 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
                        System_Func_bool____ctor(
                          v99,
                          (Il2CppObject *)v60,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__1__,
                          (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
                        v100 = sub_B5D694(SchedulerTaskWaitWhile_TypeInfo);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v100, v99, 0LL);
                        v101 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v101,
                          (Il2CppObject *)v60,
                          Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v100 )
                        {
                          *(_QWORD *)(v100 + 24) = v101;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)(v100 + 24),
                            (System_Int32_array **)v101,
                            v102,
                            v103,
                            v104,
                            v105,
                            v106,
                            v107);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v78 + 24),
                                                   (SchedulerTaskBase_o *)v100,
                                                   v108);
                          if ( *p_selectedClassIcon )
                          {
                            v109 = (System_Int32_array **)iconRootObj;
                            v110 = (*p_selectedClassIcon)->fields.anim;
                            v111 = (SchedulerTaskAnimation_o *)sub_B5D694(SchedulerTaskAnimation_TypeInfo);
                            SchedulerTaskAnimation___ctor(v111, v110, v76, 0LL);
                            iconRootObj = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v118 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v111
                                || (iconRootObj = sub_B5D684(v111, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v118->max_length )
                                  goto LABEL_39;
                                v118->m_Items[0] = (SchedulerTaskBase_o *)v111;
                                sub_B5D560(
                                  (BattleServantConfConponent_o *)v118->m_Items,
                                  (System_Int32_array **)v111,
                                  v112,
                                  v113,
                                  v114,
                                  v115,
                                  v116,
                                  v117);
                                if ( !v87 || (iconRootObj = sub_B5D684(v87, v118->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v118->max_length <= 1 )
                                    goto LABEL_39;
                                  v118->m_Items[1] = (SchedulerTaskBase_o *)v87;
                                  sub_B5D560(
                                    (BattleServantConfConponent_o *)&v118->m_Items[1],
                                    v87,
                                    v119,
                                    v120,
                                    v121,
                                    v122,
                                    v123,
                                    v124);
                                  iconRootObj = sub_B5D684(v88, v118->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v118->max_length <= 2 )
                                      goto LABEL_39;
                                    v118->m_Items[2] = (SchedulerTaskBase_o *)v88;
                                    sub_B5D560(
                                      (BattleServantConfConponent_o *)&v118->m_Items[2],
                                      (System_Int32_array **)v88,
                                      v125,
                                      v126,
                                      v127,
                                      v128,
                                      v129,
                                      v130);
                                    if ( !v109
                                      || (iconRootObj = sub_B5D684(v109, v118->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v118->max_length > 3 )
                                      {
                                        v118->m_Items[3] = (SchedulerTaskBase_o *)v109;
                                        sub_B5D560(
                                          (BattleServantConfConponent_o *)&v118->m_Items[3],
                                          v109,
                                          v131,
                                          v132,
                                          v133,
                                          v134,
                                          v135,
                                          v136);
                                        v74 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
                                        SchedulerTaskParallel___ctor(v74, v118, 0LL);
                                        return (SchedulerTaskBase_o *)v74;
                                      }
LABEL_39:
                                      v138 = sub_B5D6C8(iconRootObj);
                                      sub_B5D668(v138, 0LL);
                                    }
                                  }
                                }
                              }
                              v139 = sub_B5D6BC(iconRootObj);
                              sub_B5D668(v139, 0LL);
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
    sub_B5D69C(iconRootObj, v62);
  }
  v74 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v74, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v74;
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
        v6 = sub_B5D6C8(this);
        sub_B5D668(v6, 0LL);
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
    sub_B5D69C(this, method);
  }
}


void __fastcall ClassBoardSelectViewManager__Init(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct UnityEngine_AnimationState_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v29; // x1
  WarEntity_o *Entity; // x0
  System_String_o *age; // x19

  if ( (byte_42EA876 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_AnimationState___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    byte_42EA876 = 1;
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v21 = (struct UnityEngine_AnimationState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                     v20,
                                                     (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animationStateArray,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v29);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.bgmId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  AvalonSceneManager_o *Instance; // x19
  System_String_o *SceneName; // x21
  SceneJumpInfo_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EA884 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SceneList_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8, v9);
    byte_42EA884 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v12 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17508984(v12, SceneName, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  AvalonSceneManager__transitionScene_21030400(Instance, 32, 0LL, 1, (Il2CppObject *)v12, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OnClickIcon(
        ClassBoardSelectViewManager_o *this,
        ClassBoardSelectIconComponent_o *icon,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  void *onSelectClassBoard; // x0
  __int64 v36; // x1
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  struct ClassBoardBaseEntity_o *v38; // x8
  WebViewManager_o *Instance; // x0
  struct ClassBoardBaseEntity_o *v40; // x8
  CommonUI_o *v41; // x20
  System_String_o *v42; // x19
  System_String_o *closedMessage; // x21
  System_String_o *v44; // x19
  CommonUI_o *v45; // x20
  ClassBoardSelectViewManager___c_c *v46; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *v47; // x9
  System_Action_o *_9__35_1; // x22
  System_String_o *v49; // x21
  Il2CppObject *v50; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__35_0; // x22
  Il2CppObject *v60; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  if ( (byte_42EA87C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__int__Invoke__, (_DWORD)icon, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager_OnClickIcon__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__, v18, v19, v20);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__, v21, v22, v23);
    sub_B5D5C4(&ClassBoardSelectViewManager___c_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3050/*"CLASS_BOARD_BASE_UNRELEASED"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42EA87C = 1;
  }
  v33 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 75) & 2) != 0 )
    v33 = (_QWORD *)sub_B5D5CC(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v34 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v33, v33[3]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
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
        v38 = icon->fields._Entity_k__BackingField;
        if ( v38 )
        {
          System_Action_int__int___Invoke(
            (System_Action_int__int__o *)onSelectClassBoard,
            v38->fields.id,
            v38->fields.iconId,
            (const MethodInfo_2597CDC *)Method_System_Action_int__int__Invoke__);
          return;
        }
LABEL_39:
        sub_B5D69C(onSelectClassBoard, v36);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = icon->fields._Entity_k__BackingField;
      v41 = (CommonUI_o *)Instance;
      v42 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v40 )
        closedMessage = v40->fields.closedMessage;
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
        v60 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__35_0, v60, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_0__, 0LL);
        v61 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        v61->__9__35_0 = _9__35_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v61->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
      }
      if ( !v41 )
        goto LABEL_39;
      CommonUI__OpenNotificationDialog(v41, v42, closedMessage, _9__35_0, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3050/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    onSelectClassBoard = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = (CommonUI_o *)onSelectClassBoard;
    v46 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v46 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v47 = v46->static_fields;
    _9__35_1 = v47->__9__35_1;
    v49 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__35_1 )
    {
      if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v47 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)v47->__9;
      _9__35_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__35_1, v50, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__35_1__, 0LL);
      v51 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v51->__9__35_1 = _9__35_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v51->__9__35_1,
        (System_Int32_array **)_9__35_1,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    if ( !v45 )
      goto LABEL_39;
    CommonUI__OpenNotificationDialog(v45, v49, v44, _9__35_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42EA87A & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__, v8, v9, v10);
    byte_42EA87A = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__33_0__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 81, v11, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OpenHelpIfNotYet(
        ClassBoardSelectViewManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o *v30; // x19

  if ( (byte_42EA87B & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)finishCallback, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__, v9, v10, v11);
    sub_B5D5C4(&ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo, v12, v13, v14);
    byte_42EA87B = 1;
  }
  v15 = sub_B5D694(ClassBoardSelectViewManager___c__DisplayClass34_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass34_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass34_0_o *)v15,
    0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)finishCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v15,
    Method_ClassBoardSelectViewManager___c__DisplayClass34_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v30, 0, 0, 0, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__PlayStartAction(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  const MethodInfo *v35; // x1
  MissionNotifyManager_o *v36; // x0
  __int64 v37; // x1
  System_Action_o *v38; // x20
  System_Action_Action__array *v39; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  ActionChain_o *v47; // x19
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  MissionNotifyManager_o *v54; // x21
  __int64 v55; // x0
  __int64 v56; // x0

  if ( (byte_42EA879 & 1) == 0 )
  {
    sub_B5D5C4(&ActionChain_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, v5, v6, v7);
    sub_B5D5C4(&System_Action___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Action_Action____TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Action_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v23, v24, v25);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v32, v33, v34);
    byte_42EA879 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v35);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v36 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v36
    || (MissionNotifyManager__StartPause(v36, 0LL),
        v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager__PlayStartAction_b__32_0__,
          0LL),
        v39 = (System_Action_Action__array *)sub_B5D5DC(System_Action_Action____TypeInfo, 1LL),
        v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v40,
          (Il2CppObject *)this,
          Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__,
          (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__),
        !v39) )
  {
LABEL_18:
    sub_B5D69C(v36, v37);
  }
  if ( v40 )
  {
    v36 = (MissionNotifyManager_o *)sub_B5D684(v40, v39->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_20;
  }
  if ( !v39->max_length )
    goto LABEL_19;
  v39->m_Items[0] = (System_Action_Action__o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)v39->m_Items, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  v47 = (ActionChain_o *)sub_B5D694(ActionChain_TypeInfo);
  ActionChain___ctor_21252180(v47, v39, 0LL);
  v36 = (MissionNotifyManager_o *)sub_B5D5DC(System_Action___TypeInfo, 1LL);
  if ( !v36 )
    goto LABEL_18;
  v54 = v36;
  if ( v38 )
  {
    v36 = (MissionNotifyManager_o *)sub_B5D684(v38, v36->klass->_1.element_class);
    if ( !v36 )
    {
LABEL_20:
      v56 = sub_B5D6BC(v36);
      sub_B5D668(v56, 0LL);
    }
  }
  if ( !LODWORD(v54->fields.mNoDispInfos) )
  {
LABEL_19:
    v55 = sub_B5D6C8(v36);
    sub_B5D668(v55, 0LL);
  }
  v54->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v38;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v54->fields.mMissionNotifyComps,
    (System_Int32_array **)v38,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( !v47 )
    goto LABEL_18;
  v36 = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                    (ChainableActionBase_o *)v47,
                                    (System_Action_array *)v54,
                                    0LL);
  if ( !v36 )
    goto LABEL_18;
  ChainableActionBase__Execute((ChainableActionBase_o *)v36, 0LL);
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
    sub_B5D69C(v4, v5);
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0LL);
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__SetUpHeaderItemList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardSelectViewManager_o *v4; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  ClassBoardUIController_o *classBoardUIController_k__BackingField; // x20
  System_Int32_array *headerDlspItemIdArray; // x19
  unsigned __int64 v9; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_42EA883 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA883 = 1;
  }
  resourceCatalog = v4->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  classBoardUIController_k__BackingField = v4->fields._classBoardUIController_k__BackingField;
  headerDlspItemIdArray = v4->fields.headerDlspItemIdArray;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_B5D69C(this, method);
  ClassBoardUIController__SetItemList(
    classBoardUIController_k__BackingField,
    headerDlspItemIdArray,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    v12);
}


void __fastcall ClassBoardSelectViewManager__SetupClassBoardUIController(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardSelectViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v31; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct UnityEngine_Animation_o *anim; // x20
  UnityEngine_Transform_o *uiRoot; // x21
  System_Int32_array **v36; // x0
  ClassBoardSelectViewManager_o **p_classBoardUIController_k__BackingField; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  System_Action_o *v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ClassBoardUIController_o *v52; // x21
  System_Action_o *v53; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x2
  __int64 v61; // x3
  struct IClassBoardResourceCatalog_o *v62; // x21
  IClassBoardResourceCatalog_c *v63; // x8
  ClassBoardUIController_o *v64; // x20
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x1
  __int64 v70; // x3
  struct IClassBoardResourceCatalog_o *v71; // x20
  IClassBoardResourceCatalog_c *v72; // x8
  ClassBoardUIController_o *v73; // x19
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  AtlasManagerUnit_o *v77; // x20
  const MethodInfo *v78; // x3

  v4 = this;
  if ( (byte_42EA882 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager_OnClickBack__, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager_OpenHelp__, v8, v9, v10);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_19919/*"img_txt_classscore_main"*/, v23, v24, v25);
    this = (ClassBoardSelectViewManager_o *)sub_B5D5C4(&StringLiteral_3090/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, v26, v27, v28);
    byte_42EA882 = 1;
  }
  resourceCatalog = v4->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_40;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v31;
      p_offset += 4;
      if ( v31 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v4->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_40;
  anim = this->fields.anim;
  uiRoot = v4->fields.uiRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)anim,
                                 uiRoot,
                                 (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v4->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v36;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v4->fields._classBoardUIController_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields._classBoardUIController_k__BackingField,
    v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this = (ClassBoardSelectViewManager_o *)v4->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_40;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, method);
  classBoardUIController_k__BackingField = v4->fields._classBoardUIController_k__BackingField;
  v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)v4, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_40;
  classBoardUIController_k__BackingField->fields.onClickBack = v45;
  sub_B5D560(
    (BattleServantConfConponent_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = v4->fields._classBoardUIController_k__BackingField;
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)v4, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v52 )
    goto LABEL_40;
  v52->fields.onClickHelp = v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v52->fields.onClickHelp,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_40;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, v60);
  v62 = v4->fields.resourceCatalog;
  if ( !v62 )
    goto LABEL_40;
  v63 = v62->klass;
  v64 = v4->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v62->klass->_2.bitflags1 )
  {
    v65 = 0LL;
    v66 = &v63->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v66 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v65;
      v66 += 4;
      if ( v65 >= *(unsigned __int16 *)&v62->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v67 = (__int64)&v63->vtable[*v66].method;
  }
  else
  {
LABEL_23:
    v67 = sub_AF54C0(v4->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v61);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v67)(
                                            v62,
                                            *(_QWORD *)(v67 + 8));
  if ( !this )
    goto LABEL_40;
  if ( !v64 )
    goto LABEL_40;
  ClassBoardUIController__SetHeaderTitle(
    v64,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_19919/*"img_txt_classscore_main"*/,
    v68);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v4, v69);
  v71 = v4->fields.resourceCatalog;
  if ( !v71 )
    goto LABEL_40;
  v72 = v71->klass;
  v73 = v4->fields._classBoardUIController_k__BackingField;
  if ( *(_WORD *)&v71->klass->_2.bitflags1 )
  {
    v74 = 0LL;
    v75 = &v72->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v75 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v74;
      v75 += 4;
      if ( v74 >= *(unsigned __int16 *)&v71->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v76 = (__int64)&v72->vtable[*v75].method;
  }
  else
  {
LABEL_32:
    v76 = sub_AF54C0(v71, IClassBoardResourceCatalog_TypeInfo, 0LL, v70);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v76)(
                                            v71,
                                            *(_QWORD *)(v76 + 8));
  if ( !this )
    goto LABEL_40;
  v77 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3090/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v73 )
LABEL_40:
    sub_B5D69C(this, method);
  ClassBoardUIController__SetHeaderMessage(v73, v77, (System_String_o *)this, v78);
}


void __fastcall ClassBoardSelectViewManager__StartUp(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        IClassBoardResourceCatalog_o *resourceCatalog,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  ClassBoardResourceCatalogAssetBundle_o **v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct IClassBoardResourceCatalog_o *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Action_o *v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x1
  ClassBoardResourceCatalogAssetBundle_o *v64; // x20
  __int64 v65; // x10
  System_Action_o *v66; // x21
  const MethodInfo *v67; // x2
  __int64 v68; // x10

  if ( (byte_42EA877 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)classBoardBackground, (_DWORD)resourceCatalog, finishCallback);
    sub_B5D5C4(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__, v12, v13, v14);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__, v15, v16, v17);
    sub_B5D5C4(&ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo, v18, v19, v20);
    byte_42EA877 = 1;
  }
  v21 = sub_B5D694(ClassBoardSelectViewManager___c__DisplayClass29_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass29_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass29_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_12;
  *(_QWORD *)(v21 + 16) = classBoardBackground;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 16),
    (System_Int32_array **)classBoardBackground,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_QWORD *)(v21 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v21 + 32) = resourceCatalog;
  v36 = (ClassBoardResourceCatalogAssetBundle_o **)(v21 + 32);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 32),
    (System_Int32_array **)resourceCatalog,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  *(_QWORD *)(v21 + 40) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 40),
    (System_Int32_array **)finishCallback,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = *(struct IClassBoardResourceCatalog_o **)(v21 + 32);
  this->fields.resourceCatalog = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v21,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v21 + 48) = v56;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 48), (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v63)
    || (v64 = *v36) == 0LL
    || (v65 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1),
        *(&v64->klass->_2.bitflags2 + 1) < (unsigned int)v65)
    || (ClassBoardResourceCatalogAssetBundle_c *)v64->klass->_2.typeHierarchy[v65 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v21 + 48), 0LL);
    return;
  }
  v66 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v21,
    Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__3__,
    0LL);
  v68 = *(&ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v64->klass->_2.bitflags2 + 1) < (unsigned int)v68
    || (ClassBoardResourceCatalogAssetBundle_c *)v64->klass->_2.typeHierarchy[v68 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_B5D69C(v22, v23);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v64, v66, v67);
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
        v9 = sub_B5D6C8(this);
        sub_B5D668(v9, 0LL);
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
    sub_B5D69C(this, method);
  }
}


bool __fastcall ClassBoardSelectViewManager__ValidateBoardUIAtlas(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardSelectViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v10; // x10
  int *p_offset; // x11
  __int64 p_method; // x0

  v4 = this;
  if ( (byte_42EA878 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, (_DWORD)method, v2, v3);
    this = (ClassBoardSelectViewManager_o *)sub_B5D5C4(&StringLiteral_19919/*"img_txt_classscore_main"*/, v5, v6, v7);
    byte_42EA878 = 1;
  }
  resourceCatalog = v4->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_B5D69C(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_19919/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__33_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA888 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42EA888 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__32_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  MissionNotifyManager_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_42EA887 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8, v9, v10);
    byte_42EA887 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v11 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v11 )
    sub_B5D69C(0LL, v12);
  MissionNotifyManager__EndPause(v11, 0LL);
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E89 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSelectViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5E89 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__44_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__36_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x19

  if ( (byte_42E5E8A & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E5E8A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v9 )
    sub_B5D69C(Instance, v8);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_B5D69C(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(gameObject, 0.0, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ClassBoardBackground_o *classBoardBackground; // x0
  struct ClassBoardSelectViewManager_o *_4__this; // x8
  struct UITexture_o *bgTexture; // x20
  struct ClassBoardSelectViewManager_o *v26; // x8
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  struct ClassBoardSelectViewManager_o *v29; // x8
  System_Collections_Generic_IEnumerable_T__o *v30; // x20
  ClassBoardSelectViewManager___c_c *v31; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__29_2; // x21
  Il2CppObject *v34; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v35; // x0
  struct ClassBoardSelectViewManager_o *v36; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t klass; // w8

  if ( (byte_42E5E8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ClassBoardSelectIconComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_ClassBoardSelectIconComponent__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__, v14, v15, v16);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__, v17, v18, v19);
    sub_B5D5C4(&ClassBoardSelectViewManager___c_TypeInfo, v20, v21, v22);
    byte_42E5E8B = 1;
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
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_27;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v26->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_B5D694(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass29_0__StartUp_b__1__,
      (const MethodInfo_258B320 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_27;
  v30 = (System_Collections_Generic_IEnumerable_T__o *)v29->fields.iconArray;
  v31 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( (BYTE3(ClassBoardSelectViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v31 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__29_2;
  if ( !_9__29_2 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__29_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_2,
      v34,
      Method_ClassBoardSelectViewManager___c__StartUp_b__29_2__,
      (const MethodInfo_258B320 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
    v35 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v35->__9__29_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__29_2;
    sub_B5D560(&v35->__9__29_2);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v30,
    (System_Action_T__o *)_9__29_2,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_27;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v36->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
  v36->fields.iconDefaultDepth = klass;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_27:
    sub_B5D69C(classBoardBackground, method);
  ClassBoardSelectViewManager__SetupClassBoardUIController((ClassBoardSelectViewManager_o *)classBoardBackground, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass29_0___StartUp_b__1(
        ClassBoardSelectViewManager___c__DisplayClass29_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  IClassBoardResourceCatalog_o *resourceCatalog; // x20
  Il2CppObject *_4__this; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E5E8C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ClassBoardSelectIconComponent___ctor__, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_ClassBoardSelectIconComponent__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ClassBoardSelectViewManager_OnClickIcon__, v9, v10, v11);
    byte_42E5E8C = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v14,
    _4__this,
    (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__,
    (const MethodInfo_258B320 *)Method_System_Action_ClassBoardSelectIconComponent___ctor__);
  if ( !x )
    sub_B5D69C(v15, v16);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v14, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ClassBoardSelectViewManager___c__DisplayClass34_0_o *v4; // x19
  struct ClassBoardSelectViewManager_o *_4__this; // x8

  v4 = this;
  if ( (byte_42E5E8D & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass34_0_o *)sub_B5D5C4(
                                                                    &Method_ActionExtensions_Call_bool___,
                                                                    (_DWORD)method,
                                                                    v2,
                                                                    v3);
    byte_42E5E8D = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(v4->fields.finishCallback, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E5E8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5E8E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, x);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__3; // x21
  CommonUI_o *v14; // x20
  float fadeTime; // s8

  if ( (byte_42E5E8F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(
      &Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__,
      v8,
      v9,
      v10);
    byte_42E5E8F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v14 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass38_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(&this->fields.__9__3);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__maskFadeout(v14, 2, fadeTime, _9__3, 0LL);
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
    sub_B5D69C(0LL, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, 0LL);
}