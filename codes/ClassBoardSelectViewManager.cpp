void ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  SchedulerTaskBase_array *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  SchedulerTaskOrthostichy_o *v21; // x19
  __int64 v23; // x0

  if ( (byte_4D305D6 & 1) == 0 )
  {
    sub_1C94098(&SchedulerTaskBase___TypeInfo);
    sub_1C94098(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C94098(&SchedulerTaskWaitTime_TypeInfo);
    byte_4D305D6 = 1;
  }
  v5 = (SchedulerTaskWaitTime_o *)sub_1C942E4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v5, delay, 0);
  v6 = sub_1C94140(SchedulerTaskBase___TypeInfo, 2);
  if ( !v6 )
    sub_1C942F0(0, v7);
  v14 = (SchedulerTaskBase_array *)v6;
  if ( v5 )
  {
    v6 = sub_1C941D4(v5, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_11;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v14->m_Items, (int32_t)v5, v8, v9, v10, v11, v12, v13);
  if ( task )
  {
    v6 = sub_1C941D4(task, v14->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_12:
      v23 = sub_1C94314(v6);
      sub_1C941C0(v23, 0);
    }
  }
  if ( LODWORD(v14->max_length) <= 1 )
LABEL_11:
    sub_1C942F8(v6);
  v14->m_Items[1] = task;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14->m_Items[1], (int32_t)task, v15, v16, v17, v18, v19, v20);
  v21 = (SchedulerTaskOrthostichy_o *)sub_1C942E4(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v21, v14, 0);
  return (SchedulerTaskBase_o *)v21;
}


System_String_o *ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4D305C7 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4D305C7 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0,
               (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
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

  if ( (byte_4D305C8 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4D305C8 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               2,
               0,
               (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_T__o *v19; // x21
  System_Action_object__o *_9__24_0; // x22
  Il2CppObject *v21; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Object_array *v29; // x19
  System_Func_object__bool__o *v30; // x21
  Il2CppObject *object; // x0

  if ( (byte_4D305C9 & 1) == 0 )
  {
    sub_1C94098(&System_Action_AnimationEvent__TypeInfo);
    sub_1C94098(&Method_BasicHelper_Find_AnimationEvent___);
    sub_1C94098(&Method_BasicHelper_ForEach_AnimationEvent___);
    sub_1C94098(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C94098(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4D305C9 = 1;
  }
  v8 = sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass24_0___ctor((ClassBoardSelectViewManager___c__DisplayClass24_0_o *)v8, 0);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = eventName,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)eventName, v11, v12, v13, v14, v15, v16),
        !animClip) )
  {
    sub_1C942F0(v9, v10);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0);
  v18 = ClassBoardSelectViewManager___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v18 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__24_0 = (System_Action_object__o *)v18->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__24_0 = (System_Action_object__o *)sub_1C942E4(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(_9__24_0, v21, Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, 0);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Action_AnimationEvent__o *)_9__24_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__24_0,
      (int32_t)_9__24_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  BasicHelper__ForEach_object_(
    v19,
    (System_Action_T__o *)_9__24_0,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v19, 0);
  v29 = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0);
  v30 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__,
    0);
  object = BasicHelper__Find_object_(
             v29,
             (System_Func_T__bool__o *)v30,
             (const MethodInfo_3186034 *)Method_BasicHelper_Find_AnimationEvent___);
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

  if ( (byte_4D305C6 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4D305C6 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0,
               (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
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

  if ( (byte_4D305D5 & 1) == 0 )
  {
    sub_1C94098(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D305D5 = 1;
  }
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v10 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1C942E4(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v10, Clip, v11),
          !v10) )
    {
      sub_1C942F0(ClassBoardEnterAnimName, v5);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
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
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  SchedulerTaskBase_TaskCallback_o *v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D305DC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C94098(&SchedulerTaskAnimation_TypeInfo);
    sub_1C94098(&SchedulerTaskParallel_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__1__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass45_1__GetPlayClassBoardReleaseEffect_b__0__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass45_1_TypeInfo);
    byte_4D305DC = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v6 = sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass45_0___ctor((ClassBoardSelectViewManager___c__DisplayClass45_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_30;
  *(_QWORD *)(v6 + 16) = onStartCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)onStartCallback, v9, v10, v11, v12, v13, v14);
  if ( iconComponentList )
  {
    if ( !iconComponentList->fields._size )
      return 0;
    v15 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      (System_Collections_Generic_List_object__o *)iconComponentList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
    v66 = v65;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v66,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
    {
      v16 = sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass45_1_TypeInfo);
      ClassBoardSelectViewManager___c__DisplayClass45_1___ctor(
        (ClassBoardSelectViewManager___c__DisplayClass45_1_o *)v16,
        0);
      if ( !v16 )
        sub_1C942F0(v17, v18);
      current = (int32_t)v66.fields._current;
      *(_QWORD *)(v16 + 16) = v66.fields._current;
      v26 = (__int64 *)(v16 + 16);
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v16 + 16), current, v19, v20, v21, v22, v23, v24);
      v29 = *(_QWORD *)(v16 + 16);
      if ( !v29 )
        sub_1C942F0(v27, v28);
      v30 = *(UnityEngine_AnimationState_o **)(v29 + 136);
      if ( v30 )
      {
        name = UnityEngine_AnimationState__get_name(v30, 0);
        v29 = *v26;
        if ( !*v26 )
          sub_1C942F0(name, v32);
        v33 = name;
      }
      else
      {
        v33 = 0;
      }
      v34 = *(UnityEngine_Animation_o **)(v29 + 88);
      v35 = sub_1C942E4(SchedulerTaskAnimation_TypeInfo);
      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v35, v34, v33, 0, 0);
      v36 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v36,
        (Il2CppObject *)v16,
        Method_ClassBoardSelectViewManager___c__DisplayClass45_1__GetPlayClassBoardReleaseEffect_b__0__,
        0);
      if ( !v35 )
        sub_1C942F0(v37, v38);
      *(_QWORD *)(v35 + 32) = v36;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 32), (int32_t)v36, v39, v40, v41, v42, v43, v44);
      if ( !v15 )
        sub_1C942F0(v45, v46);
      items = v15->fields._items;
      v54 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1C942F0(v45, v46);
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v35,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v35;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v56 + 4), v35, v47, v48, v49, v50, v51, v52);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v66,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
    iconComponentList = (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)sub_1C942E4(SchedulerTaskParallel_TypeInfo);
    SchedulerTaskParallel___ctor_45102328(
      (SchedulerTaskParallel_o *)iconComponentList,
      (System_Collections_Generic_List_SchedulerTaskBase__o *)v15,
      0);
    v57 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v57,
      (Il2CppObject *)v6,
      Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__1__,
      0);
    if ( iconComponentList )
    {
      *(_QWORD *)&iconComponentList->fields._size = v57;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&iconComponentList->fields._size,
        (int32_t)v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      return (SchedulerTaskBase_o *)iconComponentList;
    }
