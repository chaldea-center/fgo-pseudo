void __fastcall ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.centerPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.centerPos.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__DelayAttachedTask(
        float delay,
        SchedulerTaskBase_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  SchedulerTaskWaitTime_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  SchedulerTaskBase_array *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  SchedulerTaskOrthostichy_o *v30; // x19
  __int64 v32; // x0

  if ( (byte_4B1978C & 1) == 0 )
  {
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, method, v3);
    sub_1BCA7E0(&SchedulerTaskOrthostichy_TypeInfo, v7, v8);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v9, v10);
    byte_4B1978C = 1;
  }
  v11 = (SchedulerTaskWaitTime_o *)sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, method, v3, v4);
  SchedulerTaskWaitTime___ctor(v11, delay, 0LL);
  v12 = sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v12 )
    sub_1BCAA3C(0LL, v13);
  v20 = (SchedulerTaskBase_array *)v12;
  if ( v11 )
  {
    v12 = sub_1BCA91C(v11, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
      goto LABEL_12;
  }
  if ( !v20->max_length )
    goto LABEL_11;
  v20->m_Items[0] = (SchedulerTaskBase_o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)v20->m_Items, (int64_t)v11, v14, v15, v16, v17, v18, v19);
  if ( task )
  {
    v12 = sub_1BCA91C(task, v20->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_12:
      v32 = sub_1BCAA60(v12);
      sub_1BCA908(v32, 0LL);
    }
  }
  if ( v20->max_length <= 1 )
