void __fastcall ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  SchedulerTaskBase_array *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  SchedulerTaskOrthostichy_o *v21; // x19
  __int64 v23; // x0

  if ( (byte_4BDFBE0 & 1) == 0 )
  {
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    byte_4BDFBE0 = 1;
  }
  v5 = (SchedulerTaskWaitTime_o *)sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v5, delay, 0LL);
  v6 = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v6 )
    sub_1C22094(0LL, v7);
  v14 = (SchedulerTaskBase_array *)v6;
  if ( v5 )
  {
    v6 = sub_1C21F74(v5, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !v14->max_length )
    goto LABEL_11;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)v14->m_Items, (int64_t)v5, v8, v9, v10, v11, v12, v13);
  if ( task )
  {
    v6 = sub_1C21F74(task, v14->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_12:
      v23 = sub_1C220B8(v6);
      sub_1C21F60(v23, 0LL);
    }
  }
  if ( v14->max_length <= 1 )
LABEL_11:
    sub_1C2209C(v6, v7);
  v14->m_Items[1] = task;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->m_Items[1], (int64_t)task, v15, v16, v17, v18, v19, v20);
  v21 = (SchedulerTaskOrthostichy_o *)sub_1C22084(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v21, v14, 0LL);
  return (SchedulerTaskBase_o *)v21;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4BDFBD2 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4BDFBD2 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4BDFBD3 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4BDFBD3 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               2,
               0LL,
               (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_T__o *v19; // x21
  System_Action_object__o *_9__24_0; // x22
  Il2CppObject *v21; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Object_array *v29; // x19
  System_Func_object__bool__o *v30; // x21
  Il2CppObject *object; // x0

  if ( (byte_4BDFBD4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_AnimationEvent__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_Find_AnimationEvent___);
    sub_1C21E38(&Method_BasicHelper_ForEach_AnimationEvent___);
    sub_1C21E38(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__);
    sub_1C21E38(&ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C21E38(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4BDFBD4 = 1;
  }
  v8 = sub_1C22084(ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = eventName,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)eventName, v11, v12, v13, v14, v15, v16),
        !animClip) )
  {
    sub_1C22094(v9, v10);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
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
    _9__24_0 = (System_Action_object__o *)sub_1C22084(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(_9__24_0, v21, Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Action_AnimationEvent__o *)_9__24_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__24_0,
      (int64_t)_9__24_0,
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
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v19, 0LL);
  v29 = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v30 = (System_Func_object__bool__o *)sub_1C22084(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__,
    0LL);
  object = BasicHelper__Find_object_(
             v29,
             (System_Func_T__bool__o *)v30,
             (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_AnimationEvent___);
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

  if ( (byte_4BDFBD1 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4BDFBD1 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4BDFBDF & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFBDF = 1;
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
          v10 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1C22084(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v10, Clip, v11),
          !v10) )
    {
      sub_1C22094(ClassBoardEnterAnimName, v5);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *current; // x1
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  UnityEngine_AnimationState_o *v19; // x0
  System_String_o *name; // x0
  System_String_o *v21; // x22
  UnityEngine_Animation_o *v22; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  ClassBoardSelectIconComponent_AnimClipInfo_o *v24; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x0
  __int64 v27; // x1
  UnityEngine_Animation_o *v28; // x23
  int64_t v29; // x21
  SchedulerTaskBase_TaskCallback_o *v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDFBE5 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&SchedulerTaskAnimation_TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__);
    sub_1C21E38(&ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo);
    byte_4BDFBE5 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  if ( iconCompoentList )
  {
    if ( iconCompoentList->fields._size )
    {
      v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v4,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v52,
        (System_Collections_Generic_List_object__o *)iconCompoentList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v53 = v52;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v53,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v5 = sub_1C22084(ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v5, 0LL);
        if ( !v5 )
          sub_1C22094(v6, v7);
        current = v53.fields._current;
        *(_QWORD *)(v5 + 16) = v53.fields._current;
        v15 = v5 + 16;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)current, v8, v9, v10, v11, v12, v13);
        v18 = *(_QWORD *)(v5 + 16);
        if ( !v18 )
          sub_1C22094(v16, v17);
        v19 = *(UnityEngine_AnimationState_o **)(v18 + 136);
        if ( v19 )
        {
          name = UnityEngine_AnimationState__get_name(v19, 0LL);
          v18 = *(_QWORD *)v15;
          if ( !*(_QWORD *)v15 )
            sub_1C22094(name, v17);
          v21 = name;
        }
        else
        {
          v21 = 0LL;
        }
        v22 = *(UnityEngine_Animation_o **)(v18 + 88);
        if ( !v22 )
          sub_1C22094(0LL, v17);
        Clip = UnityEngine_Animation__GetClip(v22, v21, 0LL);
        v24 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1C22084(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v24, Clip, v25);
        if ( !*(_QWORD *)v15 )
          sub_1C22094(v26, v27);
        v28 = *(UnityEngine_Animation_o **)(*(_QWORD *)v15 + 88LL);
        v29 = sub_1C22084(SchedulerTaskAnimation_TypeInfo);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v29, v28, v21, 0LL);
        v30 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v30,
          (Il2CppObject *)v5,
          Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v29 )
          sub_1C22094(v31, v32);
        *(_QWORD *)(v29 + 32) = v30;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v30, v33, v34, v35, v36, v37, v38);
        if ( !v4 )
          sub_1C22094(v39, v40);
        items = v4->fields._items;
        v48 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1C22094(v39, v40);
        size = v4->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            (Il2CppObject *)v29,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v29;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v50 + 4), v29, v41, v42, v43, v44, v45, v46);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v53,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      iconCompoentList = (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor_42556168(
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_object__o *v16; // x19

  if ( (byte_4BDFBE4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    sub_1C21E38(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__);
    sub_1C21E38(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4BDFBE4 = 1;
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
      _9__42_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__42_0,
        v6,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__,
        0LL);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      static_fields->__9__42_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__42_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
        (int64_t)_9__42_0,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = System_Linq_Enumerable__Where_object_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__42_0,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v14,
                                                                                 (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v16;
  }
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *iconRootObj; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Object_o *selectedClassIcon; // x21
  SchedulerTaskParallel_o *v13; // x20
  struct ClassBoardSelectIconComponent_o *v14; // x8
  struct ClassBoardSelectIconComponent_o *v15; // x8
  System_String_o *v16; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v18; // x23
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  float v21; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v23; // x21
  SchedulerTaskAnimation_o *v24; // x25
  const MethodInfo *v25; // x1
  SchedulerTaskBase_o *v26; // x21
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v29; // x24
  SchedulerTaskBase_TaskCallback_o *v30; // x25
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x1
  SchedulerTaskBase_o *v38; // x0
  struct ClassBoardSelectIconComponent_o *v39; // x1
  int64_t v40; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct ClassBoardSelectIconComponent_o *v47; // x8
  UnityEngine_Animation_o *v48; // x19
  int64_t v49; // x24
  SchedulerTaskBase_TaskCallback_o *v50; // x19
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UnityEngine_GameObject_o *v57; // x19
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v79; // x0

  if ( (byte_4BDFBDD & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SchedulerTaskAnimation_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__);
    sub_1C21E38(&ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo);
    byte_4BDFBDD = 1;
  }
  v3 = sub_1C22084(ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_31;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( ((unsigned __int8)iconRootObj & 1) == 0 )
  {
    v14 = this->fields.selectedClassIcon;
    if ( v14 )
    {
      iconRootObj = v14->fields.iconRootObj;
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
            v15 = this->fields.selectedClassIcon;
            if ( v15 )
            {
              v16 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v15->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v16, 0LL);
                v18 = sub_1C22084(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v18,
                  Clip,
                  v19);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v20);
                if ( v18 )
                {
                  v21 = *(float *)(v18 + 28);
                  anim = this->fields.anim;
                  v23 = (System_String_o *)iconRootObj;
                  v24 = (SchedulerTaskAnimation_o *)sub_1C22084(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v24, anim, v23, 0LL);
                  v26 = ClassBoardSelectViewManager__DelayAttachedTask(v21, (SchedulerTaskBase_o *)v24, v25);
                  v27 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v27 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v3 + 16) = DEFAULT_FADE_TIME;
                  v29 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v29, DEFAULT_FADE_TIME, 0LL);
                  v30 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v30,
                    (Il2CppObject *)v3,
                    Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v29 )
                  {
                    *(_QWORD *)(v29 + 24) = v30;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 24), (int64_t)v30, v31, v32, v33, v34, v35, v36);
                    v38 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v18 + 24),
                            (SchedulerTaskBase_o *)v29,
                            v37);
                    v39 = this->fields.selectedClassIcon;
                    v40 = (int64_t)v38;
                    *(_QWORD *)(v3 + 24) = v39;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v39, v41, v42, v43, v44, v45, v46);
                    v47 = this->fields.selectedClassIcon;
                    if ( v47 )
                    {
                      v48 = v47->fields.anim;
                      v49 = sub_1C22084(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v49, v48, v16, 0LL);
                      v50 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v50,
                        (Il2CppObject *)v3,
                        Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v49 )
                      {
                        *(_QWORD *)(v49 + 32) = v50;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)(v49 + 32),
                          (int64_t)v50,
                          v51,
                          v52,
                          v53,
                          v54,
                          v55,
                          v56);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v57 = iconRootObj;
                          v58 = sub_1C21F74(v49, iconRootObj->klass->_1.element_class);
                          if ( v58 )
                          {
                            if ( !LODWORD(v57[1].klass) )
                              goto LABEL_32;
                            v57[1].monitor = (void *)v49;
                            sub_1C21DDC(
                              (PartyOrganizationUtility_o *)&v57[1].monitor,
                              v49,
                              v60,
                              v61,
                              v62,
                              v63,
                              v64,
                              v65);
                            if ( !v26 || (v58 = sub_1C21F74(v26, v57->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v57[1].klass) <= 1 )
                                goto LABEL_32;
                              *(_QWORD *)&v57[1].fields.m_CachedPtr = v26;
                              sub_1C21DDC(
                                (PartyOrganizationUtility_o *)&v57[1].fields,
                                (int64_t)v26,
                                v66,
                                v67,
                                v68,
                                v69,
                                v70,
                                v71);
                              if ( !v40 || (v58 = sub_1C21F74(v40, v57->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v57[1].klass) > 2 )
                                {
                                  v57[2].klass = (UnityEngine_GameObject_c *)v40;
                                  sub_1C21DDC((PartyOrganizationUtility_o *)&v57[2], v40, v72, v73, v74, v75, v76, v77);
                                  v13 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
                                  SchedulerTaskParallel___ctor(v13, (SchedulerTaskBase_array *)v57, 0LL);
                                  return (SchedulerTaskBase_o *)v13;
                                }
LABEL_32:
                                sub_1C2209C(v58, v59);
                              }
                            }
                          }
                          v79 = sub_1C220B8(v58);
                          sub_1C21F60(v79, 0LL);
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
    sub_1C22094(iconRootObj, v5);
  }
  v13 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v13, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v13;
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
  int64_t v12; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  SchedulerTaskBase_TaskCallback_o *v19; // x21
  Il2CppObject *v20; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  SchedulerTaskBase_array *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  SchedulerTaskParallel_o *v41; // x19
  __int64 v43; // x0

  if ( (byte_4BDFBDC & 1) == 0 )
  {
    sub_1C21E38(&SchedulerTaskAnimation_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__);
    sub_1C21E38(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_6729/*"FadeStart"*/);
    byte_4BDFBDC = 1;
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
                (System_String_o *)StringLiteral_6729/*"FadeStart"*/,
                0.0,
                v7);
  anim = this->fields.anim;
  v10 = EventTime;
  v11 = (SchedulerTaskAnimation_o *)sub_1C22084(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v11, anim, v5, 0LL);
  v12 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v12, v10, 0LL);
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
    v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v19,
      v20,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__,
      0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v19;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__34_0, (int64_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !v12
    || (*(_QWORD *)(v12 + 32) = v19,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)v19, v13, v14, v15, v16, v17, v18),
        (FirstTransitionAnimName = (void *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_18:
    sub_1C22094(FirstTransitionAnimName, v4);
  }
  v34 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v11 )
  {
    FirstTransitionAnimName = (void *)sub_1C21F74(v11, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !v34->max_length )
    goto LABEL_19;
  v34->m_Items[0] = (SchedulerTaskBase_o *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)v34->m_Items, (int64_t)v11, v28, v29, v30, v31, v32, v33);
  FirstTransitionAnimName = (void *)sub_1C21F74(v12, v34->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v43 = sub_1C220B8(FirstTransitionAnimName);
    sub_1C21F60(v43, 0LL);
  }
  if ( v34->max_length <= 1 )