LABEL_30:
    sub_1C942F0(v7, v8);
  }
  return (SchedulerTaskBase_o *)iconComponentList;
}


System_Collections_Generic_List_ClassBoardSelectIconComponent__o *ClassBoardSelectViewManager__GetPlayClassBoardReleaseList(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v4; // x0
  System_Func_object__bool__o *_9__44_0; // x20
  Il2CppObject *v6; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_object__o *v16; // x19

  if ( (byte_4D305DB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    sub_1C94098(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__);
    sub_1C94098(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4D305DB = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v4 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v4 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    _9__44_0 = (System_Func_object__bool__o *)v4->static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__44_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__44_0,
        v6,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__,
        0);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      static_fields->__9__44_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__44_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__44_0,
        (int32_t)_9__44_0,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = System_Linq_Enumerable__Where_object_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__44_0,
            (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v14,
                                                                                 (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v16;
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  SchedulerTaskBase_TaskCallback_o *v19; // x21
  Il2CppObject *v20; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  SchedulerTaskBase_array *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  SchedulerTaskParallel_o *v41; // x19
  __int64 v43; // x0

  if ( (byte_4D305D2 & 1) == 0 )
  {
    sub_1C94098(&SchedulerTaskAnimation_TypeInfo);
    sub_1C94098(&SchedulerTaskBase___TypeInfo);
    sub_1C94098(&SchedulerTaskParallel_TypeInfo);
    sub_1C94098(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__GetSkipTaskOfFirstTransition_b__35_0__);
    sub_1C94098(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_6603/*"FadeStart"*/);
    byte_4D305D2 = 1;
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
                (System_String_o *)StringLiteral_6603/*"FadeStart"*/,
                0.0,
                v7);
  anim = this->fields.anim;
  v10 = EventTime;
  v11 = (SchedulerTaskAnimation_o *)sub_1C942E4(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v11, anim, v5, 1, 0);
  v12 = sub_1C942E4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v12, v10, 0);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  v19 = *(SchedulerTaskBase_TaskCallback_o **)(*((_QWORD *)FirstTransitionAnimName + 23) + 48LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 56) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName);
      FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)FirstTransitionAnimName + 23);
    v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v19,
      v20,
      Method_ClassBoardSelectViewManager___c__GetSkipTaskOfFirstTransition_b__35_0__,
      0);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__35_0 = v19;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__35_0, (int32_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !v12
    || (*(_QWORD *)(v12 + 32) = v19,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 32), (int32_t)v19, v13, v14, v15, v16, v17, v18),
        (FirstTransitionAnimName = (void *)sub_1C94140(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_18:
    sub_1C942F0(FirstTransitionAnimName, v4);
  }
  v34 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v11 )
  {
    FirstTransitionAnimName = (void *)sub_1C941D4(v11, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !LODWORD(v34->max_length) )
    goto LABEL_19;
  v34->m_Items[0] = (SchedulerTaskBase_o *)v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v34->m_Items, (int32_t)v11, v28, v29, v30, v31, v32, v33);
  FirstTransitionAnimName = (void *)sub_1C941D4(v12, v34->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v43 = sub_1C94314(FirstTransitionAnimName);
    sub_1C941C0(v43, 0);
  }
  if ( LODWORD(v34->max_length) <= 1 )