LABEL_11:
    sub_1BCAA44(v12, v13);
  v20->m_Items[1] = task;
  sub_1BCA784((PartyOrganizationUtility_o *)&v20->m_Items[1], (int64_t)task, v21, v22, v23, v24, v25, v26);
  v30 = (SchedulerTaskOrthostichy_o *)sub_1BCAA2C(SchedulerTaskOrthostichy_TypeInfo, v27, v28, v29);
  SchedulerTaskOrthostichy___ctor(v30, v20, 0LL);
  return (SchedulerTaskBase_o *)v30;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v5; // x0

  if ( (byte_4B1977E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_AnimationState___, method, v2);
    byte_4B1977E = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v5 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v5, 0LL);
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
  __int64 v2; // x2
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v5; // x0

  if ( (byte_4B1977F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_AnimationState___, method, v2);
    byte_4B1977F = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v5 = BasicHelper__IndexValue_object_(
               animationStateArray,
               2,
               0LL,
               (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v5, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_AnimationEvent_array *events; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  ClassBoardSelectViewManager___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_T__o *v36; // x21
  System_Action_object__o *_9__24_0; // x22
  Il2CppObject *v38; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Object_array *v46; // x19
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Func_object__bool__o *v50; // x21
  Il2CppObject *object; // x0

  if ( (byte_4B19780 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AnimationEvent__TypeInfo, animClip, eventName);
    sub_1BCA7E0(&Method_BasicHelper_Find_AnimationEvent___, v8, v9);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_AnimationEvent___, v10, v11);
    sub_1BCA7E0(&System_Func_AnimationEvent__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, v14, v15);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__, v16, v17);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c_TypeInfo, v20, v21);
    byte_4B19780 = 1;
  }
  v22 = sub_1BCAA2C(ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo, animClip, eventName, method);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22
    || (*(_QWORD *)(v22 + 16) = eventName,
        sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)eventName, v25, v26, v27, v28, v29, v30),
        !animClip) )
  {
    sub_1BCAA3C(v23, v24);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v35 = ClassBoardSelectViewManager___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, v32);
    v35 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__24_0 = (System_Action_object__o *)v35->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, v32);
      v35 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__24_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AnimationEvent__TypeInfo, v32, v33, v34);
    System_Action_object____ctor(_9__24_0, v38, Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Action_AnimationEvent__o *)_9__24_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__24_0,
      (int64_t)_9__24_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  BasicHelper__ForEach_object_(
    v36,
    (System_Action_T__o *)_9__24_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v36, 0LL);
  v46 = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v50 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_AnimationEvent__bool__TypeInfo, v47, v48, v49);
  System_Func_object__bool____ctor(
    v50,
    (Il2CppObject *)v22,
    Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__,
    0LL);
  object = BasicHelper__Find_object_(
             v46,
             (System_Func_T__bool__o *)v50,
             (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_AnimationEvent___);
  if ( object )
    return UnityEngine_AnimationEvent__get_time((UnityEngine_AnimationEvent_o *)object, 0LL);
  else
    return defaultValue;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetFirstTransitionAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v5; // x0

  if ( (byte_4B1977D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_AnimationState___, method, v2);
    byte_4B1977D = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v5 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v5, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *selectedClassIcon; // x20
  bool v7; // w0
  MethodInfo *v8; // x1
  float result; // s0
  ClassBoardSelectIconComponent_o *ClassBoardEnterAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v11; // x8
  UnityEngine_AnimationClip_o *Clip; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ClassBoardSelectIconComponent_AnimClipInfo_o *v16; // x19
  const MethodInfo *v17; // x2

  if ( (byte_4B1978B & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1978B = 1;
  }
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  result = 0.0;
  if ( !v7 )
  {
    ClassBoardEnterAnimName = this->fields.selectedClassIcon;
    if ( !ClassBoardEnterAnimName
      || (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                                                         ClassBoardEnterAnimName,
                                                                         v8),
          (v11 = this->fields.selectedClassIcon) == 0LL)
      || (v8 = (MethodInfo *)ClassBoardEnterAnimName,
          (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)v11->fields.anim) == 0LL)
      || (Clip = UnityEngine_Animation__GetClip(
                   (UnityEngine_Animation_o *)ClassBoardEnterAnimName,
                   (System_String_o *)v8,
                   0LL),
          v16 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1BCAA2C(
                                                                  ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo,
                                                                  v13,
                                                                  v14,
                                                                  v15),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v16, Clip, v17),
          !v16) )
    {
      sub_1BCAA3C(ClassBoardEnterAnimName, v8);
    }
    return v16->fields._ForwardIconAnimStartTime_k__BackingField;
  }
  return result;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
        ClassBoardSelectViewManager_o *this,
        System_Collections_Generic_List_ClassBoardSelectIconComponent__o *iconCompoentList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x20
  __int64 v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *current; // x1
  __int64 v45; // x21
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x8
  UnityEngine_AnimationState_o *v49; // x0
  System_String_o *name; // x0
  System_String_o *v51; // x22
  UnityEngine_Animation_o *v52; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  ClassBoardSelectIconComponent_AnimClipInfo_o *v57; // x0
  const MethodInfo *v58; // x2
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  UnityEngine_Animation_o *v63; // x23
  int64_t v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  SchedulerTaskBase_TaskCallback_o *v68; // x22
  __int64 v69; // x0
  __int64 v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x0
  __int64 v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Object_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  Il2CppClass **v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+20h] [xbp-80h] BYREF

  v4 = (System_Collections_Generic_List_object__o *)iconCompoentList;
  if ( (byte_4B19791 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, iconCompoentList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v19, v20);
    sub_1BCA7E0(&SchedulerTaskAnimation_TypeInfo, v21, v22);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v23, v24);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v25, v26);
    sub_1BCA7E0(
      &Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__,
      v27,
      v28);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo, v29, v30);
    byte_4B19791 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  if ( v4 )
  {
    if ( v4->fields._size )
    {
      v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                           iconCompoentList,
                                                           method,
                                                           v3);
      System_Collections_Generic_List_object____ctor(
        v31,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v93,
        v4,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v94 = v93;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v94,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v35 = sub_1BCAA2C(ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo, v32, v33, v34);
        System_Object___ctor((Il2CppObject *)v35, 0LL);
        if ( !v35 )
          sub_1BCAA3C(v36, v37);
        current = v94.fields._current;
        *(_QWORD *)(v35 + 16) = v94.fields._current;
        v45 = v35 + 16;
        sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)current, v38, v39, v40, v41, v42, v43);
        v48 = *(_QWORD *)(v35 + 16);
        if ( !v48 )
          sub_1BCAA3C(v46, v47);
        v49 = *(UnityEngine_AnimationState_o **)(v48 + 136);
        if ( v49 )
        {
          name = UnityEngine_AnimationState__get_name(v49, 0LL);
          v48 = *(_QWORD *)v45;
          if ( !*(_QWORD *)v45 )
            sub_1BCAA3C(name, v47);
          v51 = name;
        }
        else
        {
          v51 = 0LL;
        }
        v52 = *(UnityEngine_Animation_o **)(v48 + 88);
        if ( !v52 )
          sub_1BCAA3C(0LL, v47);
        Clip = UnityEngine_Animation__GetClip(v52, v51, 0LL);
        v57 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1BCAA2C(
                                                                ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo,
                                                                v54,
                                                                v55,
                                                                v56);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v57, Clip, v58);
        if ( !*(_QWORD *)v45 )
          sub_1BCAA3C(v59, v60);
        v63 = *(UnityEngine_Animation_o **)(*(_QWORD *)v45 + 88LL);
        v64 = sub_1BCAA2C(SchedulerTaskAnimation_TypeInfo, v60, v61, v62);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v64, v63, v51, 0LL);
        v68 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v65, v66, v67);
        SchedulerTaskBase_TaskCallback___ctor(
          v68,
          (Il2CppObject *)v35,
          Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v64 )
          sub_1BCAA3C(v69, v70);
        *(_QWORD *)(v64 + 32) = v68;
        sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 32), (int64_t)v68, v71, v72, v73, v74, v75, v76);
        if ( !v31 )
          sub_1BCAA3C(v77, v78);
        items = v31->fields._items;
        v86 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1BCAA3C(v77, v78);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)v64,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v88 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v88[4] = (Il2CppClass *)v64;
          sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 4), v64, v79, v80, v81, v82, v83, v84);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v94,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      v4 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(SchedulerTaskParallel_TypeInfo, v89, v90, v91);
      SchedulerTaskParallel___ctor_42003060(
        (SchedulerTaskParallel_o *)v4,
        (System_Collections_Generic_List_SchedulerTaskBase__o *)v31,
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v18; // x0
  System_Func_object__bool__o *_9__42_0; // x20
  Il2CppObject *v20; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_object__o *v30; // x19

  if ( (byte_4B19790 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___, v5, v6);
    sub_1BCA7E0(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__, v13, v14);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c_TypeInfo, v15, v16);
    byte_4B19790 = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v18 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, method);
      v18 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    _9__42_0 = (System_Func_object__bool__o *)v18->static_fields->__9__42_0;
    if ( !_9__42_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18, method);
        v18 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__42_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_ClassBoardSelectIconComponent__bool__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
      System_Func_object__bool____ctor(
        _9__42_0,
        v20,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__,
        0LL);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      static_fields->__9__42_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__42_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
        (int64_t)_9__42_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = System_Linq_Enumerable__Where_object_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__42_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v28,
                                                                                 (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v30;
  }
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x20
  UnityEngine_GameObject_o *iconRootObj; // x0
  const MethodInfo *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  UnityEngine_Object_o *selectedClassIcon; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  SchedulerTaskParallel_o *v38; // x20
  struct ClassBoardSelectIconComponent_o *v39; // x8
  struct ClassBoardSelectIconComponent_o *v40; // x8
  System_String_o *v41; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x23
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  float v51; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v53; // x21
  SchedulerTaskAnimation_o *v54; // x25
  const MethodInfo *v55; // x1
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  SchedulerTaskBase_o *v59; // x21
  AvalonSceneManager_c *v60; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v62; // x24
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  SchedulerTaskBase_TaskCallback_o *v66; // x25
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  const MethodInfo *v73; // x1
  SchedulerTaskBase_o *v74; // x0
  struct ClassBoardSelectIconComponent_o *v75; // x1
  int64_t v76; // x23
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x2
  __int64 v84; // x3
  struct ClassBoardSelectIconComponent_o *v85; // x8
  UnityEngine_Animation_o *v86; // x19
  int64_t v87; // x24
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  SchedulerTaskBase_TaskCallback_o *v91; // x19
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  UnityEngine_GameObject_o *v98; // x19
  __int64 v99; // x0
  __int64 v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v123; // x0

  if ( (byte_4B19789 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&SchedulerTaskAnimation_TypeInfo, v9, v10);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v11, v12);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v13, v14);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v15, v16);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v17, v18);
    sub_1BCA7E0(
      &Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__,
      v19,
      v20);
    sub_1BCA7E0(
      &Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__,
      v21,
      v22);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo, v23, v24);
    byte_4B19789 = 1;
  }
  v25 = sub_1BCAA2C(ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_31;
  *(_QWORD *)(v25 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)this, v28, v29, v30, v31, v32, v33);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( ((unsigned __int8)iconRootObj & 1) == 0 )
  {
    v39 = this->fields.selectedClassIcon;
    if ( v39 )
    {
      iconRootObj = v39->fields.iconRootObj;
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
            v40 = this->fields.selectedClassIcon;
            if ( v40 )
            {
              v41 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v40->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v41, 0LL);
                v46 = sub_1BCAA2C(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, v43, v44, v45);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v46,
                  Clip,
                  v47);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v48);
                if ( v46 )
                {
                  v51 = *(float *)(v46 + 28);
                  anim = this->fields.anim;
                  v53 = (System_String_o *)iconRootObj;
                  v54 = (SchedulerTaskAnimation_o *)sub_1BCAA2C(SchedulerTaskAnimation_TypeInfo, v27, v49, v50);
                  SchedulerTaskAnimation___ctor(v54, anim, v53, 0LL);
                  v59 = ClassBoardSelectViewManager__DelayAttachedTask(v51, (SchedulerTaskBase_o *)v54, v55);
                  v60 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v56);
                    v60 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v60->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v25 + 16) = DEFAULT_FADE_TIME;
                  v62 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v56, v57, v58);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v62, DEFAULT_FADE_TIME, 0LL);
                  v66 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(
                                                              SchedulerTaskBase_TaskCallback_TypeInfo,
                                                              v63,
                                                              v64,
                                                              v65);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v66,
                    (Il2CppObject *)v25,
                    Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v62 )
                  {
                    *(_QWORD *)(v62 + 24) = v66;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 24), (int64_t)v66, v67, v68, v69, v70, v71, v72);
                    v74 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v46 + 24),
                            (SchedulerTaskBase_o *)v62,
                            v73);
                    v75 = this->fields.selectedClassIcon;
                    v76 = (int64_t)v74;
                    *(_QWORD *)(v25 + 24) = v75;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)v75, v77, v78, v79, v80, v81, v82);
                    v85 = this->fields.selectedClassIcon;
                    if ( v85 )
                    {
                      v86 = v85->fields.anim;
                      v87 = sub_1BCAA2C(SchedulerTaskAnimation_TypeInfo, v27, v83, v84);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v87, v86, v41, 0LL);
                      v91 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(
                                                                  SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                  v88,
                                                                  v89,
                                                                  v90);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v91,
                        (Il2CppObject *)v25,
                        Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v87 )
                      {
                        *(_QWORD *)(v87 + 32) = v91;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)(v87 + 32),
                          (int64_t)v91,
                          v92,
                          v93,
                          v94,
                          v95,
                          v96,
                          v97);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v98 = iconRootObj;
                          v99 = sub_1BCA91C(v87, iconRootObj->klass->_1.element_class);
                          if ( v99 )
                          {
                            if ( !LODWORD(v98[1].klass) )
                              goto LABEL_32;
                            v98[1].monitor = (void *)v87;
                            sub_1BCA784(
                              (PartyOrganizationUtility_o *)&v98[1].monitor,
                              v87,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106);
                            if ( !v59 || (v99 = sub_1BCA91C(v59, v98->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v98[1].klass) <= 1 )
                                goto LABEL_32;
                              *(_QWORD *)&v98[1].fields.m_CachedPtr = v59;
                              sub_1BCA784(
                                (PartyOrganizationUtility_o *)&v98[1].fields,
                                (int64_t)v59,
                                v107,
                                v108,
                                v109,
                                v110,
                                v111,
                                v112);
                              if ( !v76 || (v99 = sub_1BCA91C(v76, v98->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v98[1].klass) > 2 )
                                {
                                  v98[2].klass = (UnityEngine_GameObject_c *)v76;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)&v98[2],
                                    v76,
                                    v113,
                                    v114,
                                    v115,
                                    v116,
                                    v117,
                                    v118);
                                  v38 = (SchedulerTaskParallel_o *)sub_1BCAA2C(
                                                                     SchedulerTaskParallel_TypeInfo,
                                                                     v119,
                                                                     v120,
                                                                     v121);
                                  SchedulerTaskParallel___ctor(v38, (SchedulerTaskBase_array *)v98, 0LL);
                                  return (SchedulerTaskBase_o *)v38;
                                }
LABEL_32:
                                sub_1BCAA44(v99, v100);
                              }
                            }
                          }
                          v123 = sub_1BCAA60(v99);
                          sub_1BCA908(v123, 0LL);
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
LABEL_31:
    sub_1BCAA3C(iconRootObj, v27);
  }
  v38 = (SchedulerTaskParallel_o *)sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v27, v36, v37);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v38, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v38;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfFirstTransition(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v16; // x1
  __int64 v17; // x2
  void *FirstTransitionAnimName; // x0
  __int64 v19; // x1
  System_String_o *v20; // x21
  ClassBoardSelectViewManager_o *Clip; // x0
  const MethodInfo *v22; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v25; // s8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  SchedulerTaskAnimation_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  int64_t v33; // x19
  int64_t v34; // x2
  __int64 v35; // x3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  SchedulerTaskBase_TaskCallback_o *v40; // x21
  Il2CppObject *v41; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  SchedulerTaskBase_array *v55; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  SchedulerTaskParallel_o *v65; // x19
  __int64 v67; // x0

  if ( (byte_4B19788 & 1) == 0 )
  {
    sub_1BCA7E0(&SchedulerTaskAnimation_TypeInfo, method, v2);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v4, v5);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v6, v7);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v8, v9);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__, v12, v13);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_6680/*"FadeStart"*/, v16, v17);
    byte_4B19788 = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_18;
  v20 = (System_String_o *)FirstTransitionAnimName;
  Clip = (ClassBoardSelectViewManager_o *)UnityEngine_Animation__GetClip(
                                            this->fields.anim,
                                            (System_String_o *)FirstTransitionAnimName,
                                            0LL);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                Clip,
                (UnityEngine_AnimationClip_o *)Clip,
                (System_String_o *)StringLiteral_6680/*"FadeStart"*/,
                0.0,
                v22);
  anim = this->fields.anim;
  v25 = EventTime;
  v29 = (SchedulerTaskAnimation_o *)sub_1BCAA2C(SchedulerTaskAnimation_TypeInfo, v26, v27, v28);
  SchedulerTaskAnimation___ctor(v29, anim, v20, 0LL);
  v33 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v30, v31, v32);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v33, v25, 0LL);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, v19);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  v40 = *(SchedulerTaskBase_TaskCallback_o **)(*((_QWORD *)FirstTransitionAnimName + 23) + 40LL);
  if ( !v40 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 56) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName, v19);
      FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v41 = (Il2CppObject *)**((_QWORD **)FirstTransitionAnimName + 23);
    v40 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v19, v34, v35);
    SchedulerTaskBase_TaskCallback___ctor(
      v40,
      v41,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__,
      0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v40;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__34_0, (int64_t)v40, v43, v44, v45, v46, v47, v48);
  }
  if ( !v33
    || (*(_QWORD *)(v33 + 32) = v40,
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)v40, v34, v35, v36, v37, v38, v39),
        (FirstTransitionAnimName = (void *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(FirstTransitionAnimName, v19);
  }
  v55 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v29 )
  {
    FirstTransitionAnimName = (void *)sub_1BCA91C(v29, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !v55->max_length )
    goto LABEL_19;
  v55->m_Items[0] = (SchedulerTaskBase_o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)v55->m_Items, (int64_t)v29, v49, v50, v51, v52, v53, v54);
  FirstTransitionAnimName = (void *)sub_1BCA91C(v33, v55->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v67 = sub_1BCAA60(FirstTransitionAnimName);
    sub_1BCA908(v67, 0LL);
  }
  if ( v55->max_length <= 1 )
