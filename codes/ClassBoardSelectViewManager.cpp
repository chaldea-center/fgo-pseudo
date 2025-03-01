void __fastcall ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  SchedulerTaskBase_array *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  SchedulerTaskOrthostichy_o *v23; // x19
  __int64 v25; // x0

  if ( (byte_4C00E7E & 1) == 0 )
  {
    sub_1C2E12C(&SchedulerTaskBase___TypeInfo, method);
    sub_1C2E12C(&SchedulerTaskOrthostichy_TypeInfo, v5);
    sub_1C2E12C(&SchedulerTaskWaitTime_TypeInfo, v6);
    byte_4C00E7E = 1;
  }
  v7 = (SchedulerTaskWaitTime_o *)sub_1C2E378(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v7, delay, 0LL);
  v8 = sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v8 )
    sub_1C2E388(0LL, v9);
  v16 = (SchedulerTaskBase_array *)v8;
  if ( v7 )
  {
    v8 = sub_1C2E268(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
      goto LABEL_12;
  }
  if ( !v16->max_length )
    goto LABEL_11;
  v16->m_Items[0] = (SchedulerTaskBase_o *)v7;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v16->m_Items, (int64_t)v7, v10, v11, v12, v13, v14, v15);
  if ( task )
  {
    v8 = sub_1C2E268(task, v16->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_12:
      v25 = sub_1C2E3AC(v8);
      sub_1C2E254(v25, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
LABEL_11:
    sub_1C2E390(v8, v9);
  v16->m_Items[1] = task;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v16->m_Items[1], (int64_t)task, v17, v18, v19, v20, v21, v22);
  v23 = (SchedulerTaskOrthostichy_o *)sub_1C2E378(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v23, v16, 0LL);
  return (SchedulerTaskBase_o *)v23;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_4C00E70 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4C00E70 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_2FC01A4 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4C00E71 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4C00E71 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               2,
               0LL,
               (const MethodInfo_2FC01A4 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_AnimationEvent_array *events; // x0
  ClassBoardSelectViewManager___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_T__o *v26; // x21
  System_Action_object__o *_9__24_0; // x22
  Il2CppObject *v28; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Object_array *v36; // x19
  System_Func_object__bool__o *v37; // x21
  Il2CppObject *object; // x0

  if ( (byte_4C00E72 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_AnimationEvent__TypeInfo, animClip);
    sub_1C2E12C(&Method_BasicHelper_Find_AnimationEvent___, v8);
    sub_1C2E12C(&Method_BasicHelper_ForEach_AnimationEvent___, v9);
    sub_1C2E12C(&System_Func_AnimationEvent__bool__TypeInfo, v10);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, v11);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__, v12);
    sub_1C2E12C(&ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo, v13);
    sub_1C2E12C(&ClassBoardSelectViewManager___c_TypeInfo, v14);
    byte_4C00E72 = 1;
  }
  v15 = sub_1C2E378(ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = eventName,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)eventName, v18, v19, v20, v21, v22, v23),
        !animClip) )
  {
    sub_1C2E388(v16, v17);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v25 = ClassBoardSelectViewManager___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v25 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__24_0 = (System_Action_object__o *)v25->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__24_0 = (System_Action_object__o *)sub_1C2E378(System_Action_AnimationEvent__TypeInfo);
    System_Action_object____ctor(_9__24_0, v28, Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Action_AnimationEvent__o *)_9__24_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__24_0,
      (int64_t)_9__24_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  BasicHelper__ForEach_object_(
    v26,
    (System_Action_T__o *)_9__24_0,
    (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v26, 0LL);
  v36 = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v37 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_AnimationEvent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v37,
    (Il2CppObject *)v15,
    Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__,
    0LL);
  object = BasicHelper__Find_object_(
             v36,
             (System_Func_T__bool__o *)v37,
             (const MethodInfo_2FBCE08 *)Method_BasicHelper_Find_AnimationEvent___);
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

  if ( (byte_4C00E6F & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_4C00E6F = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_2FC01A4 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_4C00E7D & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4C00E7D = 1;
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
          v11 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1C2E378(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v11, Clip, v12),
          !v11) )
    {
      sub_1C2E388(ClassBoardEnterAnimName, v6);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *current; // x1
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
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  __int64 v40; // x1
  UnityEngine_Animation_o *v41; // x23
  int64_t v42; // x21
  SchedulerTaskBase_TaskCallback_o *v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-80h] BYREF

  v3 = (System_Collections_Generic_List_object__o *)iconCompoentList;
  if ( (byte_4C00E83 & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, iconCompoentList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11);
    sub_1C2E12C(&SchedulerTaskAnimation_TypeInfo, v12);
    sub_1C2E12C(&SchedulerTaskParallel_TypeInfo, v13);
    sub_1C2E12C(&SchedulerTaskBase_TaskCallback_TypeInfo, v14);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__, v15);
    sub_1C2E12C(&ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo, v16);
    byte_4C00E83 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  if ( v3 )
  {
    if ( v3->fields._size )
    {
      v17 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v17,
        (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v65,
        v3,
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v66 = v65;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v66,
                (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v18 = sub_1C2E378(ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0LL);
        if ( !v18 )
          sub_1C2E388(v19, v20);
        current = v66.fields._current;
        *(_QWORD *)(v18 + 16) = v66.fields._current;
        v28 = v18 + 16;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)current, v21, v22, v23, v24, v25, v26);
        v31 = *(_QWORD *)(v18 + 16);
        if ( !v31 )
          sub_1C2E388(v29, v30);
        v32 = *(UnityEngine_AnimationState_o **)(v31 + 136);
        if ( v32 )
        {
          name = UnityEngine_AnimationState__get_name(v32, 0LL);
          v31 = *(_QWORD *)v28;
          if ( !*(_QWORD *)v28 )
            sub_1C2E388(name, v30);
          v34 = name;
        }
        else
        {
          v34 = 0LL;
        }
        v35 = *(UnityEngine_Animation_o **)(v31 + 88);
        if ( !v35 )
          sub_1C2E388(0LL, v30);
        Clip = UnityEngine_Animation__GetClip(v35, v34, 0LL);
        v37 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1C2E378(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v37, Clip, v38);
        if ( !*(_QWORD *)v28 )
          sub_1C2E388(v39, v40);
        v41 = *(UnityEngine_Animation_o **)(*(_QWORD *)v28 + 88LL);
        v42 = sub_1C2E378(SchedulerTaskAnimation_TypeInfo);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v42, v41, v34, 0LL);
        v43 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v43,
          (Il2CppObject *)v18,
          Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v42 )
          sub_1C2E388(v44, v45);
        *(_QWORD *)(v42 + 32) = v43;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)v43, v46, v47, v48, v49, v50, v51);
        if ( !v17 )
          sub_1C2E388(v52, v53);
        items = v17->fields._items;
        v61 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1C2E388(v52, v53);
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v42,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v63[4] = (Il2CppClass *)v42;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v63 + 4), v42, v54, v55, v56, v57, v58, v59);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v66,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      v3 = (System_Collections_Generic_List_object__o *)sub_1C2E378(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor_42645364(
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_object__o *v22; // x19

  if ( (byte_4C00E82 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___, method);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___, v3);
    sub_1C2E12C(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo, v6);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__, v7);
    sub_1C2E12C(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    byte_4C00E82 = 1;
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
      _9__42_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__42_0,
        v12,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__,
        0LL);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      static_fields->__9__42_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__42_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
        (int64_t)_9__42_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = System_Linq_Enumerable__Where_object_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__42_0,
            (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v20,
                                                                                 (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v22 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v22;
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_Object_o *selectedClassIcon; // x21
  SchedulerTaskParallel_o *v23; // x20
  struct ClassBoardSelectIconComponent_o *v24; // x8
  struct ClassBoardSelectIconComponent_o *v25; // x8
  System_String_o *v26; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v28; // x23
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  float v31; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v33; // x21
  SchedulerTaskAnimation_o *v34; // x25
  const MethodInfo *v35; // x1
  SchedulerTaskBase_o *v36; // x21
  AvalonSceneManager_c *v37; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v39; // x24
  SchedulerTaskBase_TaskCallback_o *v40; // x25
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x1
  SchedulerTaskBase_o *v48; // x0
  struct ClassBoardSelectIconComponent_o *v49; // x1
  int64_t v50; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct ClassBoardSelectIconComponent_o *v57; // x8
  UnityEngine_Animation_o *v58; // x19
  int64_t v59; // x24
  SchedulerTaskBase_TaskCallback_o *v60; // x19
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UnityEngine_GameObject_o *v67; // x19
  __int64 v68; // x0
  __int64 v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v89; // x0

  if ( (byte_4C00E7B & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_1C2E12C(&AvalonSceneManager_TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&SchedulerTaskAnimation_TypeInfo, v5);
    sub_1C2E12C(&SchedulerTaskBase___TypeInfo, v6);
    sub_1C2E12C(&SchedulerTaskParallel_TypeInfo, v7);
    sub_1C2E12C(&SchedulerTaskWaitTime_TypeInfo, v8);
    sub_1C2E12C(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__, v10);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__, v11);
    sub_1C2E12C(&ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo, v12);
    byte_4C00E7B = 1;
  }
  v13 = sub_1C2E378(ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_31;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)this, v16, v17, v18, v19, v20, v21);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                v28 = sub_1C2E378(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v28,
                  Clip,
                  v29);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v30);
                if ( v28 )
                {
                  v31 = *(float *)(v28 + 28);
                  anim = this->fields.anim;
                  v33 = (System_String_o *)iconRootObj;
                  v34 = (SchedulerTaskAnimation_o *)sub_1C2E378(SchedulerTaskAnimation_TypeInfo);
                  SchedulerTaskAnimation___ctor(v34, anim, v33, 0LL);
                  v36 = ClassBoardSelectViewManager__DelayAttachedTask(v31, (SchedulerTaskBase_o *)v34, v35);
                  v37 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v37 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v13 + 16) = DEFAULT_FADE_TIME;
                  v39 = sub_1C2E378(SchedulerTaskWaitTime_TypeInfo);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v39, DEFAULT_FADE_TIME, 0LL);
                  v40 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(SchedulerTaskBase_TaskCallback_TypeInfo);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v40,
                    (Il2CppObject *)v13,
                    Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v39 )
                  {
                    *(_QWORD *)(v39 + 24) = v40;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)(v39 + 24), (int64_t)v40, v41, v42, v43, v44, v45, v46);
                    v48 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v28 + 24),
                            (SchedulerTaskBase_o *)v39,
                            v47);
                    v49 = this->fields.selectedClassIcon;
                    v50 = (int64_t)v48;
                    *(_QWORD *)(v13 + 24) = v49;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)v49, v51, v52, v53, v54, v55, v56);
                    v57 = this->fields.selectedClassIcon;
                    if ( v57 )
                    {
                      v58 = v57->fields.anim;
                      v59 = sub_1C2E378(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v59, v58, v26, 0LL);
                      v60 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v60,
                        (Il2CppObject *)v13,
                        Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v59 )
                      {
                        *(_QWORD *)(v59 + 32) = v60;
                        sub_1C2E0D0(
                          (PartyOrganizationUtility_o *)(v59 + 32),
                          (int64_t)v60,
                          v61,
                          v62,
                          v63,
                          v64,
                          v65,
                          v66);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v67 = iconRootObj;
                          v68 = sub_1C2E268(v59, iconRootObj->klass->_1.element_class);
                          if ( v68 )
                          {
                            if ( !LODWORD(v67[1].klass) )
                              goto LABEL_32;
                            v67[1].monitor = (void *)v59;
                            sub_1C2E0D0(
                              (PartyOrganizationUtility_o *)&v67[1].monitor,
                              v59,
                              v70,
                              v71,
                              v72,
                              v73,
                              v74,
                              v75);
                            if ( !v36 || (v68 = sub_1C2E268(v36, v67->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v67[1].klass) <= 1 )
                                goto LABEL_32;
                              *(_QWORD *)&v67[1].fields.m_CachedPtr = v36;
                              sub_1C2E0D0(
                                (PartyOrganizationUtility_o *)&v67[1].fields,
                                (int64_t)v36,
                                v76,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81);
                              if ( !v50 || (v68 = sub_1C2E268(v50, v67->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v67[1].klass) > 2 )
                                {
                                  v67[2].klass = (UnityEngine_GameObject_c *)v50;
                                  sub_1C2E0D0((PartyOrganizationUtility_o *)&v67[2], v50, v82, v83, v84, v85, v86, v87);
                                  v23 = (SchedulerTaskParallel_o *)sub_1C2E378(SchedulerTaskParallel_TypeInfo);
                                  SchedulerTaskParallel___ctor(v23, (SchedulerTaskBase_array *)v67, 0LL);
                                  return (SchedulerTaskBase_o *)v23;
                                }
LABEL_32:
                                sub_1C2E390(v68, v69);
                              }
                            }
                          }
                          v89 = sub_1C2E3AC(v68);
                          sub_1C2E254(v89, 0LL);
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
    sub_1C2E388(iconRootObj, v15);
  }
  v23 = (SchedulerTaskParallel_o *)sub_1C2E378(SchedulerTaskWaitTime_TypeInfo);
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
  ClassBoardSelectViewManager_o *Clip; // x0
  const MethodInfo *v14; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v17; // s8
  SchedulerTaskAnimation_o *v18; // x20
  int64_t v19; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  SchedulerTaskBase_TaskCallback_o *v26; // x21
  Il2CppObject *v27; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  SchedulerTaskBase_array *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  SchedulerTaskParallel_o *v48; // x19
  __int64 v50; // x0

  if ( (byte_4C00E7A & 1) == 0 )
  {
    sub_1C2E12C(&SchedulerTaskAnimation_TypeInfo, method);
    sub_1C2E12C(&SchedulerTaskBase___TypeInfo, v3);
    sub_1C2E12C(&SchedulerTaskParallel_TypeInfo, v4);
    sub_1C2E12C(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1C2E12C(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__, v7);
    sub_1C2E12C(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_6720/*"FadeStart"*/, v9);
    byte_4C00E7A = 1;
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
                (System_String_o *)StringLiteral_6720/*"FadeStart"*/,
                0.0,
                v14);
  anim = this->fields.anim;
  v17 = EventTime;
  v18 = (SchedulerTaskAnimation_o *)sub_1C2E378(SchedulerTaskAnimation_TypeInfo);
  SchedulerTaskAnimation___ctor(v18, anim, v12, 0LL);
  v19 = sub_1C2E378(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v19, v17, 0LL);
  FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
  }
  v26 = *(SchedulerTaskBase_TaskCallback_o **)(*((_QWORD *)FirstTransitionAnimName + 23) + 40LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)FirstTransitionAnimName + 56) )
    {
      j_il2cpp_runtime_class_init_0(FirstTransitionAnimName);
      FirstTransitionAnimName = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)FirstTransitionAnimName + 23);
    v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v26,
      v27,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__,
      0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v26;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__34_0, (int64_t)v26, v29, v30, v31, v32, v33, v34);
  }
  if ( !v19
    || (*(_QWORD *)(v19 + 32) = v26,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v26, v20, v21, v22, v23, v24, v25),
        (FirstTransitionAnimName = (void *)sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_18:
    sub_1C2E388(FirstTransitionAnimName, v11);
  }
  v41 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v18 )
  {
    FirstTransitionAnimName = (void *)sub_1C2E268(v18, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !v41->max_length )
    goto LABEL_19;
  v41->m_Items[0] = (SchedulerTaskBase_o *)v18;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v41->m_Items, (int64_t)v18, v35, v36, v37, v38, v39, v40);
  FirstTransitionAnimName = (void *)sub_1C2E268(v19, v41->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v50 = sub_1C2E3AC(FirstTransitionAnimName);
    sub_1C2E254(v50, 0LL);
  }
  if ( v41->max_length <= 1 )