LABEL_19:
    sub_1C942F8(FirstTransitionAnimName);
  v34->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v34->m_Items[1], v12, v35, v36, v37, v38, v39, v40);
  v41 = (SchedulerTaskParallel_o *)sub_1C942E4(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v41, v34, 0);
  return (SchedulerTaskBase_o *)v41;
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  UnityEngine_GameObject_o *iconRootObj; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *selectedClassIcon; // x19
  const MethodInfo *v13; // x1
  SchedulerTaskOrthostichy_o *v14; // x19
  System_String_o *FirstTransitionAnimName; // x0
  UnityEngine_Animation_o *anim; // x22
  System_String_o *v17; // x23
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
  SchedulerTaskBase_o *v31; // x22
  AvalonSceneManager_c *v32; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v34; // x25
  SchedulerTaskBase_TaskCallback_o *v35; // x26
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  const MethodInfo *v42; // x1
  SchedulerTaskBase_o *v43; // x0
  struct ClassBoardSelectIconComponent_o *v44; // x1
  SchedulerTaskBase_o *v45; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct ClassBoardSelectIconComponent_o *v52; // x8
  UnityEngine_Animation_o *v53; // x20
  __int64 v54; // x25
  SchedulerTaskBase_TaskCallback_o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  SchedulerTaskBase_array *v62; // x20
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  SchedulerTaskParallel_o *v81; // x21
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  UnityEngine_GameObject_o *v88; // x20
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  __int64 v96; // x0

  if ( (byte_4D305D3 & 1) == 0 )
  {
    sub_1C94098(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SchedulerTaskAnimation_TypeInfo);
    sub_1C94098(&SchedulerTaskBase___TypeInfo);
    sub_1C94098(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C94098(&SchedulerTaskParallel_TypeInfo);
    sub_1C94098(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__0__);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__1__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
    byte_4D305D3 = 1;
  }
  v3 = sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass36_0___ctor((ClassBoardSelectViewManager___c__DisplayClass36_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_38;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectedClassIcon, 0, 0) )
  {
    FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, v13);
    anim = this->fields.anim;
    v17 = FirstTransitionAnimName;
    v18 = (SchedulerTaskAnimation_o *)sub_1C942E4(SchedulerTaskAnimation_TypeInfo);
    SchedulerTaskAnimation___ctor(v18, anim, v17, 1, 0);
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
                v23 = sub_1C942E4(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
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
                  v29 = (SchedulerTaskAnimation_o *)sub_1C942E4(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v29, v28, v26, 0, 0);
                  v31 = ClassBoardSelectViewManager__DelayAttachedTask(v27, (SchedulerTaskBase_o *)v29, v30);
                  v32 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v32 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v32->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v3 + 16) = DEFAULT_FADE_TIME;
                  v34 = sub_1C942E4(SchedulerTaskWaitTime_TypeInfo);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v34, DEFAULT_FADE_TIME, 0);
                  v35 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v35,
                    (Il2CppObject *)v3,
                    Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__0__,
                    0);
                  if ( v34 )
                  {
                    *(_QWORD *)(v34 + 24) = v35;
                    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 24), (int32_t)v35, v36, v37, v38, v39, v40, v41);
                    v43 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v23 + 24),
                            (SchedulerTaskBase_o *)v34,
                            v42);
                    v44 = this->fields.selectedClassIcon;
                    v45 = v43;
                    *(_QWORD *)(v3 + 24) = v44;
                    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v44, v46, v47, v48, v49, v50, v51);
                    v52 = this->fields.selectedClassIcon;
                    if ( v52 )
                    {
                      v53 = v52->fields.anim;
                      v54 = sub_1C942E4(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v54, v53, v21, 0, 0);
                      v55 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v55,
                        (Il2CppObject *)v3,
                        Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__1__,
                        0);
                      if ( v54 )
                      {
                        *(_QWORD *)(v54 + 32) = v55;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)(v54 + 32),
                          (int32_t)v55,
                          v56,
                          v57,
                          v58,
                          v59,
                          v60,
                          v61);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_1C94140(SchedulerTaskBase___TypeInfo, 3);
                        if ( iconRootObj )
                        {
                          v62 = (SchedulerTaskBase_array *)iconRootObj;
                          iconRootObj = (UnityEngine_GameObject_o *)sub_1C941D4(
                                                                      v54,
                                                                      iconRootObj->klass->_1.element_class);
                          if ( !iconRootObj )
                            goto LABEL_40;
                          if ( !LODWORD(v62->max_length) )
                            goto LABEL_39;
                          v62->m_Items[0] = (SchedulerTaskBase_o *)v54;
                          sub_1C9403C((GrandQuestFolderBoardItem_o *)v62->m_Items, v54, v63, v64, v65, v66, v67, v68);
                          if ( v31 )
                          {
                            iconRootObj = (UnityEngine_GameObject_o *)sub_1C941D4(v31, v62->obj.klass->_1.element_class);
                            if ( !iconRootObj )
                              goto LABEL_40;
                          }
                          if ( LODWORD(v62->max_length) <= 1 )
                            goto LABEL_39;
                          v62->m_Items[1] = v31;
                          sub_1C9403C(
                            (GrandQuestFolderBoardItem_o *)&v62->m_Items[1],
                            (int32_t)v31,
                            v69,
                            v70,
                            v71,
                            v72,
                            v73,
                            v74);
                          if ( v45 )
                          {
                            iconRootObj = (UnityEngine_GameObject_o *)sub_1C941D4(v45, v62->obj.klass->_1.element_class);
                            if ( !iconRootObj )
                              goto LABEL_40;
                          }
                          if ( LODWORD(v62->max_length) <= 2 )
                            goto LABEL_39;
                          v62->m_Items[2] = v45;
                          sub_1C9403C(
                            (GrandQuestFolderBoardItem_o *)&v62->m_Items[2],
                            (int32_t)v45,
                            v75,
                            v76,
                            v77,
                            v78,
                            v79,
                            v80);
                          v81 = (SchedulerTaskParallel_o *)sub_1C942E4(SchedulerTaskParallel_TypeInfo);
                          SchedulerTaskParallel___ctor(v81, v62, 0);
                          iconRootObj = (UnityEngine_GameObject_o *)sub_1C94140(SchedulerTaskBase___TypeInfo, 2);
                          if ( iconRootObj )
                          {
                            v88 = iconRootObj;
                            if ( !v18
                              || (iconRootObj = (UnityEngine_GameObject_o *)sub_1C941D4(
                                                                              v18,
                                                                              iconRootObj->klass->_1.element_class)) != 0 )
                            {
                              if ( !LODWORD(v88[1].klass) )
                                goto LABEL_39;
                              v88[1].monitor = v18;
                              sub_1C9403C(
                                (GrandQuestFolderBoardItem_o *)&v88[1].monitor,
                                (int32_t)v18,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87);
                              if ( !v81
                                || (iconRootObj = (UnityEngine_GameObject_o *)sub_1C941D4(
                                                                                v81,
                                                                                v88->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v88[1].klass) > 1 )
                                {
                                  v88[1].fields.m_CachedPtr = (intptr_t)v81;
                                  sub_1C9403C(
                                    (GrandQuestFolderBoardItem_o *)&v88[1].fields,
                                    (int32_t)v81,
                                    v89,
                                    v90,
                                    v91,
                                    v92,
                                    v93,
                                    v94);
                                  v14 = (SchedulerTaskOrthostichy_o *)sub_1C942E4(SchedulerTaskOrthostichy_TypeInfo);
                                  SchedulerTaskOrthostichy___ctor(v14, (SchedulerTaskBase_array *)v88, 0);
                                  return (SchedulerTaskBase_o *)v14;
                                }
LABEL_39:
                                sub_1C942F8(iconRootObj);
                              }
                            }
LABEL_40:
                            v96 = sub_1C94314(iconRootObj);
                            sub_1C941C0(v96, 0);
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
    sub_1C942F0(iconRootObj, v5);
  }
  v14 = (SchedulerTaskOrthostichy_o *)sub_1C942E4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v14, 0.5, 0);
  return (SchedulerTaskBase_o *)v14;
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  SchedulerTaskBase_TaskCallback_o *v19; // x21
  Il2CppObject *v20; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  SchedulerTaskBase_array *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  SchedulerTaskParallel_o *v41; // x19
  __int64 v43; // x0

  if ( (byte_4D305D1 & 1) == 0 )
  {
    sub_1C94098(&SchedulerTaskAnimation_TypeInfo);
    sub_1C94098(&SchedulerTaskBase___TypeInfo);
    sub_1C94098(&SchedulerTaskParallel_TypeInfo);
    sub_1C94098(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__);
    sub_1C94098(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_6603/*"FadeStart"*/);
    byte_4D305D1 = 1;
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
                (System_String_o *)StringLiteral_6603/*"FadeStart"*/,
                0.0,
                v7);
  anim = this->fields.anim;
  v10 = EventTime;
  v11 = (SchedulerTaskAnimation_o *)sub_1C942E4(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v11, anim, v5, 0, 0);
  v12 = sub_1C942E4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v12, v10, 0);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  v19 = *(SchedulerTaskBase_TaskCallback_o **)(*((_QWORD *)FirstTransitionAnimName + 23) + 40LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 56) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName);
      FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)FirstTransitionAnimName + 23);
    v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v19,
      v20,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__,
      0);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v19;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__34_0, (int32_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !v12
    || (*(_QWORD *)(v12 + 32) = v19,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 32), (int32_t)v19, v13, v14, v15, v16, v17, v18),
        (FirstTransitionAnimName = (void *)sub_1C94140(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_18:
    sub_1C942F0(FirstTransitionAnimName, v4);
  }
  v34 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v11 )
  {
    FirstTransitionAnimName = (void *)sub_1C941D4(v11, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !LODWORD(v34->max_length) )
    goto LABEL_19;
  v34->m_Items[0] = (SchedulerTaskBase_o *)v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v34->m_Items, (int32_t)v11, v28, v29, v30, v31, v32, v33);
  FirstTransitionAnimName = (void *)sub_1C941D4(v12, v34->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v43 = sub_1C94314(FirstTransitionAnimName);
    sub_1C941C0(v43, 0);
  }
  if ( LODWORD(v34->max_length) <= 1 )