LABEL_19:
    sub_1BCAA44(FirstTransitionAnimName, v19);
  v55->m_Items[1] = (SchedulerTaskBase_o *)v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[1], v33, v56, v57, v58, v59, v60, v61);
  v65 = (SchedulerTaskParallel_o *)sub_1BCAA2C(SchedulerTaskParallel_TypeInfo, v62, v63, v64);
  SchedulerTaskParallel___ctor(v65, v55, 0LL);
  return (SchedulerTaskBase_o *)v65;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x20
  __int64 iconRootObj; // x0
  const MethodInfo *v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x21
  System_Func_object__bool__o *v44; // x22
  Il2CppObject *v45; // x0
  struct ClassBoardSelectIconComponent_o **p_selectedClassIcon; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  UnityEngine_Object_o *selectedClassIcon; // x22
  __int64 v55; // x2
  __int64 v56; // x3
  SchedulerTaskParallel_o *v57; // x19
  struct ClassBoardSelectIconComponent_o *v58; // x8
  System_String_o *v59; // x24
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x25
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  float v69; // s8
  UnityEngine_Animation_o *anim; // x23
  System_String_o *v71; // x22
  SchedulerTaskAnimation_o *v72; // x26
  const MethodInfo *v73; // x1
  SchedulerTaskBase_o *v74; // x0
  float v75; // s8
  int64_t v76; // x23
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  int64_t v80; // x22
  Il2CppObject *v81; // x26
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  SchedulerTaskBase_TaskCallback_o *v85; // x19
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  AvalonSceneManager_c *v95; // x0
  float DEFAULT_FADE_TIME; // s0
  System_Func_bool__o *v97; // x26
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x19
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  SchedulerTaskBase_TaskCallback_o *v105; // x26
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  const MethodInfo *v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  int64_t v115; // x19
  UnityEngine_Animation_o *v116; // x20
  SchedulerTaskAnimation_o *v117; // x21
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  SchedulerTaskBase_array *v124; // x20
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v147; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1978A & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, *(_QWORD *)&baseId, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___, v10, v11);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&SchedulerTaskAnimation_TypeInfo, v18, v19);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v20, v21);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v22, v23);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v24, v25);
    sub_1BCA7E0(&SchedulerTaskWaitWhile_TypeInfo, v26, v27);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__, v30, v31);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__, v32, v33);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__, v34, v35);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo, v36, v37);
    byte_4B1978A = 1;
  }
  v38 = sub_1BCAA2C(ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo, *(_QWORD *)&baseId, method, v3);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_36;
  *(_DWORD *)(v38 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v44 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_ClassBoardSelectIconComponent__bool__TypeInfo,
                                         v40,
                                         v41,
                                         v42);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v38,
    Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__,
    0LL);
  v45 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          iconArray,
          (System_Func_TSource__bool__o *)v44,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  this->fields.selectedClassIcon = (struct ClassBoardSelectIconComponent_o *)v45;
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectedClassIcon, (int64_t)v45, v47, v48, v49, v50, v51, v52);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
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
          v58 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v58 )
          {
            iconRootObj = (__int64)v58->fields.classIconUi;
            if ( iconRootObj )
            {
              UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 176) + 1, 0LL);
              iconRootObj = (__int64)*p_selectedClassIcon;
              if ( *p_selectedClassIcon )
              {
                iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                         (ClassBoardSelectIconComponent_o *)iconRootObj,
                                         v40);
                if ( *p_selectedClassIcon )
                {
                  v59 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v59, 0LL);
                    v64 = sub_1BCAA2C(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, v61, v62, v63);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v64,
                      Clip,
                      v65);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v66);
                    if ( v64 )
                    {
                      v69 = *(float *)(v64 + 28);
                      anim = this->fields.anim;
                      v71 = (System_String_o *)iconRootObj;
                      v72 = (SchedulerTaskAnimation_o *)sub_1BCAA2C(SchedulerTaskAnimation_TypeInfo, v40, v67, v68);
                      SchedulerTaskAnimation___ctor(v72, anim, v71, 0LL);
                      v74 = ClassBoardSelectViewManager__DelayAttachedTask(v69, (SchedulerTaskBase_o *)v72, v73);
                      v75 = *(float *)(v64 + 44);
                      v76 = (int64_t)v74;
                      v80 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v77, v78, v79);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v80, v75, 0LL);
                      v81 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v85 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(
                                                                  SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                  v82,
                                                                  v83,
                                                                  v84);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v85,
                        v81,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v80 )
                      {
                        *(_QWORD *)(v80 + 32) = v85;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)(v80 + 32),
                          (int64_t)v85,
                          v86,
                          v87,
                          v88,
                          v89,
                          v90,
                          v91);
                        v95 = AvalonSceneManager_TypeInfo;
                        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v92);
                          v95 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v95->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v38 + 20) = 1;
                        *(float *)(v38 + 24) = DEFAULT_FADE_TIME;
                        v97 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v92, v93, v94);
                        System_Func_bool____ctor(
                          v97,
                          (Il2CppObject *)v38,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__,
                          0LL);
                        v101 = sub_1BCAA2C(SchedulerTaskWaitWhile_TypeInfo, v98, v99, v100);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v101, v97, 0LL);
                        v105 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(
                                                                     SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                     v102,
                                                                     v103,
                                                                     v104);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v105,
                          (Il2CppObject *)v38,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v101 )
                        {
                          *(_QWORD *)(v101 + 24) = v105;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)(v101 + 24),
                            (int64_t)v105,
                            v106,
                            v107,
                            v108,
                            v109,
                            v110,
                            v111);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v64 + 24),
                                                   (SchedulerTaskBase_o *)v101,
                                                   v112);
                          if ( *p_selectedClassIcon )
                          {
                            v115 = iconRootObj;
                            v116 = (*p_selectedClassIcon)->fields.anim;
                            v117 = (SchedulerTaskAnimation_o *)sub_1BCAA2C(
                                                                 SchedulerTaskAnimation_TypeInfo,
                                                                 v40,
                                                                 v113,
                                                                 v114);
                            SchedulerTaskAnimation___ctor(v117, v116, v59, 0LL);
                            iconRootObj = sub_1BCA888(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v124 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v117
                                || (iconRootObj = sub_1BCA91C(v117, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v124->max_length )
                                  goto LABEL_37;
                                v124->m_Items[0] = (SchedulerTaskBase_o *)v117;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)v124->m_Items,
                                  (int64_t)v117,
                                  v118,
                                  v119,
                                  v120,
                                  v121,
                                  v122,
                                  v123);
                                if ( !v76 || (iconRootObj = sub_1BCA91C(v76, v124->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v124->max_length <= 1 )
                                    goto LABEL_37;
                                  v124->m_Items[1] = (SchedulerTaskBase_o *)v76;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)&v124->m_Items[1],
                                    v76,
                                    v125,
                                    v126,
                                    v127,
                                    v128,
                                    v129,
                                    v130);
                                  iconRootObj = sub_1BCA91C(v80, v124->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v124->max_length <= 2 )
                                      goto LABEL_37;
                                    v124->m_Items[2] = (SchedulerTaskBase_o *)v80;
                                    sub_1BCA784(
                                      (PartyOrganizationUtility_o *)&v124->m_Items[2],
                                      v80,
                                      v131,
                                      v132,
                                      v133,
                                      v134,
                                      v135,
                                      v136);
                                    if ( !v115
                                      || (iconRootObj = sub_1BCA91C(v115, v124->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v124->max_length > 3 )
                                      {
                                        v124->m_Items[3] = (SchedulerTaskBase_o *)v115;
                                        sub_1BCA784(
                                          (PartyOrganizationUtility_o *)&v124->m_Items[3],
                                          v115,
                                          v137,
                                          v138,
                                          v139,
                                          v140,
                                          v141,
                                          v142);
                                        v57 = (SchedulerTaskParallel_o *)sub_1BCAA2C(
                                                                           SchedulerTaskParallel_TypeInfo,
                                                                           v143,
                                                                           v144,
                                                                           v145);
                                        SchedulerTaskParallel___ctor(v57, v124, 0LL);
                                        return (SchedulerTaskBase_o *)v57;
                                      }
LABEL_37:
                                      sub_1BCAA44(iconRootObj, v40);
                                    }
                                  }
                                }
                              }
                              v147 = sub_1BCAA60(iconRootObj);
                              sub_1BCA908(v147, 0LL);
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
LABEL_36:
    sub_1BCAA3C(iconRootObj, v40);
  }
  v57 = (SchedulerTaskParallel_o *)sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v40, v55, v56);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v57, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v57;
}


