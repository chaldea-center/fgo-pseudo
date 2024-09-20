void __fastcall ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
  SchedulerTaskWaitTime_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  SchedulerTaskBase_array *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  SchedulerTaskOrthostichy_o *v13; // x19
  __int64 v15; // x0

  if ( (byte_4A5E65E & 1) == 0 )
  {
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    byte_4A5E65E = 1;
  }
  v5 = (SchedulerTaskWaitTime_o *)sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v5, delay, 0LL);
  v6 = sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v6 )
    sub_1B8880C(0LL, v7);
  v10 = (SchedulerTaskBase_array *)v6;
  if ( v5 )
  {
    v6 = sub_1B886EC(v5, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !v10->max_length )
    goto LABEL_11;
  v10->m_Items[0] = (SchedulerTaskBase_o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v10->m_Items, (int32_t)v5, v8, v9);
  if ( task )
  {
    v6 = sub_1B886EC(task, v10->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_12:
      v15 = sub_1B88830(v6);
      sub_1B886D8(v15, 0LL);
    }
  }
  if ( v10->max_length <= 1 )
LABEL_11:
    sub_1B88814(v6, v7);
  v10->m_Items[1] = task;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[1], (int32_t)task, v11, v12);
  v13 = (SchedulerTaskOrthostichy_o *)sub_1B887FC(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v13, v10, 0LL);
  return (SchedulerTaskBase_o *)v13;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4A5E650 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4A5E650 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0LL);
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
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4A5E651 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4A5E651 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               2,
               0LL,
               (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectViewManager___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Action_object__o *_9__24_0; // x22
  Il2CppObject *v17; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Object_array *v21; // x19
  System_Func_object__bool__o *v22; // x21
  Il2CppObject *object; // x0

  if ( (byte_4A5E652 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AnimationEvent__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Find_AnimationEvent___);
    sub_1B885B0(&Method_BasicHelper_ForEach_AnimationEvent___);
    sub_1B885B0(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__);
    sub_1B885B0(&ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1B885B0(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4A5E652 = 1;
  }
  v8 = sub_1B887FC(ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = eventName,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)eventName, v11, v12),
        !animClip) )
  {
    sub_1B8880C(v9, v10);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v14 = ClassBoardSelectViewManager___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v14 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__24_0 = (System_Action_object__o *)v14->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__24_0 = (System_Action_object__o *)sub_1B887FC(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(_9__24_0, v17, Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Action_AnimationEvent__o *)_9__24_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v19, v20);
  }
  BasicHelper__ForEach_object_(
    v15,
    (System_Action_T__o *)_9__24_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v15, 0LL);
  v21 = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v22 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__,
    0LL);
  object = BasicHelper__Find_object_(
             v21,
             (System_Func_T__bool__o *)v22,
             (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_AnimationEvent___);
  if ( object )
    return UnityEngine_AnimationEvent__get_time((UnityEngine_AnimationEvent_o *)object, 0LL);
  else
    return defaultValue;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetFirstTransitionAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4A5E64F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4A5E64F = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v4, 0LL);
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
  const MethodInfo *v11; // x2

  if ( (byte_4A5E65D & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E65D = 1;
  }
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v10 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1B887FC(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v10, Clip, v11),
          !v10) )
    {
      sub_1B8880C(ClassBoardEnterAnimName, v5);
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
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t current; // w1
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  UnityEngine_AnimationState_o *v15; // x0
  System_String_o *name; // x0
  System_String_o *v17; // x22
  UnityEngine_Animation_o *v18; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  ClassBoardSelectIconComponent_AnimClipInfo_o *v20; // x0
  const MethodInfo *v21; // x2
  __int64 v22; // x0
  __int64 v23; // x1
  UnityEngine_Animation_o *v24; // x23
  __int64 v25; // x21
  SchedulerTaskBase_TaskCallback_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5E663 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&SchedulerTaskAnimation_TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__);
    sub_1B885B0(&ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo);
    byte_4A5E663 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( iconCompoentList )
  {
    if ( iconCompoentList->fields._size )
    {
      v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v4,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_object__o *)iconCompoentList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v41 = v40;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v5 = sub_1B887FC(ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v5, 0LL);
        if ( !v5 )
          sub_1B8880C(v6, v7);
        current = (int32_t)v41.fields._current;
        *(_QWORD *)(v5 + 16) = v41.fields._current;
        v11 = v5 + 16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), current, v8, v9);
        v14 = *(_QWORD *)(v5 + 16);
        if ( !v14 )
          sub_1B8880C(v12, v13);
        v15 = *(UnityEngine_AnimationState_o **)(v14 + 136);
        if ( v15 )
        {
          name = UnityEngine_AnimationState__get_name(v15, 0LL);
          v14 = *(_QWORD *)v11;
          if ( !*(_QWORD *)v11 )
            sub_1B8880C(name, v13);
          v17 = name;
        }
        else
        {
          v17 = 0LL;
        }
        v18 = *(UnityEngine_Animation_o **)(v14 + 88);
        if ( !v18 )
          sub_1B8880C(0LL, v13);
        Clip = UnityEngine_Animation__GetClip(v18, v17, 0LL);
        v20 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1B887FC(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v20, Clip, v21);
        if ( !*(_QWORD *)v11 )
          sub_1B8880C(v22, v23);
        v24 = *(UnityEngine_Animation_o **)(*(_QWORD *)v11 + 88LL);
        v25 = sub_1B887FC(SchedulerTaskAnimation_TypeInfo);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v25, v24, v17, 0LL);
        v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v26,
          (Il2CppObject *)v5,
          Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v25 )
          sub_1B8880C(v27, v28);
        *(_QWORD *)(v25 + 32) = v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v26, v29, v30);
        if ( !v4 )
          sub_1B8880C(v31, v32);
        items = v4->fields._items;
        v36 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1B8880C(v31, v32);
        size = v4->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            (Il2CppObject *)v25,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v25;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), v25, v33, v34);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      iconCompoentList = (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor_41265996(
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
  System_Func_object__bool__o *_9__42_0; // x20
  Il2CppObject *v6; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_Generic_List_object__o *v12; // x19

  if ( (byte_4A5E662 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    sub_1B885B0(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__);
    sub_1B885B0(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4A5E662 = 1;
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
    _9__42_0 = (System_Func_object__bool__o *)v4->static_fields->__9__42_0;
    if ( !_9__42_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__42_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__42_0,
        v6,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__,
        0LL);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      static_fields->__9__42_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__42_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v8, v9);
    }
    v10 = System_Linq_Enumerable__Where_object_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__42_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v10,
                                                                                 (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v12;
  }
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *iconRootObj; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Object_o *selectedClassIcon; // x21
  SchedulerTaskParallel_o *v9; // x20
  struct ClassBoardSelectIconComponent_o *v10; // x8
  struct ClassBoardSelectIconComponent_o *v11; // x8
  System_String_o *v12; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v14; // x23
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  float v17; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v19; // x21
  SchedulerTaskAnimation_o *v20; // x25
  const MethodInfo *v21; // x1
  SchedulerTaskBase_o *v22; // x21
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v25; // x24
  SchedulerTaskBase_TaskCallback_o *v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1
  SchedulerTaskBase_o *v30; // x0
  struct ClassBoardSelectIconComponent_o *v31; // x1
  SchedulerTaskBase_o *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  struct ClassBoardSelectIconComponent_o *v35; // x8
  UnityEngine_Animation_o *v36; // x19
  __int64 v37; // x24
  SchedulerTaskBase_TaskCallback_o *v38; // x19
  int32_t v39; // w2
  int32_t v40; // w3
  UnityEngine_GameObject_o *v41; // x19
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v51; // x0

  if ( (byte_4A5E65B & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SchedulerTaskAnimation_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__);
    sub_1B885B0(&ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo);
    byte_4A5E65B = 1;
  }
  v3 = sub_1B887FC(ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_31;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( ((unsigned __int8)iconRootObj & 1) == 0 )
  {
    v10 = this->fields.selectedClassIcon;
    if ( v10 )
    {
      iconRootObj = v10->fields.iconRootObj;
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
            v11 = this->fields.selectedClassIcon;
            if ( v11 )
            {
              v12 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v11->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v12, 0LL);
                v14 = sub_1B887FC(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v14,
                  Clip,
                  v15);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v16);
                if ( v14 )
                {
                  v17 = *(float *)(v14 + 28);
                  anim = this->fields.anim;
                  v19 = (System_String_o *)iconRootObj;
                  v20 = (SchedulerTaskAnimation_o *)sub_1B887FC(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v20, anim, v19, 0LL);
                  v22 = ClassBoardSelectViewManager__DelayAttachedTask(v17, (SchedulerTaskBase_o *)v20, v21);
                  v23 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v23 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v3 + 16) = DEFAULT_FADE_TIME;
                  v25 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v25, DEFAULT_FADE_TIME, 0LL);
                  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v26,
                    (Il2CppObject *)v3,
                    Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v25 )
                  {
                    *(_QWORD *)(v25 + 24) = v26;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)v26, v27, v28);
                    v30 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v14 + 24),
                            (SchedulerTaskBase_o *)v25,
                            v29);
                    v31 = this->fields.selectedClassIcon;
                    v32 = v30;
                    *(_QWORD *)(v3 + 24) = v31;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)v31, v33, v34);
                    v35 = this->fields.selectedClassIcon;
                    if ( v35 )
                    {
                      v36 = v35->fields.anim;
                      v37 = sub_1B887FC(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v37, v36, v12, 0LL);
                      v38 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v38,
                        (Il2CppObject *)v3,
                        Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v37 )
                      {
                        *(_QWORD *)(v37 + 32) = v38;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v38, v39, v40);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v41 = iconRootObj;
                          v42 = sub_1B886EC(v37, iconRootObj->klass->_1.element_class);
                          if ( v42 )
                          {
                            if ( !LODWORD(v41[1].klass) )
                              goto LABEL_32;
                            v41[1].monitor = (void *)v37;
                            sub_1B88554((ServantStatusBattleListViewItem_o *)&v41[1].monitor, v37, v44, v45);
                            if ( !v22 || (v42 = sub_1B886EC(v22, v41->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v41[1].klass) <= 1 )
                                goto LABEL_32;
                              *(_QWORD *)&v41[1].fields.m_CachedPtr = v22;
                              sub_1B88554((ServantStatusBattleListViewItem_o *)&v41[1].fields, (int32_t)v22, v46, v47);
                              if ( !v32 || (v42 = sub_1B886EC(v32, v41->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v41[1].klass) > 2 )
                                {
                                  v41[2].klass = (UnityEngine_GameObject_c *)v32;
                                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v41[2], (int32_t)v32, v48, v49);
                                  v9 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
                                  SchedulerTaskParallel___ctor(v9, (SchedulerTaskBase_array *)v41, 0LL);
                                  return (SchedulerTaskBase_o *)v9;
                                }
LABEL_32:
                                sub_1B88814(v42, v43);
                              }
                            }
                          }
                          v51 = sub_1B88830(v42);
                          sub_1B886D8(v51, 0LL);
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
    sub_1B8880C(iconRootObj, v5);
  }
  v9 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v9, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v9;
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfFirstTransition(
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
  SchedulerTaskBase_TaskCallback_o *v15; // x21
  Il2CppObject *v16; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  SchedulerTaskBase_array *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  SchedulerTaskParallel_o *v25; // x19
  __int64 v27; // x0

  if ( (byte_4A5E65A & 1) == 0 )
  {
    sub_1B885B0(&SchedulerTaskAnimation_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__);
    sub_1B885B0(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_6561/*"FadeStart"*/);
    byte_4A5E65A = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_18;
  v5 = (System_String_o *)FirstTransitionAnimName;
  Clip = (ClassBoardSelectViewManager_o *)UnityEngine_Animation__GetClip(
                                            this->fields.anim,
                                            (System_String_o *)FirstTransitionAnimName,
                                            0LL);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                Clip,
                (UnityEngine_AnimationClip_o *)Clip,
                (System_String_o *)StringLiteral_6561/*"FadeStart"*/,
                0.0,
                v7);
  anim = this->fields.anim;
  v10 = EventTime;
  v11 = (SchedulerTaskAnimation_o *)sub_1B887FC(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v11, anim, v5, 0LL);
  v12 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v12, v10, 0LL);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  v15 = *(SchedulerTaskBase_TaskCallback_o **)(*((_QWORD *)FirstTransitionAnimName + 23) + 40LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 56) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName);
      FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)FirstTransitionAnimName + 23);
    v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v15,
      v16,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__,
      0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v15, v18, v19);
  }
  if ( !v12
    || (*(_QWORD *)(v12 + 32) = v15,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)v15, v13, v14),
        (FirstTransitionAnimName = (void *)sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(FirstTransitionAnimName, v4);
  }
  v22 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v11 )
  {
    FirstTransitionAnimName = (void *)sub_1B886EC(v11, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !v22->max_length )
    goto LABEL_19;
  v22->m_Items[0] = (SchedulerTaskBase_o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v22->m_Items, (int32_t)v11, v20, v21);
  FirstTransitionAnimName = (void *)sub_1B886EC(v12, v22->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v27 = sub_1B88830(FirstTransitionAnimName);
    sub_1B886D8(v27, 0LL);
  }
  if ( v22->max_length <= 1 )
LABEL_19:
    sub_1B88814(FirstTransitionAnimName, v4);
  v22->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->m_Items[1], v12, v23, v24);
  v25 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v25, v22, 0LL);
  return (SchedulerTaskBase_o *)v25;
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
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *v10; // x0
  struct ClassBoardSelectIconComponent_o **p_selectedClassIcon; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *selectedClassIcon; // x22
  SchedulerTaskParallel_o *v15; // x19
  struct ClassBoardSelectIconComponent_o *v16; // x8
  System_String_o *v17; // x24
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v19; // x25
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  float v22; // s8
  UnityEngine_Animation_o *anim; // x23
  System_String_o *v24; // x22
  SchedulerTaskAnimation_o *v25; // x26
  const MethodInfo *v26; // x1
  SchedulerTaskBase_o *v27; // x0
  float v28; // s8
  SchedulerTaskBase_o *v29; // x23
  __int64 v30; // x22
  Il2CppObject *v31; // x26
  SchedulerTaskBase_TaskCallback_o *v32; // x19
  int32_t v33; // w2
  int32_t v34; // w3
  AvalonSceneManager_c *v35; // x0
  float DEFAULT_FADE_TIME; // s0
  System_Func_bool__o *v37; // x26
  __int64 v38; // x19
  SchedulerTaskBase_TaskCallback_o *v39; // x26
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x1
  SchedulerTaskBase_o *v43; // x19
  UnityEngine_Animation_o *v44; // x20
  SchedulerTaskAnimation_o *v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  SchedulerTaskBase_array *v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  __int64 v56; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E65C & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SchedulerTaskAnimation_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__);
    sub_1B885B0(&ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
    byte_4A5E65C = 1;
  }
  v5 = sub_1B887FC(ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_36;
  *(_DWORD *)(v5 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          iconArray,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  this->fields.selectedClassIcon = (struct ClassBoardSelectIconComponent_o *)v10;
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectedClassIcon, (int32_t)v10, v12, v13);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v16 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v16 )
          {
            iconRootObj = (__int64)v16->fields.classIconUi;
            if ( iconRootObj )
            {
              UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 176) + 1, 0LL);
              iconRootObj = (__int64)*p_selectedClassIcon;
              if ( *p_selectedClassIcon )
              {
                iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                         (ClassBoardSelectIconComponent_o *)iconRootObj,
                                         v7);
                if ( *p_selectedClassIcon )
                {
                  v17 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v17, 0LL);
                    v19 = sub_1B887FC(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v19,
                      Clip,
                      v20);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v21);
                    if ( v19 )
                    {
                      v22 = *(float *)(v19 + 28);
                      anim = this->fields.anim;
                      v24 = (System_String_o *)iconRootObj;
                      v25 = (SchedulerTaskAnimation_o *)sub_1B887FC(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor(v25, anim, v24, 0LL);
                      v27 = ClassBoardSelectViewManager__DelayAttachedTask(v22, (SchedulerTaskBase_o *)v25, v26);
                      v28 = *(float *)(v19 + 44);
                      v29 = v27;
                      v30 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v30, v28, 0LL);
                      v31 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v32 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v32,
                        v31,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v30 )
                      {
                        *(_QWORD *)(v30 + 32) = v32;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v32, v33, v34);
                        v35 = AvalonSceneManager_TypeInfo;
                        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v35 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v35->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v5 + 20) = 1;
                        *(float *)(v5 + 24) = DEFAULT_FADE_TIME;
                        v37 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
                        System_Func_bool____ctor(
                          v37,
                          (Il2CppObject *)v5,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__,
                          0LL);
                        v38 = sub_1B887FC(SchedulerTaskWaitWhile_TypeInfo);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v38, v37, 0LL);
                        v39 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v39,
                          (Il2CppObject *)v5,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v38 )
                        {
                          *(_QWORD *)(v38 + 24) = v39;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 24), (int32_t)v39, v40, v41);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v19 + 24),
                                                   (SchedulerTaskBase_o *)v38,
                                                   v42);
                          if ( *p_selectedClassIcon )
                          {
                            v43 = (SchedulerTaskBase_o *)iconRootObj;
                            v44 = (*p_selectedClassIcon)->fields.anim;
                            v45 = (SchedulerTaskAnimation_o *)sub_1B887FC(SchedulerTaskAnimation_TypeInfo);
                            SchedulerTaskAnimation___ctor(v45, v44, v17, 0LL);
                            iconRootObj = sub_1B88658(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v48 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v45
                                || (iconRootObj = sub_1B886EC(v45, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v48->max_length )
                                  goto LABEL_37;
                                v48->m_Items[0] = (SchedulerTaskBase_o *)v45;
                                sub_1B88554((ServantStatusBattleListViewItem_o *)v48->m_Items, (int32_t)v45, v46, v47);
                                if ( !v29 || (iconRootObj = sub_1B886EC(v29, v48->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v48->max_length <= 1 )
                                    goto LABEL_37;
                                  v48->m_Items[1] = v29;
                                  sub_1B88554(
                                    (ServantStatusBattleListViewItem_o *)&v48->m_Items[1],
                                    (int32_t)v29,
                                    v49,
                                    v50);
                                  iconRootObj = sub_1B886EC(v30, v48->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v48->max_length <= 2 )
                                      goto LABEL_37;
                                    v48->m_Items[2] = (SchedulerTaskBase_o *)v30;
                                    sub_1B88554((ServantStatusBattleListViewItem_o *)&v48->m_Items[2], v30, v51, v52);
                                    if ( !v43 || (iconRootObj = sub_1B886EC(v43, v48->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v48->max_length > 3 )
                                      {
                                        v48->m_Items[3] = v43;
                                        sub_1B88554(
                                          (ServantStatusBattleListViewItem_o *)&v48->m_Items[3],
                                          (int32_t)v43,
                                          v53,
                                          v54);
                                        v15 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
                                        SchedulerTaskParallel___ctor(v15, v48, 0LL);
                                        return (SchedulerTaskBase_o *)v15;
                                      }
LABEL_37:
                                      sub_1B88814(iconRootObj, v7);
                                    }
                                  }
                                }
                              }
                              v56 = sub_1B88830(iconRootObj);
                              sub_1B886D8(v56, 0LL);
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
    sub_1B8880C(iconRootObj, v7);
  }
  v15 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v15, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v15;
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
        sub_1B88814(this, method);
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1B8880C(this, method);
  }
}