LABEL_19:
    sub_1C942F8(FirstTransitionAnimName);
  v34->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v34->m_Items[1], v12, v35, v36, v37, v38, v39, v40);
  v41 = (SchedulerTaskParallel_o *)sub_1C942E4(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v41, v34, 0);
  return (SchedulerTaskBase_o *)v41;
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetTaskOfGoingToClassBoard(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *selectedClassIcon; // x21
  __int64 iconRootObj; // x0
  const MethodInfo *v9; // x1
  SchedulerTaskParallel_o *v10; // x19
  struct ClassBoardSelectIconComponent_o *v11; // x8
  struct ClassBoardSelectIconComponent_o *v12; // x8
  struct ClassBoardSelectIconComponent_o *v13; // x8
  System_String_o *v14; // x23
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v16; // x24
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  float v19; // s8
  UnityEngine_Animation_o *anim; // x22
  System_String_o *v21; // x21
  SchedulerTaskAnimation_o *v22; // x25
  const MethodInfo *v23; // x1
  SchedulerTaskBase_o *v24; // x0
  float v25; // s8
  SchedulerTaskBase_o *v26; // x22
  __int64 v27; // x21
  Il2CppObject *v28; // x26
  SchedulerTaskBase_TaskCallback_o *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  float DEFAULT_FADE_TIME; // s0
  System_Func_bool__o *v37; // x26
  __int64 v38; // x25
  SchedulerTaskBase_TaskCallback_o *v39; // x26
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  const MethodInfo *v46; // x1
  struct ClassBoardSelectIconComponent_o *v47; // x8
  __int64 v48; // x19
  UnityEngine_Animation_o *v49; // x20
  SchedulerTaskAnimation_o *v50; // x24
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  __int64 v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  __int64 v77; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D305D4 & 1) == 0 )
  {
    sub_1C94098(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SchedulerTaskAnimation_TypeInfo);
    sub_1C94098(&SchedulerTaskBase___TypeInfo);
    sub_1C94098(&SchedulerTaskParallel_TypeInfo);
    sub_1C94098(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C94098(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__0__);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__1__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
    byte_4D305D4 = 1;
  }
  v5 = sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass37_0___ctor((ClassBoardSelectViewManager___c__DisplayClass37_0_o *)v5, 0);
  ClassBoardSelectViewManager__SetSelectedClassIcon(this, baseId, v6);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  iconRootObj = UnityEngine_Object__op_Equality(selectedClassIcon, 0, 0);
  if ( (iconRootObj & 1) == 0 )
  {
    v11 = this->fields.selectedClassIcon;
    if ( !v11 )
      goto LABEL_36;
    iconRootObj = (__int64)v11->fields.iconRootObj;
    if ( !iconRootObj )
      goto LABEL_36;
    iconRootObj = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconRootObj, 0);
    if ( !iconRootObj )
      goto LABEL_36;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconRootObj, 0);
    v12 = this->fields.selectedClassIcon;
    this->fields.selectedClassIconBasePos = localPosition;
    if ( !v12 )
      goto LABEL_36;
    iconRootObj = (__int64)v12->fields.classIconUi;
    if ( !iconRootObj )
      goto LABEL_36;
    UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 176) + 1, 0);
    iconRootObj = (__int64)this->fields.selectedClassIcon;
    if ( !iconRootObj )
      goto LABEL_36;
    iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                             (ClassBoardSelectIconComponent_o *)iconRootObj,
                             v9);
    v13 = this->fields.selectedClassIcon;
    if ( !v13 )
      goto LABEL_36;
    v14 = (System_String_o *)iconRootObj;
    iconRootObj = (__int64)v13->fields.anim;
    if ( !iconRootObj )
      goto LABEL_36;
    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v14, 0);
    v16 = sub_1C942E4(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    ClassBoardSelectIconComponent_AnimClipInfo___ctor((ClassBoardSelectIconComponent_AnimClipInfo_o *)v16, Clip, v17);
    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v18);
    if ( !v16 )
      goto LABEL_36;
    v19 = *(float *)(v16 + 28);
    anim = this->fields.anim;
    v21 = (System_String_o *)iconRootObj;
    v22 = (SchedulerTaskAnimation_o *)sub_1C942E4(SchedulerTaskAnimation_TypeInfo);
    SchedulerTaskAnimation___ctor(v22, anim, v21, 0, 0);
    v24 = ClassBoardSelectViewManager__DelayAttachedTask(v19, (SchedulerTaskBase_o *)v22, v23);
    v25 = *(float *)(v16 + 44);
    v26 = v24;
    v27 = sub_1C942E4(SchedulerTaskWaitTime_TypeInfo);
    SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v27, v25, 0);
    v28 = (Il2CppObject *)this->fields.selectedClassIcon;
    v29 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(v29, v28, Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, 0);
    if ( !v27 )
      goto LABEL_36;
    *(_QWORD *)(v27 + 32) = v29;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v27 + 32), (int32_t)v29, v30, v31, v32, v33, v34, v35);
    iconRootObj = (__int64)AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v5 )
      goto LABEL_36;
    DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
    *(_BYTE *)(v5 + 16) = 1;
    *(float *)(v5 + 20) = DEFAULT_FADE_TIME;
    v37 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v37,
      (Il2CppObject *)v5,
      Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__0__,
      0);
    v38 = sub_1C942E4(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v38, v37, 0);
    v39 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v39,
      (Il2CppObject *)v5,
      Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__1__,
      0);
    if ( !v38 )
      goto LABEL_36;
    *(_QWORD *)(v38 + 24) = v39;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v38 + 24), (int32_t)v39, v40, v41, v42, v43, v44, v45);
    iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                             *(float *)(v16 + 24),
                             (SchedulerTaskBase_o *)v38,
                             v46);
    v47 = this->fields.selectedClassIcon;
    if ( !v47
      || (v48 = iconRootObj,
          v49 = v47->fields.anim,
          v50 = (SchedulerTaskAnimation_o *)sub_1C942E4(SchedulerTaskAnimation_TypeInfo),
          SchedulerTaskAnimation___ctor(v50, v49, v14, 0, 0),
          (iconRootObj = sub_1C94140(SchedulerTaskBase___TypeInfo, 4)) == 0) )
    {
LABEL_36:
      sub_1C942F0(iconRootObj, v9);
    }
    v57 = iconRootObj;
    if ( !v50 || (iconRootObj = sub_1C941D4(v50, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v57 + 24) )
        goto LABEL_37;
      *(_QWORD *)(v57 + 32) = v50;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 32), (int32_t)v50, v51, v52, v53, v54, v55, v56);
      if ( !v26 || (iconRootObj = sub_1C941D4(v26, *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v57 + 24) <= 1u )
          goto LABEL_37;
        *(_QWORD *)(v57 + 40) = v26;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 40), (int32_t)v26, v58, v59, v60, v61, v62, v63);
        iconRootObj = sub_1C941D4(v27, *(_QWORD *)(*(_QWORD *)v57 + 64LL));
        if ( iconRootObj )
        {
          if ( *(_DWORD *)(v57 + 24) <= 2u )
            goto LABEL_37;
          *(_QWORD *)(v57 + 48) = v27;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 48), v27, v64, v65, v66, v67, v68, v69);
          if ( !v48 || (iconRootObj = sub_1C941D4(v48, *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v57 + 24) > 3u )
            {
              *(_QWORD *)(v57 + 56) = v48;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 56), v48, v70, v71, v72, v73, v74, v75);
              v10 = (SchedulerTaskParallel_o *)sub_1C942E4(SchedulerTaskParallel_TypeInfo);
              SchedulerTaskParallel___ctor(v10, (SchedulerTaskBase_array *)v57, 0);
              return (SchedulerTaskBase_o *)v10;
            }
