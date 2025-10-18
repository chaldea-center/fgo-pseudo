void ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  SchedulerTaskBase_array *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  SchedulerTaskOrthostichy_o *v12; // x19
  __int64 v14; // x0

  if ( (byte_4C46BD9 & 1) == 0 )
  {
    sub_1C37058(&SchedulerTaskBase___TypeInfo);
    sub_1C37058(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C37058(&SchedulerTaskWaitTime_TypeInfo);
    byte_4C46BD9 = 1;
  }
  v5 = (SchedulerTaskWaitTime_o *)sub_1C372A4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v5, delay, 0);
  v6 = sub_1C37100(SchedulerTaskBase___TypeInfo, 2);
  if ( !v6 )
    sub_1C372B4(0);
  v9 = (SchedulerTaskBase_array *)v6;
  if ( v5 )
  {
    v6 = sub_1C37194(v5, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_11;
  v9->m_Items[0] = (SchedulerTaskBase_o *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)v9->m_Items, (int32_t)v5, v7, v8);
  if ( task )
  {
    v6 = sub_1C37194(task, v9->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_12:
      v14 = sub_1C372D8(v6);
      sub_1C37180(v14, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 1 )
LABEL_11:
    sub_1C372BC(v6);
  v9->m_Items[1] = task;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->m_Items[1], (int32_t)task, v10, v11);
  v12 = (SchedulerTaskOrthostichy_o *)sub_1C372A4(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v12, v9, 0);
  return (SchedulerTaskBase_o *)v12;
}


System_String_o *ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4C46BCA & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4C46BCA = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0,
               (const MethodInfo_30D61F8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
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

  if ( (byte_4C46BCB & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4C46BCB = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               2,
               0,
               (const MethodInfo_30D61F8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectViewManager___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_T__o *v14; // x21
  System_Action_object__o *_9__24_0; // x22
  Il2CppObject *v16; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Object_array *v20; // x19
  System_Func_object__bool__o *v21; // x21
  Il2CppObject *object; // x0

  if ( (byte_4C46BCC & 1) == 0 )
  {
    sub_1C37058(&System_Action_AnimationEvent__TypeInfo);
    sub_1C37058(&Method_BasicHelper_Find_AnimationEvent___);
    sub_1C37058(&Method_BasicHelper_ForEach_AnimationEvent___);
    sub_1C37058(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__);
    sub_1C37058(&ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C37058(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4C46BCC = 1;
  }
  v8 = sub_1C372A4(ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = eventName,
        sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)eventName, v10, v11),
        !animClip) )
  {
    sub_1C372B4(v9);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0);
  v13 = ClassBoardSelectViewManager___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v13 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__24_0 = (System_Action_object__o *)v13->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__24_0 = (System_Action_object__o *)sub_1C372A4(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(_9__24_0, v16, Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, 0);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Action_AnimationEvent__o *)_9__24_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v18, v19);
  }
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)_9__24_0,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v14, 0);
  v20 = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0);
  v21 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__,
    0);
  object = BasicHelper__Find_object_(
             v20,
             (System_Func_T__bool__o *)v21,
             (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_AnimationEvent___);
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

  if ( (byte_4C46BC9 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4C46BC9 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0,
               (const MethodInfo_30D61F8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
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
  const MethodInfo *v5; // x1
  float result; // s0
  ClassBoardSelectIconComponent_o *ClassBoardEnterAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v8; // x8
  System_String_o *v9; // x1
  UnityEngine_AnimationClip_o *Clip; // x20
  ClassBoardSelectIconComponent_AnimClipInfo_o *v11; // x19
  const MethodInfo *v12; // x2

  if ( (byte_4C46BD8 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46BD8 = 1;
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
      || (v9 = (System_String_o *)ClassBoardEnterAnimName,
          (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)v8->fields.anim) == 0)
      || (Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)ClassBoardEnterAnimName, v9, 0),
          v11 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1C372A4(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v11, Clip, v12),
          !v11) )
    {
      sub_1C372B4(ClassBoardEnterAnimName);
    }
    return v11->fields._ForwardIconAnimStartTime_k__BackingField;
  }
  return result;
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetPlayClassBoardReleaseEffect(
        ClassBoardSelectViewManager_o *this,
        System_Collections_Generic_List_ClassBoardSelectIconComponent__o *iconCompoentList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t current; // w1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x8
  UnityEngine_AnimationState_o *v13; // x0
  System_String_o *name; // x0
  System_String_o *v15; // x22
  UnityEngine_Animation_o *v16; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  ClassBoardSelectIconComponent_AnimClipInfo_o *v18; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x0
  UnityEngine_Animation_o *v21; // x23
  __int64 v22; // x21
  SchedulerTaskBase_TaskCallback_o *v23; // x22
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C46BDF & 1) == 0 )
  {
    sub_1C37058(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C37058(&SchedulerTaskAnimation_TypeInfo);
    sub_1C37058(&SchedulerTaskParallel_TypeInfo);
    sub_1C37058(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__);
    sub_1C37058(&ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
    byte_4C46BDF = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( iconCompoentList )
  {
    if ( iconCompoentList->fields._size )
    {
      v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v4,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        (System_Collections_Generic_List_object__o *)iconCompoentList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v36 = v35;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v36,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v5 = sub_1C372A4(ClassBoardSelectViewManager___c__DisplayClass45_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v5, 0);
        if ( !v5 )
          sub_1C372B4(v6);
        current = (int32_t)v36.fields._current;
        *(_QWORD *)(v5 + 16) = v36.fields._current;
        v10 = v5 + 16;
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), current, v7, v8);
        v12 = *(_QWORD *)(v5 + 16);
        if ( !v12 )
          sub_1C372B4(v11);
        v13 = *(UnityEngine_AnimationState_o **)(v12 + 136);
        if ( v13 )
        {
          name = UnityEngine_AnimationState__get_name(v13, 0);
          v12 = *(_QWORD *)v10;
          if ( !*(_QWORD *)v10 )
            sub_1C372B4(name);
          v15 = name;
        }
        else
        {
          v15 = 0;
        }
        v16 = *(UnityEngine_Animation_o **)(v12 + 88);
        if ( !v16 )
          sub_1C372B4(0);
        Clip = UnityEngine_Animation__GetClip(v16, v15, 0);
        v18 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1C372A4(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v18, Clip, v19);
        if ( !*(_QWORD *)v10 )
          sub_1C372B4(v20);
        v21 = *(UnityEngine_Animation_o **)(*(_QWORD *)v10 + 88LL);
        v22 = sub_1C372A4(SchedulerTaskAnimation_TypeInfo);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v22, v21, v15, 0, 0);
        v23 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_ClassBoardSelectViewManager___c__DisplayClass45_0__GetPlayClassBoardReleaseEffect_b__0__,
          0);
        if ( !v22 )
          sub_1C372B4(v24);
        *(_QWORD *)(v22 + 32) = v23;
        sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v23, v25, v26);
        if ( !v4 )
          sub_1C372B4(v27);
        items = v4->fields._items;
        v31 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1C372B4(v27);
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            (Il2CppObject *)v22,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v22;
          sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 4), v22, v28, v29);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v36,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      iconCompoentList = (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)sub_1C372A4(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor_44307080(
        (SchedulerTaskParallel_o *)iconCompoentList,
        (System_Collections_Generic_List_SchedulerTaskBase__o *)v4,
        0);
    }
    else
    {
      return 0;
    }
  }
  return (SchedulerTaskBase_o *)iconCompoentList;
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_Generic_List_object__o *v12; // x19

  if ( (byte_4C46BDE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    sub_1C37058(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__);
    sub_1C37058(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4C46BDE = 1;
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
      _9__44_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__44_0,
        v6,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__44_0__,
        0);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      static_fields->__9__44_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__44_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v8, v9);
    }
    v10 = System_Linq_Enumerable__Where_object_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__44_0,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v10,
                                                                                 (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v12;
  }
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetSkipTaskOfFirstTransition(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  void *FirstTransitionAnimName; // x0
  System_String_o *v4; // x21
  ClassBoardSelectViewManager_o *Clip; // x0
  const MethodInfo *v6; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v9; // s8
  SchedulerTaskAnimation_o *v10; // x20
  __int64 v11; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  SchedulerTaskBase_TaskCallback_o *v14; // x21
  Il2CppObject *v15; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  SchedulerTaskBase_array *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  SchedulerTaskParallel_o *v24; // x19
  __int64 v26; // x0

  if ( (byte_4C46BD5 & 1) == 0 )
  {
    sub_1C37058(&SchedulerTaskAnimation_TypeInfo);
    sub_1C37058(&SchedulerTaskBase___TypeInfo);
    sub_1C37058(&SchedulerTaskParallel_TypeInfo);
    sub_1C37058(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C37058(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__GetSkipTaskOfFirstTransition_b__35_0__);
    sub_1C37058(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_6596/*"FadeStart"*/);
    byte_4C46BD5 = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_18;
  v4 = (System_String_o *)FirstTransitionAnimName;
  Clip = (ClassBoardSelectViewManager_o *)UnityEngine_Animation__GetClip(
                                            this->fields.anim,
                                            (System_String_o *)FirstTransitionAnimName,
                                            0);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                Clip,
                (UnityEngine_AnimationClip_o *)Clip,
                (System_String_o *)StringLiteral_6596/*"FadeStart"*/,
                0.0,
                v6);
  anim = this->fields.anim;
  v9 = EventTime;
  v10 = (SchedulerTaskAnimation_o *)sub_1C372A4(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v10, anim, v4, 1, 0);
  v11 = sub_1C372A4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v11, v9, 0);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  v14 = *(SchedulerTaskBase_TaskCallback_o **)(*((_QWORD *)FirstTransitionAnimName + 23) + 48LL);
  if ( !v14 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 56) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName);
      FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)**((_QWORD **)FirstTransitionAnimName + 23);
    v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v14,
      v15,
      Method_ClassBoardSelectViewManager___c__GetSkipTaskOfFirstTransition_b__35_0__,
      0);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__35_0 = v14;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)v14, v17, v18);
  }
  if ( !v11
    || (*(_QWORD *)(v11 + 32) = v14,
        sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v14, v12, v13),
        (FirstTransitionAnimName = (void *)sub_1C37100(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_18:
    sub_1C372B4(FirstTransitionAnimName);
  }
  v21 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v10 )
  {
    FirstTransitionAnimName = (void *)sub_1C37194(v10, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !LODWORD(v21->max_length) )
    goto LABEL_19;
  v21->m_Items[0] = (SchedulerTaskBase_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)v21->m_Items, (int32_t)v10, v19, v20);
  FirstTransitionAnimName = (void *)sub_1C37194(v11, v21->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v26 = sub_1C372D8(FirstTransitionAnimName);
    sub_1C37180(v26, 0);
  }
  if ( LODWORD(v21->max_length) <= 1 )
LABEL_19:
    sub_1C372BC(FirstTransitionAnimName);
  v21->m_Items[1] = (SchedulerTaskBase_o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&v21->m_Items[1], v11, v22, v23);
  v24 = (SchedulerTaskParallel_o *)sub_1C372A4(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v24, v21, 0);
  return (SchedulerTaskBase_o *)v24;
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  UnityEngine_GameObject_o *iconRootObj; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *selectedClassIcon; // x19
  const MethodInfo *v8; // x1
  SchedulerTaskOrthostichy_o *v9; // x19
  System_String_o *FirstTransitionAnimName; // x0
  UnityEngine_Animation_o *anim; // x22
  System_String_o *v12; // x23
  SchedulerTaskAnimation_o *v13; // x19
  struct ClassBoardSelectIconComponent_o *v14; // x8
  const MethodInfo *v15; // x1
  struct ClassBoardSelectIconComponent_o *v16; // x8
  System_String_o *v17; // x23
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v19; // x24
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  System_String_o *v22; // x22
  float v23; // s8
  UnityEngine_Animation_o *v24; // x25
  SchedulerTaskAnimation_o *v25; // x26
  const MethodInfo *v26; // x1
  SchedulerTaskBase_o *v27; // x22
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v30; // x25
  SchedulerTaskBase_TaskCallback_o *v31; // x26
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  SchedulerTaskBase_o *v35; // x0
  struct ClassBoardSelectIconComponent_o *v36; // x1
  SchedulerTaskBase_o *v37; // x24
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct ClassBoardSelectIconComponent_o *v40; // x8
  UnityEngine_Animation_o *v41; // x20
  __int64 v42; // x25
  SchedulerTaskBase_TaskCallback_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  SchedulerTaskBase_array *v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  SchedulerTaskParallel_o *v53; // x21
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  UnityEngine_GameObject_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v60; // x0

  if ( (byte_4C46BD6 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SchedulerTaskAnimation_TypeInfo);
    sub_1C37058(&SchedulerTaskBase___TypeInfo);
    sub_1C37058(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C37058(&SchedulerTaskParallel_TypeInfo);
    sub_1C37058(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C37058(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__0__);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__1__);
    sub_1C37058(&ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
    byte_4C46BD6 = 1;
  }
  v3 = sub_1C372A4(ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_38;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectedClassIcon, 0, 0) )
  {
    FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, v8);
    anim = this->fields.anim;
    v12 = FirstTransitionAnimName;
    v13 = (SchedulerTaskAnimation_o *)sub_1C372A4(SchedulerTaskAnimation_TypeInfo);
    SchedulerTaskAnimation___ctor(v13, anim, v12, 1, 0);
    v14 = this->fields.selectedClassIcon;
    if ( v14 )
    {
      iconRootObj = v14->fields.iconRootObj;
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
                                                        v15);
            v16 = this->fields.selectedClassIcon;
            if ( v16 )
            {
              v17 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v16->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v17, 0);
                v19 = sub_1C372A4(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v19,
                  Clip,
                  v20);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v21);
                if ( v19 )
                {
                  v22 = (System_String_o *)iconRootObj;
                  v23 = *(float *)(v19 + 28);
                  v24 = this->fields.anim;
                  v25 = (SchedulerTaskAnimation_o *)sub_1C372A4(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v25, v24, v22, 0, 0);
                  v27 = ClassBoardSelectViewManager__DelayAttachedTask(v23, (SchedulerTaskBase_o *)v25, v26);
                  v28 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v28 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v3 + 16) = DEFAULT_FADE_TIME;
                  v30 = sub_1C372A4(SchedulerTaskWaitTime_TypeInfo);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v30, DEFAULT_FADE_TIME, 0);
                  v31 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v31,
                    (Il2CppObject *)v3,
                    Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__0__,
                    0);
                  if ( v30 )
                  {
                    *(_QWORD *)(v30 + 24) = v31;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 24), (int32_t)v31, v32, v33);
                    v35 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v19 + 24),
                            (SchedulerTaskBase_o *)v30,
                            v34);
                    v36 = this->fields.selectedClassIcon;
                    v37 = v35;
                    *(_QWORD *)(v3 + 24) = v36;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v36, v38, v39);
                    v40 = this->fields.selectedClassIcon;
                    if ( v40 )
                    {
                      v41 = v40->fields.anim;
                      v42 = sub_1C372A4(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v42, v41, v17, 0, 0);
                      v43 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v43,
                        (Il2CppObject *)v3,
                        Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfComingFromClassBoard_b__1__,
                        0);
                      if ( v42 )
                      {
                        *(_QWORD *)(v42 + 32) = v43;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v42 + 32), (int32_t)v43, v44, v45);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_1C37100(SchedulerTaskBase___TypeInfo, 3);
                        if ( iconRootObj )
                        {
                          v46 = (SchedulerTaskBase_array *)iconRootObj;
                          iconRootObj = (UnityEngine_GameObject_o *)sub_1C37194(
                                                                      v42,
                                                                      iconRootObj->klass->_1.element_class);
                          if ( !iconRootObj )
                            goto LABEL_40;
                          if ( !LODWORD(v46->max_length) )
                            goto LABEL_39;
                          v46->m_Items[0] = (SchedulerTaskBase_o *)v42;
                          sub_1C36FFC((CGThumbnailListItem_o *)v46->m_Items, v42, v47, v48);
                          if ( v27 )
                          {
                            iconRootObj = (UnityEngine_GameObject_o *)sub_1C37194(v27, v46->obj.klass->_1.element_class);
                            if ( !iconRootObj )
                              goto LABEL_40;
                          }
                          if ( LODWORD(v46->max_length) <= 1 )
                            goto LABEL_39;
                          v46->m_Items[1] = v27;
                          sub_1C36FFC((CGThumbnailListItem_o *)&v46->m_Items[1], (int32_t)v27, v49, v50);
                          if ( v37 )
                          {
                            iconRootObj = (UnityEngine_GameObject_o *)sub_1C37194(v37, v46->obj.klass->_1.element_class);
                            if ( !iconRootObj )
                              goto LABEL_40;
                          }
                          if ( LODWORD(v46->max_length) <= 2 )
                            goto LABEL_39;
                          v46->m_Items[2] = v37;
                          sub_1C36FFC((CGThumbnailListItem_o *)&v46->m_Items[2], (int32_t)v37, v51, v52);
                          v53 = (SchedulerTaskParallel_o *)sub_1C372A4(SchedulerTaskParallel_TypeInfo);
                          SchedulerTaskParallel___ctor(v53, v46, 0);
                          iconRootObj = (UnityEngine_GameObject_o *)sub_1C37100(SchedulerTaskBase___TypeInfo, 2);
                          if ( iconRootObj )
                          {
                            v56 = iconRootObj;
                            if ( !v13
                              || (iconRootObj = (UnityEngine_GameObject_o *)sub_1C37194(
                                                                              v13,
                                                                              iconRootObj->klass->_1.element_class)) != 0 )
                            {
                              if ( !LODWORD(v56[1].klass) )
                                goto LABEL_39;
                              v56[1].monitor = v13;
                              sub_1C36FFC((CGThumbnailListItem_o *)&v56[1].monitor, (int32_t)v13, v54, v55);
                              if ( !v53
                                || (iconRootObj = (UnityEngine_GameObject_o *)sub_1C37194(
                                                                                v53,
                                                                                v56->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v56[1].klass) > 1 )
                                {
                                  v56[1].fields.m_CachedPtr = (intptr_t)v53;
                                  sub_1C36FFC((CGThumbnailListItem_o *)&v56[1].fields, (int32_t)v53, v57, v58);
                                  v9 = (SchedulerTaskOrthostichy_o *)sub_1C372A4(SchedulerTaskOrthostichy_TypeInfo);
                                  SchedulerTaskOrthostichy___ctor(v9, (SchedulerTaskBase_array *)v56, 0);
                                  return (SchedulerTaskBase_o *)v9;
                                }
LABEL_39:
                                sub_1C372BC(iconRootObj);
                              }
                            }
LABEL_40:
                            v60 = sub_1C372D8(iconRootObj);
                            sub_1C37180(v60, 0);
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
    sub_1C372B4(iconRootObj);
  }
  v9 = (SchedulerTaskOrthostichy_o *)sub_1C372A4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v9, 0.5, 0);
  return (SchedulerTaskBase_o *)v9;
}


