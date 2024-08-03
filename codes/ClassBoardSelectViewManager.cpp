void __fastcall ClassBoardSelectViewManager___ctor(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
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
  __int64 v6; // x1
  __int64 v7; // x1
  SchedulerTaskWaitTime_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  SchedulerTaskBase_array *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  SchedulerTaskOrthostichy_o *v18; // x19
  __int64 v20; // x0

  if ( (byte_49FF876 & 1) == 0 )
  {
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, method);
    sub_1B640C8(&SchedulerTaskOrthostichy_TypeInfo, v6);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v7);
    byte_49FF876 = 1;
  }
  v8 = (SchedulerTaskWaitTime_o *)sub_1B64314(SchedulerTaskWaitTime_TypeInfo, method, v3);
  SchedulerTaskWaitTime___ctor(v8, delay, 0LL);
  v9 = sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !v9 )
    sub_1B64324(0LL);
  v13 = (SchedulerTaskBase_array *)v9;
  if ( v8 )
  {
    v9 = sub_1B64204(v8, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
      goto LABEL_12;
  }
  if ( !v13->max_length )
    goto LABEL_11;
  v13->m_Items[0] = (SchedulerTaskBase_o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v13->m_Items, (int32_t)v8, v11, v12);
  if ( task )
  {
    v9 = sub_1B64204(task, v13->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_12:
      v20 = sub_1B64348(v9);
      sub_1B641F0(v20, 0LL);
    }
  }
  if ( v13->max_length <= 1 )
LABEL_11:
    sub_1B6432C(v9, v10);
  v13->m_Items[1] = task;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->m_Items[1], (int32_t)task, v14, v15);
  v18 = (SchedulerTaskOrthostichy_o *)sub_1B64314(SchedulerTaskOrthostichy_TypeInfo, v16, v17);
  SchedulerTaskOrthostichy___ctor(v18, v13, 0LL);
  return (SchedulerTaskBase_o *)v18;
}


System_String_o *__fastcall ClassBoardSelectViewManager__GetClassBoardEnterAnimName(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v4; // x0

  if ( (byte_49FF868 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_49FF868 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               1,
               0LL,
               (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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

  if ( (byte_49FF869 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_49FF869 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               2,
               0LL,
               (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_AnimationEvent_array *events; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  ClassBoardSelectViewManager___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_T__o *v23; // x21
  System_Action_object__o *_9__24_0; // x22
  Il2CppObject *v25; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Object_array *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  System_Func_object__bool__o *v32; // x21
  Il2CppObject *object; // x0

  if ( (byte_49FF86A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AnimationEvent__TypeInfo, animClip);
    sub_1B640C8(&Method_BasicHelper_Find_AnimationEvent___, v8);
    sub_1B640C8(&Method_BasicHelper_ForEach_AnimationEvent___, v9);
    sub_1B640C8(&System_Func_AnimationEvent__bool__TypeInfo, v10);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, v11);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__, v12);
    sub_1B640C8(&ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo, v13);
    sub_1B640C8(&ClassBoardSelectViewManager___c_TypeInfo, v14);
    byte_49FF86A = 1;
  }
  v15 = sub_1B64314(ClassBoardSelectViewManager___c__DisplayClass24_0_TypeInfo, animClip, eventName);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = eventName,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)eventName, v17, v18),
        !animClip) )
  {
    sub_1B64324(v16);
  }
  events = UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v22 = ClassBoardSelectViewManager___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_T__o *)events;
  if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
    v22 = ClassBoardSelectViewManager___c_TypeInfo;
  }
  _9__24_0 = (System_Action_object__o *)v22->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__24_0 = (System_Action_object__o *)sub_1B64314(System_Action_AnimationEvent__TypeInfo, v20, v21);
    System_Action_object____ctor(_9__24_0, v25, Method_ClassBoardSelectViewManager___c__GetEventTime_b__24_0__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Action_AnimationEvent__o *)_9__24_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v27, v28);
  }
  BasicHelper__ForEach_object_(
    v23,
    (System_Action_T__o *)_9__24_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_AnimationEvent___);
  UnityEngine_AnimationClip__set_events(animClip, (UnityEngine_AnimationEvent_array *)v23, 0LL);
  v29 = (System_Object_array *)UnityEngine_AnimationClip__get_events(animClip, 0LL);
  v32 = (System_Func_object__bool__o *)sub_1B64314(System_Func_AnimationEvent__bool__TypeInfo, v30, v31);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v15,
    Method_ClassBoardSelectViewManager___c__DisplayClass24_0__GetEventTime_b__1__,
    0LL);
  object = BasicHelper__Find_object_(
             v29,
             (System_Func_T__bool__o *)v32,
             (const MethodInfo_2E2543C *)Method_BasicHelper_Find_AnimationEvent___);
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

  if ( (byte_49FF867 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_AnimationState___, method);
    byte_49FF867 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v4 = BasicHelper__IndexValue_object_(
               animationStateArray,
               0,
               0LL,
               (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  const MethodInfo *v6; // x1
  float result; // s0
  ClassBoardSelectIconComponent_o *ClassBoardEnterAnimName; // x0
  struct ClassBoardSelectIconComponent_o *v9; // x8
  System_String_o *v10; // x1
  UnityEngine_AnimationClip_o *Clip; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  ClassBoardSelectIconComponent_AnimClipInfo_o *v14; // x19
  const MethodInfo *v15; // x2

  if ( (byte_49FF875 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF875 = 1;
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
      || (v10 = (System_String_o *)ClassBoardEnterAnimName,
          (ClassBoardEnterAnimName = (ClassBoardSelectIconComponent_o *)v9->fields.anim) == 0LL)
      || (Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)ClassBoardEnterAnimName, v10, 0LL),
          v14 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1B64314(
                                                                  ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo,
                                                                  v12,
                                                                  v13),
          ClassBoardSelectIconComponent_AnimClipInfo___ctor(v14, Clip, v15),
          !v14) )
    {
      sub_1B64324(ClassBoardEnterAnimName);
    }
    return v14->fields._ForwardIconAnimStartTime_k__BackingField;
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  __int64 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t current; // w1
  __int64 v25; // x21
  __int64 v26; // x0
  __int64 v27; // x8
  UnityEngine_AnimationState_o *v28; // x0
  System_String_o *name; // x0
  System_String_o *v30; // x22
  UnityEngine_Animation_o *v31; // x0
  UnityEngine_AnimationClip_o *Clip; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  ClassBoardSelectIconComponent_AnimClipInfo_o *v35; // x0
  const MethodInfo *v36; // x2
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_Animation_o *v40; // x23
  __int64 v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  SchedulerTaskBase_TaskCallback_o *v44; // x22
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-80h] BYREF

  v3 = (System_Collections_Generic_List_object__o *)iconCompoentList;
  if ( (byte_49FF87B & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, iconCompoentList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__get_Count__, v10);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11);
    sub_1B640C8(&SchedulerTaskAnimation_TypeInfo, v12);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v13);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v14);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__, v15);
    sub_1B640C8(&ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo, v16);
    byte_49FF87B = 1;
  }
  memset(&v59, 0, sizeof(v59));
  if ( v3 )
  {
    if ( v3->fields._size )
    {
      v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                           iconCompoentList,
                                                           method);
      System_Collections_Generic_List_object____ctor(
        v17,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v58,
        v3,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent__GetEnumerator__);
      v59 = v58;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v59,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__MoveNext__) )
      {
        v20 = sub_1B64314(ClassBoardSelectViewManager___c__DisplayClass43_0_TypeInfo, v18, v19);
        System_Object___ctor((Il2CppObject *)v20, 0LL);
        if ( !v20 )
          sub_1B64324(v21);
        current = (int32_t)v59.fields._current;
        *(_QWORD *)(v20 + 16) = v59.fields._current;
        v25 = v20 + 16;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), current, v22, v23);
        v27 = *(_QWORD *)(v20 + 16);
        if ( !v27 )
          sub_1B64324(v26);
        v28 = *(UnityEngine_AnimationState_o **)(v27 + 136);
        if ( v28 )
        {
          name = UnityEngine_AnimationState__get_name(v28, 0LL);
          v27 = *(_QWORD *)v25;
          if ( !*(_QWORD *)v25 )
            sub_1B64324(name);
          v30 = name;
        }
        else
        {
          v30 = 0LL;
        }
        v31 = *(UnityEngine_Animation_o **)(v27 + 88);
        if ( !v31 )
          sub_1B64324(0LL);
        Clip = UnityEngine_Animation__GetClip(v31, v30, 0LL);
        v35 = (ClassBoardSelectIconComponent_AnimClipInfo_o *)sub_1B64314(
                                                                ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo,
                                                                v33,
                                                                v34);
        ClassBoardSelectIconComponent_AnimClipInfo___ctor(v35, Clip, v36);
        if ( !*(_QWORD *)v25 )
          sub_1B64324(v37);
        v40 = *(UnityEngine_Animation_o **)(*(_QWORD *)v25 + 88LL);
        v41 = sub_1B64314(SchedulerTaskAnimation_TypeInfo, v38, v39);
        SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v41, v40, v30, 0LL);
        v44 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v42, v43);
        SchedulerTaskBase_TaskCallback___ctor(
          v44,
          (Il2CppObject *)v20,
          Method_ClassBoardSelectViewManager___c__DisplayClass43_0__GetPlayClassBoardReleaseEffect_b__0__,
          0LL);
        if ( !v41 )
          sub_1B64324(v45);
        *(_QWORD *)(v41 + 32) = v44;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v44, v46, v47);
        if ( !v17 )
          sub_1B64324(v48);
        items = v17->fields._items;
        v52 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1B64324(v48);
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v41,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v41;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), v41, v49, v50);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v59,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSelectIconComponent__Dispose__);
      v3 = (System_Collections_Generic_List_object__o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v55, v56);
      SchedulerTaskParallel___ctor_40932332(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x19
  ClassBoardSelectViewManager___c_c *v11; // x0
  System_Func_object__bool__o *_9__42_0; // x20
  Il2CppObject *v13; // x21
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_object__o *v19; // x19

  if ( (byte_49FF87A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___, v4);
    sub_1B640C8(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo, v7);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__, v8);
    sub_1B640C8(&ClassBoardSelectViewManager___c_TypeInfo, v9);
    byte_49FF87A = 1;
  }
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  if ( iconArray )
  {
    v11 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v11 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    _9__42_0 = (System_Func_object__bool__o *)v11->static_fields->__9__42_0;
    if ( !_9__42_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__42_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_ClassBoardSelectIconComponent__bool__TypeInfo,
                                                  method,
                                                  v2);
      System_Func_object__bool____ctor(
        _9__42_0,
        v13,
        Method_ClassBoardSelectViewManager___c__GetPlayClassBoardReleaseList_b__42_0__,
        0LL);
      static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      static_fields->__9__42_0 = (struct System_Func_ClassBoardSelectIconComponent__bool__o *)_9__42_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v15, v16);
    }
    v17 = System_Linq_Enumerable__Where_object_(
            iconArray,
            (System_Func_TSource__bool__o *)_9__42_0,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_ClassBoardSelectIconComponent___);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v17,
                                                                                 (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_ClassBoardSelectIconComponent___);
  }
  else
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ClassBoardSelectIconComponent__TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardSelectIconComponent___ctor__);
    return (System_Collections_Generic_List_ClassBoardSelectIconComponent__o *)v19;
  }
}