void __fastcall ClassBoardSelectViewManager__Init(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  System_Object_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  System_String_o *monitor; // x19

  if ( (byte_4A5E653 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5E653 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v4 = System_Linq_Enumerable__ToArray_object_(
         v3,
         (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animationStateArray, (int32_t)v4, v5, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v8);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.bgmId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
  if ( Entity )
  {
    monitor = (System_String_o *)Entity[1].monitor;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(monitor, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OnClickBack(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *SceneName; // x21
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5E661 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5E661 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v4 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_38664344(v4, SceneName, 0LL);
  if ( !Instance )
    sub_1B8880C(v5, v6);
  AvalonSceneManager__transitionScene_38285956((AvalonSceneManager_o *)Instance, 32, 0LL, 1, (Il2CppObject *)v4, 0LL);
}


void __fastcall ClassBoardSelectViewManager__OnClickIcon(
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
  System_String_o *v25; // x21
  System_Action_o *v26; // x22
  Il2CppObject *v27; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A5E659 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__);
    sub_1B885B0(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3475/*"CLASS_BOARD_BASE_UNRELEASED"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E659 = 1;
  }
  v5 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
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
        v11 = icon->fields._Entity_k__BackingField;
        if ( v11 )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))onSelectClassBoard->fields.m_target)(
            onSelectClassBoard->fields.original_method_info,
            (unsigned int)v11->fields.id,
            (unsigned int)v11->fields.iconId,
            *(_QWORD *)&onSelectClassBoard->fields.extra_arg);
          return;
        }
LABEL_34:
        sub_1B8880C(IsOpen, v8);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = icon->fields._Entity_k__BackingField;
      v14 = (CommonUI_o *)Instance;
      if ( v13 )
        closedMessage = v13->fields.closedMessage;
      else
        closedMessage = 0LL;
      v25 = (System_String_o *)StringLiteral_1/*""*/;
      IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
        IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v26 = *(System_Action_o **)(*((_QWORD *)IsOpen + 23) + 32LL);
      if ( !v26 )
      {
        if ( !*((_DWORD *)IsOpen + 56) )
        {
          j_il2cpp_runtime_class_init_0(IsOpen);
          IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
        }
        v27 = (Il2CppObject *)**((_QWORD **)IsOpen + 23);
        v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v26, v27, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, 0LL);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        static_fields->__9__33_0 = v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__33_0, (int32_t)v26, v29, v30);
      }
      if ( !v14 )
        goto LABEL_34;
      CommonUI__OpenNotificationDialog(v14, v25, closedMessage, v26, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3475/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    IsOpen = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__33_1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__33_1, v21, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, 0LL);
      v22 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v22->__9__33_1 = _9__33_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->__9__33_1, (int32_t)_9__33_1, v23, v24);
    }
    if ( !v17 )
      goto LABEL_34;
    CommonUI__OpenNotificationDialog(v17, v20, v16, _9__33_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5E657 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__);
    byte_4A5E657 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *v12; // x19

  if ( (byte_4A5E658 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__);
    sub_1B885B0(&ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
    byte_4A5E658 = 1;
  }
  v5 = sub_1B887FC(ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v12, 0, 0, 0, 0, 0LL);
}


void __fastcall ClassBoardSelectViewManager__PlayStartAction(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  char *Instance; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20
  __int64 v7; // x21
  System_Action_object__o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  ActionChain_o *v11; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_array *v14; // x21

  if ( (byte_4A5E656 & 1) == 0 )
  {
    sub_1B885B0(&ActionChain_TypeInfo);
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Action_Action____TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5E656 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v3);
  Instance = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, 0LL);
  v7 = sub_1B88658(System_Action_Action____TypeInfo, 1LL);
  v8 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( !v7 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v7 + 32) = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v8, v9, v10);
  v11 = (ActionChain_o *)sub_1B887FC(ActionChain_TypeInfo);
  ActionChain___ctor_46556284(v11, (System_Action_Action__array *)v7, 0LL);
  Instance = (char *)sub_1B88658(System_Action___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_11;
  v14 = (System_Action_array *)Instance;
  if ( !*((_DWORD *)Instance + 6) )
LABEL_12:
    sub_1B88814(Instance, v5);
  *((_QWORD *)Instance + 4) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Instance + 32), (int32_t)v6, v12, v13);
  if ( !v11 || (Instance = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v11, v14, 0LL)) == 0LL )
