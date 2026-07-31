void ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.centerPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.centerPos.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__DelayAttachedTask(
        float delay,
        SchedulerTaskBase_o *task,
        const MethodInfo *method)
{
  SchedulerTaskWaitTime_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  SchedulerTaskBase_array *v14; // x20
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  SchedulerTaskOrthostichy_o *v22; // x19
  __int64 v24; // x0

  if ( (byte_593C581 & 1) == 0 )
  {
    sub_21FFC50(&SchedulerTaskBase___TypeInfo);
    sub_21FFC50(&SchedulerTaskOrthostichy_TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitTime_TypeInfo);
    byte_593C581 = 1;
  }
  v5 = (SchedulerTaskWaitTime_o *)sub_21FFEBC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v5, delay, 0);
  v6 = sub_21FFD10(SchedulerTaskBase___TypeInfo, 2);
  if ( !v6 )
    sub_21FFECC(0, v7);
  v14 = (SchedulerTaskBase_array *)v6;
  if ( v5 )
  {
    v6 = sub_21FFDA4(v5, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_11;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v14->m_Items, (int32_t)v5, v8, v9, v10, v11, v12, v13);
  if ( task )
  {
    v6 = sub_21FFDA4(task, v14->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_12:
      v24 = sub_21FFEF0(v6, v15);
      sub_21FFD90(v24, 0);
    }
  }
  if ( (v14->max_length & 0xFFFFFFFE) == 0 )
LABEL_11:
    sub_21FFED4(v6);
  v14->m_Items[1] = task;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[1], (int32_t)task, v16, v17, v18, v19, v20, v21);
  v22 = (SchedulerTaskOrthostichy_o *)sub_21FFEBC(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v22, v14, 0);
  return (SchedulerTaskBase_o *)v22;
}


System_String_o *ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_593C572 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_593C572 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0,
               (const MethodInfo_37E18F8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0);
  }
  else
  {
    return 0;
  }
}


System_String_o *ClassBoardSelectViewManager__GetClassBoardExitAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_593C573 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_593C573 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               2,
               0,
               (const MethodInfo_37E18F8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0);
  }
  else
  {
    return 0;
  }
}


float ClassBoardSelectViewManager__GetEventTime(
        ClassBoardSelectViewManager_o *this,
        UnityEngine_AnimationClip_o *animClip,
        System_String_o *eventName,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_AnimationEvent_array *events; // x0
  __int64 v18; // x1
  ClassBoardSelectViewManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__24_0; // x22
  Il2CppObject *v23; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Object_array *v31; // x19
  System_Func_object__bool__o *v32; // x21
  Il2CppObject *object; // x0

  if ( (byte_593C574 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_AnimationEvent__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Find_AnimationEvent___);
    sub_21FFC50(&Method_BasicHelper_ForEach_AnimationEvent___);
    sub_21FFC50(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
    sub_21FFC50(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_593C574 = 1;
  }
  v8 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = eventName,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)eventName, v11, v12, v13, v14, v15, v16),
        !animClip) )
  {
    sub_21FFECC(v9, v10);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0);
  v19 = ClassBoardSelectViewManager___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !*(&ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, v18);
    v19 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__24_0 = (System_Action_object__o *)static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v18);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__24_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(_9__24_0, v23, Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, 0);
    v24 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v24->__9__24_0 = (struct System_Action_AnimationEvent__o *)_9__24_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__24_0, (int32_t)_9__24_0, v25, v26, v27, v28, v29, v30);
  }
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)_9__24_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v20, 0);
  v31 = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0);
  v32 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__,
    0);
  object = BasicHelper__Find_object_(
             v31,
             (System_Func_T__bool__o *)v32,
             (const MethodInfo_37DD66C *)Method_BasicHelper_Find_AnimationEvent___);
  if ( object )
    return UnityEngine_AnimationEvent__get_time((UnityEngine_AnimationEvent_o *)object, 0);
  else
    return defaultValue;
}


System_String_o *ClassBoardSelectViewManager__GetFirstTransitionAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_593C571 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_593C571 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0,
               (const MethodInfo_37E18F8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0);
  }
  else
  {
    return 0;
  }
}


float ClassBoardSelectViewManager__GetFowardIconAnimDelayTime(
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
  const MethodInfo *v11; // x2

  if ( (byte_593C580 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C580 = 1;
  }
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality(selectedClassIcon, 0, 0);
  result = 0.0;
  if ( !v4 )
  {
    ClassBoardEnterAnimName = this->fields.selectedClassIcon;
    if ( !ClassBoardEnterAnimName
      || (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                                                         ClassBoardEnterAnimName,
                                                                         v5),
          (v8 = this->fields.selectedClassIcon) == 0)
      || (v5 = (MethodInfo *)ClassBoardEnterAnimName,
          (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)v8->fields.anim) == 0)
      || (Clip = UnityEngine_Animation__GetClip(
                   (UnityEngine_Animation_o *)ClassBoardEnterAnimName,
                   (System_String_o *)v5,
                   0),
          v10 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_21FFEBC(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v10, Clip, v11),
          !v10) )
    {
      sub_21FFECC(ClassBoardEnterAnimName, v5);
    }
    return v10->fields._ForwardIconAnimStartTime_k__BackingField;
  }
  return result;
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
        ClassBoardSelectViewManager_o *this,
        System_Collections_Generic_List_ClassBoardSelectIconComponent__o *iconComponentList,
        System_Action_o *onStartCallback,
        const MethodInfo *method)
{
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t current; // w1
  __int64 *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x8
  UnityEngine_AnimationState_o *v30; // x0
  System_String_o *name; // x0
  __int64 v32; // x1
  System_String_o *v33; // x23
  UnityEngine_Animation_o *v34; // x24
  __int64 v35; // x22
  SchedulerTaskBase_TaskCallback_o *v36; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  SchedulerTaskBase_TaskCallback_o *v57; // x20
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593C587 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_21FFC50(&SchedulerTaskAnimation_TypeInfo);
    sub_21FFC50(&SchedulerTaskParallel_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__1__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass45_1__GetPlayClassBoardReleaseEffect_b__0__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass45_1_TypeInfo);
    byte_593C587 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v6 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_29;
  *(_QWORD *)(v6 + 16) = onStartCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)onStartCallback, v9, v10, v11, v12, v13, v14);
  if ( iconComponentList )
  {
    if ( !iconComponentList->fields._size )
      return 0;
    v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      (System_Collections_Generic_List_object__o *)iconComponentList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
    v66 = v65;
    v65.fields._list = 0;
    *(_QWORD *)&v65.fields._index = &v66;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v66,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
    {
      v16 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass45_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      if ( !v16 )
        sub_21FFECC(v17, v18);
      current = (int32_t)v66.fields._current;
      *(_QWORD *)(v16 + 16) = v66.fields._current;
      v26 = (__int64 *)(v16 + 16);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 16), current, v19, v20, v21, v22, v23, v24);
      v29 = *(_QWORD *)(v16 + 16);
      if ( !v29 )
        sub_21FFECC(v27, v28);
      v30 = *(UnityEngine_AnimationState_o **)(v29 + 136);
      if ( v30 )
      {
        name = UnityEngine_AnimationState__get_name(v30, 0);
        v29 = *v26;
        if ( !*v26 )
          sub_21FFECC(name, v32);
        v33 = name;
      }
      else
      {
        v33 = 0;
      }
      v34 = *(UnityEngine_Animation_o **)(v29 + 88);
      v35 = sub_21FFEBC(SchedulerTaskAnimation_TypeInfo);
      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v35, v34, v33, 0, 0);
      v36 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v36,
        (Il2CppObject *)v16,
        Method_ClassBoardSelectViewManager___c__DisplayClass45_1__GetPlayClassBoardReleaseEffect_b__0__,
        0);
      if ( !v35 )
        sub_21FFECC(v37, v38);
      *(_QWORD *)(v35 + 32) = v36;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 32), (int32_t)v36, v39, v40, v41, v42, v43, v44);
      if ( !v15
        || (items = v15->fields._items,
            v54 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__,
            ++v15->fields._version,
            !items) )
      {
        sub_21FFECC(v45, v46);
      }
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v35,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v35;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v56 + 4), v35, v47, v48, v49, v50, v51, v52);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v66,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
    iconComponentList = (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)sub_21FFEBC(SchedulerTaskParallel_TypeInfo);
    SchedulerTaskParallel___ctor_51259832(
      (SchedulerTaskParallel_o *)iconComponentList,
      (System_Collections_Generic_List_SchedulerTaskBase__o *)v15,
      0);
    v57 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v57,
      (Il2CppObject *)v6,
      Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__1__,
      0);
    if ( iconComponentList )
    {
      *(_QWORD *)&iconComponentList->fields._size = v57;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&iconComponentList->fields._size,
        (int32_t)v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      return (SchedulerTaskBase_o *)iconComponentList;
    }