LABEL_19:
    sub_1C2E390(FirstTransitionAnimName, v11);
  v41->m_Items[1] = (SchedulerTaskBase_o *)v19;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v41->m_Items[1], v19, v42, v43, v44, v45, v46, v47);
  v48 = (SchedulerTaskParallel_o *)sub_1C2E378(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v48, v41, 0LL);
  return (SchedulerTaskBase_o *)v48;
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Object_o *selectedClassIcon; // x22
  SchedulerTaskParallel_o *v35; // x19
  struct ClassBoardSelectIconComponent_o *v36; // x8
  System_String_o *v37; // x24
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v39; // x25
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  float v42; // s8
  UnityEngine_Animation_o *anim; // x23
  System_String_o *v44; // x22
  SchedulerTaskAnimation_o *v45; // x26
  const MethodInfo *v46; // x1
  SchedulerTaskBase_o *v47; // x0
  float v48; // s8
  int64_t v49; // x23
  int64_t v50; // x22
  Il2CppObject *v51; // x26
  SchedulerTaskBase_TaskCallback_o *v52; // x19
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  AvalonSceneManager_c *v59; // x0
  float DEFAULT_FADE_TIME; // s0
  System_Func_bool__o *v61; // x26
  __int64 v62; // x19
  SchedulerTaskBase_TaskCallback_o *v63; // x26
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  const MethodInfo *v70; // x1
  int64_t v71; // x19
  UnityEngine_Animation_o *v72; // x20
  SchedulerTaskAnimation_o *v73; // x21
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  SchedulerTaskBase_array *v80; // x20
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  __int64 v100; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C00E7C & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, *(_QWORD *)&baseId);
    sub_1C2E12C(&AvalonSceneManager_TypeInfo, v5);
    sub_1C2E12C(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___, v7);
    sub_1C2E12C(&System_Func_bool__TypeInfo, v8);
    sub_1C2E12C(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    sub_1C2E12C(&SchedulerTaskAnimation_TypeInfo, v11);
    sub_1C2E12C(&SchedulerTaskBase___TypeInfo, v12);
    sub_1C2E12C(&SchedulerTaskParallel_TypeInfo, v13);
    sub_1C2E12C(&SchedulerTaskWaitTime_TypeInfo, v14);
    sub_1C2E12C(&SchedulerTaskWaitWhile_TypeInfo, v15);
    sub_1C2E12C(&SchedulerTaskBase_TaskCallback_TypeInfo, v16);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__, v17);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__, v18);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__, v19);
    sub_1C2E12C(&ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo, v20);
    byte_4C00E7C = 1;
  }
  v21 = sub_1C2E378(ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_36;
  *(_DWORD *)(v21 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v25 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__FirstOrDefault_object__50289116(
          iconArray,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2FF59DC *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  this->fields.selectedClassIcon = (struct ClassBoardSelectIconComponent_o *)v26;
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.selectedClassIcon, (int64_t)v26, v28, v29, v30, v31, v32, v33);
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
          v36 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v36 )
          {
            iconRootObj = (__int64)v36->fields.classIconUi;
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
                  v37 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v37, 0LL);
                    v39 = sub_1C2E378(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v39,
                      Clip,
                      v40);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v41);
                    if ( v39 )
                    {
                      v42 = *(float *)(v39 + 28);
                      anim = this->fields.anim;
                      v44 = (System_String_o *)iconRootObj;
                      v45 = (SchedulerTaskAnimation_o *)sub_1C2E378(SchedulerTaskAnimation_TypeInfo);
                      SchedulerTaskAnimation___ctor(v45, anim, v44, 0LL);
                      v47 = ClassBoardSelectViewManager__DelayAttachedTask(v42, (SchedulerTaskBase_o *)v45, v46);
                      v48 = *(float *)(v39 + 44);
                      v49 = (int64_t)v47;
                      v50 = sub_1C2E378(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v50, v48, 0LL);
                      v51 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v52 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(SchedulerTaskBase_TaskCallback_TypeInfo);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v52,
                        v51,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v50 )
                      {
                        *(_QWORD *)(v50 + 32) = v52;
                        sub_1C2E0D0(
                          (PartyOrganizationUtility_o *)(v50 + 32),
                          (int64_t)v52,
                          v53,
                          v54,
                          v55,
                          v56,
                          v57,
                          v58);
                        v59 = AvalonSceneManager_TypeInfo;
                        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v59 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v59->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v21 + 20) = 1;
                        *(float *)(v21 + 24) = DEFAULT_FADE_TIME;
                        v61 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
                        System_Func_bool____ctor(
                          v61,
                          (Il2CppObject *)v21,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__,
                          0LL);
                        v62 = sub_1C2E378(SchedulerTaskWaitWhile_TypeInfo);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v62, v61, 0LL);
                        v63 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(SchedulerTaskBase_TaskCallback_TypeInfo);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v63,
                          (Il2CppObject *)v21,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v62 )
                        {
                          *(_QWORD *)(v62 + 24) = v63;
                          sub_1C2E0D0(
                            (PartyOrganizationUtility_o *)(v62 + 24),
                            (int64_t)v63,
                            v64,
                            v65,
                            v66,
                            v67,
                            v68,
                            v69);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v39 + 24),
                                                   (SchedulerTaskBase_o *)v62,
                                                   v70);
                          if ( *p_selectedClassIcon )
                          {
                            v71 = iconRootObj;
                            v72 = (*p_selectedClassIcon)->fields.anim;
                            v73 = (SchedulerTaskAnimation_o *)sub_1C2E378(SchedulerTaskAnimation_TypeInfo);
                            SchedulerTaskAnimation___ctor(v73, v72, v37, 0LL);
                            iconRootObj = sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v80 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v73
                                || (iconRootObj = sub_1C2E268(v73, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v80->max_length )
                                  goto LABEL_37;
                                v80->m_Items[0] = (SchedulerTaskBase_o *)v73;
                                sub_1C2E0D0(
                                  (PartyOrganizationUtility_o *)v80->m_Items,
                                  (int64_t)v73,
                                  v74,
                                  v75,
                                  v76,
                                  v77,
                                  v78,
                                  v79);
                                if ( !v49 || (iconRootObj = sub_1C2E268(v49, v80->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v80->max_length <= 1 )
                                    goto LABEL_37;
                                  v80->m_Items[1] = (SchedulerTaskBase_o *)v49;
                                  sub_1C2E0D0(
                                    (PartyOrganizationUtility_o *)&v80->m_Items[1],
                                    v49,
                                    v81,
                                    v82,
                                    v83,
                                    v84,
                                    v85,
                                    v86);
                                  iconRootObj = sub_1C2E268(v50, v80->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v80->max_length <= 2 )
                                      goto LABEL_37;
                                    v80->m_Items[2] = (SchedulerTaskBase_o *)v50;
                                    sub_1C2E0D0(
                                      (PartyOrganizationUtility_o *)&v80->m_Items[2],
                                      v50,
                                      v87,
                                      v88,
                                      v89,
                                      v90,
                                      v91,
                                      v92);
                                    if ( !v71 || (iconRootObj = sub_1C2E268(v71, v80->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v80->max_length > 3 )
                                      {
                                        v80->m_Items[3] = (SchedulerTaskBase_o *)v71;
                                        sub_1C2E0D0(
                                          (PartyOrganizationUtility_o *)&v80->m_Items[3],
                                          v71,
                                          v93,
                                          v94,
                                          v95,
                                          v96,
                                          v97,
                                          v98);
                                        v35 = (SchedulerTaskParallel_o *)sub_1C2E378(SchedulerTaskParallel_TypeInfo);
                                        SchedulerTaskParallel___ctor(v35, v80, 0LL);
                                        return (SchedulerTaskBase_o *)v35;
                                      }
LABEL_37:
                                      sub_1C2E390(iconRootObj, v23);
                                    }
                                  }
                                }
                              }
                              v100 = sub_1C2E3AC(iconRootObj);
                              sub_1C2E254(v100, 0LL);
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
    sub_1C2E388(iconRootObj, v23);
  }
  v35 = (SchedulerTaskParallel_o *)sub_1C2E378(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v35, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v35;
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
        sub_1C2E390(this, method);
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1C2E388(this, method);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  System_String_o *monitor; // x19

  if ( (byte_4C00E73 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_BgmMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    sub_1C2E12C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OfType_AnimationState___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v6);
    sub_1C2E12C(&SoundManager_TypeInfo, v7);
    byte_4C00E73 = 1;
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_2FFB080 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v9 = System_Linq_Enumerable__ToArray_object_(
         v8,
         (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v9;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.animationStateArray,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1C2E388(0LL, v17);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.bgmId,
             (const MethodInfo_327B180 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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

  if ( (byte_4C00E81 & 1) == 0 )
  {
    sub_1C2E12C(&SceneJumpInfo_TypeInfo, method);
    sub_1C2E12C(&SceneList_TypeInfo, v2);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4C00E81 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v6 = (SceneJumpInfo_o *)sub_1C2E378(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_39988848(v6, SceneName, 0LL);
  if ( !Instance )
    sub_1C2E388(v7, v8);
  AvalonSceneManager__transitionScene_39599992((AvalonSceneManager_o *)Instance, 32, 0LL, 1, (Il2CppObject *)v6, 0LL);
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_String_o *v37; // x21
  System_Action_o *v38; // x22
  Il2CppObject *v39; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4C00E79 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, icon);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager_OnClickIcon__, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, v8);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, v9);
    sub_1C2E12C(&ClassBoardSelectViewManager___c_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_3513/*"CLASS_BOARD_BASE_UNRELEASED"*/, v11);
    sub_1C2E12C(&StringLiteral_1/*""*/, v12);
    byte_4C00E79 = 1;
  }
  v13 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C2E144(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C2E110(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
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
        sub_1C2E388(IsOpen, v16);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = icon->fields._Entity_k__BackingField;
      v22 = (CommonUI_o *)Instance;
      if ( v21 )
        closedMessage = v21->fields.closedMessage;
      else
        closedMessage = 0LL;
      v37 = (System_String_o *)StringLiteral_1/*""*/;
      IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
        IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v38 = *(System_Action_o **)(*((_QWORD *)IsOpen + 23) + 32LL);
      if ( !v38 )
      {
        if ( !*((_DWORD *)IsOpen + 56) )
        {
          j_il2cpp_runtime_class_init_0(IsOpen);
          IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
        }
        v39 = (Il2CppObject *)**((_QWORD **)IsOpen + 23);
        v38 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(v38, v39, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, 0LL);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        static_fields->__9__33_0 = v38;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__33_0, (int64_t)v38, v41, v42, v43, v44, v45, v46);
      }
      if ( !v22 )
        goto LABEL_34;
      CommonUI__OpenNotificationDialog(v22, v37, closedMessage, v38, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3513/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    IsOpen = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__33_1 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(_9__33_1, v29, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, 0LL);
      v30 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v30->__9__33_1 = _9__33_1;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v30->__9__33_1, (int64_t)_9__33_1, v31, v32, v33, v34, v35, v36);
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

  if ( (byte_4C00E77 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_bool___, method);
    sub_1C2E12C(&System_Action_TypeInfo, v3);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__, v4);
    byte_4C00E77 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2F23EB0 *)Method_ActionExtensions_Call_bool___);
  v5 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_o *v23; // x19

  if ( (byte_4C00E78 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_bool___, finishCallback);
    sub_1C2E12C(&System_Action_TypeInfo, v5);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__, v6);
    sub_1C2E12C(&ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo, v7);
    byte_4C00E78 = 1;
  }
  v8 = sub_1C2E378(ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C2E388(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)finishCallback, v17, v18, v19, v20, v21, v22);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2F23EB0 *)Method_ActionExtensions_Call_bool___);
  v23 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__,
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
  const MethodInfo *v11; // x1
  char *Instance; // x0
  __int64 v13; // x1
  System_Action_o *v14; // x20
  __int64 v15; // x21
  System_Action_object__o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ActionChain_o *v23; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_array *v30; // x21

  if ( (byte_4C00E76 & 1) == 0 )
  {
    sub_1C2E12C(&ActionChain_TypeInfo, method);
    sub_1C2E12C(&Method_ActionExtensions_Call_bool___, v3);
    sub_1C2E12C(&System_Action___TypeInfo, v4);
    sub_1C2E12C(&System_Action_Action____TypeInfo, v5);
    sub_1C2E12C(&System_Action_Action__TypeInfo, v6);
    sub_1C2E12C(&System_Action_TypeInfo, v7);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v8);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, v9);
    sub_1C2E12C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    byte_4C00E76 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2F23EB0 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v11);
  Instance = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v14 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, 0LL);
  v15 = sub_1C2E1D4(System_Action_Action____TypeInfo, 1LL);
  v16 = (System_Action_object__o *)sub_1C2E378(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v16, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( !v15 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v15 + 32) = v16;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (ActionChain_o *)sub_1C2E378(ActionChain_TypeInfo);
  ActionChain___ctor_47868324(v23, (System_Action_Action__array *)v15, 0LL);
  Instance = (char *)sub_1C2E1D4(System_Action___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_11;
  v30 = (System_Action_array *)Instance;
  if ( !*((_DWORD *)Instance + 6) )
LABEL_12:
    sub_1C2E390(Instance, v13);
  *((_QWORD *)Instance + 4) = v14;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(Instance + 32), (int64_t)v14, v24, v25, v26, v27, v28, v29);
  if ( !v23 || (Instance = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v23, v30, 0LL)) == 0LL )
