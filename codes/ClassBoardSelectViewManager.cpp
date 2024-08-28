void __fastcall ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4A03901 )
  {
    sub_1B686D4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A03901 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  SchedulerTaskWaitTime_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  SchedulerTaskBase_array *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  SchedulerTaskOrthostichy_o *v15; // x19
  __int64 v17; // x0

  if ( (byte_4A0C0F1 & 1) == 0 )
  {
    sub_1B686D4(&SchedulerTaskBase___TypeInfo, method);
    sub_1B686D4(&SchedulerTaskOrthostichy_TypeInfo, v5);
    sub_1B686D4(&SchedulerTaskWaitTime_TypeInfo, v6);
    byte_4A0C0F1 = 1;
  }
  v7 = (SchedulerTaskWaitTime_o *)sub_1B68920(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v7, delay, 0LL);
  v8 = sub_1B6877C(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v8 )
    sub_1B68930(0LL, v9);
  v12 = (SchedulerTaskBase_array *)v8;
  if ( v7 )
  {
    v8 = sub_1B68810(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
      goto LABEL_12;
  }
  if ( !v12->max_length )
    goto LABEL_11;
  v12->m_Items[0] = (SchedulerTaskBase_o *)v7;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v12->m_Items, (int32_t)v7, v10, v11);
  if ( task )
  {
    v8 = sub_1B68810(task, v12->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_12:
      v17 = sub_1B68954(v8);
      sub_1B687FC(v17, 0LL);
    }
  }
  if ( v12->max_length <= 1 )
LABEL_11:
    sub_1B68938(v8, v9);
  v12->m_Items[1] = task;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v12->m_Items[1], (int32_t)task, v13, v14);
  v15 = (SchedulerTaskOrthostichy_o *)sub_1B68920(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v15, v12, 0LL);
  return (SchedulerTaskBase_o *)v15;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4A0C0E3 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4A0C0E3 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_2E38B9C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4A0C0E4 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4A0C0E4 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               2,
               0LL,
               (const MethodInfo_2E38B9C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectViewManager___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_T__o *v22; // x21
  System_Action_object__o *_9__24_0; // x22
  Il2CppObject *v24; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Object_array *v28; // x19
  System_Func_object__bool__o *v29; // x21
  Il2CppObject *object; // x0

  if ( (byte_4A0C0E5 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_AnimationEvent__TypeInfo, animClip);
    sub_1B686D4(&Method_BasicHelper_Find_AnimationEvent___, v8);
    sub_1B686D4(&Method_BasicHelper_ForEach_AnimationEvent___, v9);
    sub_1B686D4(&System_Func_AnimationEvent__bool__TypeInfo, v10);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, v11);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__, v12);
    sub_1B686D4(&ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo, v13);
    sub_1B686D4(&ClassBoardSelectViewManager___c_TypeInfo, v14);
    byte_4A0C0E5 = 1;
  }
  v15 = sub_1B68920(ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass24_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass24_0_o *)v15,
    0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = eventName,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)eventName, v18, v19),
        !animClip) )
  {
    sub_1B68930(v16, v17);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v21 = ClassBoardSelectViewManager___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v21 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__24_0 = (System_Action_object__o *)v21->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__24_0 = (System_Action_object__o *)sub_1B68920(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(_9__24_0, v24, Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Action_AnimationEvent__o *)_9__24_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v26, v27);
  }
  BasicHelper__ForEach_object_(
    v22,
    (System_Action_T__o *)_9__24_0,
    (const MethodInfo_2E37140 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v22, 0LL);
  v28 = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v29 = (System_Func_object__bool__o *)sub_1B68920(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v15,
    Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__,
    0LL);
  object = BasicHelper__Find_object_(
             v28,
             (System_Func_T__bool__o *)v29,
             (const MethodInfo_2E35D1C *)Method_BasicHelper_Find_AnimationEvent___);
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

  if ( (byte_4A0C0E2 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4A0C0E2 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_2E38B9C *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v3; // x1
  UnityEngine_Object_o *selectedClassIcon; // x20
  bool v5; // w0
  MethodInfo *v6; // x1
  float result; // s0
  ClassBoardSelectIconComponent_o *ClassBoardEnterAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v9; // x8
  UnityEngine_AnimationClip_o *Clip; // x20
  ClassBoardSelectIconComponent_AnimClipInfo_o *v11; // x19
  const MethodInfo *v12; // x2

  if ( (byte_4A0C0F0 & 1) == 0 )
  {
    sub_1B686D4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0C0F0 = 1;
  }
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v11 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1B68920(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v11, Clip, v12),
          !v11) )
    {
      sub_1B68930(ClassBoardEnterAnimName, v6);
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
  System_Collections_Generic_List_object__o *v3; // x20
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
  System_Collections_Generic_List_object__o *v17; // x19
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t current; // w1
  __int64 v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  UnityEngine_AnimationState_o *v28; // x0
  System_String_o *name; // x0
  System_String_o *v30; // x22
  UnityEngine_Animation_o *v31; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  ClassBoardSelectIconComponent_AnimClipInfo_o *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x0
  __int64 v36; // x1
  UnityEngine_Animation_o *v37; // x23
  __int64 v38; // x21
  SchedulerTaskBase_TaskCallback_o *v39; // x22
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  v3 = (System_Collections_Generic_List_object__o *)iconCompoentList;
  if ( (byte_4A0C0F6 & 1) == 0 )
  {
    sub_1B686D4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, iconCompoentList);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__, v10);
    sub_1B686D4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11);
    sub_1B686D4(&SchedulerTaskAnimation_TypeInfo, v12);
    sub_1B686D4(&SchedulerTaskParallel_TypeInfo, v13);
    sub_1B686D4(&SchedulerTaskBase_TaskCallback_TypeInfo, v14);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__, v15);
    sub_1B686D4(&ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo, v16);
    byte_4A0C0F6 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  if ( v3 )
  {
    if ( v3->fields._size )
    {
      v17 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v17,
        (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v53,
        v3,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v54 = v53;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v54,
                (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v18 = sub_1B68920(ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo);
        ClassBoardSelectViewManager___c__DisplayClass43_0___ctor(
          (ClassBoardSelectViewManager___c__DisplayClass43_0_o *)v18,
          0LL);
        if ( !v18 )
          sub_1B68930(v19, v20);
        current = (int32_t)v54.fields._current;
        *(_QWORD *)(v18 + 16) = v54.fields._current;
        v24 = v18 + 16;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 16), current, v21, v22);
        v27 = *(_QWORD *)(v18 + 16);
        if ( !v27 )
          sub_1B68930(v25, v26);
        v28 = *(UnityEngine_AnimationState_o **)(v27 + 136);
        if ( v28 )
        {
          name = UnityEngine_AnimationState__get_name(v28, 0LL);
          v27 = *(_QWORD *)v24;
          if ( !*(_QWORD *)v24 )
            sub_1B68930(name, v26);
          v30 = name;
        }
        else
        {
          v30 = 0LL;
        }
        v31 = *(UnityEngine_Animation_o **)(v27 + 88);
        if ( !v31 )
          sub_1B68930(0LL, v26);
        Clip = UnityEngine_Animation__GetClip(v31, v30, 0LL);
        v33 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1B68920(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v33, Clip, v34);
        if ( !*(_QWORD *)v24 )
          sub_1B68930(v35, v36);
        v37 = *(UnityEngine_Animation_o **)(*(_QWORD *)v24 + 88LL);
        v38 = sub_1B68920(SchedulerTaskAnimation_TypeInfo);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v38, v37, v30, 0LL);
        v39 = (SchedulerTaskBase_TaskCallback_o *)sub_1B68920(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v39,
          (Il2CppObject *)v18,
          Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v38 )
          sub_1B68930(v40, v41);
        *(_QWORD *)(v38 + 32) = v39;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 32), (int32_t)v39, v42, v43);
        if ( !v17 )
          sub_1B68930(v44, v45);
        items = v17->fields._items;
        v49 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1B68930(v44, v45);
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v38,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v38;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v51 + 4), v38, v46, v47);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v54,
        (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      v3 = (System_Collections_Generic_List_object__o *)sub_1B68920(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor_41002244(
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
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v10; // x0
  System_Func_object__bool__o *_9__42_0; // x20
  Il2CppObject *v12; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_object__o *v18; // x19

  if ( (byte_4A0C0F5 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___, method);
    sub_1B686D4(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___, v3);
    sub_1B686D4(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__, v5);
    sub_1B686D4(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo, v6);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__, v7);
    sub_1B686D4(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    byte_4A0C0F5 = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v10 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v10 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    _9__42_0 = (System_Func_object__bool__o *)v10->static_fields->__9__42_0;
    if ( !_9__42_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__42_0 = (System_Func_object__bool__o *)sub_1B68920(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__42_0,
        v12,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__,
        0LL);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      static_fields->__9__42_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__42_0;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v14, v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__42_0,
            (const MethodInfo_2E87B14 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v16,
                                                                                 (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v18;
  }
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
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *selectedClassIcon; // x21
  SchedulerTaskParallel_o *v19; // x20
  struct ClassBoardSelectIconComponent_o *v20; // x8
  struct ClassBoardSelectIconComponent_o *v21; // x8
  System_String_o *v22; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v24; // x23
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  float v27; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v29; // x21
  SchedulerTaskAnimation_o *v30; // x25
  const MethodInfo *v31; // x1
  SchedulerTaskBase_o *v32; // x21
  AvalonSceneManager_c *v33; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v35; // x24
  SchedulerTaskBase_TaskCallback_o *v36; // x25
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x1
  SchedulerTaskBase_o *v40; // x0
  struct ClassBoardSelectIconComponent_o *v41; // x1
  SchedulerTaskBase_o *v42; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  struct ClassBoardSelectIconComponent_o *v45; // x8
  UnityEngine_Animation_o *v46; // x19
  __int64 v47; // x24
  SchedulerTaskBase_TaskCallback_o *v48; // x19
  int32_t v49; // w2
  int32_t v50; // w3
  UnityEngine_GameObject_o *v51; // x19
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  __int64 v61; // x0

  if ( (byte_4A0C0EE & 1) == 0 )
  {
    sub_1B686D4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&SchedulerTaskAnimation_TypeInfo, v5);
    sub_1B686D4(&SchedulerTaskBase___TypeInfo, v6);
    sub_1B686D4(&SchedulerTaskParallel_TypeInfo, v7);
    sub_1B686D4(&SchedulerTaskWaitTime_TypeInfo, v8);
    sub_1B686D4(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__, v10);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__, v11);
    sub_1B686D4(&ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo, v12);
    byte_4A0C0EE = 1;
  }
  v13 = sub_1B68920(ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass35_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass35_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_31;
  *(_QWORD *)(v13 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)this, v16, v17);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( ((unsigned __int8)iconRootObj & 1) == 0 )
  {
    v20 = this->fields.selectedClassIcon;
    if ( v20 )
    {
      iconRootObj = v20->fields.iconRootObj;
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
            v21 = this->fields.selectedClassIcon;
            if ( v21 )
            {
              v22 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v21->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v22, 0LL);
                v24 = sub_1B68920(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v24,
                  Clip,
                  v25);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v26);
                if ( v24 )
                {
                  v27 = *(float *)(v24 + 28);
                  anim = this->fields.anim;
                  v29 = (System_String_o *)iconRootObj;
                  v30 = (SchedulerTaskAnimation_o *)sub_1B68920(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v30, anim, v29, 0LL);
                  v32 = ClassBoardSelectViewManager__DelayAttachedTask(v27, (SchedulerTaskBase_o *)v30, v31);
                  v33 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v33 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v33->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v13 + 16) = DEFAULT_FADE_TIME;
                  v35 = sub_1B68920(SchedulerTaskWaitTime_TypeInfo);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v35, DEFAULT_FADE_TIME, 0LL);
                  v36 = (SchedulerTaskBase_TaskCallback_o *)sub_1B68920(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v36,
                    (Il2CppObject *)v13,
                    Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v35 )
                  {
                    *(_QWORD *)(v35 + 24) = v36;
                    sub_1B68678((ServantStatusBattleListViewItem_o *)(v35 + 24), (int32_t)v36, v37, v38);
                    v40 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v24 + 24),
                            (SchedulerTaskBase_o *)v35,
                            v39);
                    v41 = this->fields.selectedClassIcon;
                    v42 = v40;
                    *(_QWORD *)(v13 + 24) = v41;
                    sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)v41, v43, v44);
                    v45 = this->fields.selectedClassIcon;
                    if ( v45 )
                    {
                      v46 = v45->fields.anim;
                      v47 = sub_1B68920(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v47, v46, v22, 0LL);
                      v48 = (SchedulerTaskBase_TaskCallback_o *)sub_1B68920(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v48,
                        (Il2CppObject *)v13,
                        Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v47 )
                      {
                        *(_QWORD *)(v47 + 32) = v48;
                        sub_1B68678((ServantStatusBattleListViewItem_o *)(v47 + 32), (int32_t)v48, v49, v50);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_1B6877C(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v51 = iconRootObj;
                          v52 = sub_1B68810(v47, iconRootObj->klass->_1.element_class);
                          if ( v52 )
                          {
                            if ( !LODWORD(v51[1].klass) )
                              goto LABEL_32;
                            v51[1].monitor = (void *)v47;
                            sub_1B68678((ServantStatusBattleListViewItem_o *)&v51[1].monitor, v47, v54, v55);
                            if ( !v32 || (v52 = sub_1B68810(v32, v51->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v51[1].klass) <= 1 )
                                goto LABEL_32;
                              *(_QWORD *)&v51[1].fields.m_CachedPtr = v32;
                              sub_1B68678((ServantStatusBattleListViewItem_o *)&v51[1].fields, (int32_t)v32, v56, v57);
                              if ( !v42 || (v52 = sub_1B68810(v42, v51->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v51[1].klass) > 2 )
                                {
                                  v51[2].klass = (UnityEngine_GameObject_c *)v42;
                                  sub_1B68678((ServantStatusBattleListViewItem_o *)&v51[2], (int32_t)v42, v58, v59);
                                  v19 = (SchedulerTaskParallel_o *)sub_1B68920(SchedulerTaskParallel_TypeInfo);
                                  SchedulerTaskParallel___ctor(v19, (SchedulerTaskBase_array *)v51, 0LL);
                                  return (SchedulerTaskBase_o *)v19;
                                }
LABEL_32:
                                sub_1B68938(v52, v53);
                              }
                            }
                          }
                          v61 = sub_1B68954(v52);
                          sub_1B687FC(v61, 0LL);
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
    sub_1B68930(iconRootObj, v15);
  }
  v19 = (SchedulerTaskParallel_o *)sub_1B68920(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v19, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v19;
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
  ClassBoardSelectViewManager_o *Clip; // x0
  const MethodInfo *v14; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v17; // s8
  SchedulerTaskAnimation_o *v18; // x20
  __int64 v19; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  SchedulerTaskBase_TaskCallback_o *v22; // x21
  Il2CppObject *v23; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  SchedulerTaskBase_array *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  SchedulerTaskParallel_o *v32; // x19
  __int64 v34; // x0

  if ( (byte_4A0C0ED & 1) == 0 )
  {
    sub_1B686D4(&SchedulerTaskAnimation_TypeInfo, method);
    sub_1B686D4(&SchedulerTaskBase___TypeInfo, v3);
    sub_1B686D4(&SchedulerTaskParallel_TypeInfo, v4);
    sub_1B686D4(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1B686D4(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__, v7);
    sub_1B686D4(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    sub_1B686D4(&StringLiteral_6535/*"FadeStart"*/, v9);
    byte_4A0C0ED = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_18;
  v12 = (System_String_o *)FirstTransitionAnimName;
  Clip = (ClassBoardSelectViewManager_o *)UnityEngine_Animation__GetClip(
                                            this->fields.anim,
                                            (System_String_o *)FirstTransitionAnimName,
                                            0LL);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                Clip,
                (UnityEngine_AnimationClip_o *)Clip,
                (System_String_o *)StringLiteral_6535/*"FadeStart"*/,
                0.0,
                v14);
  anim = this->fields.anim;
  v17 = EventTime;
  v18 = (SchedulerTaskAnimation_o *)sub_1B68920(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v18, anim, v12, 0LL);
  v19 = sub_1B68920(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v19, v17, 0LL);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  v22 = *(SchedulerTaskBase_TaskCallback_o **)(*((_QWORD *)FirstTransitionAnimName + 23) + 40LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 56) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName);
      FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)FirstTransitionAnimName + 23);
    v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1B68920(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v22,
      v23,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__,
      0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v22;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v22, v25, v26);
  }
  if ( !v19
    || (*(_QWORD *)(v19 + 32) = v22,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v22, v20, v21),
        (FirstTransitionAnimName = (void *)sub_1B6877C(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_18:
    sub_1B68930(FirstTransitionAnimName, v11);
  }
  v29 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v18 )
  {
    FirstTransitionAnimName = (void *)sub_1B68810(v18, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !v29->max_length )
    goto LABEL_19;
  v29->m_Items[0] = (SchedulerTaskBase_o *)v18;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v29->m_Items, (int32_t)v18, v27, v28);
  FirstTransitionAnimName = (void *)sub_1B68810(v19, v29->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v34 = sub_1B68954(FirstTransitionAnimName);
    sub_1B687FC(v34, 0LL);
  }
  if ( v29->max_length <= 1 )
LABEL_19:
    sub_1B68938(FirstTransitionAnimName, v11);
  v29->m_Items[1] = (SchedulerTaskBase_o *)v19;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v29->m_Items[1], v19, v30, v31);
  v32 = (SchedulerTaskParallel_o *)sub_1B68920(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v32, v29, 0LL);
  return (SchedulerTaskBase_o *)v32;
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
  __int64 v21; // x20
  __int64 iconRootObj; // x0
  const MethodInfo *v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x21
  System_Func_object__bool__o *v25; // x22
  Il2CppObject *v26; // x0
  struct ClassBoardSelectIconComponent_o **p_selectedClassIcon; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_Object_o *selectedClassIcon; // x22
  SchedulerTaskParallel_o *v31; // x19
  struct ClassBoardSelectIconComponent_o *v32; // x8
  System_String_o *v33; // x24
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v35; // x25
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  float v38; // s8
  UnityEngine_Animation_o *anim; // x23
  System_String_o *v40; // x22
  SchedulerTaskAnimation_o *v41; // x26
  const MethodInfo *v42; // x1
  SchedulerTaskBase_o *v43; // x0
  float v44; // s8
  SchedulerTaskBase_o *v45; // x23
  __int64 v46; // x22
  Il2CppObject *v47; // x26
  SchedulerTaskBase_TaskCallback_o *v48; // x19
  int32_t v49; // w2
  int32_t v50; // w3
  AvalonSceneManager_c *v51; // x0
  float DEFAULT_FADE_TIME; // s0
  System_Func_bool__o *v53; // x26
  __int64 v54; // x19
  SchedulerTaskBase_TaskCallback_o *v55; // x26
  int32_t v56; // w2
  int32_t v57; // w3
  const MethodInfo *v58; // x1
  SchedulerTaskBase_o *v59; // x19
  UnityEngine_Animation_o *v60; // x20
  SchedulerTaskAnimation_o *v61; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  SchedulerTaskBase_array *v64; // x20
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v72; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0C0EF & 1) == 0 )
  {
    sub_1B686D4(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, *(_QWORD *)&baseId);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v5);
    sub_1B686D4(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, v6);
    sub_1B686D4(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___, v7);
    sub_1B686D4(&System_Func_bool__TypeInfo, v8);
    sub_1B686D4(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    sub_1B686D4(&SchedulerTaskAnimation_TypeInfo, v11);
    sub_1B686D4(&SchedulerTaskBase___TypeInfo, v12);
    sub_1B686D4(&SchedulerTaskParallel_TypeInfo, v13);
    sub_1B686D4(&SchedulerTaskWaitTime_TypeInfo, v14);
    sub_1B686D4(&SchedulerTaskWaitWhile_TypeInfo, v15);
    sub_1B686D4(&SchedulerTaskBase_TaskCallback_TypeInfo, v16);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__, v17);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__, v18);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__, v19);
    sub_1B686D4(&ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo, v20);
    byte_4A0C0EF = 1;
  }
  v21 = sub_1B68920(ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass36_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass36_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_36;
  *(_DWORD *)(v21 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v25 = (System_Func_object__bool__o *)sub_1B68920(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__FirstOrDefault_object__48686452(
          iconArray,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2E6E574 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  this->fields.selectedClassIcon = (struct ClassBoardSelectIconComponent_o *)v26;
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.selectedClassIcon, (int32_t)v26, v28, v29);
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
          v32 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v32 )
          {
            iconRootObj = (__int64)v32->fields.classIconUi;
            if ( iconRootObj )
            {
              UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 176) + 1, 0LL);
              iconRootObj = (__int64)*p_selectedClassIcon;
              if ( *p_selectedClassIcon )
              {
                iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                         (ClassBoardSelectIconComponent_o *)iconRootObj,
                                         v23);
                if ( *p_selectedClassIcon )
                {
                  v33 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v33, 0LL);
                    v35 = sub_1B68920(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v35,
                      Clip,
                      v36);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v37);
                    if ( v35 )
                    {
                      v38 = *(float *)(v35 + 28);
                      anim = this->fields.anim;
                      v40 = (System_String_o *)iconRootObj;
                      v41 = (SchedulerTaskAnimation_o *)sub_1B68920(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor(v41, anim, v40, 0LL);
                      v43 = ClassBoardSelectViewManager__DelayAttachedTask(v38, (SchedulerTaskBase_o *)v41, v42);
                      v44 = *(float *)(v35 + 44);
                      v45 = v43;
                      v46 = sub_1B68920(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v46, v44, 0LL);
                      v47 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v48 = (SchedulerTaskBase_TaskCallback_o *)sub_1B68920(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v48,
                        v47,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v46 )
                      {
                        *(_QWORD *)(v46 + 32) = v48;
                        sub_1B68678((ServantStatusBattleListViewItem_o *)(v46 + 32), (int32_t)v48, v49, v50);
                        v51 = AvalonSceneManager_TypeInfo;
                        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v51 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v51->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v21 + 20) = 1;
                        *(float *)(v21 + 24) = DEFAULT_FADE_TIME;
                        v53 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
                        System_Func_bool____ctor(
                          v53,
                          (Il2CppObject *)v21,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__,
                          0LL);
                        v54 = sub_1B68920(SchedulerTaskWaitWhile_TypeInfo);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v54, v53, 0LL);
                        v55 = (SchedulerTaskBase_TaskCallback_o *)sub_1B68920(SchedulerTaskBase_TaskCallback_TypeInfo);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v55,
                          (Il2CppObject *)v21,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v54 )
                        {
                          *(_QWORD *)(v54 + 24) = v55;
                          sub_1B68678((ServantStatusBattleListViewItem_o *)(v54 + 24), (int32_t)v55, v56, v57);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v35 + 24),
                                                   (SchedulerTaskBase_o *)v54,
                                                   v58);
                          if ( *p_selectedClassIcon )
                          {
                            v59 = (SchedulerTaskBase_o *)iconRootObj;
                            v60 = (*p_selectedClassIcon)->fields.anim;
                            v61 = (SchedulerTaskAnimation_o *)sub_1B68920(SchedulerTaskAnimation_TypeInfo);
                            SchedulerTaskAnimation___ctor(v61, v60, v33, 0LL);
                            iconRootObj = sub_1B6877C(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v64 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v61
                                || (iconRootObj = sub_1B68810(v61, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v64->max_length )
                                  goto LABEL_37;
                                v64->m_Items[0] = (SchedulerTaskBase_o *)v61;
                                sub_1B68678((ServantStatusBattleListViewItem_o *)v64->m_Items, (int32_t)v61, v62, v63);
                                if ( !v45 || (iconRootObj = sub_1B68810(v45, v64->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v64->max_length <= 1 )
                                    goto LABEL_37;
                                  v64->m_Items[1] = v45;
                                  sub_1B68678(
                                    (ServantStatusBattleListViewItem_o *)&v64->m_Items[1],
                                    (int32_t)v45,
                                    v65,
                                    v66);
                                  iconRootObj = sub_1B68810(v46, v64->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v64->max_length <= 2 )
                                      goto LABEL_37;
                                    v64->m_Items[2] = (SchedulerTaskBase_o *)v46;
                                    sub_1B68678((ServantStatusBattleListViewItem_o *)&v64->m_Items[2], v46, v67, v68);
                                    if ( !v59 || (iconRootObj = sub_1B68810(v59, v64->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v64->max_length > 3 )
                                      {
                                        v64->m_Items[3] = v59;
                                        sub_1B68678(
                                          (ServantStatusBattleListViewItem_o *)&v64->m_Items[3],
                                          (int32_t)v59,
                                          v69,
                                          v70);
                                        v31 = (SchedulerTaskParallel_o *)sub_1B68920(SchedulerTaskParallel_TypeInfo);
                                        SchedulerTaskParallel___ctor(v31, v64, 0LL);
                                        return (SchedulerTaskBase_o *)v31;
                                      }
LABEL_37:
                                      sub_1B68938(iconRootObj, v23);
                                    }
                                  }
                                }
                              }
                              v72 = sub_1B68954(iconRootObj);
                              sub_1B687FC(v72, 0LL);
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
    sub_1B68930(iconRootObj, v23);
  }
  v31 = (SchedulerTaskParallel_o *)sub_1B68920(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v31, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v31;
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
        sub_1B68938(this, method);
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1B68930(this, method);
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
  System_Object_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  System_String_o *monitor; // x19

  if ( (byte_4A0C0E6 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_BgmMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_1B686D4(&Method_System_Linq_Enumerable_OfType_AnimationState___, v5);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v6);
    sub_1B686D4(&SoundManager_TypeInfo, v7);
    byte_4A0C0E6 = 1;
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_2E738B0 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v9 = System_Linq_Enumerable__ToArray_object_(
         v8,
         (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v9;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.animationStateArray, (int32_t)v9, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1B68930(0LL, v13);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.bgmId,
             (const MethodInfo_30E44C0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  System_String_o *SceneName; // x21
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A0C0F4 & 1) == 0 )
  {
    sub_1B686D4(&SceneJumpInfo_TypeInfo, method);
    sub_1B686D4(&SceneList_TypeInfo, v2);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4A0C0F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v6 = (SceneJumpInfo_o *)sub_1B68920(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_38336380(v6, SceneName, 0LL);
  if ( !Instance )
    sub_1B68930(v7, v8);
  AvalonSceneManager__transitionScene_38032604((AvalonSceneManager_o *)Instance, 32, 0LL, 1, (Il2CppObject *)v6, 0LL);
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  void *IsOpen; // x0
  __int64 v16; // x1
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  struct System_Action_int__int__o *onSelectClassBoard; // x8
  struct ClassBoardBaseEntity_o *v19; // x9
  Il2CppObject *Instance; // x0
  struct ClassBoardBaseEntity_o *v21; // x9
  CommonUI_o *v22; // x20
  System_String_o *closedMessage; // x19
  System_String_o *v24; // x19
  CommonUI_o *v25; // x20
  ClassBoardSelectViewManager___c_c *v26; // x8
  System_Action_o *_9__33_1; // x22
  System_String_o *v28; // x21
  Il2CppObject *v29; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x21
  System_Action_o *v34; // x22
  Il2CppObject *v35; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_4A0C0EC & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, icon);
    sub_1B686D4(&Method_ClassBoardSelectViewManager_OnClickIcon__, v5);
    sub_1B686D4(&LocalizationManager_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, v8);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, v9);
    sub_1B686D4(&ClassBoardSelectViewManager___c_TypeInfo, v10);
    sub_1B686D4(&StringLiteral_3451/*"CLASS_BOARD_BASE_UNRELEASED"*/, v11);
    sub_1B686D4(&StringLiteral_1/*""*/, v12);
    byte_4A0C0EC = 1;
  }
  v13 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B686EC(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B686B8(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
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
        v19 = icon->fields._Entity_k__BackingField;
        if ( v19 )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))onSelectClassBoard->fields.m_target)(
            onSelectClassBoard->fields.original_method_info,
            (unsigned int)v19->fields.id,
            (unsigned int)v19->fields.iconId,
            *(_QWORD *)&onSelectClassBoard->fields.extra_arg);
          return;
        }
LABEL_34:
        sub_1B68930(IsOpen, v16);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = icon->fields._Entity_k__BackingField;
      v22 = (CommonUI_o *)Instance;
      if ( v21 )
        closedMessage = v21->fields.closedMessage;
      else
        closedMessage = 0LL;
      v33 = (System_String_o *)StringLiteral_1/*""*/;
      IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
        IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v34 = *(System_Action_o **)(*((_QWORD *)IsOpen + 23) + 32LL);
      if ( !v34 )
      {
        if ( !*((_DWORD *)IsOpen + 56) )
        {
          j_il2cpp_runtime_class_init_0(IsOpen);
          IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
        }
        v35 = (Il2CppObject *)**((_QWORD **)IsOpen + 23);
        v34 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(v34, v35, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, 0LL);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        static_fields->__9__33_0 = v34;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__33_0, (int32_t)v34, v37, v38);
      }
      if ( !v22 )
        goto LABEL_34;
      CommonUI__OpenNotificationDialog(v22, v33, closedMessage, v34, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3451/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    IsOpen = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = (CommonUI_o *)IsOpen;
    v26 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v26 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    _9__33_1 = v26->static_fields->__9__33_1;
    v28 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__33_1 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v26->static_fields->__9;
      _9__33_1 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(_9__33_1, v29, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, 0LL);
      v30 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v30->__9__33_1 = _9__33_1;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v30->__9__33_1, (int32_t)_9__33_1, v31, v32);
    }
    if ( !v25 )
      goto LABEL_34;
    CommonUI__OpenNotificationDialog(v25, v28, v24, _9__33_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4A0C0EA & 1) == 0 )
  {
    sub_1B686D4(&Method_ActionExtensions_Call_bool___, method);
    sub_1B686D4(&System_Action_TypeInfo, v3);
    sub_1B686D4(&Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__, v4);
    byte_4A0C0EA = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2DA1268 *)Method_ActionExtensions_Call_bool___);
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  System_Action_o *v15; // x19

  if ( (byte_4A0C0EB & 1) == 0 )
  {
    sub_1B686D4(&Method_ActionExtensions_Call_bool___, finishCallback);
    sub_1B686D4(&System_Action_TypeInfo, v5);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__, v6);
    sub_1B686D4(&ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo, v7);
    byte_4A0C0EB = 1;
  }
  v8 = sub_1B68920(ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass32_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)v8,
    0LL);
  if ( !v8 )
    sub_1B68930(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)finishCallback, v13, v14);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2DA1268 *)Method_ActionExtensions_Call_bool___);
  v15 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v15, 0, 0, 0, 0, 0LL);
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
  const MethodInfo *v11; // x1
  char *Instance; // x0
  __int64 v13; // x1
  System_Action_o *v14; // x20
  __int64 v15; // x21
  System_Action_object__o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  ActionChain_o *v19; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  System_Action_array *v22; // x21

  if ( (byte_4A0C0E9 & 1) == 0 )
  {
    sub_1B686D4(&ActionChain_TypeInfo, method);
    sub_1B686D4(&Method_ActionExtensions_Call_bool___, v3);
    sub_1B686D4(&System_Action___TypeInfo, v4);
    sub_1B686D4(&System_Action_Action____TypeInfo, v5);
    sub_1B686D4(&System_Action_Action__TypeInfo, v6);
    sub_1B686D4(&System_Action_TypeInfo, v7);
    sub_1B686D4(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v8);
    sub_1B686D4(&Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, v9);
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    byte_4A0C0E9 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2DA1268 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v11);
  Instance = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v14 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, 0LL);
  v15 = sub_1B6877C(System_Action_Action____TypeInfo, 1LL);
  v16 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v16, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( !v15 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v15 + 32) = v16;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v16, v17, v18);
  v19 = (ActionChain_o *)sub_1B68920(ActionChain_TypeInfo);
  ActionChain___ctor_46345900(v19, (System_Action_Action__array *)v15, 0LL);
  Instance = (char *)sub_1B6877C(System_Action___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_11;
  v22 = (System_Action_array *)Instance;
  if ( !*((_DWORD *)Instance + 6) )
LABEL_12:
    sub_1B68938(Instance, v13);
  *((_QWORD *)Instance + 4) = v14;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(Instance + 32), (int32_t)v14, v20, v21);
  if ( !v19 || (Instance = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v19, v22, 0LL)) == 0LL )