SchedulerTaskBase_o *ClassBoardSelectViewManager__GetTaskOfFirstTransition(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  void *FirstTransitionAnimName; // x0
  System_String_o *v4; // x21
  ClassBoardSelectViewManager_o *Clip; // x0
  const MethodInfo *v6; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v9; // s8
  SchedulerTaskAnimation_o *v10; // x20
  __int64 v11; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  SchedulerTaskBase_TaskCallback_o *v14; // x21
  Il2CppObject *v15; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  SchedulerTaskBase_array *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  SchedulerTaskParallel_o *v24; // x19
  __int64 v26; // x0

  if ( (byte_4C46BD4 & 1) == 0 )
  {
    sub_1C37058(&SchedulerTaskAnimation_TypeInfo);
    sub_1C37058(&SchedulerTaskBase___TypeInfo);
    sub_1C37058(&SchedulerTaskParallel_TypeInfo);
    sub_1C37058(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C37058(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__);
    sub_1C37058(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_6596/*"FadeStart"*/);
    byte_4C46BD4 = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_18;
  v4 = (System_String_o *)FirstTransitionAnimName;
  Clip = (ClassBoardSelectViewManager_o *)UnityEngine_Animation__GetClip(
                                            this->fields.anim,
                                            (System_String_o *)FirstTransitionAnimName,
                                            0);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                Clip,
                (UnityEngine_AnimationClip_o *)Clip,
                (System_String_o *)StringLiteral_6596/*"FadeStart"*/,
                0.0,
                v6);
  anim = this->fields.anim;
  v9 = EventTime;
  v10 = (SchedulerTaskAnimation_o *)sub_1C372A4(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v10, anim, v4, 0, 0);
  v11 = sub_1C372A4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v11, v9, 0);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  v14 = *(SchedulerTaskBase_TaskCallback_o **)(*((_QWORD *)FirstTransitionAnimName + 23) + 40LL);
  if ( !v14 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 56) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName);
      FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)**((_QWORD **)FirstTransitionAnimName + 23);
    v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v14,
      v15,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__,
      0);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v14;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__34_0, (int32_t)v14, v17, v18);
  }
  if ( !v11
    || (*(_QWORD *)(v11 + 32) = v14,
        sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v14, v12, v13),
        (FirstTransitionAnimName = (void *)sub_1C37100(SchedulerTaskBase___TypeInfo, 2)) == 0) )
  {
LABEL_18:
    sub_1C372B4(FirstTransitionAnimName);
  }
  v21 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v10 )
  {
    FirstTransitionAnimName = (void *)sub_1C37194(v10, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !LODWORD(v21->max_length) )
    goto LABEL_19;
  v21->m_Items[0] = (SchedulerTaskBase_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)v21->m_Items, (int32_t)v10, v19, v20);
  FirstTransitionAnimName = (void *)sub_1C37194(v11, v21->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v26 = sub_1C372D8(FirstTransitionAnimName);
    sub_1C37180(v26, 0);
  }
  if ( LODWORD(v21->max_length) <= 1 )