LABEL_11:
    sub_1B8880C(Instance, v5);
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
    sub_1B8880C(v4, v5);
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
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 p_method; // x0

  v2 = this;
  if ( (byte_4A5E660 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    byte_4A5E660 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  headerDlspItemIdArray = v2->fields.headerDlspItemIdArray;
  v7 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_1B8880C(this, method);
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
  ClassBoardSelectViewManager_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *anim; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  Il2CppObject *v10; // x0
  ClassBoardSelectViewManager_o **p_classBoardUIController_k__BackingField; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  System_Action_o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  struct ClassBoardUIController_o *v18; // x21
  System_Action_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  struct IClassBoardResourceCatalog_o *v22; // x21
  IClassBoardResourceCatalog_c *v23; // x8
  ClassBoardUIController_o *v24; // x20
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  const MethodInfo *v28; // x1
  struct IClassBoardResourceCatalog_o *v29; // x20
  IClassBoardResourceCatalog_c *v30; // x8
  ClassBoardUIController_o *v31; // x19
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  AtlasManagerUnit_o *v35; // x20

  v2 = this;
  if ( (byte_4A5E65F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager_OnClickBack__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager_OpenHelp__);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20512/*"img_txt_classscore_main"*/);
    this = (ClassBoardSelectViewManager_o *)sub_1B885B0(&StringLiteral_3515/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/);
    byte_4A5E65F = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_38;
  klass = resourceCatalog->klass;
  v5 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_38;
  anim = (Il2CppObject *)this->fields.anim;
  uiRoot = v2->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__49297800(
          anim,
          uiRoot,
          (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v2->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v10;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v2->fields._classBoardUIController_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v2->fields._classBoardUIController_k__BackingField,
    (int32_t)v10,
    v12,
    v13);
  this = (ClassBoardSelectViewManager_o *)v2->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_38;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0LL);
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_38;
  classBoardUIController_k__BackingField->fields.onClickBack = v15;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (int32_t)v15,
    v16,
    v17);
  v18 = v2->fields._classBoardUIController_k__BackingField;
  v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v18 )
    goto LABEL_38;
  v18->fields.onClickHelp = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.onClickHelp, (int32_t)v19, v20, v21);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_38;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, 0LL);
  v22 = v2->fields.resourceCatalog;
  if ( !v22 )
    goto LABEL_38;
  v23 = v22->klass;
  v24 = v2->fields._classBoardUIController_k__BackingField;
  v25 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    v26 = &v23->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v26 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_22;
    }
    v27 = (__int64)&v23->vtable[*v26].method;
  }
  else
  {
LABEL_22:
    v27 = sub_1BDA590(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v27)(
                                            v22,
                                            *(_QWORD *)(v27 + 8));
  if ( !this )
    goto LABEL_38;
  if ( !v24 )
    goto LABEL_38;
  ClassBoardUIController__SetHeaderTitle(
    v24,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_20512/*"img_txt_classscore_main"*/,
    0LL);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v2, v28);
  v29 = v2->fields.resourceCatalog;
  if ( !v29 )
    goto LABEL_38;
  v30 = v29->klass;
  v31 = v2->fields._classBoardUIController_k__BackingField;
  v32 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
  {
    v33 = &v30->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v33 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_31;
    }
    v34 = (__int64)&v30->vtable[*v33].method;
  }
  else
  {
LABEL_31:
    v34 = sub_1BDA590(v29, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v34)(
                                            v29,
                                            *(_QWORD *)(v34 + 8));
  if ( !this )
    goto LABEL_38;
  v35 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3515/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v31 )