LABEL_11:
    sub_1B68930(Instance, v13);
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
    sub_1B68930(v4, v5);
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
  const MethodInfo *v10; // x3

  v2 = this;
  if ( (byte_4A0C0F3 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_1B686D4(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_4A0C0F3 = 1;
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
    p_method = sub_1BBA6B4(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_1B68930(this, method);
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
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *anim; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  Il2CppObject *v18; // x0
  ClassBoardSelectViewManager_o **p_classBoardUIController_k__BackingField; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  System_Action_o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  struct ClassBoardUIController_o *v26; // x21
  System_Action_o *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo *v30; // x2
  struct IClassBoardResourceCatalog_o *v31; // x21
  IClassBoardResourceCatalog_c *v32; // x8
  ClassBoardUIController_o *v33; // x20
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x1
  struct IClassBoardResourceCatalog_o *v39; // x20
  IClassBoardResourceCatalog_c *v40; // x8
  ClassBoardUIController_o *v41; // x19
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  AtlasManagerUnit_o *v45; // x20
  const MethodInfo *v46; // x3

  v2 = this;
  if ( (byte_4A0C0F2 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_ClassBoardSelectViewManager_OnClickBack__, v3);
    sub_1B686D4(&Method_ClassBoardSelectViewManager_OpenHelp__, v4);
    sub_1B686D4(&IClassBoardResourceCatalog_TypeInfo, v5);
    sub_1B686D4(&LocalizationManager_TypeInfo, v6);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    sub_1B686D4(&StringLiteral_20441/*"img_txt_classscore_main"*/, v9);
    this = (ClassBoardSelectViewManager_o *)sub_1B686D4(&StringLiteral_3491/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, v10);
    byte_4A0C0F2 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_38;
  klass = resourceCatalog->klass;
  v13 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BBA6B4(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  v18 = UnityEngine_Object__Instantiate_object__49072196(
          anim,
          uiRoot,
          (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v2->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v18;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v2->fields._classBoardUIController_k__BackingField;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v2->fields._classBoardUIController_k__BackingField,
    (int32_t)v18,
    v20,
    v21);
  this = (ClassBoardSelectViewManager_o *)v2->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_38;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, method);
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  v23 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_38;
  classBoardUIController_k__BackingField->fields.onClickBack = v23;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (int32_t)v23,
    v24,
    v25);
  v26 = v2->fields._classBoardUIController_k__BackingField;
  v27 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v26 )
    goto LABEL_38;
  v26->fields.onClickHelp = v27;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v26->fields.onClickHelp, (int32_t)v27, v28, v29);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_38;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, v30);
  v31 = v2->fields.resourceCatalog;
  if ( !v31 )
    goto LABEL_38;
  v32 = v31->klass;
  v33 = v2->fields._classBoardUIController_k__BackingField;
  v34 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
  {
    v35 = &v32->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v35 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_22;
    }
    v36 = (__int64)&v32->vtable[*v35].method;
  }
  else
  {
LABEL_22:
    v36 = sub_1BBA6B4(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v36)(
                                            v31,
                                            *(_QWORD *)(v36 + 8));
  if ( !this )
    goto LABEL_38;
  if ( !v33 )
    goto LABEL_38;
  ClassBoardUIController__SetHeaderTitle(
    v33,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_20441/*"img_txt_classscore_main"*/,
    v37);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v2, v38);
  v39 = v2->fields.resourceCatalog;
  if ( !v39 )
    goto LABEL_38;
  v40 = v39->klass;
  v41 = v2->fields._classBoardUIController_k__BackingField;
  v42 = *(unsigned __int16 *)(&v39->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v39->klass->_2.bitflags2 + 3) )
  {
    v43 = &v40->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v43 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_31;
    }
    v44 = (__int64)&v40->vtable[*v43].method;
  }
  else
  {
LABEL_31:
    v44 = sub_1BBA6B4(v39, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v44)(
                                            v39,
                                            *(_QWORD *)(v44 + 8));
  if ( !this )
    goto LABEL_38;
  v45 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3491/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v41 )