LABEL_11:
    sub_1C2E388(Instance, v13);
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
    sub_1C2E388(v4, v5);
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
  if ( (byte_4C00E80 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_4C00E80 = 1;
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
    p_method = sub_1C8010C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_1C2E388(this, method);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  System_Action_o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct ClassBoardUIController_o *v34; // x21
  System_Action_o *v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x2
  struct IClassBoardResourceCatalog_o *v43; // x21
  IClassBoardResourceCatalog_c *v44; // x8
  ClassBoardUIController_o *v45; // x20
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x1
  struct IClassBoardResourceCatalog_o *v51; // x20
  IClassBoardResourceCatalog_c *v52; // x8
  ClassBoardUIController_o *v53; // x19
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  AtlasManagerUnit_o *v57; // x20
  const MethodInfo *v58; // x3

  v2 = this;
  if ( (byte_4C00E7F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager_OnClickBack__, v3);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager_OpenHelp__, v4);
    sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_20895/*"img_txt_classscore_main"*/, v9);
    this = (ClassBoardSelectViewManager_o *)sub_1C2E12C(&StringLiteral_3553/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, v10);
    byte_4C00E7F = 1;
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
    p_method = sub_1C8010C(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  v18 = UnityEngine_Object__Instantiate_object__50692032(
          anim,
          uiRoot,
          (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v2->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v18;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v2->fields._classBoardUIController_k__BackingField;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v2->fields._classBoardUIController_k__BackingField,
    (int64_t)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this = (ClassBoardSelectViewManager_o *)v2->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_38;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, method);
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  v27 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_38;
  classBoardUIController_k__BackingField->fields.onClickBack = v27;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = v2->fields._classBoardUIController_k__BackingField;
  v35 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v34 )
    goto LABEL_38;
  v34->fields.onClickHelp = v35;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v34->fields.onClickHelp, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_38;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, v42);
  v43 = v2->fields.resourceCatalog;
  if ( !v43 )
    goto LABEL_38;
  v44 = v43->klass;
  v45 = v2->fields._classBoardUIController_k__BackingField;
  v46 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
  {
    v47 = &v44->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v47 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_22;
    }
    v48 = (__int64)&v44->vtable[*v47].method;
  }
  else
  {
LABEL_22:
    v48 = sub_1C8010C(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v48)(
                                            v43,
                                            *(_QWORD *)(v48 + 8));
  if ( !this )
    goto LABEL_38;
  if ( !v45 )
    goto LABEL_38;
  ClassBoardUIController__SetHeaderTitle(
    v45,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_20895/*"img_txt_classscore_main"*/,
    v49);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v2, v50);
  v51 = v2->fields.resourceCatalog;
  if ( !v51 )
    goto LABEL_38;
  v52 = v51->klass;
  v53 = v2->fields._classBoardUIController_k__BackingField;
  v54 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
  {
    v55 = &v52->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v55 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_31;
    }
    v56 = (__int64)&v52->vtable[*v55].method;
  }
  else
  {
LABEL_31:
    v56 = sub_1C8010C(v51, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v56)(
                                            v51,
                                            *(_QWORD *)(v56 + 8));
  if ( !this )
    goto LABEL_38;
  v57 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3553/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v53 )