void __fastcall ClassBoardSelectViewManager__HideSelectIconsActiveParticles(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ClassBoardSelectIconComponent_array *iconArray; // x19
  int max_length; // w8
  unsigned int v5; // w20

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
        sub_1BCAA44(this, method);
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall ClassBoardSelectViewManager__Init(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Object_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  Il2CppObject *Master_object; // x0
  __int64 v24; // x1
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  System_String_o *monitor; // x19

  if ( (byte_4B19781 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_AnimationState___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v10, v11);
    sub_1BCA7E0(&SoundManager_TypeInfo, v12, v13);
    byte_4B19781 = 1;
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.anim,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          v14,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v15;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animationStateArray,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v24);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.bgmId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
  if ( Entity )
  {
    monitor = (System_String_o *)Entity[1].monitor;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v26);
    SoundManager__playBgm(monitor, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OnClickBack(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  System_String_o *SceneName; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  SceneJumpInfo_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B1978F & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&SceneList_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    byte_4B1978F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v7);
  SceneName = SceneList__getSceneName(92, 0LL);
  v13 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v10, v11, v12);
  SceneJumpInfo___ctor_39380796(v13, SceneName, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  AvalonSceneManager__transitionScene_38996320((AvalonSceneManager_o *)Instance, 32, 0LL, 1, (Il2CppObject *)v13, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OnClickIcon(
        ClassBoardSelectViewManager_o *this,
        ClassBoardSelectIconComponent_o *icon,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  void *IsOpen; // x0
  __int64 v24; // x1
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  struct System_Action_int__int__o *onSelectClassBoard; // x8
  struct ClassBoardBaseEntity_o *v27; // x9
  Il2CppObject *Instance; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  struct ClassBoardBaseEntity_o *v31; // x9
  CommonUI_o *v32; // x20
  System_String_o *closedMessage; // x19
  System_String_o *v34; // x19
  __int64 v35; // x2
  __int64 v36; // x3
  CommonUI_o *v37; // x20
  ClassBoardSelectViewManager___c_c *v38; // x8
  System_Action_o *_9__33_1; // x22
  System_String_o *v40; // x21
  Il2CppObject *v41; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x21
  System_Action_o *v50; // x22
  Il2CppObject *v51; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4B19787 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, icon, method);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager_OnClickIcon__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, v11, v12);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, v13, v14);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_3501/*"CLASS_BOARD_BASE_UNRELEASED"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B19787 = 1;
  }
  v21 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  if ( !icon )
    goto LABEL_34;
  if ( icon->fields.isReleased )
  {
    Entity_k__BackingField = icon->fields._Entity_k__BackingField;
    if ( Entity_k__BackingField
      && (IsOpen = (void *)ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0LL), ((unsigned __int8)IsOpen & 1) != 0) )
    {
      onSelectClassBoard = this->fields.onSelectClassBoard;
      if ( onSelectClassBoard )
      {
        v27 = icon->fields._Entity_k__BackingField;
        if ( v27 )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))onSelectClassBoard->fields.m_target)(
            onSelectClassBoard->fields.original_method_info,
            (unsigned int)v27->fields.id,
            (unsigned int)v27->fields.iconId,
            *(_QWORD *)&onSelectClassBoard->fields.extra_arg);
          return;
        }
LABEL_34:
        sub_1BCAA3C(IsOpen, v24);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v31 = icon->fields._Entity_k__BackingField;
      v32 = (CommonUI_o *)Instance;
      if ( v31 )
        closedMessage = v31->fields.closedMessage;
      else
        closedMessage = 0LL;
      v49 = (System_String_o *)StringLiteral_1/*""*/;
      IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, v24);
        IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v50 = *(System_Action_o **)(*((_QWORD *)IsOpen + 23) + 32LL);
      if ( !v50 )
      {
        if ( !*((_DWORD *)IsOpen + 56) )
        {
          j_il2cpp_runtime_class_init_0(IsOpen, v24);
          IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
        }
        v51 = (Il2CppObject *)**((_QWORD **)IsOpen + 23);
        v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v29, v30);
        System_Action___ctor(v50, v51, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, 0LL);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        static_fields->__9__33_0 = v50;
        sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__33_0, (int64_t)v50, v53, v54, v55, v56, v57, v58);
      }
      if ( !v32 )
        goto LABEL_34;
      CommonUI__OpenNotificationDialog(v32, v49, closedMessage, v50, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3501/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    IsOpen = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v37 = (CommonUI_o *)IsOpen;
    v38 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, v24);
      v38 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    _9__33_1 = v38->static_fields->__9__33_1;
    v40 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__33_1 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38, v24);
        v38 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__33_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v35, v36);
      System_Action___ctor(_9__33_1, v41, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, 0LL);
      v42 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v42->__9__33_1 = _9__33_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v42->__9__33_1, (int64_t)_9__33_1, v43, v44, v45, v46, v47, v48);
    }
    if ( !v37 )
      goto LABEL_34;
    CommonUI__OpenNotificationDialog(v37, v40, v34, _9__33_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_4B19785 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__, v6, v7);
    byte_4B19785 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 81, v11, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OpenHelpIfNotYet(
        ClassBoardSelectViewManager_o *this,
        System_Action_o *finishCallback,
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x19

  if ( (byte_4B19786 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, finishCallback, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__, v8, v9);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo, v10, v11);
    byte_4B19786 = 1;
  }
  v12 = sub_1BCAA2C(ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)finishCallback, v21, v22, v23, v24, v25, v26);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v30, 0, 0, 0, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__PlayStartAction(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x1
  char *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x20
  __int64 v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_object__o *v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  ActionChain_o *v41; // x19
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Action_array *v48; // x21

  if ( (byte_4B19784 & 1) == 0 )
  {
    sub_1BCA7E0(&ActionChain_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, v4, v5);
    sub_1BCA7E0(&System_Action___TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Action_Action____TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Action_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v14, v15);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, v16, v17);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v18, v19);
    byte_4B19784 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v20);
  Instance = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, 0LL);
  v27 = sub_1BCA888(System_Action_Action____TypeInfo, 1LL);
  v31 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v28, v29, v30);
  System_Action_object____ctor(v31, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( !v27 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v27 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v27 + 32) = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v31, v32, v33, v34, v35, v36, v37);
  v41 = (ActionChain_o *)sub_1BCAA2C(ActionChain_TypeInfo, v38, v39, v40);
  ActionChain___ctor_47118216(v41, (System_Action_Action__array *)v27, 0LL);
  Instance = (char *)sub_1BCA888(System_Action___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_11;
  v48 = (System_Action_array *)Instance;
  if ( !*((_DWORD *)Instance + 6) )
LABEL_12:
    sub_1BCAA44(Instance, v22);
  *((_QWORD *)Instance + 4) = v26;
  sub_1BCA784((PartyOrganizationUtility_o *)(Instance + 32), (int64_t)v26, v42, v43, v44, v45, v46, v47);
  if ( !v41 || (Instance = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v41, v48, 0LL)) == 0LL )