LABEL_38:
    sub_1B68930(this, method);
  ClassBoardUIController__SetHeaderMessage(v41, v45, (System_String_o *)this, v46);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  ClassBoardResourceCatalogAssetBundle_o **v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  struct IClassBoardResourceCatalog_o *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_Action_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x1
  ClassBoardResourceCatalogAssetBundle_o *v32; // x20
  __int64 methodPtr_low; // x10
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x2
  __int64 v36; // x10

  if ( (byte_4A0C0E7 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, classBoardBackground);
    sub_1B686D4(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v9);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__, v10);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__, v11);
    sub_1B686D4(&ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo, v12);
    byte_4A0C0E7 = 1;
  }
  v13 = sub_1B68920(ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
  ClassBoardSelectViewManager___c__DisplayClass27_0___ctor(
    (ClassBoardSelectViewManager___c__DisplayClass27_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = classBoardBackground;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)classBoardBackground, v16, v17);
  *(_QWORD *)(v13 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)this, v18, v19);
  *(_QWORD *)(v13 + 32) = resourceCatalog;
  v20 = (ClassBoardResourceCatalogAssetBundle_o **)(v13 + 32);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)resourceCatalog, v21, v22);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)finishCallback, v23, v24);
  v25 = *(struct IClassBoardResourceCatalog_o **)(v13 + 32);
  this->fields.resourceCatalog = v25;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.resourceCatalog, (int32_t)v25, v26, v27);
  v28 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v13 + 48) = v28;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v13 + 48), (int32_t)v28, v29, v30);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v31)
    || (v32 = *v20) == 0LL
    || (methodPtr_low = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v32->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ClassBoardResourceCatalogAssetBundle_c *)v32->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 48), 0LL);
    return;
  }
  v34 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__,
    0LL);
  v36 = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v32->klass->vtable._0_Equals.methodPtr) < (unsigned int)v36
    || (ClassBoardResourceCatalogAssetBundle_c *)v32->klass->_2.typeHierarchy[v36 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_1B68930(v14, v15);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v32, v34, v35);
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
        sub_1B68938(this, method);
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
    sub_1B68930(this, method);
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
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 p_method; // x0

  v2 = this;
  if ( (byte_4A0C0E8 & 1) == 0 )
  {
    sub_1B686D4(&IClassBoardResourceCatalog_TypeInfo, method);
    this = (ClassBoardSelectViewManager_o *)sub_1B686D4(&StringLiteral_20441/*"img_txt_classscore_main"*/, v3);
    byte_4A0C0E8 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_13;
  klass = resourceCatalog->klass;
  v6 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BBA6B4(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_1B68930(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_20441/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__31_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0C0F8 & 1) == 0 )
  {
    sub_1B686D4(&Method_ActionExtensions_Call_bool___, method);
    byte_4A0C0F8 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2DA1268 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__30_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A0C0F7 & 1) == 0 )
  {
    sub_1B686D4(&Method_ActionExtensions_Call_bool___, method);
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    byte_4A0C0F7 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2DA1268 *)Method_ActionExtensions_Call_bool___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v5);
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardSelectViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0C0FA & 1) == 0 )
  {
    sub_1B686D4(&ClassBoardSelectViewManager___c_TypeInfo, v1);
    byte_4A0C0FA = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardSelectViewManager___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B68930(this, 0LL);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__42_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__34_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4A0C0FB & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4A0C0FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1B68930(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
    sub_1B68930(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_33417400(gameObject, 0.0, 0LL);
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
    sub_1B68930(this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ClassBoardBackground_o *classBoardBackground; // x0
  struct ClassBoardSelectViewManager_o *_4__this; // x8
  struct UITexture_o *bgTexture; // x20
  struct ClassBoardSelectViewManager_o *v11; // x8
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  struct ClassBoardSelectViewManager_o *v16; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  ClassBoardSelectViewManager___c_c *v18; // x0
  System_Action_object__o *_9__27_2; // x21
  Il2CppObject *v20; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct ClassBoardSelectViewManager_o *v24; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t monitor; // w8

  if ( (byte_4A0C0FC & 1) == 0 )
  {
    sub_1B686D4(&System_Action_ClassBoardSelectIconComponent__TypeInfo, method);
    sub_1B686D4(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___, v3);
    sub_1B686D4(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___, v4);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, v5);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__, v6);
    sub_1B686D4(&ClassBoardSelectViewManager___c_TypeInfo, v7);
    byte_4A0C0FC = 1;
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
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_25;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v11->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_1B68920(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v14, v15);
  }
  BasicHelper__ForEach_object_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_2E37140 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_25;
  v17 = (System_Collections_Generic_IEnumerable_T__o *)v16->fields.iconArray;
  v18 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v18 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__27_2 = (System_Action_object__o *)v18->static_fields->__9__27_2;
  if ( !_9__27_2 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__27_2 = (System_Action_object__o *)sub_1B68920(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(_9__27_2, v20, Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__27_2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_2, (int32_t)_9__27_2, v22, v23);
  }
  BasicHelper__ForEach_object_(
    v17,
    (System_Action_T__o *)_9__27_2,
    (const MethodInfo_2E37140 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_object_(
                                                     (System_Object_array *)v24->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_2E38B9C *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
  v24->fields.iconDefaultDepth = monitor;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_25:
    sub_1B68930(classBoardBackground, method);
  ClassBoardSelectViewManager__SetupClassBoardUIController((ClassBoardSelectViewManager_o *)classBoardBackground, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall ClassBoardSelectViewManager___c__DisplayClass27_0___StartUp_b__1(
        ClassBoardSelectViewManager___c__DisplayClass27_0_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  IClassBoardResourceCatalog_o *resourceCatalog; // x20
  Il2CppObject *_4__this; // x22
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A0C0FD & 1) == 0 )
  {
    sub_1B686D4(&System_Action_ClassBoardSelectIconComponent__TypeInfo, x);
    sub_1B686D4(&Method_ClassBoardSelectViewManager_OnClickIcon__, v5);
    byte_4A0C0FD = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v8 = (System_Action_object__o *)sub_1B68920(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_object____ctor(v8, _4__this, (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__, 0LL);
  if ( !x )
    sub_1B68930(v9, v10);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v8, 0LL);
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
  if ( (byte_4A0C0FE & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)sub_1B686D4(
                                                                    &Method_ActionExtensions_Call_bool___,
                                                                    method);
    byte_4A0C0FE = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2DA1268 *)Method_ActionExtensions_Call_bool___);
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

  if ( (byte_4A0C0FF & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0C0FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v4);
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
    sub_1B68930(this, method);
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
    sub_1B68930(this, x);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__3; // x21
  CommonUI_o *v8; // x20
  float fadeTime; // s8
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A0C100 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__, v4);
    byte_4A0C100 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v10, v11);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__maskFadeout(v8, 2, fadeTime, _9__3, 0LL);
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
    sub_1B68930(0LL, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, 0LL);
}