LABEL_19:
    sub_1C2209C(FirstTransitionAnimName, v4);
  v34->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v34->m_Items[1], v12, v35, v36, v37, v38, v39, v40);
  v41 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v41, v34, 0LL);
  return (SchedulerTaskBase_o *)v41;
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *selectedClassIcon; // x22
  SchedulerTaskParallel_o *v19; // x19
  struct ClassBoardSelectIconComponent_o *v20; // x8
  System_String_o *v21; // x24
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v23; // x25
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  float v26; // s8
  UnityEngine_Animation_o *anim; // x23
  System_String_o *v28; // x22
  SchedulerTaskAnimation_o *v29; // x26
  const MethodInfo *v30; // x1
  SchedulerTaskBase_o *v31; // x0
  float v32; // s8
  int64_t v33; // x23
  int64_t v34; // x22
  Il2CppObject *v35; // x26
  SchedulerTaskBase_TaskCallback_o *v36; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  AvalonSceneManager_c *v43; // x0
  float DEFAULT_FADE_TIME; // s0
  System_Func_bool__o *v45; // x26
  __int64 v46; // x19
  SchedulerTaskBase_TaskCallback_o *v47; // x26
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x1
  int64_t v55; // x19
  UnityEngine_Animation_o *v56; // x20
  SchedulerTaskAnimation_o *v57; // x21
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  SchedulerTaskBase_array *v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v84; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDFBDE & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SchedulerTaskAnimation_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__);
    sub_1C21E38(&ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
    byte_4BDFBDE = 1;
  }
  v5 = sub_1C22084(ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_36;
  *(_DWORD *)(v5 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v9 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          iconArray,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  this->fields.selectedClassIcon = (struct ClassBoardSelectIconComponent_o *)v10;
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectedClassIcon, (int64_t)v10, v12, v13, v14, v15, v16, v17);
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
          v20 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v20 )
          {
            iconRootObj = (__int64)v20->fields.classIconUi;
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
                  v21 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v21, 0LL);
                    v23 = sub_1C22084(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v23,
                      Clip,
                      v24);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v25);
                    if ( v23 )
                    {
                      v26 = *(float *)(v23 + 28);
                      anim = this->fields.anim;
                      v28 = (System_String_o *)iconRootObj;
                      v29 = (SchedulerTaskAnimation_o *)sub_1C22084(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor(v29, anim, v28, 0LL);
                      v31 = ClassBoardSelectViewManager__DelayAttachedTask(v26, (SchedulerTaskBase_o *)v29, v30);
                      v32 = *(float *)(v23 + 44);
                      v33 = (int64_t)v31;
                      v34 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v34, v32, 0LL);
                      v35 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v36 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v36,
                        v35,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v34 )
                      {
                        *(_QWORD *)(v34 + 32) = v36;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)(v34 + 32),
                          (int64_t)v36,
                          v37,
                          v38,
                          v39,
                          v40,
                          v41,
                          v42);
                        v43 = AvalonSceneManager_TypeInfo;
                        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v43 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v5 + 20) = 1;
                        *(float *)(v5 + 24) = DEFAULT_FADE_TIME;
                        v45 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
                        System_Func_bool____ctor(
                          v45,
                          (Il2CppObject *)v5,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__,
                          0LL);
                        v46 = sub_1C22084(SchedulerTaskWaitWhile_TypeInfo);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v46, v45, 0LL);
                        v47 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v47,
                          (Il2CppObject *)v5,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v46 )
                        {
                          *(_QWORD *)(v46 + 24) = v47;
                          sub_1C21DDC(
                            (PartyOrganizationUtility_o *)(v46 + 24),
                            (int64_t)v47,
                            v48,
                            v49,
                            v50,
                            v51,
                            v52,
                            v53);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v23 + 24),
                                                   (SchedulerTaskBase_o *)v46,
                                                   v54);
                          if ( *p_selectedClassIcon )
                          {
                            v55 = iconRootObj;
                            v56 = (*p_selectedClassIcon)->fields.anim;
                            v57 = (SchedulerTaskAnimation_o *)sub_1C22084(SchedulerTaskAnimation_TypeInfo);
                            SchedulerTaskAnimation___ctor(v57, v56, v21, 0LL);
                            iconRootObj = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v64 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v57
                                || (iconRootObj = sub_1C21F74(v57, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v64->max_length )
                                  goto LABEL_37;
                                v64->m_Items[0] = (SchedulerTaskBase_o *)v57;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)v64->m_Items,
                                  (int64_t)v57,
                                  v58,
                                  v59,
                                  v60,
                                  v61,
                                  v62,
                                  v63);
                                if ( !v33 || (iconRootObj = sub_1C21F74(v33, v64->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v64->max_length <= 1 )
                                    goto LABEL_37;
                                  v64->m_Items[1] = (SchedulerTaskBase_o *)v33;
                                  sub_1C21DDC(
                                    (PartyOrganizationUtility_o *)&v64->m_Items[1],
                                    v33,
                                    v65,
                                    v66,
                                    v67,
                                    v68,
                                    v69,
                                    v70);
                                  iconRootObj = sub_1C21F74(v34, v64->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v64->max_length <= 2 )
                                      goto LABEL_37;
                                    v64->m_Items[2] = (SchedulerTaskBase_o *)v34;
                                    sub_1C21DDC(
                                      (PartyOrganizationUtility_o *)&v64->m_Items[2],
                                      v34,
                                      v71,
                                      v72,
                                      v73,
                                      v74,
                                      v75,
                                      v76);
                                    if ( !v55 || (iconRootObj = sub_1C21F74(v55, v64->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v64->max_length > 3 )
                                      {
                                        v64->m_Items[3] = (SchedulerTaskBase_o *)v55;
                                        sub_1C21DDC(
                                          (PartyOrganizationUtility_o *)&v64->m_Items[3],
                                          v55,
                                          v77,
                                          v78,
                                          v79,
                                          v80,
                                          v81,
                                          v82);
                                        v19 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
                                        SchedulerTaskParallel___ctor(v19, v64, 0LL);
                                        return (SchedulerTaskBase_o *)v19;
                                      }
LABEL_37:
                                      sub_1C2209C(iconRootObj, v7);
                                    }
                                  }
                                }
                              }
                              v84 = sub_1C220B8(iconRootObj);
                              sub_1C21F60(v84, 0LL);
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
    sub_1C22094(iconRootObj, v7);
  }
  v19 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v19, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v19;
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
        sub_1C2209C(this, method);
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1C22094(this, method);
  }
}


