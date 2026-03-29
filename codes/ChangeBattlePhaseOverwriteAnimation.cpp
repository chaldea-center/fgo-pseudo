void ChangeBattlePhaseOverwriteAnimation___ctor(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *battleActor,
        ServantAnimationOverwriteEntity_array *overwriteArray,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D33E92 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
    byte_4D33E92 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.overwriteList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actor = battleActor;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.actor, (int32_t)battleActor, v16, v17, v18, v19, v20, v21);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v22);
  if ( notify )
  {
    v24 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v23);
    this->fields.current = v24;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.current, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  }
}


ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *overwriteList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4D33E94 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
    sub_1C93AD4(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
    sub_1C93AD4(&Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__);
    sub_1C93AD4(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
    byte_4D33E94 = 1;
  }
  v5 = sub_1C93D20(ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = phaseType,
        overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList,
        v9 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          0),
        !overwriteList) )
  {
    sub_1C93D2C(v6, v7);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_object___Find(
                                                                           overwriteList,
                                                                           (System_Predicate_T__o *)v9,
                                                                           (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
}


ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *result; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w0
  const MethodInfo *v8; // x2

  if ( !notify )
    sub_1C93D2C(this, 0);
  result = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
             this,
             notify->fields._DetailPhase_k__BackingField,
             method);
  if ( !result )
  {
    v7 = ChangeBattlePhaseNotify__get_Phase(notify, v6);
    if ( v7 == notify->fields._DetailPhase_k__BackingField )
      return 0;
    else
      return ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v7, v8);
  }
  return result;
}