SchedulerTaskBase_o *__fastcall ClassBoardSelectViewManager__GetTaskOfComingFromClassBoard(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x20
  UnityEngine_GameObject_o *iconRootObj; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *selectedClassIcon; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  SchedulerTaskParallel_o *v21; // x20
  struct ClassBoardSelectIconComponent_o *v22; // x8
  const MethodInfo *v23; // x1
  struct ClassBoardSelectIconComponent_o *v24; // x8
  System_String_o *v25; // x22
  UnityEngine_AnimationClip_o *Clip; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x23
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  float v34; // s8
  UnityEngine_Animation_o *anim; // x24
  System_String_o *v36; // x21
  SchedulerTaskAnimation_o *v37; // x25
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  SchedulerTaskBase_o *v41; // x21
  AvalonSceneManager_c *v42; // x8
  float DEFAULT_FADE_TIME; // s8
  __int64 v44; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  SchedulerTaskBase_TaskCallback_o *v47; // x25
  int32_t v48; // w2
  int32_t v49; // w3
  const MethodInfo *v50; // x1
  SchedulerTaskBase_o *v51; // x0
  struct ClassBoardSelectIconComponent_o *v52; // x1
  SchedulerTaskBase_o *v53; // x23
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  __int64 v57; // x2
  struct ClassBoardSelectIconComponent_o *v58; // x8
  UnityEngine_Animation_o *v59; // x19
  __int64 v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  SchedulerTaskBase_TaskCallback_o *v63; // x19
  int32_t v64; // w2
  int32_t v65; // w3
  UnityEngine_GameObject_o *v66; // x19
  __int64 v67; // x0
  __int64 v68; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v78; // x0

  if ( (byte_49FF873 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&SchedulerTaskAnimation_TypeInfo, v6);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v7);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v8);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v9);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v10);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__, v11);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__, v12);
    sub_1B640C8(&ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo, v13);
    byte_49FF873 = 1;
  }
  v14 = sub_1B64314(ClassBoardSelectViewManager___c__DisplayClass35_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_31;
  *(_QWORD *)(v14 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)this, v16, v17);
  selectedClassIcon = (UnityEngine_Object_o *)this->fields.selectedClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  iconRootObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(selectedClassIcon, 0LL, 0LL);
  if ( ((unsigned __int8)iconRootObj & 1) == 0 )
  {
    v22 = this->fields.selectedClassIcon;
    if ( v22 )
    {
      iconRootObj = v22->fields.iconRootObj;
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
                                                        v23);
            v24 = this->fields.selectedClassIcon;
            if ( v24 )
            {
              v25 = (System_String_o *)iconRootObj;
              iconRootObj = (UnityEngine_GameObject_o *)v24->fields.anim;
              if ( iconRootObj )
              {
                Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v25, 0LL);
                v29 = sub_1B64314(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, v27, v28);
                ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                  (ClassBoardSelectIconComponent_AnimClipInfo_o *)v29,
                  Clip,
                  v30);
                iconRootObj = (UnityEngine_GameObject_o *)ClassBoardSelectViewManager__GetClassBoardExitAnimName(
                                                            this,
                                                            v31);
                if ( v29 )
                {
                  v34 = *(float *)(v29 + 28);
                  anim = this->fields.anim;
                  v36 = (System_String_o *)iconRootObj;
                  v37 = (SchedulerTaskAnimation_o *)sub_1B64314(SchedulerTaskAnimation_TypeInfo, v32, v33);
                  SchedulerTaskAnimation___ctor(v37, anim, v36, 0LL);
                  v41 = ClassBoardSelectViewManager__DelayAttachedTask(v34, (SchedulerTaskBase_o *)v37, v38);
                  v42 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v42 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v42->static_fields->DEFAULT_FADE_TIME;
                  *(float *)(v14 + 16) = DEFAULT_FADE_TIME;
                  v44 = sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v39, v40);
                  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v44, DEFAULT_FADE_TIME, 0LL);
                  v47 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(
                                                              SchedulerTaskBase_TaskCallback_TypeInfo,
                                                              v45,
                                                              v46);
                  SchedulerTaskBase_TaskCallback___ctor(
                    v47,
                    (Il2CppObject *)v14,
                    Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__0__,
                    0LL);
                  if ( v44 )
                  {
                    *(_QWORD *)(v44 + 24) = v47;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 24), (int32_t)v47, v48, v49);
                    v51 = ClassBoardSelectViewManager__DelayAttachedTask(
                            *(float *)(v29 + 24),
                            (SchedulerTaskBase_o *)v44,
                            v50);
                    v52 = this->fields.selectedClassIcon;
                    v53 = v51;
                    *(_QWORD *)(v14 + 24) = v52;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)v52, v54, v55);
                    v58 = this->fields.selectedClassIcon;
                    if ( v58 )
                    {
                      v59 = v58->fields.anim;
                      v60 = sub_1B64314(SchedulerTaskAnimation_TypeInfo, v56, v57);
                      SchedulerTaskAnimation___ctor((SchedulerTaskAnimation_o *)v60, v59, v25, 0LL);
                      v63 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(
                                                                  SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                  v61,
                                                                  v62);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v63,
                        (Il2CppObject *)v14,
                        Method_ClassBoardSelectViewManager___c__DisplayClass35_0__GetTaskOfComingFromClassBoard_b__1__,
                        0LL);
                      if ( v60 )
                      {
                        *(_QWORD *)(v60 + 32) = v63;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 32), (int32_t)v63, v64, v65);
                        iconRootObj = (UnityEngine_GameObject_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 3LL);
                        if ( iconRootObj )
                        {
                          v66 = iconRootObj;
                          v67 = sub_1B64204(v60, iconRootObj->klass->_1.element_class);
                          if ( v67 )
                          {
                            if ( !LODWORD(v66[1].klass) )
                              goto LABEL_32;
                            v66[1].monitor = (void *)v60;
                            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v66[1].monitor, v60, v69, v70);
                            if ( !v41 || (v67 = sub_1B64204(v41, v66->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v66[1].klass) <= 1 )
                                goto LABEL_32;
                              *(_QWORD *)&v66[1].fields.m_CachedPtr = v41;
                              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v66[1].fields, (int32_t)v41, v71, v72);
                              if ( !v53 || (v67 = sub_1B64204(v53, v66->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v66[1].klass) > 2 )
                                {
                                  v66[2].klass = (UnityEngine_GameObject_c *)v53;
                                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v66[2], (int32_t)v53, v73, v74);
                                  v21 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v75, v76);
                                  SchedulerTaskParallel___ctor(v21, (SchedulerTaskBase_array *)v66, 0LL);
                                  return (SchedulerTaskBase_o *)v21;
                                }