LABEL_38:
    sub_1C2E388(this, method);
  ClassBoardUIController__SetHeaderMessage(v53, v57, (System_String_o *)this, v58);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  ClassBoardResourceCatalogAssetBundle_o **v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct IClassBoardResourceCatalog_o *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Action_o *v48; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  const MethodInfo *v55; // x1
  ClassBoardResourceCatalogAssetBundle_o *v56; // x20
  __int64 methodPtr_low; // x10
  System_Action_o *v58; // x21
  __int64 v59; // x10

  if ( (byte_4C00E74 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, classBoardBackground);
    sub_1C2E12C(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v9);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__, v10);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__, v11);
    sub_1C2E12C(&ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo, v12);
    byte_4C00E74 = 1;
  }
  v13 = sub_1C2E378(ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = classBoardBackground;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)classBoardBackground, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 32) = resourceCatalog;
  v28 = (ClassBoardResourceCatalogAssetBundle_o **)(v13 + 32);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)resourceCatalog, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)finishCallback, v35, v36, v37, v38, v39, v40);
  v41 = *(struct IClassBoardResourceCatalog_o **)(v13 + 32);
  this->fields.resourceCatalog = v41;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.resourceCatalog, (int64_t)v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v13 + 48) = v48;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 48), (int64_t)v48, v49, v50, v51, v52, v53, v54);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v55)
    || (v56 = *v28) == 0LL
    || (methodPtr_low = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v56->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ClassBoardResourceCatalogAssetBundle_c *)v56->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 48), 0LL);
    return;
  }
  v58 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__,
    0LL);
  v59 = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v56->klass->vtable._0_Equals.methodPtr) < (unsigned int)v59
    || (ClassBoardResourceCatalogAssetBundle_c *)v56->klass->_2.typeHierarchy[v59 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_1C2E388(v14, v15);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v56, v58, 0LL);
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
        sub_1C2E390(this, method);
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
    sub_1C2E388(this, method);
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
  if ( (byte_4C00E75 & 1) == 0 )
  {
    sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, method);
    this = (ClassBoardSelectViewManager_o *)sub_1C2E12C(&StringLiteral_20895/*"img_txt_classscore_main"*/, v3);
    byte_4C00E75 = 1;
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
    p_method = sub_1C8010C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_1C2E388(this, method);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_20895/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__31_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E85 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_bool___, method);
    byte_4C00E85 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2F23EB0 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__30_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C00E84 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_bool___, method);
    sub_1C2E12C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    byte_4C00E84 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2F23EB0 *)Method_ActionExtensions_Call_bool___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v5);
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
  sub_1C2E0D0(
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C00E86 & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardSelectViewManager___c_TypeInfo, v1);
    byte_4C00E86 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ClassBoardSelectViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardSelectViewManager___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, 0LL);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__42_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, (const MethodInfo *)x);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__34_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4C00E87 & 1) == 0 )
  {
    sub_1C2E12C(&AvalonSceneManager_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4C00E87 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1C2E388(Instance, v4);
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
    sub_1C2E388(this, x);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34859908(gameObject, 0.0, 0LL);
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
    sub_1C2E388(this, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct ClassBoardSelectViewManager_o *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x20
  ClassBoardSelectViewManager___c_c *v22; // x0
  System_Action_object__o *_9__27_2; // x21
  Il2CppObject *v24; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct ClassBoardSelectViewManager_o *v32; // x20
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t monitor; // w8

  if ( (byte_4C00E88 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_ClassBoardSelectIconComponent__TypeInfo, method);
    sub_1C2E12C(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___, v3);
    sub_1C2E12C(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___, v4);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, v5);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__, v6);
    sub_1C2E12C(&ClassBoardSelectViewManager___c_TypeInfo, v7);
    byte_4C00E88 = 1;
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
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_1C2E378(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(
      (System_Action_object__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v14, v15, v16, v17, v18, v19);
  }
  BasicHelper__ForEach_object_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v20->fields.iconArray;
  v22 = ClassBoardSelectViewManager___c_TypeInfo;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v22 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__27_2 = (System_Action_object__o *)v22->static_fields->__9__27_2;
  if ( !_9__27_2 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__27_2 = (System_Action_object__o *)sub_1C2E378(System_Action_ClassBoardSelectIconComponent__TypeInfo);
    System_Action_object____ctor(_9__27_2, v24, Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__27_2;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__27_2,
      (int64_t)_9__27_2,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  BasicHelper__ForEach_object_(
    v21,
    (System_Action_T__o *)_9__27_2,
    (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_object_(
                                                     (System_Object_array *)v32->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_2FC01A4 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
  v32->fields.iconDefaultDepth = monitor;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_25:
    sub_1C2E388(classBoardBackground, method);
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
  __int64 v5; // x1
  IClassBoardResourceCatalog_o *resourceCatalog; // x20
  Il2CppObject *_4__this; // x22
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4C00E89 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_ClassBoardSelectIconComponent__TypeInfo, x);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager_OnClickIcon__, v5);
    byte_4C00E89 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v8 = (System_Action_object__o *)sub_1C2E378(System_Action_ClassBoardSelectIconComponent__TypeInfo);
  System_Action_object____ctor(v8, _4__this, (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__, 0LL);
  if ( !x )
    sub_1C2E388(v9, v10);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v8, v11);
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
  if ( (byte_4C00E8A & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)sub_1C2E12C(
                                                                    &Method_ActionExtensions_Call_bool___,
                                                                    method);
    byte_4C00E8A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C2E388(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2F23EB0 *)Method_ActionExtensions_Call_bool___);
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

  if ( (byte_4C00E8B & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C00E8B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
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
    sub_1C2E388(this, method);
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
    sub_1C2E388(this, x);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4C00E8C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C2E12C(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__, v4);
    byte_4C00E8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
    sub_1C2E388(Instance, v6);
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
    sub_1C2E388(0LL, method);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, method);
}