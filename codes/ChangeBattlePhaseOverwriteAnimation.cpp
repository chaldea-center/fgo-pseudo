void __fastcall ChangeBattlePhaseOverwriteAnimation___ctor(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *battleActor,
        ServantAnimationOverwriteEntity_array *overwriteArray,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5DE46 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
    byte_4A5DE46 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteList, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actor = battleActor;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actor, (int32_t)battleActor, v12, v13);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v14);
  if ( notify )
  {
    v16 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v15);
    this->fields.current = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.current, (int32_t)v16, v17, v18);
  }
}


ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *__fastcall ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *overwriteList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5DE48 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
    sub_1B885B0(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
    sub_1B885B0(&Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__);
    sub_1B885B0(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
    byte_4A5DE48 = 1;
  }
  v5 = sub_1B887FC(ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = phaseType,
        overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          0LL),
        !overwriteList) )
  {
    sub_1B8880C(v6, v7);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_object___Find(
                                                                           overwriteList,
                                                                           (System_Predicate_T__o *)v9,
                                                                           (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
}


ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *__fastcall ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *result; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w0
  const MethodInfo *v8; // x2

  if ( !notify )
    sub_1B8880C(this, 0LL);
  result = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
             this,
             notify->fields._DetailPhase_k__BackingField,
             method);
  if ( !result )
  {
    v7 = ChangeBattlePhaseNotify__get_Phase(notify, v6);
    if ( v7 == notify->fields._DetailPhase_k__BackingField )
      return 0LL;
    else
      return ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v7, v8);
  }
  return result;
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation__GetCurrentNormalOverwriteName(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        System_String_o *baseAnimName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *current; // x0

  if ( (byte_4A5DE4C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DE4C = 1;
  }
  if ( System_String__IsNullOrEmpty(baseAnimName, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  current = this->fields.current;
  if ( !current )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(current, baseAnimName, v5);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(
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
  System_Linq_IOrderedEnumerable_TSource__o *v11; // x0
  ChangeBattlePhaseOverwriteAnimation___c_c *v12; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x20
  System_Func_object__int__o *_9__5_1; // x21
  Il2CppObject *v15; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x20
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v26; // x1
  __int64 v27; // x20
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  __int64 v39; // x21
  int32_t v40; // w23
  const MethodInfo *v41; // x3
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v42; // x22
  const MethodInfo *v43; // x1
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_List_object__o *overwriteList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0

  if ( (byte_4A5DE47 & 1) == 0 )
  {
    sub_1B885B0(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
    sub_1B885B0(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__);
    sub_1B885B0(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__);
    sub_1B885B0(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__);
    sub_1B885B0(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    byte_4A5DE47 = 1;
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
    _9__5_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_0,
      v7,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      0LL);
    static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v12 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v13 = v11;
  if ( !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v12 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v12->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v15,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      0LL);
    v16 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v16->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->__9__5_1, (int32_t)_9__5_1, v17, v18);
  }
  v19 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v13,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_2EB7F74 *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v19 )
    sub_1B8880C(0LL, v20);
  klass = v19->klass;
  v22 = v19;
  v23 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_1BDA590(v19, System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v22,
          *(_QWORD *)(p_method + 8));
  if ( !v27 )
    sub_1B8880C(0LL, v26);
  while ( 1 )
  {
    v28 = *(_QWORD *)v27;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_27;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_27:
      v31 = sub_1BDA590(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v27;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_34;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_34:
      v35 = sub_1BDA590(v27, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
    v39 = v36;
    if ( !v36 )
      sub_1B8880C(0LL, v37);
    v40 = *(_DWORD *)(v36 + 28);
    v42 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v40, v38);
    if ( !v42 )
    {
      v42 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_1B887FC(ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v42, v43);
      if ( !v42 )
        sub_1B8880C(v44, v45);
      v42->fields.phase = v40;
      overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList;
      if ( !overwriteList )
        sub_1B8880C(0LL, v45);
      items = overwriteList->fields._items;
      v50 = Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__;
      ++overwriteList->fields._version;
      if ( !items )
        sub_1B8880C(overwriteList, v45);
      size = overwriteList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          overwriteList,
          (Il2CppObject *)v42,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        overwriteList->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v42;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v42, v46, v47);
      }
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v42,
      *(System_String_o **)(v39 + 40),
      *(System_String_o **)(v39 + 48),
      v41);
  }
  v53 = *(_QWORD *)v27;
  v54 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
  {
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_49;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_49:
    v56 = sub_1BDA590(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v27, *(_QWORD *)(v56 + 8));
}


bool __fastcall ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *bActor,
        System_String_o *originalAnim,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation_o *v6; // x20
  UnityEngine_Object_o *fbxcomponent; // x21
  struct BattleFBXComponent_o *v8; // x8

  if ( (byte_4A5DE4A & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE4A = 1;
  }
  if ( !bActor )
    goto LABEL_14;
  this = (ChangeBattlePhaseOverwriteAnimation_o *)BattleActorControl__OverwriteAnimation(
                                                    bActor,
                                                    originalAnim,
                                                    0,
                                                    method);
  if ( !bActor->fields.fbxcomponent )
    goto LABEL_14;
  v6 = this;
  if ( !BattleFBXComponent__checkAnimation(bActor->fields.fbxcomponent, (System_String_o *)this, 0LL) )
    return 0;
  fbxcomponent = (UnityEngine_Object_o *)bActor->fields.fbxcomponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ChangeBattlePhaseOverwriteAnimation_o *)UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = bActor->fields.fbxcomponent;
    if ( v8 && v6 )
      return !System_String__Equals_61715348((System_String_o *)v6, v8->fields.currentCommonAnimName, 0LL);
LABEL_14:
    sub_1B8880C(this, bActor);
  }
  return 1;
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation__Overwrite(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *bActor,
        System_String_o *baseAnimName,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *current; // x0
  System_String_o *v8; // x21

  if ( (byte_4A5DE4B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DE4B = 1;
  }
  current = this->fields.current;
  if ( current )
  {
    current = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
                                                                                current,
                                                                                baseAnimName,
                                                                                (const MethodInfo *)baseAnimName);
    v8 = (System_String_o *)current;
    if ( !bActor )
LABEL_11:
      sub_1B8880C(current, bActor);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !bActor )
      goto LABEL_11;
  }
  current = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)bActor->fields.fbxcomponent;
  if ( !current )
    goto LABEL_11;
  if ( BattleFBXComponent__checkAnimation((BattleFBXComponent_o *)current, v8, 0LL) )
    return v8;
  else
    return baseAnimName;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation__UpdateNotify(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v5; // x0
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o **p_current; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Object_o *v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_String_o *klass; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3

  if ( (byte_4A5DE49 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE49 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  p_current = &this->fields.current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_current, (int32_t)v5, v7, v8);
  v9 = (UnityEngine_Object_o *)*(p_current - 1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( v10 )
  {
    if ( !v9 )
      sub_1B8880C(v10, v11);
    klass = (System_String_o *)v9[14].klass;
    IsNullOrEmpty = System_String__IsNullOrEmpty(klass, 0LL);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           (BattleActorControl_o *)v9,
           klass,
           v14) )
    {
      BattleActorControl__playAnimation_43649396((BattleActorControl_o *)v9, klass, 0, v15);
    }
  }
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5DE4F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    byte_4A5DE4F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicOverwriteName, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        System_String_o *overwriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4A5DE4D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_4A5DE4D = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_1B8880C(dicOverwriteName, targetName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
    (Il2CppObject *)targetName,
    (Il2CppObject *)overwriteName,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4A5DE4E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DE4E = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
                                  (Il2CppObject *)targetName,
                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_1B8880C(dicOverwriteName, targetName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DE50 & 1) == 0 )
  {
    sub_1B885B0(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    byte_4A5DE50 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___ctor(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_0(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type;
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.svtLimitCount;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___ctor(
        ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___FindOverwriteForDetailPhase_b__0(
        ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *this,
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.phase == this->fields.phaseType;
}