LABEL_37:
            sub_1C942F8(iconRootObj);
          }
        }
      }
    }
    v77 = sub_1C94314(iconRootObj);
    sub_1C941C0(v77, 0);
  }
  v10 = (SchedulerTaskParallel_o *)sub_1C942E4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v10, 0.5, 0);
  return (SchedulerTaskBase_o *)v10;
}


void ClassBoardSelectViewManager__HideSelectIconsActiveParticles(
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
        sub_1C942F8(this);
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1C942F0(this, method);
  }
}


void ClassBoardSelectViewManager__Init(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  System_Object_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x0
  System_String_o *monitor; // x19

  if ( (byte_4D305CA & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_1C94098(&SoundManager_TypeInfo);
    byte_4D305CA = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_31CBB8C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v4 = System_Linq_Enumerable__ToArray_object_(
         v3,
         (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.animationStateArray, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v12);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.bgmId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
  if ( Entity )
  {
    monitor = (System_String_o *)Entity[1].monitor;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
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

  if ( (byte_4D305DA & 1) == 0 )
  {
    sub_1C94098(&SceneJumpInfo_TypeInfo);
    sub_1C94098(&SceneList_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D305DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v6 = (AvalonSceneManager_o *)Instance;
  if ( isFromCombineScene )
  {
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    SceneName = SceneList__getSceneName(92, 0);
    v8 = (SceneJumpInfo_o *)sub_1C942E4(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_42243168(v8, SceneName, 0);
  }
  else
  {
    v8 = 0;
  }
  if ( !v6 )
    sub_1C942F0(Instance, v5);
  AvalonSceneManager__transitionScene_41915312(v6, 32, 0, 1, (Il2CppObject *)v8, 0);
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
  struct ClassBoardBaseEntity_o *v13; // x9
  CommonUI_o *v14; // x20
  System_String_o *closedMessage; // x19
  System_String_o *v16; // x19
  CommonUI_o *v17; // x20
  ClassBoardSelectViewManager___c_c *v18; // x8
  System_Action_o *_9__33_1; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_String_o *v29; // x21
  System_Action_o *v30; // x22
  Il2CppObject *v31; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D305D0 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__);
    sub_1C94098(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_3372/*"CLASS_BOARD_BASE_UNRELEASED"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D305D0 = 1;
  }
  v5 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C940B0(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
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
        sub_1C942F0(IsOpen, v8);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = icon->fields._Entity_k__BackingField;
      v14 = (CommonUI_o *)Instance;
      if ( v13 )
        closedMessage = v13->fields.closedMessage;
      else
        closedMessage = 0;
      v29 = (System_String_o *)StringLiteral_1/*""*/;
      IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
        IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v30 = *(System_Action_o **)(*((_QWORD *)IsOpen + 23) + 32LL);
      if ( !v30 )
      {
        if ( !*((_DWORD *)IsOpen + 56) )
        {
          j_il2cpp_runtime_class_init_0(IsOpen);
          IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
        }
        v31 = (Il2CppObject *)**((_QWORD **)IsOpen + 23);
        v30 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(v30, v31, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, 0);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        static_fields->__9__33_0 = v30;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__33_0,
          (int32_t)v30,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      if ( !v14 )
        goto LABEL_34;
      CommonUI__OpenNotificationDialog(v14, v29, closedMessage, v30, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3372/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0);
    IsOpen = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (CommonUI_o *)IsOpen;
    v18 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v18 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    _9__33_1 = v18->static_fields->__9__33_1;
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__33_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__33_1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(_9__33_1, v21, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, 0);
      v22 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v22->__9__33_1 = _9__33_1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v22->__9__33_1, (int32_t)_9__33_1, v23, v24, v25, v26, v27, v28);
    }
    if ( !v17 )
      goto LABEL_34;
    CommonUI__OpenNotificationDialog(v17, v20, v16, _9__33_1, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
  }
}


void ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D305CE & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_bool___);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__);
    byte_4D305CE = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_30E5830 *)Method_ActionExtensions_Call_bool___);
  v3 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  System_Action_o *v20; // x19

  if ( (byte_4D305CF & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_bool___);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
    byte_4D305CF = 1;
  }
  v5 = sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass32_0___ctor((ClassBoardSelectViewManager___c__DisplayClass32_0_o *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_30E5830 *)Method_ActionExtensions_Call_bool___);
  v20 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  ActionChain_o *v15; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Action_array *v22; // x21

  if ( (byte_4D305CD & 1) == 0 )
  {
    sub_1C94098(&ActionChain_TypeInfo);
    sub_1C94098(&Method_ActionExtensions_Call_bool___);
    sub_1C94098(&System_Action___TypeInfo);
    sub_1C94098(&System_Action_Action____TypeInfo);
    sub_1C94098(&System_Action_Action__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1C94098(&Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__);
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D305CD = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_30E5830 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v3);
  Instance = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, 0);
  v7 = sub_1C94140(System_Action_Action____TypeInfo, 1);
  v8 = (System_Action_object__o *)sub_1C942E4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0);
  if ( !v7 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v7 + 32) = v8;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (ActionChain_o *)sub_1C942E4(ActionChain_TypeInfo);
  ActionChain___ctor_49731620(v15, (System_Action_Action__array *)v7, 0);
  Instance = (char *)sub_1C94140(System_Action___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_11;
  v22 = (System_Action_array *)Instance;
  if ( !*((_DWORD *)Instance + 6) )
LABEL_12:
    sub_1C942F8(Instance);
  *((_QWORD *)Instance + 4) = v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(Instance + 32), (int32_t)v6, v16, v17, v18, v19, v20, v21);
  if ( !v15 || (Instance = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v15, v22, 0)) == 0 )