LABEL_19:
    sub_1C372BC(FirstTransitionAnimName);
  v21->m_Items[1] = (SchedulerTaskBase_o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&v21->m_Items[1], v11, v22, v23);
  v24 = (SchedulerTaskParallel_o *)sub_1C372A4(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v24, v21, 0);
  return (SchedulerTaskBase_o *)v24;
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
  SchedulerTaskParallel_o *v9; // x19
  struct ClassBoardSelectIconComponent_o *v10; // x8
  struct ClassBoardSelectIconComponent_o *v11; // x8
  const MethodInfo *v12; // x1
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
  const MethodInfo *v31; // x3
  float DEFAULT_FADE_TIME; // s0
  System_Func_bool__o *v33; // x26
  __int64 v34; // x25
  SchedulerTaskBase_TaskCallback_o *v35; // x26
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x1
  struct ClassBoardSelectIconComponent_o *v39; // x8
  __int64 v40; // x19
  UnityEngine_Animation_o *v41; // x20
  SchedulerTaskAnimation_o *v42; // x24
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v53; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46BD7 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SchedulerTaskAnimation_TypeInfo);
    sub_1C37058(&SchedulerTaskBase___TypeInfo);
    sub_1C37058(&SchedulerTaskParallel_TypeInfo);
    sub_1C37058(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C37058(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C37058(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__0__);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__1__);
    sub_1C37058(&ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
    byte_4C46BD7 = 1;
  }
  v5 = sub_1C372A4(ClassBoardSelectViewManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  ClassBoardSelectViewManager__SetSelectedClassIcon(this, baseId, v6);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  iconRootObj = UnityEngine_Object__op_Equality(selectedClassIcon, 0, 0);
  if ( (iconRootObj & 1) == 0 )
  {
    v10 = this->fields.selectedClassIcon;
    if ( !v10 )
      goto LABEL_36;
    iconRootObj = (__int64)v10->fields.iconRootObj;
    if ( !iconRootObj )
      goto LABEL_36;
    iconRootObj = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconRootObj, 0);
    if ( !iconRootObj )
      goto LABEL_36;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconRootObj, 0);
    v11 = this->fields.selectedClassIcon;
    this->fields.selectedClassIconBasePos = localPosition;
    if ( !v11 )
      goto LABEL_36;
    iconRootObj = (__int64)v11->fields.classIconUi;
    if ( !iconRootObj )
      goto LABEL_36;
    UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 176) + 1, 0);
    iconRootObj = (__int64)this->fields.selectedClassIcon;
    if ( !iconRootObj )
      goto LABEL_36;
    iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                             (ClassBoardSelectIconComponent_o *)iconRootObj,
                             v12);
    v13 = this->fields.selectedClassIcon;
    if ( !v13 )
      goto LABEL_36;
    v14 = (System_String_o *)iconRootObj;
    iconRootObj = (__int64)v13->fields.anim;
    if ( !iconRootObj )
      goto LABEL_36;
    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v14, 0);
    v16 = sub_1C372A4(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    ClassBoardSelectIconComponent_AnimClipInfo___ctor((ClassBoardSelectIconComponent_AnimClipInfo_o *)v16, Clip, v17);
    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v18);
    if ( !v16 )
      goto LABEL_36;
    v19 = *(float *)(v16 + 28);
    anim = this->fields.anim;
    v21 = (System_String_o *)iconRootObj;
    v22 = (SchedulerTaskAnimation_o *)sub_1C372A4(SchedulerTaskAnimation_TypeInfo);
    SchedulerTaskAnimation___ctor(v22, anim, v21, 0, 0);
    v24 = ClassBoardSelectViewManager__DelayAttachedTask(v19, (SchedulerTaskBase_o *)v22, v23);
    v25 = *(float *)(v16 + 44);
    v26 = v24;
    v27 = sub_1C372A4(SchedulerTaskWaitTime_TypeInfo);
    SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v27, v25, 0);
    v28 = (Il2CppObject *)this->fields.selectedClassIcon;
    v29 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(v29, v28, Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, 0);
    if ( !v27 )
      goto LABEL_36;
    *(_QWORD *)(v27 + 32) = v29;
    sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v29, v30, v31);
    iconRootObj = (__int64)AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v5 )
      goto LABEL_36;
    DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
    *(_BYTE *)(v5 + 16) = 1;
    *(float *)(v5 + 20) = DEFAULT_FADE_TIME;
    v33 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v33,
      (Il2CppObject *)v5,
      Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__0__,
      0);
    v34 = sub_1C372A4(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v34, v33, 0);
    v35 = (SchedulerTaskBase_TaskCallback_o *)sub_1C372A4(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v35,
      (Il2CppObject *)v5,
      Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__1__,
      0);
    if ( !v34 )
      goto LABEL_36;
    *(_QWORD *)(v34 + 24) = v35;
    sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 24), (int32_t)v35, v36, v37);
    iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                             *(float *)(v16 + 24),
                             (SchedulerTaskBase_o *)v34,
                             v38);
    v39 = this->fields.selectedClassIcon;
    if ( !v39
      || (v40 = iconRootObj,
          v41 = v39->fields.anim,
          v42 = (SchedulerTaskAnimation_o *)sub_1C372A4(SchedulerTaskAnimation_TypeInfo),
          SchedulerTaskAnimation___ctor(v42, v41, v14, 0, 0),
          (iconRootObj = sub_1C37100(SchedulerTaskBase___TypeInfo, 4)) == 0) )
    {
LABEL_36:
      sub_1C372B4(iconRootObj);
    }
    v45 = iconRootObj;
    if ( !v42 || (iconRootObj = sub_1C37194(v42, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v45 + 24) )
        goto LABEL_37;
      *(_QWORD *)(v45 + 32) = v42;
      sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 32), (int32_t)v42, v43, v44);
      if ( !v26 || (iconRootObj = sub_1C37194(v26, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v45 + 24) <= 1u )
          goto LABEL_37;
        *(_QWORD *)(v45 + 40) = v26;
        sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 40), (int32_t)v26, v46, v47);
        iconRootObj = sub_1C37194(v27, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
        if ( iconRootObj )
        {
          if ( *(_DWORD *)(v45 + 24) <= 2u )
            goto LABEL_37;
          *(_QWORD *)(v45 + 48) = v27;
          sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 48), v27, v48, v49);
          if ( !v40 || (iconRootObj = sub_1C37194(v40, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v45 + 24) > 3u )
            {
              *(_QWORD *)(v45 + 56) = v40;
              sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 56), v40, v50, v51);
              v9 = (SchedulerTaskParallel_o *)sub_1C372A4(SchedulerTaskParallel_TypeInfo);
              SchedulerTaskParallel___ctor(v9, (SchedulerTaskBase_array *)v45, 0);
              return (SchedulerTaskBase_o *)v9;
            }