LABEL_32:
                                sub_1B6432C(v67, v68);
                              }
                            }
                          }
                          v78 = sub_1B64348(v67);
                          sub_1B641F0(v78, 0LL);
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
    sub_1B64324(iconRootObj);
  }
  v21 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v19, v20);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v21, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v21;
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
  System_String_o *v11; // x21
  ClassBoardSelectViewManager_o *Clip; // x0
  const MethodInfo *v13; // x3
  float EventTime; // s0
  UnityEngine_Animation_o *anim; // x19
  float v16; // s8
  __int64 v17; // x1
  __int64 v18; // x2
  SchedulerTaskAnimation_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t v25; // w3
  SchedulerTaskBase_TaskCallback_o *v26; // x21
  Il2CppObject *v27; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  SchedulerTaskBase_array *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  SchedulerTaskParallel_o *v39; // x19
  __int64 v41; // x0

  if ( (byte_49FF872 & 1) == 0 )
  {
    sub_1B640C8(&SchedulerTaskAnimation_TypeInfo, method);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v3);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v4);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__, v7);
    sub_1B640C8(&ClassBoardSelectViewManager___c_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_6535/*"FadeStart"*/, v9);
    byte_49FF872 = 1;
  }
  FirstTransitionAnimName = ClassBoardSelectViewManager__GetFirstTransitionAnimName(this, method);
  if ( !this->fields.anim )
    goto LABEL_18;
  v11 = (System_String_o *)FirstTransitionAnimName;
  Clip = (ClassBoardSelectViewManager_o *)UnityEngine_Animation__GetClip(
                                            this->fields.anim,
                                            (System_String_o *)FirstTransitionAnimName,
                                            0LL);
  EventTime = ClassBoardSelectViewManager__GetEventTime(
                Clip,
                (UnityEngine_AnimationClip_o *)Clip,
                (System_String_o *)StringLiteral_6535/*"FadeStart"*/,
                0.0,
                v13);
  anim = this->fields.anim;
  v16 = EventTime;
  v19 = (SchedulerTaskAnimation_o *)sub_1B64314(SchedulerTaskAnimation_TypeInfo, v17, v18);
  SchedulerTaskAnimation___ctor(v19, anim, v11, 0LL);
  v22 = sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v20, v21);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v22, v16, 0LL);
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
    v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v23, v24);
    SchedulerTaskBase_TaskCallback___ctor(
      v26,
      v27,
      Method_ClassBoardSelectViewManager___c__GetTaskOfFirstTransition_b__34_0__,
      0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = v26;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v26, v29, v30);
  }
  if ( !v22
    || (*(_QWORD *)(v22 + 32) = v26,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v26, v24, v25),
        (FirstTransitionAnimName = (void *)sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_18:
    sub_1B64324(FirstTransitionAnimName);
  }
  v34 = (SchedulerTaskBase_array *)FirstTransitionAnimName;
  if ( v19 )
  {
    FirstTransitionAnimName = (void *)sub_1B64204(v19, *(_QWORD *)(*(_QWORD *)FirstTransitionAnimName + 64LL));
    if ( !FirstTransitionAnimName )
      goto LABEL_20;
  }
  if ( !v34->max_length )
    goto LABEL_19;
  v34->m_Items[0] = (SchedulerTaskBase_o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v34->m_Items, (int32_t)v19, v32, v33);
  FirstTransitionAnimName = (void *)sub_1B64204(v22, v34->obj.klass->_1.element_class);
  if ( !FirstTransitionAnimName )
  {
LABEL_20:
    v41 = sub_1B64348(FirstTransitionAnimName);
    sub_1B641F0(v41, 0LL);
  }
  if ( v34->max_length <= 1 )
LABEL_19:
    sub_1B6432C(FirstTransitionAnimName, v31);
  v34->m_Items[1] = (SchedulerTaskBase_o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[1], v22, v35, v36);
  v39 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v37, v38);
  SchedulerTaskParallel___ctor(v39, v34, 0LL);
  return (SchedulerTaskBase_o *)v39;
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
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *iconArray; // x21
  System_Func_object__bool__o *v26; // x22
  Il2CppObject *v27; // x0
  struct ClassBoardSelectIconComponent_o **p_selectedClassIcon; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Object_o *selectedClassIcon; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  SchedulerTaskParallel_o *v34; // x19
  struct ClassBoardSelectIconComponent_o *v35; // x8
  const MethodInfo *v36; // x1
  System_String_o *v37; // x24
  UnityEngine_AnimationClip_o *Clip; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x25
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x1
  __int64 v44; // x1
  __int64 v45; // x2
  float v46; // s8
  UnityEngine_Animation_o *anim; // x23
  System_String_o *v48; // x22
  SchedulerTaskAnimation_o *v49; // x26
  const MethodInfo *v50; // x1
  SchedulerTaskBase_o *v51; // x0
  float v52; // s8
  SchedulerTaskBase_o *v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x22
  Il2CppObject *v57; // x26
  __int64 v58; // x1
  __int64 v59; // x2
  SchedulerTaskBase_TaskCallback_o *v60; // x19
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x1
  __int64 v64; // x2
  AvalonSceneManager_c *v65; // x0
  float DEFAULT_FADE_TIME; // s0
  System_Func_bool__o *v67; // x26
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x19
  __int64 v71; // x1
  __int64 v72; // x2
  SchedulerTaskBase_TaskCallback_o *v73; // x26
  int32_t v74; // w2
  int32_t v75; // w3
  const MethodInfo *v76; // x1
  __int64 v77; // x1
  __int64 v78; // x2
  SchedulerTaskBase_o *v79; // x19
  UnityEngine_Animation_o *v80; // x20
  SchedulerTaskAnimation_o *v81; // x21
  __int64 v82; // x1
  int32_t v83; // w2
  int32_t v84; // w3
  SchedulerTaskBase_array *v85; // x20
  int32_t v86; // w2
  int32_t v87; // w3
  int32_t v88; // w2
  int32_t v89; // w3
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v95; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF874 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, *(_QWORD *)&baseId);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_ClassBoardSelectIconComponent_PlayTransitionAnim__, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___, v7);
    sub_1B640C8(&System_Func_bool__TypeInfo, v8);
    sub_1B640C8(&System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&SchedulerTaskAnimation_TypeInfo, v11);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v12);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v13);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v14);
    sub_1B640C8(&SchedulerTaskWaitWhile_TypeInfo, v15);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v16);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__, v17);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__, v18);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__, v19);
    sub_1B640C8(&ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo, v20);
    byte_49FF874 = 1;
  }
  v21 = sub_1B64314(ClassBoardSelectViewManager___c__DisplayClass36_0_TypeInfo, *(_QWORD *)&baseId, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_36;
  *(_DWORD *)(v21 + 16) = baseId;
  iconArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconArray;
  v26 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ClassBoardSelectIconComponent__bool__TypeInfo, v23, v24);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          iconArray,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSelectIconComponent___);
  this->fields.selectedClassIcon = (struct ClassBoardSelectIconComponent_o *)v27;
  p_selectedClassIcon = &this->fields.selectedClassIcon;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectedClassIcon, (int32_t)v27, v29, v30);
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
          v35 = this->fields.selectedClassIcon;
          this->fields.selectedClassIconBasePos = localPosition;
          if ( v35 )
          {
            iconRootObj = (__int64)v35->fields.classIconUi;
            if ( iconRootObj )
            {
              UIWidget__set_depth((UIWidget_o *)iconRootObj, *(_DWORD *)(iconRootObj + 176) + 1, 0LL);
              iconRootObj = (__int64)*p_selectedClassIcon;
              if ( *p_selectedClassIcon )
              {
                iconRootObj = (__int64)ClassBoardSelectIconComponent__GetClassBoardEnterAnimName(
                                         (ClassBoardSelectIconComponent_o *)iconRootObj,
                                         v36);
                if ( *p_selectedClassIcon )
                {
                  v37 = (System_String_o *)iconRootObj;
                  iconRootObj = (__int64)(*p_selectedClassIcon)->fields.anim;
                  if ( iconRootObj )
                  {
                    Clip = UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)iconRootObj, v37, 0LL);
                    v41 = sub_1B64314(ClassBoardSelectIconComponent_AnimClipInfo_TypeInfo, v39, v40);
                    ClassBoardSelectIconComponent_AnimClipInfo___ctor(
                      (ClassBoardSelectIconComponent_AnimClipInfo_o *)v41,
                      Clip,
                      v42);
                    iconRootObj = (__int64)ClassBoardSelectViewManager__GetClassBoardEnterAnimName(this, v43);
                    if ( v41 )
                    {
                      v46 = *(float *)(v41 + 28);
                      anim = this->fields.anim;
                      v48 = (System_String_o *)iconRootObj;
                      v49 = (SchedulerTaskAnimation_o *)sub_1B64314(SchedulerTaskAnimation_TypeInfo, v44, v45);
                      SchedulerTaskAnimation___ctor(v49, anim, v48, 0LL);
                      v51 = ClassBoardSelectViewManager__DelayAttachedTask(v46, (SchedulerTaskBase_o *)v49, v50);
                      v52 = *(float *)(v41 + 44);
                      v53 = v51;
                      v56 = sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v54, v55);
                      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v56, v52, 0LL);
                      v57 = (Il2CppObject *)this->fields.selectedClassIcon;
                      v60 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(
                                                                  SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                  v58,
                                                                  v59);
                      SchedulerTaskBase_TaskCallback___ctor(
                        v60,
                        v57,
                        Method_ClassBoardSelectIconComponent_PlayTransitionAnim__,
                        0LL);
                      if ( v56 )
                      {
                        *(_QWORD *)(v56 + 32) = v60;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 32), (int32_t)v60, v61, v62);
                        v65 = AvalonSceneManager_TypeInfo;
                        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                          v65 = AvalonSceneManager_TypeInfo;
                        }
                        DEFAULT_FADE_TIME = v65->static_fields->DEFAULT_FADE_TIME;
                        *(_BYTE *)(v21 + 20) = 1;
                        *(float *)(v21 + 24) = DEFAULT_FADE_TIME;
                        v67 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v63, v64);
                        System_Func_bool____ctor(
                          v67,
                          (Il2CppObject *)v21,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__1__,
                          0LL);
                        v70 = sub_1B64314(SchedulerTaskWaitWhile_TypeInfo, v68, v69);
                        SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v70, v67, 0LL);
                        v73 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(
                                                                    SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                    v71,
                                                                    v72);
                        SchedulerTaskBase_TaskCallback___ctor(
                          v73,
                          (Il2CppObject *)v21,
                          Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__2__,
                          0LL);
                        if ( v70 )
                        {
                          *(_QWORD *)(v70 + 24) = v73;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 24), (int32_t)v73, v74, v75);
                          iconRootObj = (__int64)ClassBoardSelectViewManager__DelayAttachedTask(
                                                   *(float *)(v41 + 24),
                                                   (SchedulerTaskBase_o *)v70,
                                                   v76);
                          if ( *p_selectedClassIcon )
                          {
                            v79 = (SchedulerTaskBase_o *)iconRootObj;
                            v80 = (*p_selectedClassIcon)->fields.anim;
                            v81 = (SchedulerTaskAnimation_o *)sub_1B64314(SchedulerTaskAnimation_TypeInfo, v77, v78);
                            SchedulerTaskAnimation___ctor(v81, v80, v37, 0LL);
                            iconRootObj = sub_1B64170(SchedulerTaskBase___TypeInfo, 4LL);
                            if ( iconRootObj )
                            {
                              v85 = (SchedulerTaskBase_array *)iconRootObj;
                              if ( !v81
                                || (iconRootObj = sub_1B64204(v81, *(_QWORD *)(*(_QWORD *)iconRootObj + 64LL))) != 0 )
                              {
                                if ( !v85->max_length )
                                  goto LABEL_37;
                                v85->m_Items[0] = (SchedulerTaskBase_o *)v81;
                                sub_1B6406C((ServantStatusBattleListViewItem_o *)v85->m_Items, (int32_t)v81, v83, v84);
                                if ( !v53 || (iconRootObj = sub_1B64204(v53, v85->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v85->max_length <= 1 )
                                    goto LABEL_37;
                                  v85->m_Items[1] = v53;
                                  sub_1B6406C(
                                    (ServantStatusBattleListViewItem_o *)&v85->m_Items[1],
                                    (int32_t)v53,
                                    v86,
                                    v87);
                                  iconRootObj = sub_1B64204(v56, v85->obj.klass->_1.element_class);
                                  if ( iconRootObj )
                                  {
                                    if ( v85->max_length <= 2 )
                                      goto LABEL_37;
                                    v85->m_Items[2] = (SchedulerTaskBase_o *)v56;
                                    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v85->m_Items[2], v56, v88, v89);
                                    if ( !v79 || (iconRootObj = sub_1B64204(v79, v85->obj.klass->_1.element_class)) != 0 )
                                    {
                                      if ( v85->max_length > 3 )
                                      {
                                        v85->m_Items[3] = v79;
                                        sub_1B6406C(
                                          (ServantStatusBattleListViewItem_o *)&v85->m_Items[3],
                                          (int32_t)v79,
                                          v90,
                                          v91);
                                        v34 = (SchedulerTaskParallel_o *)sub_1B64314(
                                                                           SchedulerTaskParallel_TypeInfo,
                                                                           v92,
                                                                           v93);
                                        SchedulerTaskParallel___ctor(v34, v85, 0LL);
                                        return (SchedulerTaskBase_o *)v34;
                                      }
LABEL_37:
                                      sub_1B6432C(iconRootObj, v82);
                                    }
                                  }
                                }
                              }
                              v95 = sub_1B64348(iconRootObj);
                              sub_1B641F0(v95, 0LL);
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
    sub_1B64324(iconRootObj);
  }
  v34 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v32, v33);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v34, 0.5, 0LL);
  return (SchedulerTaskBase_o *)v34;
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
        sub_1B6432C(this, method);
      this = (ClassBoardSelectViewManager_o *)iconArray->m_Items[v5];
      if ( !this )
        break;
      ClassBoardSelectIconComponent__SetParticlesActivate((ClassBoardSelectIconComponent_o *)this, 0, v2);
      max_length = iconArray->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64324(this);
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
  Il2CppObject *Entity; // x0
  System_String_o *monitor; // x19

  if ( (byte_49FF86B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BgmMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_AnimationState___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v6);
    sub_1B640C8(&SoundManager_TypeInfo, v7);
    byte_49FF86B = 1;
  }
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.anim,
                                                              (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
  v9 = System_Linq_Enumerable__ToArray_object_(
         v8,
         (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  this->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animationStateArray, (int32_t)v9, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.bgmId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__GetEntity__);
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
  __int64 v6; // x1
  __int64 v7; // x2
  SceneJumpInfo_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_49FF879 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&SceneList_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_49FF879 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(92, 0LL);
  v8 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v6, v7);
  SceneJumpInfo___ctor_38274656(v8, SceneName, 0LL);
  if ( !Instance )
    sub_1B64324(v9);
  AvalonSceneManager__transitionScene_37970720((AvalonSceneManager_o *)Instance, 32, 0LL, 1, (Il2CppObject *)v8, 0LL);
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
  ClassBoardBaseEntity_o *Entity_k__BackingField; // x0
  struct System_Action_int__int__o *onSelectClassBoard; // x8
  struct ClassBoardBaseEntity_o *v18; // x9
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct ClassBoardBaseEntity_o *v22; // x9
  CommonUI_o *v23; // x20
  System_String_o *closedMessage; // x19
  System_String_o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  CommonUI_o *v28; // x20
  ClassBoardSelectViewManager___c_c *v29; // x8
  System_Action_o *_9__33_1; // x22
  System_String_o *v31; // x21
  Il2CppObject *v32; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x21
  System_Action_o *v37; // x22
  Il2CppObject *v38; // x23
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3

  if ( (byte_49FF871 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, icon);
    sub_1B640C8(&Method_ClassBoardSelectViewManager_OnClickIcon__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, v8);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, v9);
    sub_1B640C8(&ClassBoardSelectViewManager___c_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_3453/*"CLASS_BOARD_BASE_UNRELEASED"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FF871 = 1;
  }
  v13 = Method_ClassBoardSelectViewManager_OnClickIcon__;
  if ( (*((_BYTE *)Method_ClassBoardSelectViewManager_OnClickIcon__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B640E0(Method_ClassBoardSelectViewManager_OnClickIcon__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
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
        v18 = icon->fields._Entity_k__BackingField;
        if ( v18 )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))onSelectClassBoard->fields.m_target)(
            onSelectClassBoard->fields.original_method_info,
            (unsigned int)v18->fields.id,
            (unsigned int)v18->fields.iconId,
            *(_QWORD *)&onSelectClassBoard->fields.extra_arg);
          return;
        }
LABEL_34:
        sub_1B64324(IsOpen);
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = icon->fields._Entity_k__BackingField;
      v23 = (CommonUI_o *)Instance;
      if ( v22 )
        closedMessage = v22->fields.closedMessage;
      else
        closedMessage = 0LL;
      v36 = (System_String_o *)StringLiteral_1/*""*/;
      IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
        IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v37 = *(System_Action_o **)(*((_QWORD *)IsOpen + 23) + 32LL);
      if ( !v37 )
      {
        if ( !*((_DWORD *)IsOpen + 56) )
        {
          j_il2cpp_runtime_class_init_0(IsOpen);
          IsOpen = ClassBoardSelectViewManager___c_TypeInfo;
        }
        v38 = (Il2CppObject *)**((_QWORD **)IsOpen + 23);
        v37 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
        System_Action___ctor(v37, v38, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_0__, 0LL);
        static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
        static_fields->__9__33_0 = v37;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__33_0, (int32_t)v37, v40, v41);
      }
      if ( !v23 )
        goto LABEL_34;
      CommonUI__OpenNotificationDialog(v23, v36, closedMessage, v37, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3453/*"CLASS_BOARD_BASE_UNRELEASED"*/, 0LL);
    IsOpen = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (CommonUI_o *)IsOpen;
    v29 = ClassBoardSelectViewManager___c_TypeInfo;
    if ( !ClassBoardSelectViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardSelectViewManager___c_TypeInfo);
      v29 = ClassBoardSelectViewManager___c_TypeInfo;
    }
    _9__33_1 = v29->static_fields->__9__33_1;
    v31 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__33_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = ClassBoardSelectViewManager___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__33_1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
      System_Action___ctor(_9__33_1, v32, Method_ClassBoardSelectViewManager___c__OnClickIcon_b__33_1__, 0LL);
      v33 = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
      v33->__9__33_1 = _9__33_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->__9__33_1, (int32_t)_9__33_1, v34, v35);
    }
    if ( !v28 )
      goto LABEL_34;
    CommonUI__OpenNotificationDialog(v28, v31, v25, _9__33_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall ClassBoardSelectViewManager__OpenHelp(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_49FF86F & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__, v4);
    byte_49FF86F = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__OpenHelp_b__31_0__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 81, v7, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x19

  if ( (byte_49FF870 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, finishCallback);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__, v6);
    sub_1B640C8(&ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo, v7);
    byte_49FF870 = 1;
  }
  v8 = sub_1B64314(ClassBoardSelectViewManager___c__DisplayClass32_0_TypeInfo, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)finishCallback, v12, v13);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    1,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v8,
    Method_ClassBoardSelectViewManager___c__DisplayClass32_0__OpenHelpIfNotYet_b__0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 81, v16, 0, 0, 0, 0, 0LL);
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
  __int64 v14; // x2
  System_Action_o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_object__o *v19; // x22
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  ActionChain_o *v25; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  System_Action_array *v28; // x21

  if ( (byte_49FF86E & 1) == 0 )
  {
    sub_1B640C8(&ActionChain_TypeInfo, method);
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, v3);
    sub_1B640C8(&System_Action___TypeInfo, v4);
    sub_1B640C8(&System_Action_Action____TypeInfo, v5);
    sub_1B640C8(&System_Action_Action__TypeInfo, v6);
    sub_1B640C8(&System_Action_TypeInfo, v7);
    sub_1B640C8(&Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, v8);
    sub_1B640C8(&Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, v9);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    byte_49FF86E = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    1,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  ClassBoardSelectViewManager__GetTaskOfFirstTransition(this, v11);
  Instance = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardSelectViewManager__PlayStartAction_b__30_0__, 0LL);
  v16 = sub_1B64170(System_Action_Action____TypeInfo, 1LL);
  v19 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v17, v18);
  System_Action_object____ctor(v19, (Il2CppObject *)this, Method_ClassBoardSelectViewManager_OpenHelpIfNotYet__, 0LL);
  if ( !v16 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v16 + 32) = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)v19, v21, v22);
  v25 = (ActionChain_o *)sub_1B64314(ActionChain_TypeInfo, v23, v24);
  ActionChain___ctor_46278092(v25, (System_Action_Action__array *)v16, 0LL);
  Instance = (char *)sub_1B64170(System_Action___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_11;
  v28 = (System_Action_array *)Instance;
  if ( !*((_DWORD *)Instance + 6) )
LABEL_12:
    sub_1B6432C(Instance, v20);
  *((_QWORD *)Instance + 4) = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(Instance + 32), (int32_t)v15, v26, v27);
  if ( !v25 || (Instance = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v25, v28, 0LL)) == 0LL )