LABEL_11:
    sub_1C942F0(Instance, v5);
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
    sub_1C942F0(v4, v5);
  ClassBoardBackground__UseClassBoardSelectViewCamera(classBoardBackground, 0);
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 0, 0);
}


void ClassBoardSelectViewManager__SetSelectedClassIcon(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager___c__DisplayClass40_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x20
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D305D7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    sub_1C94098(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass40_0__SetSelectedClassIcon_b__0__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass40_0_TypeInfo);
    byte_4D305D7 = 1;
  }
  v5 = (ClassBoardSelectViewManager___c__DisplayClass40_0_o *)sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass40_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass40_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5->fields.baseId = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass40_0__SetSelectedClassIcon_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
          iconArray,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  this->fields.selectedClassIcon = (struct ClassBoardSelectIconComponent_o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectedClassIcon,
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
  ClassBoardSelectViewManager_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  ClassBoardUIController_o *classBoardUIController_k__BackingField; // x20
  System_Int32_array *headerDlspItemIdArray; // x19
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  const MethodInfo *v10; // x4

  v2 = this;
  if ( (byte_4D305D9 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_1C94098(&IClassBoardResourceCatalog_TypeInfo);
    byte_4D305D9 = 1;
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
    v9 = sub_1C6A420(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(
                                            resourceCatalog,
                                            *(_QWORD *)(v9 + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_1C942F0(this, method);
  ClassBoardUIController__SetItemList(
    classBoardUIController_k__BackingField,
    headerDlspItemIdArray,
    (AtlasManagerUnit_o *)this[1].fields.m_CancellationTokenSource,
    0,
    v10);
}


void ClassBoardSelectViewManager__SetupClassBoardUIController(
        ClassBoardSelectViewManager_o *this,
        bool isFromCombineScene,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *classBoardUIController_k__BackingField; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  Il2CppObject *v19; // x22
  UnityEngine_Transform_o *uiRoot; // x21
  Il2CppObject *v21; // x0
  struct ClassBoardUIController_o **p_classBoardUIController_k__BackingField; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct ClassBoardUIController_o *v29; // x22
  System_Action_o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct ClassBoardUIController_o *v37; // x20
  System_Action_o *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  struct IClassBoardResourceCatalog_o *v49; // x21
  IClassBoardResourceCatalog_c *v50; // x8
  ClassBoardUIController_o *v51; // x20
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x1
  struct IClassBoardResourceCatalog_o *v57; // x20
  IClassBoardResourceCatalog_c *v58; // x8
  ClassBoardUIController_o *v59; // x19
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  AtlasManagerUnit_o *v63; // x20
  const MethodInfo *v64; // x5

  if ( (byte_4D305D8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager_OpenHelp__);
    sub_1C94098(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass41_0__SetupClassBoardUIController_b__0__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass41_0_TypeInfo);
    sub_1C94098(&StringLiteral_20810/*"img_txt_classscore_main"*/);
    sub_1C94098(&StringLiteral_3428/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/);
    byte_4D305D8 = 1;
  }
  v5 = sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass41_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass41_0___ctor((ClassBoardSelectViewManager___c__DisplayClass41_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_44;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 24) = isFromCombineScene;
  resourceCatalog = this->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_44;
  klass = resourceCatalog->klass;
  v16 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_9;
    }
    v18 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_9:
    v18 = sub_1C6A420(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  classBoardUIController_k__BackingField = (void *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v18)(
                                                     resourceCatalog,
                                                     *(_QWORD *)(v18 + 8));
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_44;
  v19 = (Il2CppObject *)*((_QWORD *)classBoardUIController_k__BackingField + 15);
  uiRoot = this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__Instantiate_object__52598436(
          v19,
          uiRoot,
          (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  this->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v21;
  p_classBoardUIController_k__BackingField = &this->fields._classBoardUIController_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  classBoardUIController_k__BackingField = this->fields._classBoardUIController_k__BackingField;
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__Init((ClassBoardUIController_o *)classBoardUIController_k__BackingField, v7);
  v29 = *p_classBoardUIController_k__BackingField;
  v30 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass41_0__SetupClassBoardUIController_b__0__,
    0);
  if ( !v29 )
    goto LABEL_44;
  v29->fields.onClickBack = v30;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v29->fields.onClickBack, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = this->fields._classBoardUIController_k__BackingField;
  v38 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelp__, 0);
  if ( !v37 )
    goto LABEL_44;
  v37->fields.onClickHelp = v38;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v37->fields.onClickHelp, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateEffectListButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    v45);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateGrandScoreButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    v46);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateClassBoardResetButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    v47);
  classBoardUIController_k__BackingField = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  ClassBoardUIController__ActivateToGrandServantListButton(
    (ClassBoardUIController_o *)classBoardUIController_k__BackingField,
    0,
    v48);
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  BasicHelper__SetActiveSafely(
    (UnityEngine_Component_o *)(*p_classBoardUIController_k__BackingField)->fields.classScoreBtnSprite,
    0,
    0);
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_44;
  GameObjectHelper__SetActiveSafely((*p_classBoardUIController_k__BackingField)->fields.classBoardSelectButton, 0, 0);
  v49 = this->fields.resourceCatalog;
  if ( !v49 )
    goto LABEL_44;
  v50 = v49->klass;
  v51 = this->fields._classBoardUIController_k__BackingField;
  v52 = *(unsigned __int16 *)&v49->klass->_2.rank;
  if ( *(_WORD *)&v49->klass->_2.rank )
  {
    v53 = &v50->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v53 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_28;
    }
    v54 = (__int64)&v50->vtable[*v53];
  }
  else
  {
LABEL_28:
    v54 = sub_1C6A420(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  classBoardUIController_k__BackingField = (void *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v54)(
                                                     v49,
                                                     *(_QWORD *)(v54 + 8));
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_44;
  if ( !v51 )
    goto LABEL_44;
  ClassBoardUIController__SetHeaderTitle(
    v51,
    *((AtlasManagerUnit_o **)classBoardUIController_k__BackingField + 24),
    (System_String_o *)StringLiteral_20810/*"img_txt_classscore_main"*/,
    v55);
  ClassBoardSelectViewManager__SetUpHeaderItemList(this, v56);
  v57 = this->fields.resourceCatalog;
  if ( !v57 )
    goto LABEL_44;
  v58 = v57->klass;
  v59 = this->fields._classBoardUIController_k__BackingField;
  v60 = *(unsigned __int16 *)&v57->klass->_2.rank;
  if ( *(_WORD *)&v57->klass->_2.rank )
  {
    v61 = &v58->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v61 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_37;
    }
    v62 = (__int64)&v58->vtable[*v61];
  }
  else
  {
LABEL_37:
    v62 = sub_1C6A420(v57, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  classBoardUIController_k__BackingField = (void *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v62)(
                                                     v57,
                                                     *(_QWORD *)(v62 + 8));
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_44;
  v63 = (AtlasManagerUnit_o *)*((_QWORD *)classBoardUIController_k__BackingField + 24);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  classBoardUIController_k__BackingField = LocalizationManager__Get((System_String_o *)StringLiteral_3428/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0);
  if ( !v59 )
LABEL_44:
    sub_1C942F0(classBoardUIController_k__BackingField, v7);
  ClassBoardUIController__SetHeaderMessage(
    v59,
    v63,
    (System_String_o *)classBoardUIController_k__BackingField,
    0,
    0,
    v64);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  ClassBoardResourceCatalogAssetBundle_o **v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct IClassBoardResourceCatalog_o *v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Action_o *v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  const MethodInfo *v53; // x1
  ClassBoardResourceCatalogAssetBundle_o *v54; // x20
  __int64 naturalAligment; // x10
  System_Action_o *v56; // x21
  const MethodInfo *v57; // x2

  if ( (byte_4D305CB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
    byte_4D305CB = 1;
  }
  v11 = sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass27_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass27_0_o *)v11,
    0);
  if ( !v11 )
    sub_1C942F0(v12, v13);
  *(_QWORD *)(v11 + 16) = classBoardBackground;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)classBoardBackground, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = resourceCatalog;
  v26 = (ClassBoardResourceCatalogAssetBundle_o **)(v11 + 32);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)resourceCatalog, v27, v28, v29, v30, v31, v32);
  *(_BYTE *)(v11 + 40) = isFromCombineScene;
  *(_QWORD *)(v11 + 48) = finishCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)finishCallback, v33, v34, v35, v36, v37, v38);
  v39 = *(struct IClassBoardResourceCatalog_o **)(v11 + 32);
  this->fields.resourceCatalog = v39;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.resourceCatalog, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v11,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__,
    0);
  *(_QWORD *)(v11 + 56) = v46;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 56), (int32_t)v46, v47, v48, v49, v50, v51, v52);
  if ( !ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v53)
    && (v54 = *v26) != 0
    && (naturalAligment = ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.naturalAligment,
        v54->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ClassBoardResourceCatalogAssetBundle_c *)v54->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    v56 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v11,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__,
      0);
    ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v54, v56, v57);
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
  ClassBoardSelectViewManager___c__DisplayClass46_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  System_Func_object__bool__o *v9; // x20
  Il2CppObject *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4D305DD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    sub_1C94098(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass46_0__UpdateClassBoardSelectIcon_b__0__);
    sub_1C94098(&ClassBoardSelectViewManager___c__DisplayClass46_0_TypeInfo);
    byte_4D305DD = 1;
  }
  v5 = (ClassBoardSelectViewManager___c__DisplayClass46_0_o *)sub_1C942E4(ClassBoardSelectViewManager___c__DisplayClass46_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass46_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5->fields.baseId = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_ClassBoardSelectViewManager___c__DisplayClass46_0__UpdateClassBoardSelectIcon_b__0__,
      0);
    v10 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
            iconArray,
            (System_Func_TSource__bool__o *)v9,
            (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
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
        sub_1C942F8(this);
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
    sub_1C942F0(this, method);
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
  if ( (byte_4D305CC & 1) == 0 )
  {
    sub_1C94098(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardSelectViewManager_o *)sub_1C94098(&StringLiteral_20810/*"img_txt_classscore_main"*/);
    byte_4D305CC = 1;
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
    v7 = sub_1C6A420(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(
                                            resourceCatalog,
                                            *(_QWORD *)(v7 + 8));
  if ( !this || (this = (ClassBoardSelectViewManager_o *)this[1].fields.m_CancellationTokenSource) == 0 )
LABEL_13:
    sub_1C942F0(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_20810/*"img_txt_classscore_main"*/, 0);
}


void ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardSelectViewManager___OpenHelp_b__31_0(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D305DF & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_bool___);
    byte_4D305DF = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_30E5830 *)Method_ActionExtensions_Call_bool___);
}