LABEL_11:
    sub_1BCAA3C(Instance, v22);
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
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
    sub_1BCAA3C(v4, v5);
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0LL);
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__SetUpHeaderItemList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardSelectViewManager_o *v3; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  ClassBoardUIController_o *classBoardUIController_k__BackingField; // x20
  System_Int32_array *headerDlspItemIdArray; // x19
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_4B1978E & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, method, v2);
    byte_4B1978E = 1;
  }
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  classBoardUIController_k__BackingField = v3->fields._classBoardUIController_k__BackingField;
  headerDlspItemIdArray = v3->fields.headerDlspItemIdArray;
  v8 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_1BCAA3C(this, method);
  ClassBoardUIController__SetItemList(
    classBoardUIController_k__BackingField,
    headerDlspItemIdArray,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    0LL);
}


void __fastcall ClassBoardSelectViewManager__SetupClassBoardUIController(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardSelectViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v22; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *anim; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  Il2CppObject *v27; // x0
  ClassBoardSelectViewManager_o **p_classBoardUIController_k__BackingField; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct ClassBoardUIController_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x22
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct IClassBoardResourceCatalog_o *v57; // x21
  IClassBoardResourceCatalog_c *v58; // x8
  ClassBoardUIController_o *v59; // x20
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  const MethodInfo *v63; // x1
  struct IClassBoardResourceCatalog_o *v64; // x20
  IClassBoardResourceCatalog_c *v65; // x8
  ClassBoardUIController_o *v66; // x19
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  AtlasManagerUnit_o *v70; // x20

  v3 = this;
  if ( (byte_4B1978D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager_OnClickBack__, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager_OpenHelp__, v6, v7);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_20734/*"img_txt_classscore_main"*/, v16, v17);
    this = (ClassBoardSelectViewManager_o *)sub_1BCA7E0(&StringLiteral_3541/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, v18, v19);
    byte_4B1978D = 1;
  }
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_38;
  klass = resourceCatalog->klass;
  v22 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_38;
  anim = (Il2CppObject *)this->fields.anim;
  uiRoot = v3->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v27 = UnityEngine_Object__Instantiate_object__49903816(
          anim,
          uiRoot,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v3->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v27;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v3->fields._classBoardUIController_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields._classBoardUIController_k__BackingField,
    (int64_t)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this = (ClassBoardSelectViewManager_o *)v3->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_38;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0LL);
  classBoardUIController_k__BackingField = v3->fields._classBoardUIController_k__BackingField;
  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(v39, (Il2CppObject *)v3, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_38;
  classBoardUIController_k__BackingField->fields.onClickBack = v39;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = v3->fields._classBoardUIController_k__BackingField;
  v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
  System_Action___ctor(v50, (Il2CppObject *)v3, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v46 )
    goto LABEL_38;
  v46->fields.onClickHelp = v50;
  sub_1BCA784((PartyOrganizationUtility_o *)&v46->fields.onClickHelp, (int64_t)v50, v51, v52, v53, v54, v55, v56);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_38;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, 0LL);
  v57 = v3->fields.resourceCatalog;
  if ( !v57 )
    goto LABEL_38;
  v58 = v57->klass;
  v59 = v3->fields._classBoardUIController_k__BackingField;
  v60 = *(unsigned __int16 *)(&v57->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v57->klass->_2.bitflags2 + 3) )
  {
    v61 = &v58->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v61 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_22;
    }
    v62 = (__int64)&v58->vtable[*v61].method;
  }
  else
  {
LABEL_22:
    v62 = sub_1C1C7C0(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v62)(
                                            v57,
                                            *(_QWORD *)(v62 + 8));
  if ( !this )
    goto LABEL_38;
  if ( !v59 )
    goto LABEL_38;
  ClassBoardUIController__SetHeaderTitle(
    v59,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_20734/*"img_txt_classscore_main"*/,
    0LL);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v3, v63);
  v64 = v3->fields.resourceCatalog;
  if ( !v64 )
    goto LABEL_38;
  v65 = v64->klass;
  v66 = v3->fields._classBoardUIController_k__BackingField;
  v67 = *(unsigned __int16 *)(&v64->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v64->klass->_2.bitflags2 + 3) )
  {
    v68 = &v65->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v68 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_31;
    }
    v69 = (__int64)&v65->vtable[*v68].method;
  }
  else
  {
LABEL_31:
    v69 = sub_1C1C7C0(v64, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v69)(
                                            v64,
                                            *(_QWORD *)(v69 + 8));
  if ( !this )
    goto LABEL_38;
  v70 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3541/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v66 )