LABEL_38:
    sub_1B8880C(this, method);
  ClassBoardUIController__SetHeaderMessage(v31, v35, (System_String_o *)this, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  ClassBoardResourceCatalogAssetBundle_o **v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  struct IClassBoardResourceCatalog_o *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_Action_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x1
  ClassBoardResourceCatalogAssetBundle_o *v28; // x20
  __int64 methodPtr_low; // x10
  System_Action_o *v30; // x21
  __int64 v31; // x10

  if ( (byte_4A5E654 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__);
    sub_1B885B0(&ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
    byte_4A5E654 = 1;
  }
  v9 = sub_1B887FC(ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = classBoardBackground;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)classBoardBackground, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v9 + 32) = resourceCatalog;
  v16 = (ClassBoardResourceCatalogAssetBundle_o **)(v9 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)resourceCatalog, v17, v18);
  *(_QWORD *)(v9 + 40) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)finishCallback, v19, v20);
  v21 = *(struct IClassBoardResourceCatalog_o **)(v9 + 32);
  this->fields.resourceCatalog = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resourceCatalog, (int32_t)v21, v22, v23);
  v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v9,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v9 + 48) = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)v24, v25, v26);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v27)
    || (v28 = *v16) == 0LL
    || (methodPtr_low = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ClassBoardResourceCatalogAssetBundle_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0LL);
    return;
  }
  v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v9,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__,
    0LL);
  v31 = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)v31
    || (ClassBoardResourceCatalogAssetBundle_c *)v28->klass->_2.typeHierarchy[v31 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_1B8880C(v10, v11);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v28, v30, 0LL);
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
        sub_1B88814(this, method);
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
    sub_1B8880C(this, method);
  }
}