LABEL_29:
    sub_21FFECC(v7, v8);
  }
  return (SchedulerTaskBase_o *)iconComponentList;
}


System_Collections_Generic_List_ClassBoardSelectIconComponent__o *ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v4; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__44_0; // x20
  Il2CppObject *v7; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_object__o *v17; // x19

  if ( (byte_593C586 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    sub_21FFC50(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__);
    sub_21FFC50(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_593C586 = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v4 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !*(&ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, method);
      v4 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__44_0 = (System_Func_object__bool__o *)static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, method);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__44_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__44_0,
        v7,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__,
        0);
      v8 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v8->__9__44_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__44_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__44_0, (int32_t)_9__44_0, v9, v10, v11, v12, v13, v14);
    }
    v15 = System_Linq_Enumerable__Where_object_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__44_0,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v15,
                                                                                 (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v17;
  }
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetSkipTaskOfFirstTransition(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  void *FirstTransitionAnimName; // x0
  __int64 v4; // x1
  System_String_o *v5; // x21
  ClassBoardSelectViewManager_o *Clip; // x0
  const MethodInfo *v7; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v10; // s8
  SchedulerTaskAnimation_o *v11; // x20
  __int64 v12; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  SchedulerTaskBase_TaskCallback_o *_9__35_0; // x21
  Il2CppObject *v21; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  SchedulerTaskBase_array *v35; // x21
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  SchedulerTaskParallel_o *v43; // x19
  __int64 v45; // x0

  if ( (byte_593C57D & 1) == 0 )
  {
    sub_21FFC50(&SchedulerTaskAnimation_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase___TypeInfo);
    sub_21FFC50(&SchedulerTaskParallel_TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitTime_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__GetSkipTaskOfFirstTransition_b__35_0__);
    sub_21FFC50(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_6869/*"FadeStart"*/);
    byte_593C57D = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_18;
  v5 = (System_String_o *)FirstTransitionAnimName;
  Clip = (ClassBoardSelectViewManager_o *)UnityEngine_Animation__GetClip(
                                            this->fields.anim,
                                            (System_String_o *)FirstTransitionAnimName,
                                            0);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                Clip,
                (UnityEngine_AnimationClip_o *)Clip,
                (System_String_o *)StringLiteral_6869/*"FadeStart"*/,
                0.0,
                v7);
  anim = this->fields.anim;
  v10 = EventTime;
  v11 = (SchedulerTaskAnimation_o *)sub_21FFEBC(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v11, anim, v5, 1, 0);
  v12 = sub_21FFEBC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v12, v10, 0);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !*(&ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, v4);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = (struct ClassBoardSelectViewManager___c_StaticFields *)*((_QWORD *)FirstTransitionAnimName + 23);
  _9__35_0 = static_fields->__9__35_0;
  if ( !_9__35_0 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 57) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName, v4);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__35_0 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      _9__35_0,
      v21,
      Method_ClassBoardSelectViewManager___c__GetSkipTaskOfFirstTransition_b__35_0__,
      0);
    v22 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v22->__9__35_0 = _9__35_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__35_0, (int32_t)_9__35_0, v23, v24, v25, v26, v27, v28);
  }
  if ( !v12
    || (*(_QWORD *)(v12 + 32) = _9__35_0,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)_9__35_0, v13, v14, v15, v16, v17, v18),
        (FirstTransitionAnimName = (void *)sub_21FFD10(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_18:
    sub_21FFECC(FirstTransitionAnimName, v4);
  }
  v35 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v11 )
  {
    FirstTransitionAnimName = (void *)sub_21FFDA4(v11, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !LODWORD(v35->max_length) )
    goto LABEL_19;
  v35->m_Items[0] = (SchedulerTaskBase_o *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v35->m_Items, (int32_t)v11, v29, v30, v31, v32, v33, v34);
  FirstTransitionAnimName = (void *)sub_21FFDA4(v12, v35->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v45 = sub_21FFEF0(FirstTransitionAnimName, v36);
    sub_21FFD90(v45, 0);
  }
  if ( (v35->max_length & 0xFFFFFFFE) == 0 )
LABEL_19:
    sub_21FFED4(FirstTransitionAnimName);
  v35->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v35->m_Items[1], v12, v37, v38, v39, v40, v41, v42);
  v43 = (SchedulerTaskParallel_o *)sub_21FFEBC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v43, v35, 0);
  return (SchedulerTaskBase_o *)v43;
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  UnityEngine_GameObject_o *iconRootObj; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *selectedClassIcon; // x19
  const MethodInfo *v14; // x1
  SchedulerTaskOrthostichy_o *v15; // x19
  System_String_o *FirstTransitionAnimName; // x23
  UnityEngine_Animation_o *anim; // x22
  SchedulerTaskAnimation_o *v18; // x19
  struct ClassBoardSelectIconComponent_o *v19; // x8
  struct ClassBoardSelectIconComponent_o *v20; // x8
  System_String_o *v21; // x23
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v23; // x24
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  System_String_o *v26; // x22
  float v27; // s8
  UnityEngine_Animation_o *v28; // x25
  SchedulerTaskAnimation_o *v29; // x26
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  SchedulerTaskBase_o *v32; // x22
  AvalonSceneManager_c *v33; // x8
  float *p_DEFAULT_FADE_TIME; // x8
  float v35; // s8
  SchedulerTaskWaitTime_c *v36; // x0
  __int64 v37; // x25
  SchedulerTaskBase_TaskCallback_o *v38; // x26
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  const MethodInfo *v45; // x1
  SchedulerTaskBase_o *v46; // x0
  struct ClassBoardSelectIconComponent_o *v47; // x1
  SchedulerTaskBase_o *v48; // x24
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct ClassBoardSelectIconComponent_o *v55; // x8
  UnityEngine_Animation_o *v56; // x20
  __int64 v57; // x25
  SchedulerTaskBase_TaskCallback_o *v58; // x20
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  SchedulerTaskBase_array *v65; // x20
  __int64 v66; // x1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  SchedulerTaskParallel_o *v85; // x21
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  UnityEngine_GameObject_o *v92; // x20
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  __int64 v100; // x0

  if ( (byte_593C57E & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SchedulerTaskAnimation_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase___TypeInfo);
    sub_21FFC50(&SchedulerTaskOrthostichy_TypeInfo);
    sub_21FFC50(&SchedulerTaskParallel_TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitTime_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__0__);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__1__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
    byte_593C57E = 1;
  }
  v3 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_38;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(selectedClassIcon, 0, 0) )
  {
    FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, v14);
    anim = this->fields.anim;
    v18 = (SchedulerTaskAnimation_o *)sub_21FFEBC(SchedulerTaskAnimation_TypeInfo);
    SchedulerTaskAnimation___ctor(v18, anim, FirstTransitionAnimName, 1, 0);
    v19 = this->fields.selectedClassIcon;
    if ( v19 )
    {
      iconRootObj = v19->fields.iconRootObj;
      if ( iconRootObj )
      {
        iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(iconRootObj, 0);
        if ( iconRootObj )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)iconRootObj,
            this->fields.selectedClassIconBasePos,
            0);
          iconRootObj = (UnityEngine_GameObject_o *)this->fields.selectedClassIcon;
          if ( iconRootObj )
          {
            iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectIconComponent__GetClassBoardExitAnimName(
                                                        (ClassBoardSelectIconComponent_o *)iconRootObj,
                                                        v5);
            v20 = this->fields.selectedClassIcon;
            if ( v20 )
            {
              v21 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v20->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v21, 0);
                v23 = sub_21FFEBC(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v23,
                  Clip,
                  v24);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v25);
                if ( v23 )
                {
                  v26 = (System_String_o *)iconRootObj;
                  v27 = *(float *)(v23 + 28);
                  v28 = this->fields.anim;
                  v29 = (SchedulerTaskAnimation_o *)sub_21FFEBC(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v29, v28, v26, 0, 0);
                  v32 = ClassBoardSelectViewManager__DelayAttachedTask(v27, (SchedulerTaskBase_o *)v29, v30);
                  v33 = AvalonSceneManager_TypeInfo;
                  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v31);
                    v33 = AvalonSceneManager_TypeInfo;
                  }
                  p_DEFAULT_FADE_TIME = &v33->static_fields->DEFAULT_FADE_TIME;
                  v35 = *p_DEFAULT_FADE_TIME;
                  v36 = SchedulerTaskWaitTime_TypeInfo;
                  *(float *)(v3 + 16) = *p_DEFAULT_FADE_TIME;
                  v37 = sub_21FFEBC(v36);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v37, v35, 0);
                  v38 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v38,
                    (Il2CppObject *)v3,
                    Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__0__,
                    0);
                  if ( v37 )
                  {
                    *(_QWORD *)(v37 + 24) = v38;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v37 + 24),
                      (int32_t)v38,
                      v39,
                      v40,
                      v41,
                      v42,
                      v43,
                      v44);
                    v46 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v23 + 24),
                            (SchedulerTaskBase_o *)v37,
                            v45);
                    v47 = this->fields.selectedClassIcon;
                    v48 = v46;
                    *(_QWORD *)(v3 + 24) = v47;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v3 + 24),
                      (int32_t)v47,
                      v49,
                      v50,
                      v51,
                      v52,
                      v53,
                      v54);
                    v55 = this->fields.selectedClassIcon;
                    if ( v55 )
                    {
                      v56 = v55->fields.anim;
                      v57 = sub_21FFEBC(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v57, v56, v21, 0, 0);
                      v58 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v58,
                        (Il2CppObject *)v3,
                        Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__1__,
                        0);
                      if ( v57 )
                      {
                        *(_QWORD *)(v57 + 32) = v58;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)(v57 + 32),
                          (int32_t)v58,
                          v59,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_21FFD10(SchedulerTaskBase___TypeInfo, 3);
                        if ( iconRootObj )
                        {
                          v65 = (SchedulerTaskBase_array *)iconRootObj;
                          iconRootObj = (UnityEngine_GameObject_o *)sub_21FFDA4(
                                                                      v57,
                                                                      iconRootObj->klass->_1.element_class);
                          if ( !iconRootObj )
                            goto LABEL_40;
                          if ( !LODWORD(v65->max_length) )
                            goto LABEL_39;
                          v65->m_Items[0] = (SchedulerTaskBase_o *)v57;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)v65->m_Items,
                            v57,
                            v67,
                            v68,
                            v69,
                            v70,
                            v71,
                            v72);
                          if ( v32 )
                          {
                            iconRootObj = (UnityEngine_GameObject_o *)sub_21FFDA4(v32, v65->obj.klass->_1.element_class);
                            if ( !iconRootObj )
                              goto LABEL_40;
                          }
                          if ( (v65->max_length & 0xFFFFFFFE) == 0 )
                            goto LABEL_39;
                          v65->m_Items[1] = v32;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)&v65->m_Items[1],
                            (int32_t)v32,
                            v73,
                            v74,
                            v75,
                            v76,
                            v77,
                            v78);
                          if ( v48 )
                          {
                            iconRootObj = (UnityEngine_GameObject_o *)sub_21FFDA4(v48, v65->obj.klass->_1.element_class);
                            if ( !iconRootObj )
                              goto LABEL_40;
                          }
                          if ( LODWORD(v65->max_length) <= 2 )
                            goto LABEL_39;
                          v65->m_Items[2] = v48;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)&v65->m_Items[2],
                            (int32_t)v48,
                            v79,
                            v80,
                            v81,
                            v82,
                            v83,
                            v84);
                          v85 = (SchedulerTaskParallel_o *)sub_21FFEBC(SchedulerTaskParallel_TypeInfo);
                          SchedulerTaskParallel___ctor(v85, v65, 0);
                          iconRootObj = (UnityEngine_GameObject_o *)sub_21FFD10(SchedulerTaskBase___TypeInfo, 2);
                          if ( iconRootObj )
                          {
                            v92 = iconRootObj;
                            if ( !v18
                              || (iconRootObj = (UnityEngine_GameObject_o *)sub_21FFDA4(
                                                                              v18,
                                                                              iconRootObj->klass->_1.element_class)) != 0 )
                            {
                              if ( !LODWORD(v92[1].klass) )
                                goto LABEL_39;
                              v92[1].monitor = v18;
                              sub_21FFBF4(
                                (MissionNaviTransitionBoardItem_o *)&v92[1].monitor,
                                (int32_t)v18,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91);
                              if ( !v85
                                || (iconRootObj = (UnityEngine_GameObject_o *)sub_21FFDA4(
                                                                                v85,
                                                                                v92->klass->_1.element_class)) != 0 )
                              {
                                if ( ((__int64)v92[1].klass & 0xFFFFFFFE) != 0 )
                                {
                                  v92[1].fields.m_CachedPtr = (intptr_t)v85;
                                  sub_21FFBF4(
                                    (MissionNaviTransitionBoardItem_o *)&v92[1].fields,
                                    (int32_t)v85,
                                    v93,
                                    v94,
                                    v95,
                                    v96,
                                    v97,
                                    v98);
                                  v15 = (SchedulerTaskOrthostichy_o *)sub_21FFEBC(SchedulerTaskOrthostichy_TypeInfo);
                                  SchedulerTaskOrthostichy___ctor(v15, (SchedulerTaskBase_array *)v92, 0);
                                  return (SchedulerTaskBase_o *)v15;
                                }
LABEL_39:
                                sub_21FFED4(iconRootObj);
                              }
                            }
LABEL_40:
                            v100 = sub_21FFEF0(iconRootObj, v66);
                            sub_21FFD90(v100, 0);
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
    sub_21FFECC(iconRootObj, v5);
  }
  v15 = (SchedulerTaskOrthostichy_o *)sub_21FFEBC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v15, 0.5, 0);
  return (SchedulerTaskBase_o *)v15;
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetTaskOfFirstTransition(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  void *FirstTransitionAnimName; // x0
  __int64 v4; // x1
  System_String_o *v5; // x21
  ClassBoardSelectViewManager_o *Clip; // x0
  const MethodInfo *v7; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v10; // s8
  SchedulerTaskAnimation_o *v11; // x20
  __int64 v12; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  SchedulerTaskBase_TaskCallback_o *_9__34_0; // x21
  Il2CppObject *v21; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  SchedulerTaskBase_array *v35; // x21
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  SchedulerTaskParallel_o *v43; // x19
  __int64 v45; // x0

  if ( (byte_593C57C & 1) == 0 )
  {
    sub_21FFC50(&SchedulerTaskAnimation_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase___TypeInfo);
    sub_21FFC50(&SchedulerTaskParallel_TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitTime_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__);
    sub_21FFC50(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_6869/*"FadeStart"*/);
    byte_593C57C = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_18;
  v5 = (System_String_o *)FirstTransitionAnimName;
  Clip = (ClassBoardSelectViewManager_o *)UnityEngine_Animation__GetClip(
                                            this->fields.anim,
                                            (System_String_o *)FirstTransitionAnimName,
                                            0);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                Clip,
                (UnityEngine_AnimationClip_o *)Clip,
                (System_String_o *)StringLiteral_6869/*"FadeStart"*/,
                0.0,
                v7);
  anim = this->fields.anim;
  v10 = EventTime;
  v11 = (SchedulerTaskAnimation_o *)sub_21FFEBC(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v11, anim, v5, 0, 0);
  v12 = sub_21FFEBC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v12, v10, 0);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !*(&ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, v4);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = (struct ClassBoardSelectViewManager___c_StaticFields *)*((_QWORD *)FirstTransitionAnimName + 23);
  _9__34_0 = static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 57) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName, v4);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      _9__34_0,
      v21,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__,
      0);
    v22 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v22->__9__34_0 = _9__34_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__34_0, (int32_t)_9__34_0, v23, v24, v25, v26, v27, v28);
  }
  if ( !v12
    || (*(_QWORD *)(v12 + 32) = _9__34_0,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)_9__34_0, v13, v14, v15, v16, v17, v18),
        (FirstTransitionAnimName = (void *)sub_21FFD10(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_18:
    sub_21FFECC(FirstTransitionAnimName, v4);
  }
  v35 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v11 )
  {
    FirstTransitionAnimName = (void *)sub_21FFDA4(v11, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !LODWORD(v35->max_length) )
    goto LABEL_19;
  v35->m_Items[0] = (SchedulerTaskBase_o *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v35->m_Items, (int32_t)v11, v29, v30, v31, v32, v33, v34);
  FirstTransitionAnimName = (void *)sub_21FFDA4(v12, v35->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v45 = sub_21FFEF0(FirstTransitionAnimName, v36);
    sub_21FFD90(v45, 0);
  }
  if ( (v35->max_length & 0xFFFFFFFE) == 0 )
LABEL_19:
    sub_21FFED4(FirstTransitionAnimName);
  v35->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v35->m_Items[1], v12, v37, v38, v39, v40, v41, v42);
  v43 = (SchedulerTaskParallel_o *)sub_21FFEBC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v43, v35, 0);
  return (SchedulerTaskBase_o *)v43;
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *selectedClassIcon; // x21
  __int64 iconRootObj; // x0
  const MethodInfo *v10; // x1
  SchedulerTaskParallel_o *v11; // x19
  struct ClassBoardSelectIconComponent_o *v12; // x8
  struct ClassBoardSelectIconComponent_o *v13; // x8
  struct ClassBoardSelectIconComponent_o *v14; // x8
  System_String_o *v15; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v17; // x24
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  System_String_o *v20; // x21
  float v21; // s8
  UnityEngine_Animation_o *anim; // x23
  SchedulerTaskAnimation_o *v23; // x25
  const MethodInfo *v24; // x1
  SchedulerTaskBase_o *v25; // x0
  float v26; // s8
  SchedulerTaskBase_o *v27; // x23
  __int64 v28; // x21
  Il2CppObject *v29; // x26
  SchedulerTaskBase_TaskCallback_o *v30; // x25
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  float DEFAULT_FADE_TIME; // s0
  System_Func_bool__c *v38; // x0
  System_Func_bool__o *v39; // x26
  __int64 v40; // x25
  SchedulerTaskBase_TaskCallback_o *v41; // x26
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  const MethodInfo *v48; // x1
  struct ClassBoardSelectIconComponent_o *v49; // x8
  __int64 v50; // x19
  UnityEngine_Animation_o *v51; // x20
  SchedulerTaskAnimation_o *v52; // x24
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x20
  __int64 v60; // x1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  __int64 v80; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C57F & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SchedulerTaskAnimation_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase___TypeInfo);
    sub_21FFC50(&SchedulerTaskParallel_TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitTime_TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitWhile_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__0__);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__1__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
    byte_593C57F = 1;
  }
  v5 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  ClassBoardSelectViewManager__SetSelectedClassIcon(this, baseId, v6);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  iconRootObj = UnityEngine_Object__op_Equality(selectedClassIcon, 0, 0);
  if ( (iconRootObj & 1) == 0 )
  {
    v12 = this->fields.selectedClassIcon;
    if ( !v12 )
      goto LABEL_36;
    iconRootObj = (__int64)v12->fields.iconRootObj;
    if ( !iconRootObj )
      goto LABEL_36;
    iconRootObj = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconRootObj, 0);
    if ( !iconRootObj )
      goto LABEL_36;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconRootObj, 0);
    v13 = this->fields.selectedClassIcon;
    this->fields.selectedClassIconBasePos = localPosition;
    if ( !v13 )
      goto LABEL_36;
    iconRootObj = (__int64)v13->fields.classIconUi;
    if ( !iconRootObj )
      goto LABEL_36;
    UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 176) + 1, 0);
    iconRootObj = (__int64)this->fields.selectedClassIcon;
    if ( !iconRootObj )
      goto LABEL_36;
    iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                             (ClassBoardSelectIconComponent_o *)iconRootObj,
                             v10);
    v14 = this->fields.selectedClassIcon;
    if ( !v14 )
      goto LABEL_36;
    v15 = (System_String_o *)iconRootObj;
    iconRootObj = (__int64)v14->fields.anim;
    if ( !iconRootObj )
      goto LABEL_36;
    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v15, 0);
    v17 = sub_21FFEBC(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    ClassBoardSelectIconComponent_AnimClipInfo___ctor((ClassBoardSelectIconComponent_AnimClipInfo_o *)v17, Clip, v18);
    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v19);
    if ( !v17 )
      goto LABEL_36;
    v20 = (System_String_o *)iconRootObj;
    v21 = *(float *)(v17 + 28);
    anim = this->fields.anim;
    v23 = (SchedulerTaskAnimation_o *)sub_21FFEBC(SchedulerTaskAnimation_TypeInfo);
    SchedulerTaskAnimation___ctor(v23, anim, v20, 0, 0);
    v25 = ClassBoardSelectViewManager__DelayAttachedTask(v21, (SchedulerTaskBase_o *)v23, v24);
    v26 = *(float *)(v17 + 44);
    v27 = v25;
    v28 = sub_21FFEBC(SchedulerTaskWaitTime_TypeInfo);
    SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v28, v26, 0);
    v29 = (Il2CppObject *)this->fields.selectedClassIcon;
    v30 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(v30, v29, Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, 0);
    if ( !v28 )
      goto LABEL_36;
    *(_QWORD *)(v28 + 32) = v30;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v30, v31, v32, v33, v34, v35, v36);
    iconRootObj = (__int64)AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v10);
    if ( !v5 )
      goto LABEL_36;
    DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
    v38 = System_Func_bool__TypeInfo;
    *(_BYTE *)(v5 + 16) = 1;
    *(float *)(v5 + 20) = DEFAULT_FADE_TIME;
    v39 = (System_Func_bool__o *)sub_21FFEBC(v38);
    System_Func_bool____ctor(
      v39,
      (Il2CppObject *)v5,
      Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__0__,
      0);
    v40 = sub_21FFEBC(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v40, v39, 0);
    v41 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v41,
      (Il2CppObject *)v5,
      Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__1__,
      0);
    if ( !v40 )
      goto LABEL_36;
    *(_QWORD *)(v40 + 24) = v41;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 24), (int32_t)v41, v42, v43, v44, v45, v46, v47);
    iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                             *(float *)(v17 + 24),
                             (SchedulerTaskBase_o *)v40,
                             v48);
    v49 = this->fields.selectedClassIcon;
    if ( !v49
      || (v50 = iconRootObj,
          v51 = v49->fields.anim,
          v52 = (SchedulerTaskAnimation_o *)sub_21FFEBC(SchedulerTaskAnimation_TypeInfo),
          SchedulerTaskAnimation___ctor(v52, v51, v15, 0, 0),
          (iconRootObj = sub_21FFD10(SchedulerTaskBase___TypeInfo, 4)) == 0) )
    {
LABEL_36:
      sub_21FFECC(iconRootObj, v10);
    }
    v59 = iconRootObj;
    if ( !v52 || (iconRootObj = sub_21FFDA4(v52, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v59 + 24) )
        goto LABEL_37;
      *(_QWORD *)(v59 + 32) = v52;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v59 + 32), (int32_t)v52, v53, v54, v55, v56, v57, v58);
      if ( !v27 || (iconRootObj = sub_21FFDA4(v27, *(_QWORD *)(*(_QWORD *)v59 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v59 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_37;
        *(_QWORD *)(v59 + 40) = v27;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v59 + 40), (int32_t)v27, v61, v62, v63, v64, v65, v66);
        iconRootObj = sub_21FFDA4(v28, *(_QWORD *)(*(_QWORD *)v59 + 64LL));
        if ( iconRootObj )
        {
          if ( *(_DWORD *)(v59 + 24) <= 2u )
            goto LABEL_37;
          *(_QWORD *)(v59 + 48) = v28;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v59 + 48), v28, v67, v68, v69, v70, v71, v72);
          if ( !v50 || (iconRootObj = sub_21FFDA4(v50, *(_QWORD *)(*(_QWORD *)v59 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v59 + 24) & 0xFFFFFFFC) != 0 )
            {
              *(_QWORD *)(v59 + 56) = v50;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v59 + 56), v50, v73, v74, v75, v76, v77, v78);
              v11 = (SchedulerTaskParallel_o *)sub_21FFEBC(SchedulerTaskParallel_TypeInfo);
              SchedulerTaskParallel___ctor(v11, (SchedulerTaskBase_array *)v59, 0);
              return (SchedulerTaskBase_o *)v11;
            }