void __fastcall ClassBoardSelectViewManager__Init(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0
  System_Object_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x0
  System_String_o *monitor; // x19

  if ( (byte_4BDFBD5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDFBD5 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v4 = System_Linq_Enumerable__ToArray_object_(
         v3,
         (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.animationStateArray, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v12);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.bgmId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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

  if ( (byte_4BDFBE3 & 1) == 0 )
  {
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDFBE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v4 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_39918256(v4, SceneName, 0LL);
  if ( !Instance )
    sub_1C22094(v5, v6);
  AvalonSceneManager__transitionScene_39529400((AvalonSceneManager_o *)Instance, 32, 0LL, 1, (Il2CppObject *)v4, 0LL);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_o *v29; // x21
  System_Action_o *v30; // x22
  Il2CppObject *v31; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BDFBDB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__);
    sub_1C21E38(&ClassBoardSelectViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_3525/*"CLASS_BOARD_BASE_UNRELEASED"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDFBDB = 1;
  }
  v5 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C21E50(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
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
        sub_1C22094(IsOpen, v8);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = icon->fields._Entity_k__BackingField;
      v14 = (CommonUI_o *)Instance;
      if ( v13 )
        closedMessage = v13->fields.closedMessage;
      else
        closedMessage = 0LL;
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
        v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v30, v31, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, 0LL);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        static_fields->__9__33_0 = v30;
        sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__33_0, (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
      if ( !v14 )
        goto LABEL_34;
      CommonUI__OpenNotificationDialog(v14, v29, closedMessage, v30, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3525/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    IsOpen = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__33_1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(_9__33_1, v21, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, 0LL);
      v22 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v22->__9__33_1 = _9__33_1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v22->__9__33_1, (int64_t)_9__33_1, v23, v24, v25, v26, v27, v28);
    }
    if ( !v17 )
      goto LABEL_34;
    CommonUI__OpenNotificationDialog(v17, v20, v16, _9__33_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BDFBD9 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__);
    byte_4BDFBD9 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *v20; // x19

  if ( (byte_4BDFBDA & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__);
    sub_1C21E38(&ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
    byte_4BDFBDA = 1;
  }
  v5 = sub_1C22084(ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
  v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v20, 0, 0, 0, 0, 0LL);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  ActionChain_o *v15; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_array *v22; // x21

  if ( (byte_4BDFBD8 & 1) == 0 )
  {
    sub_1C21E38(&ActionChain_TypeInfo);
    sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    sub_1C21E38(&System_Action___TypeInfo);
    sub_1C21E38(&System_Action_Action____TypeInfo);
    sub_1C21E38(&System_Action_Action__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDFBD8 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v3);
  Instance = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, 0LL);
  v7 = sub_1C21EE0(System_Action_Action____TypeInfo, 1LL);
  v8 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( !v7 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v7 + 32) = v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (ActionChain_o *)sub_1C22084(ActionChain_TypeInfo);
  ActionChain___ctor_47730872(v15, (System_Action_Action__array *)v7, 0LL);
  Instance = (char *)sub_1C21EE0(System_Action___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_11;
  v22 = (System_Action_array *)Instance;
  if ( !*((_DWORD *)Instance + 6) )
LABEL_12:
    sub_1C2209C(Instance, v5);
  *((_QWORD *)Instance + 4) = v6;
  sub_1C21DDC((PartyOrganizationUtility_o *)(Instance + 32), (int64_t)v6, v16, v17, v18, v19, v20, v21);
  if ( !v15 || (Instance = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v15, v22, 0LL)) == 0LL )
LABEL_11:
    sub_1C22094(Instance, v5);
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
    sub_1C22094(v4, v5);
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
  if ( (byte_4BDFBE2 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_1C21E38(&IClassBoardResourceCatalog_TypeInfo);
    byte_4BDFBE2 = 1;
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
    p_method = sub_1C73E18(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_1C22094(this, method);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  System_Action_o *v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct ClassBoardUIController_o *v26; // x21
  System_Action_o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct IClassBoardResourceCatalog_o *v34; // x21
  IClassBoardResourceCatalog_c *v35; // x8
  ClassBoardUIController_o *v36; // x20
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  const MethodInfo *v40; // x1
  struct IClassBoardResourceCatalog_o *v41; // x20
  IClassBoardResourceCatalog_c *v42; // x8
  ClassBoardUIController_o *v43; // x19
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  AtlasManagerUnit_o *v47; // x20

  v2 = this;
  if ( (byte_4BDFBE1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager_OnClickBack__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager_OpenHelp__);
    sub_1C21E38(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20884/*"img_txt_classscore_main"*/);
    this = (ClassBoardSelectViewManager_o *)sub_1C21E38(&StringLiteral_3565/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/);
    byte_4BDFBE1 = 1;
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
    p_method = sub_1C73E18(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  v10 = UnityEngine_Object__Instantiate_object__50551272(
          anim,
          uiRoot,
          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v2->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v10;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v2->fields._classBoardUIController_k__BackingField;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields._classBoardUIController_k__BackingField,
    (int64_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this = (ClassBoardSelectViewManager_o *)v2->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_38;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0LL);
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_38;
  classBoardUIController_k__BackingField->fields.onClickBack = v19;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = v2->fields._classBoardUIController_k__BackingField;
  v27 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v26 )
    goto LABEL_38;
  v26->fields.onClickHelp = v27;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v26->fields.onClickHelp, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_38;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, 0LL);
  v34 = v2->fields.resourceCatalog;
  if ( !v34 )
    goto LABEL_38;
  v35 = v34->klass;
  v36 = v2->fields._classBoardUIController_k__BackingField;
  v37 = *(unsigned __int16 *)(&v34->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v34->klass->_2.bitflags2 + 3) )
  {
    v38 = &v35->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v38 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_22;
    }
    v39 = (__int64)&v35->vtable[*v38].method;
  }
  else
  {
LABEL_22:
    v39 = sub_1C73E18(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v39)(
                                            v34,
                                            *(_QWORD *)(v39 + 8));
  if ( !this )
    goto LABEL_38;
  if ( !v36 )
    goto LABEL_38;
  ClassBoardUIController__SetHeaderTitle(
    v36,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_20884/*"img_txt_classscore_main"*/,
    0LL);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v2, v40);
  v41 = v2->fields.resourceCatalog;
  if ( !v41 )
    goto LABEL_38;
  v42 = v41->klass;
  v43 = v2->fields._classBoardUIController_k__BackingField;
  v44 = *(unsigned __int16 *)(&v41->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v41->klass->_2.bitflags2 + 3) )
  {
    v45 = &v42->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v45 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_31;
    }
    v46 = (__int64)&v42->vtable[*v45].method;
  }
  else
  {
LABEL_31:
    v46 = sub_1C73E18(v41, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v46)(
                                            v41,
                                            *(_QWORD *)(v46 + 8));
  if ( !this )
    goto LABEL_38;
  v47 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3565/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v43 )