LABEL_38:
    sub_1BCAA3C(this, method);
  ClassBoardUIController__SetHeaderMessage(v66, v70, (System_String_o *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager__StartUp(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        IClassBoardResourceCatalog_o *resourceCatalog,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  ClassBoardResourceCatalogAssetBundle_o **v32; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct IClassBoardResourceCatalog_o *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x1
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  ClassBoardResourceCatalogAssetBundle_o *v66; // x20
  __int64 methodPtr_low; // x10
  System_Action_o *v68; // x21
  __int64 v69; // x10

  if ( (byte_4B19782 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, classBoardBackground, resourceCatalog);
    sub_1BCA7E0(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__, v11, v12);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__, v13, v14);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo, v15, v16);
    byte_4B19782 = 1;
  }
  v17 = sub_1BCAA2C(
          ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo,
          classBoardBackground,
          resourceCatalog,
          finishCallback);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_12;
  *(_QWORD *)(v17 + 16) = classBoardBackground;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)classBoardBackground, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 32) = resourceCatalog;
  v32 = (ClassBoardResourceCatalogAssetBundle_o **)(v17 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)resourceCatalog, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v17 + 40) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)finishCallback, v39, v40, v41, v42, v43, v44);
  v45 = *(struct IClassBoardResourceCatalog_o **)(v17 + 32);
  this->fields.resourceCatalog = v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resourceCatalog, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v17,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v17 + 48) = v55;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)v55, v56, v57, v58, v59, v60, v61);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v62)
    || (v66 = *v32) == 0LL
    || (methodPtr_low = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v66->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ClassBoardResourceCatalogAssetBundle_c *)v66->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v17 + 48), 0LL);
    return;
  }
  v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v63, v64, v65);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v17,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__,
    0LL);
  v69 = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v66->klass->vtable._0_Equals.methodPtr) < (unsigned int)v69
    || (ClassBoardResourceCatalogAssetBundle_c *)v66->klass->_2.typeHierarchy[v69 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_1BCAA3C(v18, v19);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v66, v68, 0LL);
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
        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  }
}