LABEL_37:
            sub_21FFED4(iconRootObj);
          }
        }
      }
    }
    v80 = sub_21FFEF0(iconRootObj, v60);
    sub_21FFD90(v80, 0);
  }
  v11 = (SchedulerTaskParallel_o *)sub_21FFEBC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v11, 0.5, 0);
  return (SchedulerTaskBase_o *)v11;
}


void ClassBoardSelectViewManager__HideSelectIconsActiveParticles(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ClassBoardSelectIconComponent_array *iconArray; // x19
  int max_length; // w8
  __int64 v5; // x20

  iconArray = this->fields.iconArray;
  if ( !iconArray )
    goto LABEL_8;
  max_length = iconArray->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v5 >= max_length )
        sub_21FFED4(this);
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, method);
  }
}


void ClassBoardSelectViewManager__Init(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  System_Object_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  System_String_o *monitor; // x19

  if ( (byte_593C575 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593C575 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v4 = System_Linq_Enumerable__ToArray_object_(
         v3,
         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animationStateArray,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v13);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.bgmId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
  if ( Entity )
  {
    monitor = (System_String_o *)Entity[1].monitor;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15);
    SoundManager__playBgm(monitor, 0);
  }
}


void ClassBoardSelectViewManager__OnClickBack(
        ClassBoardSelectViewManager_o *this,
        bool isFromCombineScene,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  AvalonSceneManager_o *v6; // x19
  System_String_o *SceneName; // x21
  SceneJumpInfo_o *v8; // x20

  if ( (byte_593C585 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593C585 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v6 = (AvalonSceneManager_o *)Instance;
  if ( isFromCombineScene )
  {
    if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v5);
    SceneName = SceneList__getSceneName(92, 0);
    v8 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48427084(v8, SceneName, 0);
  }
  else
  {
    v8 = 0;
  }
  if ( !v6 )
    sub_21FFECC(Instance, v5);
  AvalonSceneManager__transitionScene_48091908(v6, 32, 0, 1, (Il2CppObject *)v8, 0);
}


void ClassBoardSelectViewManager__OnClickIcon(
        ClassBoardSelectViewManager_o *this,
        ClassBoardSelectIconComponent_o *icon,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  void *IsOpen; // x0
  __int64 v8; // x1
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  struct System_Action_int__int__o *onSelectClassBoard; // x8
  struct ClassBoardBaseEntity_o *v11; // x9
  Il2CppObject *Instance; // x0
  struct ClassBoardBaseEntity_o *v13; // x8
  CommonUI_o *v14; // x19
  System_String_o *closedMessage; // x20
  System_String_o *v16; // x19
  CommonUI_o *v17; // x20
  ClassBoardSelectViewManager___c_c *v18; // x8
  struct ClassBoardSelectViewManager___c_StaticFields *v19; // x9
  System_Action_o *_9__33_1; // x22
  System_String_o *v21; // x21
  Il2CppObject *v22; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__33_0; // x22
  Il2CppObject *v33; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_593C57B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__);
    sub_21FFC50(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_3502/*"CLASS_BOARD_BASE_UNRELEASED"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C57B = 1;
  }
  v5 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !icon )
    goto LABEL_34;
  if ( icon->fields.isReleased )
  {
    Entity_k__BackingField = icon->fields._Entity_k__BackingField;
    if ( Entity_k__BackingField
      && (IsOpen = (void *)ClassBoardBaseEntity__IsOpen(Entity_k__BackingField, 0), ((unsigned __int8)IsOpen & 1) != 0) )
    {
      onSelectClassBoard = this->fields.onSelectClassBoard;
      if ( onSelectClassBoard )
      {
        v11 = icon->fields._Entity_k__BackingField;
        if ( v11 )
        {
          ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))onSelectClassBoard->fields.invoke_impl)(
            onSelectClassBoard->fields.method_code,
            (unsigned int)v11->fields.id,
            (unsigned int)v11->fields.iconId,
            onSelectClassBoard->fields.method);
          return;
        }
LABEL_34:
        sub_21FFECC(IsOpen, v8);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = icon->fields._Entity_k__BackingField;
      v14 = (CommonUI_o *)Instance;
      if ( v13 )
        closedMessage = v13->fields.closedMessage;
      else
        closedMessage = 0;
      IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      v30 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !*(&ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, v8);
        IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      }
      static_fields = (struct ClassBoardSelectViewManager___c_StaticFields *)*((_QWORD *)IsOpen + 23);
      _9__33_0 = static_fields->__9__33_0;
      if ( !_9__33_0 )
      {
        if ( !*((_DWORD *)IsOpen + 57) )
        {
          j_il2cpp_runtime_class_init_0(IsOpen, v8);
          static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        }
        v33 = (Il2CppObject *)static_fields->__9;
        _9__33_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(_9__33_0, v33, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, 0);
        v34 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        v34->__9__33_0 = _9__33_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v34->__9__33_0,
          (int32_t)_9__33_0,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
      if ( !v14 )
        goto LABEL_34;
      CommonUI__OpenNotificationDialog(v14, v30, closedMessage, _9__33_0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
    }
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3502/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0);
    IsOpen = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (CommonUI_o *)IsOpen;
    v18 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !*(&ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, v8);
      v18 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v19 = v18->static_fields;
    _9__33_1 = v19->__9__33_1;
    v21 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__33_1 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v8);
        v19 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v19->__9;
      _9__33_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(_9__33_1, v22, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, 0);
      v23 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v23->__9__33_1 = _9__33_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__33_1, (int32_t)_9__33_1, v24, v25, v26, v27, v28, v29);
    }
    if ( !v17 )
      goto LABEL_34;
    CommonUI__OpenNotificationDialog(v17, v21, v16, _9__33_1, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
  }
}


void ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_593C579 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__);
    byte_593C579 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 81, v3, 0, 0);
}


void ClassBoardSelectViewManager__OpenHelpIfNotYet(
        ClassBoardSelectViewManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x19

  if ( (byte_593C57A & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
    byte_593C57A = 1;
  }
  v5 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__,
    0);
  EventTutorialMaster__CheckTutorial(0, 81, v20, 0, 0, 0, 0, 0);
}


void ClassBoardSelectViewManager__PlayStartAction(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  char *Instance; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20
  __int64 v7; // x21
  System_Action_object__o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  ActionChain_o *v15; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Action_array *v22; // x21

  if ( (byte_593C578 & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_21FFC50(&Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_593C578 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v3);
  Instance = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, 0);
  v7 = sub_21FFD10(System_Action_Action____TypeInfo, 1);
  v8 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0);
  if ( !v7 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v7 + 32) = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
  ActionChain___ctor_55902484(v15, (System_Action_Action__array *)v7, 0);
  Instance = (char *)sub_21FFD10(System_Action___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_11;
  v22 = (System_Action_array *)Instance;
  if ( !*((_DWORD *)Instance + 6) )
LABEL_12:
    sub_21FFED4(Instance);
  *((_QWORD *)Instance + 4) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Instance + 32), (int32_t)v6, v16, v17, v18, v19, v20, v21);
  if ( !v15 || (Instance = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v15, v22, 0)) == 0 )
LABEL_11:
    sub_21FFECC(Instance, v5);
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
}


void ClassBoardSelectViewManager__Resume(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1

  ClassBoardSelectViewManager__SetUpHeaderItemList(this, (const MethodInfo *)classBoardBackground);
  if ( !classBoardBackground )
    sub_21FFECC(v4, v5);
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0);
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0);
}


void ClassBoardSelectViewManager__SetSelectedClassIcon(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x22
  System_Func_object__bool__o *v9; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593C582 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    sub_21FFC50(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass40_0__SetSelectedClassIcon_b__0__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass40_0_TypeInfo);
    byte_593C582 = 1;
  }
  v5 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  *(_DWORD *)(v5 + 16) = baseId;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass40_0__SetSelectedClassIcon_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          iconArray,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  this->fields.selectedClassIcon = (struct ClassBoardSelectIconComponent_o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectedClassIcon,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void ClassBoardSelectViewManager__SetUpHeaderItemList(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ClassBoardSelectViewManager_o *v2; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  ClassBoardUIController_o *classBoardUIController_k__BackingField; // x19
  System_Int32_array *headerDlspItemIdArray; // x20
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0

  v2 = this;
  if ( (byte_593C584 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_21FFC50(&IClassBoardResourceCatalog_TypeInfo);
    byte_593C584 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  headerDlspItemIdArray = v2->fields.headerDlspItemIdArray;
  v7 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v9 = sub_2237E2C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(
                                            resourceCatalog,
                                            *(_QWORD *)(v9 + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_21FFECC(this, method);
  ClassBoardUIController__SetItemList(
    classBoardUIController_k__BackingField,
    headerDlspItemIdArray,
    (AtlasManagerUnit_o *)this[1].fields.m_CancellationTokenSource,
    0,
    0);
}


void ClassBoardSelectViewManager__SetupClassBoardUIController(
        ClassBoardSelectViewManager_o *this,
        bool isFromCombineScene,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *classBoardUIController_k__BackingField; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  bool v14; // w23
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  Il2CppObject *v20; // x21
  UnityEngine_Transform_o *uiRoot; // x22
  Il2CppObject *v22; // x0
  struct ClassBoardUIController_o **p_classBoardUIController_k__BackingField; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  MissionNaviTransitionBoardItem_o *v30; // x22
  System_Action_o *v31; // x23
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct ClassBoardUIController_o *v38; // x20
  System_Action_o *v39; // x22
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct IClassBoardResourceCatalog_o *v46; // x21
  IClassBoardResourceCatalog_c *v47; // x8
  ClassBoardUIController_o *v48; // x20
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  const MethodInfo *v52; // x1
  struct IClassBoardResourceCatalog_o *v53; // x20
  IClassBoardResourceCatalog_c *v54; // x8
  ClassBoardUIController_o *v55; // x19
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  AtlasManagerUnit_o *v59; // x20

  if ( (byte_593C583 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager_OpenHelp__);
    sub_21FFC50(&IClassBoardResourceCatalog_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass41_0__SetupClassBoardUIController_b__0__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass41_0_TypeInfo);
    sub_21FFC50(&StringLiteral_21586/*"img_txt_classscore_main"*/);
    sub_21FFC50(&StringLiteral_3558/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/);
    byte_593C583 = 1;
  }
  v5 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_44;
  v14 = isFromCombineScene;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  resourceCatalog = this->fields.resourceCatalog;
  *(_BYTE *)(v5 + 24) = v14;
  if ( !resourceCatalog )
    goto LABEL_44;
  klass = resourceCatalog->klass;
  v17 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_9;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_9:
    v19 = sub_2237E2C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  classBoardUIController_k__BackingField = (void *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v19)(
                                                     resourceCatalog,
                                                     *(_QWORD *)(v19 + 8));
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_44;
  v20 = (Il2CppObject *)*((_QWORD *)classBoardUIController_k__BackingField + 15);
  uiRoot = this->fields.uiRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v22 = UnityEngine_Object__Instantiate_object__59506996(
          v20,
          uiRoot,
          (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  this->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v22;
  p_classBoardUIController_k__BackingField = &this->fields._classBoardUIController_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  classBoardUIController_k__BackingField = this->fields._classBoardUIController_k__BackingField;
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__Init((ClassBoardUIController_o *)classBoardUIController_k__BackingField, 0);
  v30 = (MissionNaviTransitionBoardItem_o *)*p_classBoardUIController_k__BackingField;
  v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass41_0__SetupClassBoardUIController_b__0__,
    0);
  if ( !v30 )
    goto LABEL_44;
  v30[1].klass = (MissionNaviTransitionBoardItem_c *)v31;
  sub_21FFBF4(v30 + 1, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = this->fields._classBoardUIController_k__BackingField;
  v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelp__, 0);
  if ( !v38 )
    goto LABEL_44;
  v38->fields.onClickHelp = v39;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->fields.onClickHelp, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateEffectListButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    0);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateGrandScoreButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    0);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateClassBoardResetButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    0);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateToGrandServantListButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    0);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateClassScoreButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    0);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateClassBoardSelectButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    0);
  v46 = this->fields.resourceCatalog;
  if ( !v46 )
    goto LABEL_44;
  v47 = v46->klass;
  v48 = this->fields._classBoardUIController_k__BackingField;
  v49 = *(unsigned __int16 *)&v46->klass->_2.rank;
  if ( *(_WORD *)&v46->klass->_2.rank )
  {
    v50 = &v47->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v50 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_28;
    }
    v51 = (__int64)&v47->vtable[*v50];
  }
  else
  {
LABEL_28:
    v51 = sub_2237E2C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  classBoardUIController_k__BackingField = (void *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v51)(
                                                     v46,
                                                     *(_QWORD *)(v51 + 8));
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_44;
  if ( !v48 )
    goto LABEL_44;
  ClassBoardUIController__SetHeaderTitle(
    v48,
    *((AtlasManagerUnit_o **)classBoardUIController_k__BackingField + 24),
    (System_String_o *)StringLiteral_21586/*"img_txt_classscore_main"*/,
    0);
  ClassBoardSelectViewManager__SetUpHeaderItemList(this, v52);
  v53 = this->fields.resourceCatalog;
  if ( !v53 )
    goto LABEL_44;
  v54 = v53->klass;
  v55 = this->fields._classBoardUIController_k__BackingField;
  v56 = *(unsigned __int16 *)&v53->klass->_2.rank;
  if ( *(_WORD *)&v53->klass->_2.rank )
  {
    v57 = &v54->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v57 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_37;
    }
    v58 = (__int64)&v54->vtable[*v57];
  }
  else
  {
LABEL_37:
    v58 = sub_2237E2C(v53, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  classBoardUIController_k__BackingField = (void *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v58)(
                                                     v53,
                                                     *(_QWORD *)(v58 + 8));
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_44;
  v59 = (AtlasManagerUnit_o *)*((_QWORD *)classBoardUIController_k__BackingField + 24);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  classBoardUIController_k__BackingField = LocalizationManager__Get((System_String_o *)StringLiteral_3558/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0);
  if ( !v55 )
LABEL_44:
    sub_21FFECC(classBoardUIController_k__BackingField, v7);
  ClassBoardUIController__SetHeaderMessage(v55, v59, (System_String_o *)classBoardUIController_k__BackingField, 0, 0, 0);
}


void ClassBoardSelectViewManager__StartUp(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        IClassBoardResourceCatalog_o *resourceCatalog,
        System_Action_o *finishCallback,
        bool isFromCombineScene,
        const MethodInfo *method)
{
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  ClassBoardResourceCatalogAssetBundle_o **v26; // x23
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct IClassBoardResourceCatalog_o *v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Action_o *v46; // x22
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  const MethodInfo *v53; // x1
  ClassBoardResourceCatalogAssetBundle_o *v54; // x20
  __int64 naturalAligment; // x10
  System_Action_o *v56; // x21

  if ( (byte_593C576 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
    byte_593C576 = 1;
  }
  v11 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_21FFECC(v12, v13);
  *(_QWORD *)(v11 + 16) = classBoardBackground;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v11 + 16),
    (int32_t)classBoardBackground,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_QWORD *)(v11 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = resourceCatalog;
  v26 = (ClassBoardResourceCatalogAssetBundle_o **)(v11 + 32);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)resourceCatalog, v27, v28, v29, v30, v31, v32);
  *(_BYTE *)(v11 + 40) = isFromCombineScene;
  *(_QWORD *)(v11 + 48) = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)finishCallback, v33, v34, v35, v36, v37, v38);
  v39 = *(struct IClassBoardResourceCatalog_o **)(v11 + 32);
  this->fields.resourceCatalog = v39;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resourceCatalog,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v11,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__,
    0);
  *(_QWORD *)(v11 + 56) = v46;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 56), (int32_t)v46, v47, v48, v49, v50, v51, v52);
  if ( !ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v53)
    && (v54 = *v26) != 0
    && (naturalAligment = ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.naturalAligment,
        v54->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ClassBoardResourceCatalogAssetBundle_c *)v54->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    v56 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v11,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__,
      0);
    ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v54, v56, 0);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 56), 0);
  }
}


