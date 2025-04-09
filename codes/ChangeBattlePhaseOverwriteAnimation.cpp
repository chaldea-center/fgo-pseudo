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
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_49BDE3E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__,
      battleActor);
    sub_1B4CF90(
      &System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
      v9);
    byte_49BDE3E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.overwriteList, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actor = battleActor;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.actor, (int32_t)battleActor, v13, v14);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v15);
  if ( notify )
  {
    v17 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v16);
    this->fields.current = v17;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.current, (int32_t)v17, v18, v19);
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
  System_Collections_Generic_List_object__o *overwriteList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_49BDE40 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__,
      *(_QWORD *)&phaseType);
    sub_1B4CF90(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo, v5);
    sub_1B4CF90(
      &Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
      v6);
    sub_1B4CF90(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo, v7);
    byte_49BDE40 = 1;
  }
  v8 = sub_1B4D1DC(ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = phaseType,
        overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList,
        v12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          0LL),
        !overwriteList) )
  {
    sub_1B4D1EC(v9, v10);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_object___Find(
                                                                           overwriteList,
                                                                           (System_Predicate_T__o *)v12,
                                                                           (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
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
    sub_1B4D1EC(this, 0LL);
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

  if ( (byte_49BDE44 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, baseAnimName);
    byte_49BDE44 = 1;
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
  const MethodInfo *v21; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x0
  ChangeBattlePhaseOverwriteAnimation___c_c *v23; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x20
  System_Func_object__int__o *_9__5_1; // x21
  Il2CppObject *v26; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x20
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v37; // x1
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
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  __int64 v50; // x21
  int32_t v51; // w23
  const MethodInfo *v52; // x3
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v53; // x22
  const MethodInfo *v54; // x1
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Collections_Generic_List_object__o *overwriteList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x8
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0

  if ( (byte_49BDE3F & 1) == 0 )
  {
    sub_1B4CF90(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo, overwriteEntArray);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___, v6);
    sub_1B4CF90(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo, v7);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, v10);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__,
      v12);
    sub_1B4CF90(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__, v13);
    sub_1B4CF90(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__, v14);
    sub_1B4CF90(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v15);
    byte_49BDE3F = 1;
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
    _9__5_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_0,
      v18,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      0LL);
    static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v20, v21);
  }
  v22 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v23 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v24 = v22;
  if ( !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v23 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v23->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v26,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      0LL);
    v27 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v27->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v27->__9__5_1, (int32_t)_9__5_1, v28, v29);
  }
  v30 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v24,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_2F3BC74 *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v30 )
    sub_1B4D1EC(0LL, v31);
  klass = v30->klass;
  v33 = v30;
  v34 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_1B9D724(v30, System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v33,
          *(_QWORD *)(p_method + 8));
  if ( !v38 )
    sub_1B4D1EC(0LL, v37);
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
      v42 = sub_1B9D724(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v46 = sub_1B9D724(v38, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
    v50 = v47;
    if ( !v47 )
      sub_1B4D1EC(0LL, v48);
    v51 = *(_DWORD *)(v47 + 28);
    v53 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v51, v49);
    if ( !v53 )
    {
      v53 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_1B4D1DC(ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v53, v54);
      if ( !v53 )
        sub_1B4D1EC(v55, v56);
      v53->fields.phase = v51;
      overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList;
      if ( !overwriteList )
        sub_1B4D1EC(0LL, v56);
      items = overwriteList->fields._items;
      v61 = Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__;
      ++overwriteList->fields._version;
      if ( !items )
        sub_1B4D1EC(overwriteList, v56);
      size = overwriteList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          overwriteList,
          (Il2CppObject *)v53,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        overwriteList->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v53;
        sub_1B4CF34((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v53, v57, v58);
      }
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v53,
      *(System_String_o **)(v50 + 40),
      *(System_String_o **)(v50 + 48),
      v52);
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
    v67 = sub_1B9D724(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v67)(v38, *(_QWORD *)(v67 + 8));
}


bool __fastcall ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
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

  if ( (byte_49BDE42 & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, bActor);
    byte_49BDE42 = 1;
  }
  if ( !bActor )
    goto LABEL_14;
  v6 = BattleActorControl__OverwriteAnimation(bActor, originalAnim, 0, 0LL);
  v7 = BattleActorControl__checkAnimation(bActor, v6, 0LL);
  result = 0;
  if ( !v7 )
    return result;
  fbxcomponent = (UnityEngine_Object_o *)bActor->fields.fbxcomponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ChangeBattlePhaseOverwriteAnimation_o *)UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = bActor->fields.fbxcomponent;
    if ( v10 && v6 )
      return !System_String__Equals_61128772(v6, v10->fields.currentCommonAnimName, 0LL);
LABEL_14:
    sub_1B4D1EC(this, bActor);
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

  if ( (byte_49BDE43 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, bActor);
    byte_49BDE43 = 1;
  }
  current = this->fields.current;
  if ( current )
  {
    current = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
                                                                                current,
                                                                                baseAnimName,
                                                                                (const MethodInfo *)baseAnimName);
    v8 = (System_String_o *)current;
    if ( bActor )
      goto LABEL_5;
LABEL_9:
    sub_1B4D1EC(current, bActor);
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !bActor )
    goto LABEL_9;
LABEL_5:
  if ( BattleActorControl__checkAnimation(bActor, v8, 0LL) )
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
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_String_o *klass; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v14; // x3

  if ( (byte_49BDE41 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, notify);
    byte_49BDE41 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  p_current = &this->fields.current;
  sub_1B4CF34((CGThumbnailListItem_o *)p_current, (int32_t)v5, v7, v8);
  v9 = (UnityEngine_Object_o *)*(p_current - 1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( v10 )
  {
    if ( !v9 )
      sub_1B4D1EC(v10, v11);
    klass = (System_String_o *)v9[15].klass;
    IsNullOrEmpty = System_String__IsNullOrEmpty(klass, 0LL);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           (BattleActorControl_o *)v9,
           klass,
           v14) )
    {
      BattleActorControl__playAnimation_44393772((BattleActorControl_o *)v9, klass, 0, 0LL);
    }
  }
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BDE47 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v3);
    byte_49BDE47 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3257168 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dicOverwriteName, (int32_t)v4, v5, v6);
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

  if ( (byte_49BDE45 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v7);
    byte_49BDE45 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_1B4D1EC(dicOverwriteName, targetName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
    (Il2CppObject *)targetName,
    (Il2CppObject *)overwriteName,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_49BDE46 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1B4CF90(&StringLiteral_1/*""*/, v6);
    byte_49BDE46 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
                                  (Il2CppObject *)targetName,
                                  (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_1B4D1EC(dicOverwriteName, targetName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BDE48 & 1) == 0 )
  {
    sub_1B4CF90(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1);
    byte_49BDE48 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields.type;
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields.phase == this->fields.phaseType;
}