LABEL_37:
            sub_1C372BC(iconRootObj);
          }
        }
      }
    }
    v53 = sub_1C372D8(iconRootObj);
    sub_1C37180(v53, 0);
  }
  v9 = (SchedulerTaskParallel_o *)sub_1C372A4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v9, 0.5, 0);
  return (SchedulerTaskBase_o *)v9;
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
        sub_1C372BC(this);
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1C372B4(this);
  }
}


void ClassBoardSelectViewManager__Init(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  System_Object_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Master_object; // x0
  Il2CppObject *Entity; // x0
  System_String_o *monitor; // x19

  if ( (byte_4C46BCD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C46BCD = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v4 = System_Linq_Enumerable__ToArray_object_(
         v3,
         (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.animationStateArray, (int32_t)v4, v5, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.bgmId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
  if ( Entity )
  {
    monitor = (System_String_o *)Entity[1].monitor;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(monitor, 0);
  }
}


void ClassBoardSelectViewManager__OnClickBack(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *SceneName; // x21
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4C46BDD & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&SceneList_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C46BDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0);
  v4 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_41479032(v4, SceneName, 0);
  if ( !Instance )
    sub_1C372B4(v5);
  AvalonSceneManager__transitionScene_41158300((AvalonSceneManager_o *)Instance, 32, 0, 1, (Il2CppObject *)v4, 0);
}


void ClassBoardSelectViewManager__OnClickIcon(
        ClassBoardSelectViewManager_o *this,
        ClassBoardSelectIconComponent_o *icon,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  void *IsOpen; // x0
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  struct System_Action_int__int__o *onSelectClassBoard; // x8
  struct ClassBoardBaseEntity_o *v10; // x9
  Il2CppObject *Instance; // x0
  struct ClassBoardBaseEntity_o *v12; // x9
  CommonUI_o *v13; // x20
  System_String_o *closedMessage; // x19
  System_String_o *v15; // x19
  CommonUI_o *v16; // x20
  ClassBoardSelectViewManager___c_c *v17; // x8
  System_Action_o *_9__33_1; // x22
  System_String_o *v19; // x21
  Il2CppObject *v20; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x21
  System_Action_o *v25; // x22
  Il2CppObject *v26; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4C46BD3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__);
    sub_1C37058(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_3368/*"CLASS_BOARD_BASE_UNRELEASED"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46BD3 = 1;
  }
  v5 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
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
        v10 = icon->fields._Entity_k__BackingField;
        if ( v10 )
        {
          ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))onSelectClassBoard->fields.invoke_impl)(
            onSelectClassBoard->fields.method_code,
            (unsigned int)v10->fields.id,
            (unsigned int)v10->fields.iconId,
            onSelectClassBoard->fields.method);
          return;
        }
LABEL_34:
        sub_1C372B4(IsOpen);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = icon->fields._Entity_k__BackingField;
      v13 = (CommonUI_o *)Instance;
      if ( v12 )
        closedMessage = v12->fields.closedMessage;
      else
        closedMessage = 0;
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
        IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v25 = *(System_Action_o **)(*((_QWORD *)IsOpen + 23) + 32LL);
      if ( !v25 )
      {
        if ( !*((_DWORD *)IsOpen + 56) )
        {
          j_il2cpp_runtime_class_init_0(IsOpen);
          IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
        }
        v26 = (Il2CppObject *)**((_QWORD **)IsOpen + 23);
        v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v25, v26, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, 0);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        static_fields->__9__33_0 = v25;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)v25, v28, v29);
      }
      if ( !v13 )
        goto LABEL_34;
      CommonUI__OpenNotificationDialog(v13, v24, closedMessage, v25, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3368/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0);
    IsOpen = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (CommonUI_o *)IsOpen;
    v17 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v17 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    _9__33_1 = v17->static_fields->__9__33_1;
    v19 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__33_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__33_1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(_9__33_1, v20, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, 0);
      v21 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v21->__9__33_1 = _9__33_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v21->__9__33_1, (int32_t)_9__33_1, v22, v23);
    }
    if ( !v16 )
      goto LABEL_34;
    CommonUI__OpenNotificationDialog(v16, v19, v15, _9__33_1, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
  }
}


void ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C46BD1 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__);
    byte_4C46BD1 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x19

  if ( (byte_4C46BD2 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__);
    sub_1C37058(&ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
    byte_4C46BD2 = 1;
  }
  v5 = sub_1C372A4(ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)finishCallback, v9, v10);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__,
    0);
  EventTutorialMaster__CheckTutorial(0, 81, v11, 0, 0, 0, 0, 0);
}


void ClassBoardSelectViewManager__PlayStartAction(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  char *Instance; // x0
  System_Action_o *v5; // x20
  __int64 v6; // x21
  System_Action_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ActionChain_o *v10; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_array *v13; // x21

  if ( (byte_4C46BD0 & 1) == 0 )
  {
    sub_1C37058(&ActionChain_TypeInfo);
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1C37058(&Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C46BD0 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v3);
  Instance = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, 0);
  v6 = sub_1C37100(System_Action_Action____TypeInfo, 1);
  v7 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0);
  if ( !v6 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v6 + 32) = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v7, v8, v9);
  v10 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
  ActionChain___ctor_49040972(v10, (System_Action_Action__array *)v6, 0);
  Instance = (char *)sub_1C37100(System_Action___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_11;
  v13 = (System_Action_array *)Instance;
  if ( !*((_DWORD *)Instance + 6) )
LABEL_12:
    sub_1C372BC(Instance);
  *((_QWORD *)Instance + 4) = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)(Instance + 32), (int32_t)v5, v11, v12);
  if ( !v10 || (Instance = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v10, v13, 0)) == 0 )
LABEL_11:
    sub_1C372B4(Instance);
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
}


void ClassBoardSelectViewManager__Resume(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        const MethodInfo *method)
{
  __int64 v4; // x0

  ClassBoardSelectViewManager__SetUpHeaderItemList(this, (const MethodInfo *)classBoardBackground);
  if ( !classBoardBackground )
    sub_1C372B4(v4);
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
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x20
  System_Func_object__bool__o *v8; // x22
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C46BDA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    sub_1C37058(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass40_0__SetSelectedClassIcon_b__0__);
    sub_1C37058(&ClassBoardSelectViewManager___c__DisplayClass40_0_TypeInfo);
    byte_4C46BDA = 1;
  }
  v5 = sub_1C372A4(ClassBoardSelectViewManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass40_0__SetSelectedClassIcon_b__0__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
         iconArray,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  this->fields.selectedClassIcon = (struct ClassBoardSelectIconComponent_o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectedClassIcon, (int32_t)v9, v10, v11);
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
  if ( (byte_4C46BDC & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    byte_4C46BDC = 1;
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
    v9 = sub_1C87870(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(
                                            resourceCatalog,
                                            *(_QWORD *)(v9 + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_1C372B4(this);
  ClassBoardUIController__SetItemList(
    classBoardUIController_k__BackingField,
    headerDlspItemIdArray,
    (AtlasManagerUnit_o *)this[1].fields.m_CancellationTokenSource,
    0,
    v10);
}


void ClassBoardSelectViewManager__SetupClassBoardUIController(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  int *p_offset; // x10
  __int64 v7; // x0
  Il2CppObject *v8; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  Il2CppObject *v10; // x0
  ClassBoardSelectViewManager_o **p_classBoardUIController_k__BackingField; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  System_Action_o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CGThumbnailListItem_o *v19; // x21
  System_Action_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  struct IClassBoardResourceCatalog_o *v27; // x21
  IClassBoardResourceCatalog_c *v28; // x8
  ClassBoardUIController_o *v29; // x20
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  struct IClassBoardResourceCatalog_o *v35; // x20
  IClassBoardResourceCatalog_c *v36; // x8
  ClassBoardUIController_o *v37; // x19
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  AtlasManagerUnit_o *m_CancellationTokenSource; // x20
  const MethodInfo *v42; // x5

  v2 = this;
  if ( (byte_4C46BDB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager_OnClickBack__);
    sub_1C37058(&Method_ClassBoardSelectViewManager_OpenHelp__);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_20633/*"img_txt_classscore_main"*/);
    this = (ClassBoardSelectViewManager_o *)sub_1C37058(&StringLiteral_3424/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/);
    byte_4C46BDB = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_41;
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
    v7 = sub_1C87870(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(
                                            resourceCatalog,
                                            *(_QWORD *)(v7 + 8));
  if ( !this )
    goto LABEL_41;
  v8 = *(Il2CppObject **)&this->fields.selectedClassIconBasePos.fields.z;
  uiRoot = v2->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__51855596(
          v8,
          uiRoot,
          (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v2->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v10;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v2->fields._classBoardUIController_k__BackingField;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._classBoardUIController_k__BackingField, (int32_t)v10, v12, v13);
  this = (ClassBoardSelectViewManager_o *)v2->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_41;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, v14);
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OnClickBack__, 0);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_41;
  classBoardUIController_k__BackingField->fields.onClickBack = v16;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (int32_t)v16,
    v17,
    v18);
  v19 = (CGThumbnailListItem_o *)v2->fields._classBoardUIController_k__BackingField;
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OpenHelp__, 0);
  if ( !v19 )
    goto LABEL_41;
  v19[1].klass = (CGThumbnailListItem_c *)v20;
  sub_1C36FFC(v19 + 1, (int32_t)v20, v21, v22);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_41;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, v23);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_41;
  ClassBoardUIController__ActivateGrandScoreButton((ClassBoardUIController_o *)this, 0, v24);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_41;
  ClassBoardUIController__ActivateClassBoardResetButton((ClassBoardUIController_o *)this, 0, v25);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_41;
  ClassBoardUIController__ActivateToGrandServantListButton((ClassBoardUIController_o *)this, 0, v26);
  v27 = v2->fields.resourceCatalog;
  if ( !v27 )
    goto LABEL_41;
  v28 = v27->klass;
  v29 = v2->fields._classBoardUIController_k__BackingField;
  v30 = *(unsigned __int16 *)&v27->klass->_2.rank;
  if ( *(_WORD *)&v27->klass->_2.rank )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v31 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_25;
    }
    v32 = (__int64)&v28->vtable[*v31];
  }
  else
  {
LABEL_25:
    v32 = sub_1C87870(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v32)(
                                            v27,
                                            *(_QWORD *)(v32 + 8));
  if ( !this )
    goto LABEL_41;
  if ( !v29 )
    goto LABEL_41;
  ClassBoardUIController__SetHeaderTitle(
    v29,
    (AtlasManagerUnit_o *)this[1].fields.m_CancellationTokenSource,
    (System_String_o *)StringLiteral_20633/*"img_txt_classscore_main"*/,
    v33);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v2, v34);
  v35 = v2->fields.resourceCatalog;
  if ( !v35 )
    goto LABEL_41;
  v36 = v35->klass;
  v37 = v2->fields._classBoardUIController_k__BackingField;
  v38 = *(unsigned __int16 *)&v35->klass->_2.rank;
  if ( *(_WORD *)&v35->klass->_2.rank )
  {
    v39 = &v36->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v39 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_34;
    }
    v40 = (__int64)&v36->vtable[*v39];
  }
  else
  {
LABEL_34:
    v40 = sub_1C87870(v35, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v40)(
                                            v35,
                                            *(_QWORD *)(v40 + 8));
  if ( !this )
    goto LABEL_41;
  m_CancellationTokenSource = (AtlasManagerUnit_o *)this[1].fields.m_CancellationTokenSource;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3424/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0);
  if ( !v37 )