void ClassBoardSelectViewManager__UpdateClassBoardSelectIcon(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x20
  System_Func_object__bool__o *v9; // x19
  Il2CppObject *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_593C588 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    sub_21FFC50(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass46_0__UpdateClassBoardSelectIcon_b__0__);
    sub_21FFC50(&ClassBoardSelectViewManager___c__DisplayClass46_0_TypeInfo);
    byte_593C588 = 1;
  }
  v5 = sub_21FFEBC(ClassBoardSelectViewManager___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  *(_DWORD *)(v5 + 16) = baseId;
  if ( iconArray )
  {
    v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_ClassBoardSelectViewManager___c__DisplayClass46_0__UpdateClassBoardSelectIcon_b__0__,
      0);
    v10 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            iconArray,
            (System_Func_TSource__bool__o *)v9,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    if ( v10 )
      ClassBoardSelectIconComponent__UpdateUI((ClassBoardSelectIconComponent_o *)v10, v11);
  }
}


void ClassBoardSelectViewManager__UpdateSelectIconsActiveParticles(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  struct ClassBoardSelectIconComponent_array *iconArray; // x20
  int max_length; // w8
  __int64 v4; // x21
  ClassBoardSelectIconComponent_o *v5; // x19
  bool IsShowActiveIcon; // w0
  const MethodInfo *v7; // x2

  iconArray = this->fields.iconArray;
  if ( !iconArray )
    goto LABEL_8;
  max_length = iconArray->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v4 >= max_length )
        sub_21FFED4(this);
      v5 = iconArray->m_Items[v4];
      if ( !v5 )
        break;
      IsShowActiveIcon = ClassBoardSelectIconComponent__IsShowActiveIcon(iconArray->m_Items[v4], method);
      ClassBoardSelectIconComponent__SetParticlesActivate(v5, IsShowActiveIcon, v7);
      max_length = iconArray->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, method);
  }
}