LABEL_11:
    sub_1B64324(Instance);
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Resume(
        ClassBoardSelectViewManager_o *this,
        ClassBoardBackground_o *classBoardBackground,
        const MethodInfo *method)
{
  __int64 v4; // x0

  ClassBoardSelectViewManager__SetUpHeaderItemList(this, (const MethodInfo *)classBoardBackground);
  if ( !classBoardBackground )
    sub_1B64324(v4);
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
  if ( (byte_49FF878 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager_o *)sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, method);
    byte_49FF878 = 1;
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
    p_method = sub_1BB60A8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || !classBoardUIController_k__BackingField )
LABEL_13:
    sub_1B64324(this);
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
  const MethodInfo *v22; // x1
  struct ClassBoardUIController_o *classBoardUIController_k__BackingField; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  struct ClassBoardUIController_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x2
  struct IClassBoardResourceCatalog_o *v36; // x21
  IClassBoardResourceCatalog_c *v37; // x8
  ClassBoardUIController_o *v38; // x20
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x1
  struct IClassBoardResourceCatalog_o *v44; // x20
  IClassBoardResourceCatalog_c *v45; // x8
  ClassBoardUIController_o *v46; // x19
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  AtlasManagerUnit_o *v50; // x20
  const MethodInfo *v51; // x3

  v2 = this;
  if ( (byte_49FF877 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardSelectViewManager_OnClickBack__, v3);
    sub_1B640C8(&Method_ClassBoardSelectViewManager_OpenHelp__, v4);
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_ClassBoardUIController___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_20431/*"img_txt_classscore_main"*/, v9);
    this = (ClassBoardSelectViewManager_o *)sub_1B640C8(&StringLiteral_3493/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, v10);
    byte_49FF877 = 1;
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
    p_method = sub_1BB60A8(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
  v18 = UnityEngine_Object__Instantiate_object__49003980(
          anim,
          uiRoot,
          (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_ClassBoardUIController___);
  v2->fields._classBoardUIController_k__BackingField = (struct ClassBoardUIController_o *)v18;
  p_classBoardUIController_k__BackingField = (ClassBoardSelectViewManager_o **)&v2->fields._classBoardUIController_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v2->fields._classBoardUIController_k__BackingField,
    (int32_t)v18,
    v20,
    v21);
  this = (ClassBoardSelectViewManager_o *)v2->fields._classBoardUIController_k__BackingField;
  if ( !this )
    goto LABEL_38;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, v22);
  classBoardUIController_k__BackingField = v2->fields._classBoardUIController_k__BackingField;
  v26 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OnClickBack__, 0LL);
  if ( !classBoardUIController_k__BackingField )
    goto LABEL_38;
  classBoardUIController_k__BackingField->fields.onClickBack = v26;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&classBoardUIController_k__BackingField->fields.onClickBack,
    (int32_t)v26,
    v27,
    v28);
  v29 = v2->fields._classBoardUIController_k__BackingField;
  v32 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)v2, Method_ClassBoardSelectViewManager_OpenHelp__, 0LL);
  if ( !v29 )
    goto LABEL_38;
  v29->fields.onClickHelp = v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->fields.onClickHelp, (int32_t)v32, v33, v34);
  this = *p_classBoardUIController_k__BackingField;
  if ( !*p_classBoardUIController_k__BackingField )
    goto LABEL_38;
  ClassBoardUIController__ActivateEffectListButton((ClassBoardUIController_o *)this, 0, v35);
  v36 = v2->fields.resourceCatalog;
  if ( !v36 )
    goto LABEL_38;
  v37 = v36->klass;
  v38 = v2->fields._classBoardUIController_k__BackingField;
  v39 = *(unsigned __int16 *)(&v36->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v36->klass->_2.bitflags2 + 3) )
  {
    v40 = &v37->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v40 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_22;
    }
    v41 = (__int64)&v37->vtable[*v40].method;
  }
  else
  {
LABEL_22:
    v41 = sub_1BB60A8(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v41)(
                                            v36,
                                            *(_QWORD *)(v41 + 8));
  if ( !this )
    goto LABEL_38;
  if ( !v38 )
    goto LABEL_38;
  ClassBoardUIController__SetHeaderTitle(
    v38,
    *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z,
    (System_String_o *)StringLiteral_20431/*"img_txt_classscore_main"*/,
    v42);
  ClassBoardSelectViewManager__SetUpHeaderItemList(v2, v43);
  v44 = v2->fields.resourceCatalog;
  if ( !v44 )
    goto LABEL_38;
  v45 = v44->klass;
  v46 = v2->fields._classBoardUIController_k__BackingField;
  v47 = *(unsigned __int16 *)(&v44->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v44->klass->_2.bitflags2 + 3) )
  {
    v48 = &v45->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v48 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_31;
    }
    v49 = (__int64)&v45->vtable[*v48].method;
  }
  else
  {
LABEL_31:
    v49 = sub_1BB60A8(v44, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v49)(
                                            v44,
                                            *(_QWORD *)(v49 + 8));
  if ( !this )
    goto LABEL_38;
  v50 = *(AtlasManagerUnit_o **)&this->fields.selectedClassIconBasePos.fields.z;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardSelectViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3493/*"CLASS_BOARD_SELECT_HEADER_MESSAGE"*/, 0LL);
  if ( !v46 )