LABEL_41:
    sub_1C372B4(this);
  ClassBoardUIController__SetHeaderMessage(v37, m_CancellationTokenSource, (System_String_o *)this, 0, 0, v42);
}


void ClassBoardSelectViewManager__StartUp(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        IClassBoardResourceCatalog_o *resourceCatalog,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ClassBoardResourceCatalogAssetBundle_o **v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct IClassBoardResourceCatalog_o *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Action_o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  ClassBoardResourceCatalogAssetBundle_o *v27; // x20
  __int64 naturalAligment; // x10
  System_Action_o *v29; // x21

  if ( (byte_4C46BCE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__);
    sub_1C37058(&ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
    byte_4C46BCE = 1;
  }
  v9 = sub_1C372A4(ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 16) = classBoardBackground;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)classBoardBackground, v11, v12);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v13, v14);
  *(_QWORD *)(v9 + 32) = resourceCatalog;
  v15 = (ClassBoardResourceCatalogAssetBundle_o **)(v9 + 32);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)resourceCatalog, v16, v17);
  *(_QWORD *)(v9 + 40) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)finishCallback, v18, v19);
  v20 = *(struct IClassBoardResourceCatalog_o **)(v9 + 32);
  this->fields.resourceCatalog = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resourceCatalog, (int32_t)v20, v21, v22);
  v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__,
    0);
  *(_QWORD *)(v9 + 48) = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)v23, v24, v25);
  if ( !ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v26)
    && (v27 = *v15) != 0
    && (naturalAligment = ClassBoardResourceCatalogAssetBundle_TypeInfo->_2.naturalAligment,
        v27->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (ClassBoardResourceCatalogAssetBundle_c *)v27->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v9,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__,
      0);
    ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v27, v29, 0);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0);
  }
}