bool ClassBoardSelectViewManager__ValidateBoardUIAtlas(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ClassBoardSelectViewManager_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  int *p_offset; // x10
  __int64 v7; // x0

  v2 = this;
  if ( (byte_593C577 & 1) == 0 )
  {
    sub_21FFC50(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardSelectViewManager_o *)sub_21FFC50(&StringLiteral_21586/*"img_txt_classscore_main"*/);
    byte_593C577 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  v5 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_2237E2C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(
                                            resourceCatalog,
                                            *(_QWORD *)(v7 + 8));
  if ( !this || (this = (ClassBoardSelectViewManager_o *)this[1].fields.m_CancellationTokenSource) == 0 )
LABEL_13:
    sub_21FFECC(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_21586/*"img_txt_classscore_main"*/, 0);
}


void ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardSelectViewManager___OpenHelp_b__31_0(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_593C58A & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_593C58A = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
}


void ClassBoardSelectViewManager___PlayStartAction_b__30_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593C589 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_593C589 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


ClassBoardUIController_o *ClassBoardSelectViewManager__get_classBoardUIController(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._classBoardUIController_k__BackingField;
}


void ClassBoardSelectViewManager__set_classBoardUIController(
        ClassBoardSelectViewManager_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._classBoardUIController_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardSelectViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C58B & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_593C58B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardSelectViewManager___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardSelectViewManager___c___ctor(ClassBoardSelectViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSelectViewManager___c___GetEventTime_b__24_0(
        ClassBoardSelectViewManager___c_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  if ( !ev )
    sub_21FFECC(this, 0);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0);
}


bool ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__44_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, (const MethodInfo *)x);
}