void ClassBoardSelectViewManager___PlayStartAction_b__30_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D305DE & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_bool___);
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D305DE = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_30E5830 *)Method_ActionExtensions_Call_bool___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._classBoardUIController_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardSelectViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D305E1 & 1) == 0 )
  {
    sub_1C94098(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4D305E1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardSelectViewManager___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, 0);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0);
}


bool ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__44_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, 0);
}


void ClassBoardSelectViewManager___c___GetSkipTaskOfFirstTransition_b__35_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4D305E3 & 1) == 0 )
  {
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D305E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C942F0(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__34_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4D305E2 & 1) == 0 )
  {
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D305E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C942F0(Instance, v3);
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
    sub_1C942F0(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_36800820(gameObject, 0.0, 0);
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
    sub_1C942F0(this, 0);
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
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct ClassBoardSelectViewManager_o *v15; // x8
  System_Collections_Generic_IEnumerable_T__o *v16; // x20
  ClassBoardSelectViewManager___c_c *v17; // x0
  System_Action_object__o *_9__27_2; // x21
  Il2CppObject *v19; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct ClassBoardSelectViewManager_o *v27; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t monitor; // w8

  if ( (byte_4D305E4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
    sub_1C94098(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__);
    sub_1C94098(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4D305E4 = 1;
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
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_1C942E4(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  BasicHelper__ForEach_object_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_25;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)v15->fields.iconArray;
  v17 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v17 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__27_2 = (System_Action_object__o *)v17->static_fields->__9__27_2;
  if ( !_9__27_2 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__27_2 = (System_Action_object__o *)sub_1C942E4(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(_9__27_2, v19, Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, 0);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__27_2;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_2,
      (int32_t)_9__27_2,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  BasicHelper__ForEach_object_(
    v16,
    (System_Action_T__o *)_9__27_2,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_object_(
                                                     (System_Object_array *)v27->fields.iconArray,
                                                     0,
                                                     0,
                                                     (const MethodInfo_318A668 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
  v27->fields.iconDefaultDepth = monitor;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_25:
    sub_1C942F0(classBoardBackground, method);
  ClassBoardSelectViewManager__SetupClassBoardUIController(
    (ClassBoardSelectViewManager_o *)classBoardBackground,
    this->fields.isFromCombineScene,
    0);
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

  if ( (byte_4D305E5 & 1) == 0 )
  {
    sub_1C94098(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_1C94098(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    byte_4D305E5 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v7 = (System_Action_object__o *)sub_1C942E4(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_object____ctor(v7, _4__this, (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__, 0);
  if ( !x )
    sub_1C942F0(v8, v9);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v7, 0);
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
  if ( (byte_4D305E6 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass27_0_o *)sub_1C94098(&IClassBoardResourceCatalog_TypeInfo);
    byte_4D305E6 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    sub_1C942F0(this, method);
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
    v7 = sub_1C6A420(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  if ( (byte_4D305E7 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)sub_1C94098(&Method_ActionExtensions_Call_bool___);
    byte_4D305E7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_30E5830 *)Method_ActionExtensions_Call_bool___);
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

  if ( (byte_4D305E8 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D305E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
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
    sub_1C942F0(this, method);
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
  System_Action_o *_9__2; // x21
  CommonUI_o *v6; // x20
  float fadeTime; // s8
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D305E9 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__2__);
    byte_4D305E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C942F0(Instance, v4);
  CommonUI__maskFadeout(v6, 2, fadeTime, _9__2, 0);
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
    sub_1C942F0(this, x);
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
  ClassBoardSelectViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(0, method);
  ClassBoardSelectViewManager__OnClickBack(_4__this, this->fields.isFromCombineScene, 0);
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
    sub_1C942F0(0, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, 0);
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
    sub_1C942F0(this, 0);
  return x->fields.baseId == this->fields.baseId;
}