void ClassBoardSelectViewManager__UpdateClassBoardSelectIcon(
        ClassBoardSelectViewManager_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  System_Func_object__bool__o *v8; // x20
  Il2CppObject *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4C46BE0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    sub_1C37058(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass46_0__UpdateClassBoardSelectIcon_b__0__);
    sub_1C37058(&ClassBoardSelectViewManager___c__DisplayClass46_0_TypeInfo);
    byte_4C46BE0 = 1;
  }
  v5 = sub_1C372A4(ClassBoardSelectViewManager___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v8,
      (Il2CppObject *)v5,
      Method_ClassBoardSelectViewManager___c__DisplayClass46_0__UpdateClassBoardSelectIcon_b__0__,
      0);
    v9 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
           iconArray,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    if ( v9 )
      ClassBoardSelectIconComponent__UpdateUI((ClassBoardSelectIconComponent_o *)v9, v10);
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
        sub_1C372BC(this);
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
    sub_1C372B4(this);
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
  if ( (byte_4C46BCF & 1) == 0 )
  {
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardSelectViewManager_o *)sub_1C37058(&StringLiteral_20633/*"img_txt_classscore_main"*/);
    byte_4C46BCF = 1;
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
    v7 = sub_1C87870(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(
                                            resourceCatalog,
                                            *(_QWORD *)(v7 + 8));
  if ( !this || (this = (ClassBoardSelectViewManager_o *)this[1].fields.m_CancellationTokenSource) == 0 )
LABEL_13:
    sub_1C372B4(this);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_20633/*"img_txt_classscore_main"*/, 0);
}


void ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardSelectViewManager___OpenHelp_b__31_0(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C46BE2 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    byte_4C46BE2 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
}


void ClassBoardSelectViewManager___PlayStartAction_b__30_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C46BE1 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C46BE1 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
  const MethodInfo *v3; // x3

  this->fields._classBoardUIController_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ClassBoardSelectViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46BE3 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4C46BE3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardSelectViewManager___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0);
}


bool ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__44_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, (const MethodInfo *)x);
}


void ClassBoardSelectViewManager___c___GetSkipTaskOfFirstTransition_b__35_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v3; // x19

  if ( (byte_4C46BE5 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46BE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v3 )
    sub_1C372B4(Instance);
  CommonUI__maskFadein(v3, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__34_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v3; // x19

  if ( (byte_4C46BE4 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46BE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v3 )
    sub_1C372B4(Instance);
  CommonUI__maskFadein(v3, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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
    sub_1C372B4(this);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_36134400(gameObject, 0.0, 0);
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
    sub_1C372B4(this);
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
  const MethodInfo *v10; // x3
  struct ClassBoardSelectViewManager_o *v11; // x8
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  ClassBoardSelectViewManager___c_c *v13; // x0
  System_Action_object__o *_9__27_2; // x21
  Il2CppObject *v15; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct ClassBoardSelectViewManager_o *v19; // x20
  const MethodInfo *v20; // x1
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t monitor; // w8

  if ( (byte_4C46BE6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
    sub_1C37058(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__);
    sub_1C37058(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4C46BE6 = 1;
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
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_1C372A4(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  BasicHelper__ForEach_object_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_25;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)v11->fields.iconArray;
  v13 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v13 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__27_2 = (System_Action_object__o *)v13->static_fields->__9__27_2;
  if ( !_9__27_2 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__27_2 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(_9__27_2, v15, Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, 0);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__27_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__27_2, (int32_t)_9__27_2, v17, v18);
  }
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)_9__27_2,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_object_(
                                                     (System_Object_array *)v19->fields.iconArray,
                                                     0,
                                                     0,
                                                     (const MethodInfo_30D61F8 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
  v19->fields.iconDefaultDepth = monitor;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_25:
    sub_1C372B4(classBoardBackground);
  ClassBoardSelectViewManager__SetupClassBoardUIController((ClassBoardSelectViewManager_o *)classBoardBackground, v20);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C46BE7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_1C37058(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    byte_4C46BE7 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v7 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_object____ctor(v7, _4__this, (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__, 0);
  if ( !x )
    sub_1C372B4(v8);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v7, v9);
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
  if ( (byte_4C46BE8 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass27_0_o *)sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    byte_4C46BE8 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    sub_1C372B4(this);
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
    v7 = sub_1C87870(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
  if ( (byte_4C46BE9 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)sub_1C37058(&Method_ActionExtensions_Call_bool___);
    byte_4C46BE9 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
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

  if ( (byte_4C46BEA & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46BEA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
    sub_1C372B4(this);
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
  System_Action_o *_9__2; // x21
  CommonUI_o *v5; // x20
  float fadeTime; // s8
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C46BEB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__2__);
    byte_4C46BEB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass37_0__GetTaskOfGoingToClassBoard_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
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
    sub_1C372B4(this);
  return Entity_k__BackingField->fields.id == this->fields.baseId;
}


void ClassBoardSelectViewManager___c__DisplayClass45_0___ctor(
        ClassBoardSelectViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardSelectViewManager___c__DisplayClass45_0___GetPlayClassBoardReleaseEffect_b__0(
        ClassBoardSelectViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectIconComponent_o *iconComponent; // x0

  iconComponent = this->fields.iconComponent;
  if ( !iconComponent )
    sub_1C372B4(0);
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
    sub_1C372B4(this);
  return x->fields.baseId == this->fields.baseId;
}