bool __fastcall ClassBoardSelectViewManager__ValidateBoardUIAtlas(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  ClassBoardSelectViewManager_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  int *p_offset; // x10
  __int64 p_method; // x0

  v2 = this;
  if ( (byte_4A5E655 & 1) == 0 )
  {
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardSelectViewManager_o *)sub_1B885B0(&StringLiteral_20512/*"img_txt_classscore_main"*/);
    byte_4A5E655 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  v5 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_1B8880C(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_20512/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__31_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E665 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5E665 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__30_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E664 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5E664 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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

  this->fields._classBoardUIController_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardSelectViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E666 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4A5E666 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardSelectViewManager___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__42_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, (const MethodInfo *)x);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__34_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4A5E667 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E667 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1B8880C(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_1B8880C(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_33726240(gameObject, 0.0, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  ClassBoardBackground_o *classBoardBackground; // x0
  struct ClassBoardSelectViewManager_o *_4__this; // x8
  struct UITexture_o *bgTexture; // x20
  struct ClassBoardSelectViewManager_o *v6; // x8
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct ClassBoardSelectViewManager_o *v11; // x8
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  ClassBoardSelectViewManager___c_c *v13; // x0
  System_Action_object__o *_9__27_2; // x21
  Il2CppObject *v15; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct ClassBoardSelectViewManager_o *v19; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t monitor; // w8

  if ( (byte_4A5E668 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
    sub_1B885B0(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__);
    sub_1B885B0(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4A5E668 = 1;
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
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_25;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v6->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_1B887FC(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  BasicHelper__ForEach_object_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
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
    _9__27_2 = (System_Action_object__o *)sub_1B887FC(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(_9__27_2, v15, Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__27_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_2, (int32_t)_9__27_2, v17, v18);
  }
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)_9__27_2,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_object_(
                                                     (System_Object_array *)v19->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
    sub_1B8880C(classBoardBackground, method);
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
  IClassBoardResourceCatalog_o *resourceCatalog; // x20
  Il2CppObject *_4__this; // x22
  System_Action_object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4A5E669 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_1B885B0(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    byte_4A5E669 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v7 = (System_Action_object__o *)sub_1B887FC(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_object____ctor(v7, _4__this, (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__, 0LL);
  if ( !x )
    sub_1B8880C(v8, v9);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v7, v10);
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
  ClassBoardSelectViewManager___c__DisplayClass32_0_o *v2; // x19
  struct ClassBoardSelectViewManager_o *_4__this; // x8

  v2 = this;
  if ( (byte_4A5E66A & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5E66A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(v2->fields.finishCallback, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E66B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E66B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, x);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__3; // x21
  CommonUI_o *v6; // x20
  float fadeTime; // s8
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E66C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__);
    byte_4A5E66C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadeout(v6, 2, fadeTime, _9__3, 0LL);
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
    sub_1B8880C(0LL, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, method);
}