void ClassBoardSelectViewManager___c___GetSkipTaskOfFirstTransition_b__35_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_593C58D & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C58D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3);
  if ( !v4 )
    sub_21FFECC(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__34_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_593C58C & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C58C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3);
  if ( !v4 )
    sub_21FFECC(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void ClassBoardSelectViewManager___c___OnClickIcon_b__33_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardSelectViewManager___c___OnClickIcon_b__33_1(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardSelectViewManager___c___StartUp_b__27_2(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !x
    || (this = (ClassBoardSelectViewManager___c_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)x,
                                                      0)) == 0
    || (this = (ClassBoardSelectViewManager___c_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)this,
                                                      0)) == 0 )
  {
    sub_21FFECC(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_42878128(gameObject, 0.0, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass24_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSelectViewManager___c__DisplayClass24_0___GetEventTime_b__1(
        ClassBoardSelectViewManager___c__DisplayClass24_0_o *this,
        UnityEngine_AnimationEvent_o *x,
        const MethodInfo *method)
{
  System_String_o *functionName; // x0

  if ( !x )
    sub_21FFECC(this, 0);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0);
  return System_String__op_Equality(functionName, this->fields.eventName, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass27_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass27_0___StartUp_b__0(
        ClassBoardSelectViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  ClassBoardBackground_o *classBoardBackground; // x0
  struct ClassBoardSelectViewManager_o *_4__this; // x8
  struct UITexture_o *bgTexture; // x20
  struct ClassBoardSelectViewManager_o *v6; // x8
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct ClassBoardSelectViewManager_o *v15; // x8
  System_Collections_Generic_IEnumerable_T__o *v16; // x20
  ClassBoardSelectViewManager___c_c *v17; // x0
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__27_2; // x21
  Il2CppObject *v20; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct ClassBoardSelectViewManager_o *v28; // x20
  const MethodInfo *v29; // x2
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t monitor; // w8

  if ( (byte_593C58E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
    sub_21FFC50(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__);
    sub_21FFC50(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_593C58E = 1;
  }
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_25;
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0);
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_25;
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  classBoardBackground = this->fields.classBoardBackground;
  if ( !classBoardBackground )
    goto LABEL_25;
  bgTexture = _4__this->fields.bgTexture;
  classBoardBackground = (ClassBoardBackground_o *)ClassBoardBackground__GetRenderTexture(classBoardBackground, 0);
  if ( !bgTexture )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)((__int64 (__fastcall *)(struct UITexture_o *, ClassBoardBackground_o *, const MethodInfo *))bgTexture->klass->vtable._27_set_mainTexture.methodPtr)(
                                                     bgTexture,
                                                     classBoardBackground,
                                                     bgTexture->klass->vtable._27_set_mainTexture.method);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_25;
  _9__1 = this->fields.__9__1;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.iconArray;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_21FFEBC(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  BasicHelper__ForEach_object_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_25;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)v15->fields.iconArray;
  v17 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !*(&ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo, method);
    v17 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__27_2 = (System_Action_object__o *)static_fields->__9__27_2;
  if ( !_9__27_2 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, method);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__27_2 = (System_Action_object__o *)sub_21FFEBC(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(_9__27_2, v20, Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, 0);
    v21 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    v21->__9__27_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__27_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__27_2, (int32_t)_9__27_2, v22, v23, v24, v25, v26, v27);
  }
  BasicHelper__ForEach_object_(
    v16,
    (System_Action_T__o *)_9__27_2,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_object_(
                                                     (System_Object_array *)v28->fields.iconArray,
                                                     0,
                                                     0,
                                                     (const MethodInfo_37E18F8 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  v28->fields.iconDefaultDepth = monitor;
  if ( !classBoardBackground )
LABEL_25:
    sub_21FFECC(classBoardBackground, method);
  ClassBoardSelectViewManager__SetupClassBoardUIController(
    (ClassBoardSelectViewManager_o *)classBoardBackground,
    this->fields.isFromCombineScene,
    v29);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass27_0___StartUp_b__1(
        ClassBoardSelectViewManager___c__DisplayClass27_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  IClassBoardResourceCatalog_o *resourceCatalog; // x20
  Il2CppObject *_4__this; // x22
  System_Action_object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_593C58F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_21FFC50(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    byte_593C58F = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v7 = (System_Action_object__o *)sub_21FFEBC(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_object____ctor(v7, _4__this, (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__, 0);
  if ( !x )
    sub_21FFECC(v8, v9);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v7, v10);
}


void ClassBoardSelectViewManager___c__DisplayClass27_0___StartUp_b__3(
        ClassBoardSelectViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager___c__DisplayClass27_0_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  int *p_offset; // x10
  __int64 v7; // x0
  ClassBoardResourceContents_o *v8; // x0

  v2 = this;
  if ( (byte_593C590 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass27_0_o *)sub_21FFC50(&IClassBoardResourceCatalog_TypeInfo);
    byte_593C590 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    sub_21FFECC(this, method);
  klass = resourceCatalog->klass;
  v5 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_2237E2C(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  v8 = (ClassBoardResourceContents_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(
                                         resourceCatalog,
                                         *(_QWORD *)(v7 + 8));
  ClassBoardGlobalObject__SetResourceContents(v8, 0);
  ActionExtensions__Call(v2->fields.startUpAction, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass32_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass32_0___OpenHelpIfNotYet_b__0(
        ClassBoardSelectViewManager___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager___c__DisplayClass32_0_o *v2; // x19
  struct ClassBoardSelectViewManager_o *_4__this; // x8

  v2 = this;
  if ( (byte_593C591 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_593C591 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(v2->fields.finishCallback, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass36_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass36_0___GetTaskOfComingFromClassBoard_b__0(
        ClassBoardSelectViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593C592 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C592 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, 0, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass36_0___GetTaskOfComingFromClassBoard_b__1(
        ClassBoardSelectViewManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardSelectIconComponent_o *tmpSelectedIcon; // x9
  struct ClassBoardSelectViewManager_o *_4__this; // x8

  tmpSelectedIcon = this->fields.tmpSelectedIcon;
  if ( !tmpSelectedIcon
    || (_4__this = this->fields.__4__this) == 0
    || (this = (ClassBoardSelectViewManager___c__DisplayClass36_0_o *)tmpSelectedIcon->fields.classIconUi) == 0 )
  {
    sub_21FFECC(this, method);
  }
  UIWidget__set_depth((UIWidget_o *)this, _4__this->fields.iconDefaultDepth, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass37_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSelectViewManager___c__DisplayClass37_0___GetTaskOfGoingToClassBoard_b__0(
        ClassBoardSelectViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  return this->fields.fading;
}


void ClassBoardSelectViewManager___c__DisplayClass37_0___GetTaskOfGoingToClassBoard_b__1(
        ClassBoardSelectViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x21
  float fadeTime; // s8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593C593 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__2__);
    byte_593C593 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__maskFadeout(v5, 2, fadeTime, _9__2, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass37_0___GetTaskOfGoingToClassBoard_b__2(
        ClassBoardSelectViewManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  this->fields.fading = 0;
}


void ClassBoardSelectViewManager___c__DisplayClass40_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSelectViewManager___c__DisplayClass40_0___SetSelectedClassIcon_b__0(
        ClassBoardSelectViewManager___c__DisplayClass40_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *Entity_k__BackingField; // x8

  if ( !x || (Entity_k__BackingField = x->fields._Entity_k__BackingField) == 0 )
    sub_21FFECC(this, x);
  return Entity_k__BackingField->fields.id == this->fields.baseId;
}


void ClassBoardSelectViewManager___c__DisplayClass41_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass41_0___SetupClassBoardUIController_b__0(
        ClassBoardSelectViewManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  ClassBoardSelectViewManager__OnClickBack((ClassBoardSelectViewManager_o *)this, this->fields.isFromCombineScene, v2);
}


void ClassBoardSelectViewManager___c__DisplayClass45_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass45_0___GetPlayClassBoardReleaseEffect_b__1(
        ClassBoardSelectViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onStartCallback, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass45_1___ctor(
        ClassBoardSelectViewManager___c__DisplayClass45_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass45_1___GetPlayClassBoardReleaseEffect_b__0(
        ClassBoardSelectViewManager___c__DisplayClass45_1_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectIconComponent_o *iconComponent; // x0

  iconComponent = this->fields.iconComponent;
  if ( !iconComponent )
    sub_21FFECC(0, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, method);
}


void ClassBoardSelectViewManager___c__DisplayClass46_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSelectViewManager___c__DisplayClass46_0___UpdateClassBoardSelectIcon_b__0(
        ClassBoardSelectViewManager___c__DisplayClass46_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.baseId == this->fields.baseId;
}