bool __fastcall ClassBoardSelectViewManager__ValidateBoardUIAtlas(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardSelectViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_4B19783 & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, method, v2);
    this = (ClassBoardSelectViewManager_o *)sub_1BCA7E0(&StringLiteral_20734/*"img_txt_classscore_main"*/, v4, v5);
    byte_4B19783 = 1;
  }
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  v8 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_1BCAA3C(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_20734/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__31_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19793 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B19793 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__30_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B19792 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4, v5);
    byte_4B19792 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._classBoardUIController_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._classBoardUIController_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19794 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSelectViewManager___c_TypeInfo, v1, v2);
    byte_4B19794 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardSelectViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardSelectViewManager___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ClassBoardSelectViewManager___c___ctor(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___GetEventTime_b__24_0(
        ClassBoardSelectViewManager___c_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  if ( !ev )
    sub_1BCAA3C(this, 0LL);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__42_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, (const MethodInfo *)x);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__34_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4B19795 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B19795 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6);
  if ( !v7 )
    sub_1BCAA3C(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___OnClickIcon_b__33_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___c___OnClickIcon_b__33_1(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___c___StartUp_b__27_2(
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
    sub_1BCAA3C(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(gameObject, 0.0, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass24_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c__DisplayClass24_0___GetEventTime_b__1(
        ClassBoardSelectViewManager___c__DisplayClass24_0_o *this,
        UnityEngine_AnimationEvent_o *x,
        const MethodInfo *method)
{
  System_String_o *functionName; // x0

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.eventName, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass27_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass27_0___StartUp_b__0(
        ClassBoardSelectViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  ClassBoardBackground_o *classBoardBackground; // x0
  struct ClassBoardSelectViewManager_o *_4__this; // x8
  struct UITexture_o *bgTexture; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  struct ClassBoardSelectViewManager_o *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x2
  __int64 v29; // x3
  struct ClassBoardSelectViewManager_o *v30; // x8
  System_Collections_Generic_IEnumerable_T__o *v31; // x20
  ClassBoardSelectViewManager___c_c *v32; // x0
  System_Action_object__o *_9__27_2; // x21
  Il2CppObject *v34; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct ClassBoardSelectViewManager_o *v42; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t monitor; // w8

  if ( (byte_4B19796 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ClassBoardSelectIconComponent__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___, v4, v5);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, v8, v9);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__, v10, v11);
    sub_1BCA7E0(&ClassBoardSelectViewManager___c_TypeInfo, v12, v13);
    byte_4B19796 = 1;
  }
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_25;
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0LL);
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_25;
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_25;
  bgTexture = _4__this->fields.bgTexture;
  classBoardBackground = (ClassBoardBackground_o *)ClassBoardBackground__GetRenderTexture(classBoardBackground, 0LL);
  if ( !bgTexture )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)((__int64 (__fastcall *)(struct UITexture_o *, ClassBoardBackground_o *, Il2CppMethodPointer))bgTexture->klass->vtable._27_set_mainTexture.method)(
                                                     bgTexture,
                                                     classBoardBackground,
                                                     bgTexture->klass->vtable._28_get_shader.methodPtr);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_25;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v19->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_1BCAA2C(
                                                                       System_Action_ClassBoardSelectIconComponent__TypeInfo,
                                                                       method,
                                                                       v17,
                                                                       v18);
    System_Action_object____ctor(
      (System_Action_object__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v22, v23, v24, v25, v26, v27);
  }
  BasicHelper__ForEach_object_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_25;
  v31 = (System_Collections_Generic_IEnumerable_T__o *)v30->fields.iconArray;
  v32 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, method);
    v32 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__27_2 = (System_Action_object__o *)v32->static_fields->__9__27_2;
  if ( !_9__27_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, method);
      v32 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__27_2 = (System_Action_object__o *)sub_1BCAA2C(
                                            System_Action_ClassBoardSelectIconComponent__TypeInfo,
                                            method,
                                            v28,
                                            v29);
    System_Action_object____ctor(_9__27_2, v34, Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__27_2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__27_2,
      (int64_t)_9__27_2,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  BasicHelper__ForEach_object_(
    v31,
    (System_Action_T__o *)_9__27_2,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v42 = this->fields.__4__this;
  if ( !v42 )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_object_(
                                                     (System_Object_array *)v42->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
  if ( classBoardBackground )
  {
    bgObject = classBoardBackground->fields.bgObject;
    if ( !bgObject )
      goto LABEL_25;
    monitor = (int32_t)bgObject[7].monitor;
  }
  else
  {
    monitor = 0;
  }
  v42->fields.iconDefaultDepth = monitor;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_25:
    sub_1BCAA3C(classBoardBackground, method);
  ClassBoardSelectViewManager__SetupClassBoardUIController(
    (ClassBoardSelectViewManager_o *)classBoardBackground,
    method);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass27_0___StartUp_b__1(
        ClassBoardSelectViewManager___c__DisplayClass27_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  IClassBoardResourceCatalog_o *resourceCatalog; // x20
  Il2CppObject *_4__this; // x22
  System_Action_object__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4B19797 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ClassBoardSelectIconComponent__TypeInfo, x, method);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager_OnClickIcon__, v6, v7);
    byte_4B19797 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v10 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ClassBoardSelectIconComponent__TypeInfo, x, method, v3);
  System_Action_object____ctor(v10, _4__this, (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__, 0LL);
  if ( !x )
    sub_1BCAA3C(v11, v12);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v10, v13);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass27_0___StartUp_b__3(
        ClassBoardSelectViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.startUpAction, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass32_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass32_0___OpenHelpIfNotYet_b__0(
        ClassBoardSelectViewManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardSelectViewManager___c__DisplayClass32_0_o *v3; // x19
  struct ClassBoardSelectViewManager_o *_4__this; // x8

  v3 = this;
  if ( (byte_4B19798 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)sub_1BCA7E0(
                                                                    &Method_ActionExtensions_Call_bool___,
                                                                    method,
                                                                    v2);
    byte_4B19798 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(v3->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass35_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass35_0___GetTaskOfComingFromClassBoard_b__0(
        ClassBoardSelectViewManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B19799 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B19799 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0LL, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass35_0___GetTaskOfComingFromClassBoard_b__1(
        ClassBoardSelectViewManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardSelectIconComponent_o *tmpSelectedIcon; // x9
  struct ClassBoardSelectViewManager_o *_4__this; // x8

  tmpSelectedIcon = this->fields.tmpSelectedIcon;
  if ( !tmpSelectedIcon
    || (_4__this = this->fields.__4__this) == 0LL
    || (this = (ClassBoardSelectViewManager___c__DisplayClass35_0_o *)tmpSelectedIcon->fields.classIconUi) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  UIWidget__set_depth((UIWidget_o *)this, _4__this->fields.iconDefaultDepth, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass36_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c__DisplayClass36_0___GetTaskOfGoingToClassBoard_b__0(
        ClassBoardSelectViewManager___c__DisplayClass36_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8

  if ( !x || (Entity_k__BackingField = x->fields._Entity_k__BackingField) == 0LL )
    sub_1BCAA3C(this, x);
  return Entity_k__BackingField->fields.id == this->fields.baseId;
}


bool __fastcall ClassBoardSelectViewManager___c__DisplayClass36_0___GetTaskOfGoingToClassBoard_b__1(
        ClassBoardSelectViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  return this->fields.fading;
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass36_0___GetTaskOfGoingToClassBoard_b__2(
        ClassBoardSelectViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__3; // x21
  CommonUI_o *v13; // x20
  float fadeTime; // s8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1979A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__, v6, v7);
    byte_4B1979A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v13 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__maskFadeout(v13, 2, fadeTime, _9__3, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass36_0___GetTaskOfGoingToClassBoard_b__3(
        ClassBoardSelectViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass43_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass43_0___GetPlayClassBoardReleaseEffect_b__0(
        ClassBoardSelectViewManager___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectIconComponent_o *iconComponent; // x0

  iconComponent = this->fields.iconComponent;
  if ( !iconComponent )
    sub_1BCAA3C(0LL, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, method);
}