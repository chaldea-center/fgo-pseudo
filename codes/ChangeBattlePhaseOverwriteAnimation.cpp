void ChangeBattlePhaseOverwriteAnimation___ctor(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *battleActor,
        ServantAnimationOverwriteEntity_array *overwriteArray,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5973E70 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
    byte_5973E70 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteList,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actor = battleActor;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actor,
    (int32_t)battleActor,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v22);
  if ( notify )
  {
    v24 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v23);
    this->fields.current = v24;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.current, (int32_t)v24, v25, v26, v27, v28, v29, v30);
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
  System_Collections_Generic_List_object__o *overwriteList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5973E72 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
    sub_2213A60(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
    sub_2213A60(&Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__);
    sub_2213A60(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
    byte_5973E72 = 1;
  }
  v5 = sub_2213CCC(ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList,
        *(_DWORD *)(v5 + 16) = phaseType,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          0),
        !overwriteList) )
  {
    sub_2213CDC(v6, v7);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_object___Find(
                                                                           overwriteList,
                                                                           (System_Predicate_T__o *)v9,
                                                                           (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
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
    sub_2213CDC(this, 0);
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

  if ( (byte_5973E75 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973E75 = 1;
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

  if ( (byte_5973E76 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973E76 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, baseAnimName);
  if ( UnityEngine_Object__op_Equality(actor, 0, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v7 = this->fields.actor;
  if ( !v7 )
    sub_2213CDC(0, v6);
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
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__5_0; // x21
  Il2CppObject *v8; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  ChangeBattlePhaseOverwriteAnimation___c_c *v18; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x20
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v20; // x9
  System_Func_object__int__o *_9__5_1; // x21
  Il2CppObject *v22; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x20
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
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
  __int64 v50; // x20
  int32_t v51; // w22
  const MethodInfo *v52; // x3
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v53; // x21
  const MethodInfo *v54; // x1
  __int64 v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_List_object__o *overwriteList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x8
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // [xsp+18h] [xbp-58h]

  if ( (byte_5973E71 & 1) == 0 )
  {
    sub_2213A60(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
    sub_2213A60(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__);
    sub_2213A60(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__);
    sub_2213A60(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__);
    sub_2213A60(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    byte_5973E71 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  if ( !*(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, overwriteEntArray);
    v5 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__5_0 = (System_Func_object__int__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, overwriteEntArray);
      static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_0,
      v8,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      0);
    v9 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v9->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__5_0, (int32_t)_9__5_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v18 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v19 = v16;
  if ( !*(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v17);
    v18 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__5_1 = (System_Func_object__int__o *)v20->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v17);
      v20 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v22,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      0);
    v23 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v23->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__5_1, (int32_t)_9__5_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v19,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v30 )
    sub_2213CDC(0, v31);
  klass = v30->klass;
  v33 = v30;
  v34 = *(unsigned __int16 *)&v30->klass->_2.rank;
  if ( *(_WORD *)&v30->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_20;
    }
    v36 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_20:
    v36 = sub_224BC3C(v30, System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, 0);
  }
  v37 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  v72 = v37;
  while ( 1 )
  {
    if ( !v72 )
      sub_2213CDC(v37, v38);
    v39 = *(_QWORD *)v72;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_28;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_28:
      v42 = sub_224BC3C(v72, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v72, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v43 = *(_QWORD *)v72;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v45 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_35;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_35:
      v46 = sub_224BC3C(v72, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v72, *(_QWORD *)(v46 + 8));
    v50 = v47;
    if ( !v47 )
      sub_2213CDC(0, v48);
    v51 = *(_DWORD *)(v47 + 28);
    v53 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v51, v49);
    if ( !v53 )
    {
      v53 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_2213CCC(ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v53, v54);
      if ( !v53 )
        sub_2213CDC(v55, v56);
      overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList;
      v53->fields.phase = v51;
      if ( !overwriteList
        || (items = overwriteList->fields._items,
            v65 = Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__,
            ++overwriteList->fields._version,
            !items) )
      {
        sub_2213CDC(overwriteList, v56);
      }
      size = overwriteList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          overwriteList,
          (Il2CppObject *)v53,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        overwriteList->fields._size = size + 1;
        v67[4] = (Il2CppClass *)v53;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v67 + 4), (int32_t)v53, v57, v58, v59, v60, v61, v62);
      }
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v53,
      *(System_String_o **)(v50 + 40),
      *(System_String_o **)(v50 + 48),
      v52);
  }
  v68 = *(_QWORD *)v72;
  v69 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
  {
    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_50;
    }
    v71 = v68 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_50:
    v71 = sub_224BC3C(v72, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v71)(v72, *(_QWORD *)(v71 + 8));
}


bool ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *bActor,
        System_String_o *originalAnim,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  __int64 v7; // x1
  bool v8; // w8
  bool result; // w0
  UnityEngine_Object_o *fbxcomponent; // x21
  struct BattleFBXComponent_o *v11; // x8

  if ( (byte_5973E74 & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E74 = 1;
  }
  if ( !bActor )
    goto LABEL_14;
  v6 = BattleActorControl__OverwriteAnimation(bActor, originalAnim, 0, 0);
  v8 = BattleActorControl__checkAnimation(bActor, v6, 0);
  result = 0;
  if ( !v8 )
    return result;
  fbxcomponent = (UnityEngine_Object_o *)bActor->fields.fbxcomponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (ChangeBattlePhaseOverwriteAnimation_o *)UnityEngine_Object__op_Inequality(fbxcomponent, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = bActor->fields.fbxcomponent;
    if ( v11 && v6 )
      return !System_String__Equals_75686512(v6, v11->fields.currentCommonAnimName, 0);
LABEL_14:
    sub_2213CDC(this, bActor);
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
    sub_2213CDC(v6, v7);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_String_o *monitor; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v19; // x3

  if ( (byte_5973E73 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973E73 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  p_current = &this->fields.current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_current, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  v14 = (UnityEngine_Object_o *)*(p_current - 1);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Inequality(v14, 0, 0);
  if ( v15 )
  {
    if ( !v14 )
      sub_2213CDC(v15, v16);
    monitor = (System_String_o *)v14[16].monitor;
    IsNullOrEmpty = System_String__IsNullOrEmpty(monitor, 0);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           (BattleActorControl_o *)v14,
           monitor,
           v19) )
    {
      BattleActorControl__playAnimation_54351892((BattleActorControl_o *)v14, monitor, 0, 0);
    }
  }
}


void ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5973E79 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    byte_5973E79 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dicOverwriteName, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        System_String_o *overwriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_5973E77 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_5973E77 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_2213CDC(dicOverwriteName, targetName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
    (Il2CppObject *)targetName,
    (Il2CppObject *)overwriteName,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_5973E78 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973E78 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
                                  (Il2CppObject *)targetName,
                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_2213CDC(dicOverwriteName, targetName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973E7A & 1) == 0 )
  {
    sub_2213A60(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    byte_5973E7A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return x->fields.type;
}


int32_t ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return x->fields.phase == this->fields.phaseType;
}