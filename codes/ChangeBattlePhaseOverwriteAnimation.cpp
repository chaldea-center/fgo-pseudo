void __fastcall ChangeBattlePhaseOverwriteAnimation___ctor(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *battleActor,
        ServantAnimationOverwriteEntity_array *overwriteArray,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FF081 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__,
      battleActor);
    sub_1B640C8(
      &System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
      v9);
    byte_49FF081 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
                                                       battleActor,
                                                       overwriteArray);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.overwriteList, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actor = battleActor;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.actor, (int32_t)battleActor, v13, v14);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v15);
  if ( notify )
  {
    v17 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v16);
    this->fields.current = v17;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.current, (int32_t)v17, v18, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *__fastcall ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *overwriteList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FF083 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__,
      *(_QWORD *)&phaseType);
    sub_1B640C8(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo, v5);
    sub_1B640C8(
      &Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
      v6);
    sub_1B640C8(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo, v7);
    byte_49FF083 = 1;
  }
  v8 = sub_1B64314(ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo, *(_QWORD *)&phaseType, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = phaseType,
        overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList,
        v13 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
                                              v10,
                                              v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          0LL),
        !overwriteList) )
  {
    sub_1B64324(v9);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_object___Find(
                                                                           overwriteList,
                                                                           (System_Predicate_T__o *)v13,
                                                                           (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
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
    sub_1B64324(this);
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

  if ( (byte_49FF087 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, baseAnimName);
    byte_49FF087 = 1;
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
  ChangeBattlePhaseOverwriteAnimation___c_c *v16; // x0
  System_Func_object__int__o *_9__5_0; // x21
  Il2CppObject *v18; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  ChangeBattlePhaseOverwriteAnimation___c_c *v25; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x20
  System_Func_object__int__o *_9__5_1; // x21
  Il2CppObject *v28; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x20
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v38; // x20
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  const MethodInfo *v48; // x2
  __int64 v49; // x21
  int32_t v50; // w23
  __int64 v51; // x1
  __int64 v52; // x2
  const MethodInfo *v53; // x3
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v54; // x22
  const MethodInfo *v55; // x1
  __int64 v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_Collections_Generic_List_object__o *overwriteList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x8
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0

  if ( (byte_49FF082 & 1) == 0 )
  {
    sub_1B640C8(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo, overwriteEntArray);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___, v6);
    sub_1B640C8(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__,
      v12);
    sub_1B640C8(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__, v13);
    sub_1B640C8(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__, v14);
    sub_1B640C8(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v15);
    byte_49FF082 = 1;
  }
  v16 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  if ( !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v16 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__int__o *)v16->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__5_0 = (System_Func_object__int__o *)sub_1B64314(
                                              System_Func_ServantAnimationOverwriteEntity__int__TypeInfo,
                                              overwriteEntArray,
                                              method);
    System_Func_object__int____ctor(
      _9__5_0,
      v18,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      0LL);
    static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v20, v21);
  }
  v22 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v25 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v26 = v22;
  if ( !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v25 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v25->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1B64314(
                                              System_Func_ServantAnimationOverwriteEntity__int__TypeInfo,
                                              v23,
                                              v24);
    System_Func_object__int____ctor(
      _9__5_1,
      v28,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      0LL);
    v29 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v29->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->__9__5_1, (int32_t)_9__5_1, v30, v31);
  }
  v32 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v26,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_2E70DEC *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v32 )
    sub_1B64324(0LL);
  klass = v32->klass;
  v34 = v32;
  v35 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_1BB60A8(v32, System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v34,
          *(_QWORD *)(p_method + 8));
  if ( !v38 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v39 = *(_QWORD *)v38;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_27;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_27:
      v42 = sub_1BB60A8(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v43 = *(_QWORD *)v38;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v45 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_34;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_34:
      v46 = sub_1BB60A8(v38, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
    v49 = v47;
    if ( !v47 )
      sub_1B64324(0LL);
    v50 = *(_DWORD *)(v47 + 28);
    v54 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v50, v48);
    if ( !v54 )
    {
      v54 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_1B64314(
                                                                              ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo,
                                                                              v51,
                                                                              v52);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v54, v55);
      if ( !v54 )
        sub_1B64324(v56);
      v54->fields.phase = v50;
      overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList;
      if ( !overwriteList )
        sub_1B64324(0LL);
      items = overwriteList->fields._items;
      v61 = Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__;
      ++overwriteList->fields._version;
      if ( !items )
        sub_1B64324(overwriteList);
      size = overwriteList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          overwriteList,
          (Il2CppObject *)v54,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        overwriteList->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v54;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v54, v57, v58);
      }
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v54,
      *(System_String_o **)(v49 + 40),
      *(System_String_o **)(v49 + 48),
      v53);
  }
  v64 = *(_QWORD *)v38;
  v65 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
  {
    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_49;
    }
    v67 = v64 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_49:
    v67 = sub_1BB60A8(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v67)(v38, *(_QWORD *)(v67 + 8));
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

  if ( (byte_49FF085 & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, bActor);
    byte_49FF085 = 1;
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
      return !System_String__Equals_61383712((System_String_o *)v6, v8->fields.currentCommonAnimName, 0LL);
LABEL_14:
    sub_1B64324(this);
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

  if ( (byte_49FF086 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, bActor);
    byte_49FF086 = 1;
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
      sub_1B64324(current);
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
  System_String_o *klass; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  if ( (byte_49FF084 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, notify);
    byte_49FF084 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  p_current = &this->fields.current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_current, (int32_t)v5, v7, v8);
  v9 = (UnityEngine_Object_o *)*(p_current - 1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( v10 )
  {
    if ( !v9 )
      sub_1B64324(v10);
    klass = (System_String_o *)v9[14].klass;
    IsNullOrEmpty = System_String__IsNullOrEmpty(klass, 0LL);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           (BattleActorControl_o *)v9,
           klass,
           v13) )
    {
      BattleActorControl__playAnimation_43285100((BattleActorControl_o *)v9, klass, 0, v14);
    }
  }
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF08A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v4);
    byte_49FF08A = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                    method,
                                                                    v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicOverwriteName, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        System_String_o *overwriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_49FF088 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v7);
    byte_49FF088 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_1B64324(dicOverwriteName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
    (Il2CppObject *)targetName,
    (Il2CppObject *)overwriteName,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_49FF089 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FF089 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
                                  (Il2CppObject *)targetName,
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_1B64324(dicOverwriteName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF08B & 1) == 0 )
  {
    sub_1B640C8(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1);
    byte_49FF08B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields.type;
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.phase == this->fields.phaseType;
}