LABEL_38:
    sub_1B64324(this);
  ClassBoardUIController__SetHeaderMessage(v46, v50, (System_String_o *)this, v51);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  ClassBoardResourceCatalogAssetBundle_o **v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct IClassBoardResourceCatalog_o *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  ClassBoardResourceCatalogAssetBundle_o *v35; // x20
  __int64 methodPtr_low; // x10
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2
  __int64 v39; // x10

  if ( (byte_49FF86C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, classBoardBackground);
    sub_1B640C8(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v9);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__, v10);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__, v11);
    sub_1B640C8(&ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo, v12);
    byte_49FF86C = 1;
  }
  v13 = sub_1B64314(ClassBoardSelectViewManager___c__DisplayClass27_0_TypeInfo, classBoardBackground, resourceCatalog);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = classBoardBackground;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)classBoardBackground, v15, v16);
  *(_QWORD *)(v13 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)this, v17, v18);
  *(_QWORD *)(v13 + 32) = resourceCatalog;
  v19 = (ClassBoardResourceCatalogAssetBundle_o **)(v13 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)resourceCatalog, v20, v21);
  *(_QWORD *)(v13 + 40) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)finishCallback, v22, v23);
  v24 = *(struct IClassBoardResourceCatalog_o **)(v13 + 32);
  this->fields.resourceCatalog = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resourceCatalog, (int32_t)v24, v25, v26);
  v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__0__,
    0LL);
  *(_QWORD *)(v13 + 48) = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 48), (int32_t)v29, v30, v31);
  if ( ClassBoardSelectViewManager__ValidateBoardUIAtlas(this, v32)
    || (v35 = *v19) == 0LL
    || (methodPtr_low = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v35->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ClassBoardResourceCatalogAssetBundle_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 48), 0LL);
    return;
  }
  v37 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v13,
    Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__3__,
    0LL);
  v39 = LOBYTE(ClassBoardResourceCatalogAssetBundle_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v35->klass->vtable._0_Equals.methodPtr) < (unsigned int)v39
    || (ClassBoardResourceCatalogAssetBundle_c *)v35->klass->_2.typeHierarchy[v39 - 1] != ClassBoardResourceCatalogAssetBundle_TypeInfo )
  {
LABEL_12:
    sub_1B64324(v14);
  }
  ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(v35, v37, v38);
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
        sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
  if ( (byte_49FF86D & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, method);
    this = (ClassBoardSelectViewManager_o *)sub_1B640C8(&StringLiteral_20431/*"img_txt_classscore_main"*/, v3);
    byte_49FF86D = 1;
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
    p_method = sub_1BB60A8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardSelectViewManager_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                            resourceCatalog,
                                            *(_QWORD *)(p_method + 8));
  if ( !this || (this = *(ClassBoardSelectViewManager_o **)&this->fields.selectedClassIconBasePos.fields.z) == 0LL )