System_String_o *ChangeBattlePhaseOverwriteAnimation__GetCurrentNormalOverwriteName(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        System_String_o *baseAnimName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4D33E97 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D33E97 = 1;
  }
  if ( System_String__IsNullOrEmpty(baseAnimName, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return ChangeBattlePhaseOverwriteAnimation__GetCurrentOverwriteName(this, baseAnimName, v5);
}


System_String_o *ChangeBattlePhaseOverwriteAnimation__GetCurrentOverwriteName(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        System_String_o *baseAnimName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x21
  __int64 v6; // x1
  BattleActorControl_o *v7; // x0
  const MethodInfo *v8; // x2
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *current; // x0

  if ( (byte_4D33E98 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D33E98 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(actor, 0, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v7 = this->fields.actor;
  if ( !v7 )
    sub_1C93D2C(0, v6);
  if ( BattleActorControl__get_IsDeadAnime(v7, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  current = this->fields.current;
  if ( !current )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(current, baseAnimName, v8);
}


void ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        ServantAnimationOverwriteEntity_array *overwriteEntArray,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation___c_c *v5; // x0
  System_Func_object__int__o *_9__5_0; // x21
  Il2CppObject *v7; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x0
  ChangeBattlePhaseOverwriteAnimation___c_c *v16; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x20
  System_Func_object__int__o *_9__5_1; // x21
  Il2CppObject *v19; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  __int64 v28; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x20
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  __int64 v47; // x21
  int32_t v48; // w23
  const MethodInfo *v49; // x3
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v50; // x22
  const MethodInfo *v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_Collections_Generic_List_object__o *overwriteList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x8
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0

  if ( (byte_4D33E93 & 1) == 0 )
  {
    sub_1C93AD4(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
    sub_1C93AD4(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__);
    sub_1C93AD4(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__);
    sub_1C93AD4(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__);
    sub_1C93AD4(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    byte_4D33E93 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  if ( !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v5 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__int__o *)v5->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__5_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_0,
      v7,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      0);
    static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_31D38D0 *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v16 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v17 = v15;
  if ( !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v16 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v16->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v19,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      0);
    v20 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v20->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v20->__9__5_1, (int32_t)_9__5_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v17,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_31E35A8 *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v27 )
    sub_1C93D2C(0, v28);
  klass = v27->klass;
  v30 = v27;
  v31 = *(unsigned __int16 *)&v27->klass->_2.rank;
  if ( *(_WORD *)&v27->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_20;
    }
    v33 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_20:
    v33 = sub_1C69E5C(v27, System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, 0);
  }
  v35 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  if ( !v35 )
    sub_1C93D2C(0, v34);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_27;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_27:
      v39 = sub_1C69E5C(v35, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v42 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_34;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_34:
      v43 = sub_1C69E5C(v35, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    v47 = v44;
    if ( !v44 )
      sub_1C93D2C(0, v45);
    v48 = *(_DWORD *)(v44 + 28);
    v50 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v48, v46);
    if ( !v50 )
    {
      v50 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_1C93D20(ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v50, v51);
      if ( !v50 )
        sub_1C93D2C(v52, v53);
      v50->fields.phase = v48;
      overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList;
      if ( !overwriteList )
        sub_1C93D2C(0, v53);
      items = overwriteList->fields._items;
      v62 = Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__;
      ++overwriteList->fields._version;
      if ( !items )
        sub_1C93D2C(overwriteList, v53);
      size = overwriteList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          overwriteList,
          (Il2CppObject *)v50,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        overwriteList->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v50;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v64 + 4), (int32_t)v50, v54, v55, v56, v57, v58, v59);
      }
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v50,
      *(System_String_o **)(v47 + 40),
      *(System_String_o **)(v47 + 48),
      v49);
  }
  v65 = *(_QWORD *)v35;
  v66 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_49;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_49:
    v68 = sub_1C69E5C(v35, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v68)(v35, *(_QWORD *)(v68 + 8));
}


bool ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *bActor,
        System_String_o *originalAnim,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  bool v7; // w8
  bool result; // w0
  UnityEngine_Object_o *fbxcomponent; // x21
  struct BattleFBXComponent_o *v10; // x8

  if ( (byte_4D33E96 & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33E96 = 1;
  }
  if ( !bActor )
    goto LABEL_14;
  v6 = BattleActorControl__OverwriteAnimation(bActor, originalAnim, 0, 0);
  v7 = BattleActorControl__checkAnimation(bActor, v6, 0);
  result = 0;
  if ( !v7 )
    return result;
  fbxcomponent = (UnityEngine_Object_o *)bActor->fields.fbxcomponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ChangeBattlePhaseOverwriteAnimation_o *)UnityEngine_Object__op_Inequality(fbxcomponent, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = bActor->fields.fbxcomponent;
    if ( v10 && v6 )
      return !System_String__Equals_64461044(v6, v10->fields.currentCommonAnimName, 0);
LABEL_14:
    sub_1C93D2C(this, bActor);
  }
  return 1;
}


System_String_o *ChangeBattlePhaseOverwriteAnimation__Overwrite(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *bActor,
        System_String_o *baseAnimName,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21

  v6 = ChangeBattlePhaseOverwriteAnimation__GetCurrentOverwriteName(
         this,
         baseAnimName,
         (const MethodInfo *)baseAnimName);
  if ( !bActor )
    sub_1C93D2C(v6, v7);
  v8 = v6;
  if ( BattleActorControl__checkAnimation(bActor, v6, 0) )
    return v8;
  else
    return baseAnimName;
}


void ChangeBattlePhaseOverwriteAnimation__UpdateNotify(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v5; // x0
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o **p_current; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_Object_o *v13; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_String_o *m_CachedPtr; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4D33E95 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33E95 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  p_current = &this->fields.current;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_current, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  v13 = (UnityEngine_Object_o *)*(p_current - 1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality(v13, 0, 0);
  if ( v14 )
  {
    if ( !v13 )
      sub_1C93D2C(v14, v15);
    m_CachedPtr = (System_String_o *)v13[15].fields.m_CachedPtr;
    IsNullOrEmpty = System_String__IsNullOrEmpty(m_CachedPtr, 0);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           (BattleActorControl_o *)v13,
           m_CachedPtr,
           v18) )
    {
      BattleActorControl__playAnimation_47947364((BattleActorControl_o *)v13, m_CachedPtr, 0, 0);
    }
  }
}


void ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D33E9B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    byte_4D33E9B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dicOverwriteName, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        System_String_o *overwriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4D33E99 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_4D33E99 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_1C93D2C(dicOverwriteName, targetName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
    (Il2CppObject *)targetName,
    (Il2CppObject *)overwriteName,
    (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4D33E9A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D33E9A = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
                                  (Il2CppObject *)targetName,
                                  (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_1C93D2C(dicOverwriteName, targetName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D33E9C & 1) == 0 )
  {
    sub_1C93AD4(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    byte_4D33E9C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ChangeBattlePhaseOverwriteAnimation___c___ctor(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_0(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.type;
}


int32_t ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.svtLimitCount;
}


void ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___ctor(
        ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___FindOverwriteForDetailPhase_b__0(
        ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *this,
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.phase == this->fields.phaseType;
}