LABEL_38:
    sub_1C22094(this, method);
  ClassBoardUIController__SetHeaderMessage(v43, v47, (System_String_o *)this, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  ClassBoardResourceCatalogAssetBundle_o **v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct IClassBoardResourceCatalog_o *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Action_o *v44; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  const MethodInfo *v51; // x1
  ClassBoardResourceCatalogAssetBundle_o *v52; // x20
  __int64 methodPtr_low; // x10
  System_Action_o *v54; // x21
  __int64 v55; // x10

  if ( (byte_4BDFBD6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__);
    sub_1C21E38(&ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
    byte_4BDFBD6 = 1;
  }
  v9 = sub_1C22084(ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = classBoardBackground;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)classBoardBackground, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = resourceCatalog;
  v24 = (ClassBoardResourceCatalogAssetBundle_o **)(v9 + 32);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)resourceCatalog, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v9 + 40) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)finishCallback, v31, v32, v33, v34, v35, v36);
  v37 = *(struct IClassBoardResourceCatalog_o **)(v9 + 32);
  this->fields.resourceCatalog = v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.resourceCatalog, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v9,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v9 + 48) = v44;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)v44, v45, v46, v47, v48, v49, v50);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v51)
    || (v52 = *v24) == 0LL
    || (methodPtr_low = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v52->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ClassBoardResourceCatalogAssetBundle_c *)v52->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0LL);
    return;
  }
  v54 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v9,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__,
    0LL);
  v55 = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v52->klass->vtable._0_Equals.methodPtr) < (unsigned int)v55
    || (ClassBoardResourceCatalogAssetBundle_c *)v52->klass->_2.typeHierarchy[v55 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_1C22094(v10, v11);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v52, v54, 0LL);
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
        sub_1C2209C(this, method);
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
    sub_1C22094(this, method);
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
  if ( (byte_4BDFBD7 & 1) == 0 )
  {
    sub_1C21E38(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardSelectViewManager_o *)sub_1C21E38(&StringLiteral_20884/*"img_txt_classscore_main"*/);
    byte_4BDFBD7 = 1;
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
    p_method = sub_1C73E18(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_1C22094(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_20884/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__31_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFBE7 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    byte_4BDFBE7 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__30_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDFBE6 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDFBE6 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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
  sub_1C21DDC(
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDFBE8 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4BDFBE8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardSelectViewManager___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__42_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, (const MethodInfo *)x);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__34_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4BDFBE9 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDFBE9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C22094(Instance, v3);
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
    sub_1C22094(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34799788(gameObject, 0.0, 0LL);
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
    sub_1C22094(this, 0LL);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct ClassBoardSelectViewManager_o *v15; // x8
  System_Collections_Generic_IEnumerable_T__o *v16; // x20
  ClassBoardSelectViewManager___c_c *v17; // x0
  System_Action_object__o *_9__27_2; // x21
  Il2CppObject *v19; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct ClassBoardSelectViewManager_o *v27; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t monitor; // w8

  if ( (byte_4BDFBEA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
    sub_1C21E38(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__);
    sub_1C21E38(&ClassBoardSelectViewManager___c_TypeInfo);
    byte_4BDFBEA = 1;
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
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_1C22084(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  BasicHelper__ForEach_object_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
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
    _9__27_2 = (System_Action_object__o *)sub_1C22084(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(_9__27_2, v19, Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__27_2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__27_2,
      (int64_t)_9__27_2,
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
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_object_(
                                                     (System_Object_array *)v27->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
    sub_1C22094(classBoardBackground, method);
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

  if ( (byte_4BDFBEB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_ClassBoardSelectIconComponent__TypeInfo);
    sub_1C21E38(&Method_ClassBoardSelectViewManager_OnClickIcon__);
    byte_4BDFBEB = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v7 = (System_Action_object__o *)sub_1C22084(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_object____ctor(v7, _4__this, (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__, 0LL);
  if ( !x )
    sub_1C22094(v8, v9);
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
  if ( (byte_4BDFBEC & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    byte_4BDFBEC = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
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

  if ( (byte_4BDFBED & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDFBED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, x);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDFBEE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__);
    byte_4BDFBEE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
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
    sub_1C22094(0LL, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, method);
}