LABEL_13:
    sub_1B64324(this);
  return AtlasManagerUnit__ValidateLoadSprite((AtlasManagerUnit_o *)this, (System_String_o *)StringLiteral_20431/*"img_txt_classscore_main"*/, 0LL);
}


void __fastcall ClassBoardSelectViewManager__Validation(ClassBoardSelectViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardSelectViewManager___OpenHelp_b__31_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF87D & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    byte_49FF87D = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall ClassBoardSelectViewManager___PlayStartAction_b__30_0(
        ClassBoardSelectViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FF87C & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    byte_49FF87C = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setAllTouchBlock,
    0,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardSelectViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF87E & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardSelectViewManager___c_TypeInfo, v1);
    byte_49FF87E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ClassBoardSelectViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ClassBoardSelectViewManager___c_TypeInfo->static_fields->__9 = (struct ClassBoardSelectViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardSelectViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  UnityEngine_AnimationEvent__set_messageOptions(ev, 1, 0LL);
}


bool __fastcall ClassBoardSelectViewManager___c___GetPlayClassBoardReleaseList_b__42_0(
        ClassBoardSelectViewManager___c_o *this,
        ClassBoardSelectIconComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return ClassBoardSelectIconComponent__IsReleaseEffectPlayable(x, (const MethodInfo *)x);
}


void __fastcall ClassBoardSelectViewManager___c___GetTaskOfFirstTransition_b__34_0(
        ClassBoardSelectViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  CommonUI_o *v4; // x19

  if ( (byte_49FF87F & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_49FF87F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1B64324(Instance);
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
    sub_1B64324(this);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_33377468(gameObject, 0.0, 0LL);
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
    sub_1B64324(this);
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
  __int64 v11; // x1
  __int64 v12; // x2
  struct ClassBoardSelectViewManager_o *v13; // x8
  System_Collections_Generic_IEnumerable_T__o *iconArray; // x20
  struct System_Action_ClassBoardSelectIconComponent__o *_9__1; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  struct ClassBoardSelectViewManager_o *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x20
  ClassBoardSelectViewManager___c_c *v22; // x0
  System_Action_object__o *_9__27_2; // x21
  Il2CppObject *v24; // x22
  struct ClassBoardSelectViewManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct ClassBoardSelectViewManager_o *v28; // x20
  const MethodInfo *v29; // x1
  struct UnityEngine_GameObject_o *bgObject; // x8
  int32_t monitor; // w8

  if ( (byte_49FF880 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ClassBoardSelectIconComponent__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___, v3);
    sub_1B640C8(&Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___, v4);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, v5);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__, v6);
    sub_1B640C8(&ClassBoardSelectViewManager___c_TypeInfo, v7);
    byte_49FF880 = 1;
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
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_25;
  iconArray = (System_Collections_Generic_IEnumerable_T__o *)v13->fields.iconArray;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Action_ClassBoardSelectIconComponent__o *)sub_1B64314(
                                                                       System_Action_ClassBoardSelectIconComponent__TypeInfo,
                                                                       v11,
                                                                       v12);
    System_Action_object____ctor(
      (System_Action_object__o *)_9__1,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass27_0__StartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v16, v17);
  }
  BasicHelper__ForEach_object_(
    iconArray,
    (System_Action_T__o *)_9__1,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
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
    _9__27_2 = (System_Action_object__o *)sub_1B64314(System_Action_ClassBoardSelectIconComponent__TypeInfo, v18, v19);
    System_Action_object____ctor(_9__27_2, v24, Method_ClassBoardSelectViewManager___c__StartUp_b__27_2__, 0LL);
    static_fields = ClassBoardSelectViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_2 = (struct System_Action_ClassBoardSelectIconComponent__o *)_9__27_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_2, (int32_t)_9__27_2, v26, v27);
  }
  BasicHelper__ForEach_object_(
    v21,
    (System_Action_T__o *)_9__27_2,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_ClassBoardSelectIconComponent___);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_25;
  classBoardBackground = (ClassBoardBackground_o *)BasicHelper__IndexValue_object_(
                                                     (System_Object_array *)v28->fields.iconArray,
                                                     0,
                                                     0LL,
                                                     (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_ClassBoardSelectIconComponent___);
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
  v28->fields.iconDefaultDepth = monitor;
  classBoardBackground = (ClassBoardBackground_o *)this->fields.__4__this;
  if ( !classBoardBackground )
LABEL_25:
    sub_1B64324(classBoardBackground);
  ClassBoardSelectViewManager__SetupClassBoardUIController((ClassBoardSelectViewManager_o *)classBoardBackground, v29);
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
  const MethodInfo *v10; // x3

  if ( (byte_49FF881 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ClassBoardSelectIconComponent__TypeInfo, x);
    sub_1B640C8(&Method_ClassBoardSelectViewManager_OnClickIcon__, v5);
    byte_49FF881 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  resourceCatalog = this->fields.resourceCatalog;
  v8 = (System_Action_object__o *)sub_1B64314(System_Action_ClassBoardSelectIconComponent__TypeInfo, x, method);
  System_Action_object____ctor(v8, _4__this, (intptr_t)Method_ClassBoardSelectViewManager_OnClickIcon__, 0LL);
  if ( !x )
    sub_1B64324(v9);
  ClassBoardSelectIconComponent__Setup(x, resourceCatalog, (System_Action_ClassBoardSelectIconComponent__o *)v8, v10);
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
  if ( (byte_49FF882 & 1) == 0 )
  {
    this = (ClassBoardSelectViewManager___c__DisplayClass32_0_o *)sub_1B640C8(
                                                                    &Method_ActionExtensions_Call_bool___,
                                                                    method);
    byte_49FF882 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)_4__this->fields.setCameraWorkBlock,
    0,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
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

  if ( (byte_49FF883 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FF883 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v7; // x2
  System_Action_o *_9__3; // x21
  CommonUI_o *v9; // x20
  float fadeTime; // s8
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF884 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__, v4);
    byte_49FF884 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__3 = this->fields.__9__3;
  v9 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardSelectViewManager___c__DisplayClass36_0__GetTaskOfGoingToClassBoard_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v11, v12);
  }
  if ( !v9 )
    sub_1B64324(Instance);
  CommonUI__maskFadeout(v9, 2, fadeTime, _9__3, 0LL);
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
    sub_1B64324(0LL);
  ClassBoardSelectIconComponent__UpdateUI(iconComponent, method);
}