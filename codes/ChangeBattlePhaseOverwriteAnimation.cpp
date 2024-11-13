void __fastcall ChangeBattlePhaseOverwriteAnimation___ctor(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *battleActor,
        ServantAnimationOverwriteEntity_array *overwriteArray,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x23
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
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B18F65 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__,
      battleActor,
      overwriteArray);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
      v9,
      v10);
    byte_4B18F65 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
                                                       battleActor,
                                                       overwriteArray,
                                                       notify);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overwriteList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actor = battleActor;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.actor, (int64_t)battleActor, v18, v19, v20, v21, v22, v23);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v24);
  if ( notify )
  {
    v26 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v25);
    this->fields.current = v26;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.current, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  }
}


// local variable allocation has failed, the output may be wrong!
ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *__fastcall ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *overwriteList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B18F67 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__,
      *(_QWORD *)&phaseType,
      method);
    sub_1BCA7E0(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
      v8,
      v9);
    sub_1BCA7E0(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo, v10, v11);
    byte_4B18F67 = 1;
  }
  v12 = sub_1BCAA2C(
          ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo,
          *(_QWORD *)&phaseType,
          method,
          v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = phaseType,
        overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
                                              v14,
                                              v15,
                                              v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          0LL),
        !overwriteList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_object___Find(
                                                                           overwriteList,
                                                                           (System_Predicate_T__o *)v18,
                                                                           (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
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
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B18F6B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, baseAnimName, method);
    byte_4B18F6B = 1;
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  ChangeBattlePhaseOverwriteAnimation___c_c *v28; // x0
  System_Func_object__int__o *_9__5_0; // x21
  Il2CppObject *v30; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  ChangeBattlePhaseOverwriteAnimation___c_c *v42; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x20
  System_Func_object__int__o *_9__5_1; // x21
  Il2CppObject *v45; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v53; // x0
  __int64 v54; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v56; // x20
  __int64 v57; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v60; // x1
  __int64 v61; // x20
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x1
  const MethodInfo *v72; // x2
  __int64 v73; // x21
  int32_t v74; // w23
  __int64 v75; // x1
  __int64 v76; // x2
  const MethodInfo *v77; // x3
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v78; // x22
  const MethodInfo *v79; // x1
  __int64 v80; // x0
  __int64 v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_List_object__o *overwriteList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x8
  __int64 v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x0

  if ( (byte_4B18F66 & 1) == 0 )
  {
    sub_1BCA7E0(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo, overwriteEntArray, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___, v8, v9);
    sub_1BCA7E0(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v18, v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__,
      v20,
      v21);
    sub_1BCA7E0(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__, v22, v23);
    sub_1BCA7E0(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__, v24, v25);
    sub_1BCA7E0(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v26, v27);
    byte_4B18F66 = 1;
  }
  v28 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  if ( !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, overwriteEntArray);
    v28 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__int__o *)v28->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, overwriteEntArray);
      v28 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__5_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_ServantAnimationOverwriteEntity__int__TypeInfo,
                                              overwriteEntArray,
                                              method,
                                              v3);
    System_Func_object__int____ctor(
      _9__5_0,
      v30,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      0LL);
    static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v32, v33, v34, v35, v36, v37);
  }
  v38 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v42 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v43 = v38;
  if ( !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v39);
    v42 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v42->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42, v39);
      v42 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_ServantAnimationOverwriteEntity__int__TypeInfo,
                                              v39,
                                              v40,
                                              v41);
    System_Func_object__int____ctor(
      _9__5_1,
      v45,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      0LL);
    v46 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v46->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v46->__9__5_1, (int64_t)_9__5_1, v47, v48, v49, v50, v51, v52);
  }
  v53 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v43,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_2F4B298 *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v53 )
    sub_1BCAA3C(0LL, v54);
  klass = v53->klass;
  v56 = v53;
  v57 = *(unsigned __int16 *)(&v53->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v53->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      --v57;
      p_offset += 4;
      if ( !v57 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_1C1C7C0(v53, System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
  }
  v61 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v56,
          *(_QWORD *)(p_method + 8));
  if ( !v61 )
    sub_1BCAA3C(0LL, v60);
  while ( 1 )
  {
    v62 = *(_QWORD *)v61;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_27;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_27:
      v65 = sub_1C1C7C0(v61, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v61, *(_QWORD *)(v65 + 8)) & 1) == 0 )
      break;
    v66 = *(_QWORD *)v61;
    v67 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v68 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_34;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_34:
      v69 = sub_1C1C7C0(v61, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
    }
    v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v61, *(_QWORD *)(v69 + 8));
    v73 = v70;
    if ( !v70 )
      sub_1BCAA3C(0LL, v71);
    v74 = *(_DWORD *)(v70 + 28);
    v78 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v74, v72);
    if ( !v78 )
    {
      v78 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_1BCAA2C(
                                                                              ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo,
                                                                              v75,
                                                                              v76,
                                                                              v77);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v78, v79);
      if ( !v78 )
        sub_1BCAA3C(v80, v81);
      v78->fields.phase = v74;
      overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList;
      if ( !overwriteList )
        sub_1BCAA3C(0LL, v81);
      items = overwriteList->fields._items;
      v90 = Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__;
      ++overwriteList->fields._version;
      if ( !items )
        sub_1BCAA3C(overwriteList, v81);
      size = overwriteList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          overwriteList,
          (Il2CppObject *)v78,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v92 = &items->obj.klass + size;
        overwriteList->fields._size = size + 1;
        v92[4] = (Il2CppClass *)v78;
        sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 4), (int64_t)v78, v82, v83, v84, v85, v86, v87);
      }
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v78,
      *(System_String_o **)(v73 + 40),
      *(System_String_o **)(v73 + 48),
      v77);
  }
  v93 = *(_QWORD *)v61;
  v94 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
  {
    v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
    {
      --v94;
      v95 += 4;
      if ( !v94 )
        goto LABEL_49;
    }
    v96 = v93 + 16LL * *v95 + 312;
  }
  else
  {
LABEL_49:
    v96 = sub_1C1C7C0(v61, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v96)(v61, *(_QWORD *)(v96 + 8));
}


bool __fastcall ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *bActor,
        System_String_o *originalAnim,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation_o *v6; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *fbxcomponent; // x21
  struct BattleFBXComponent_o *v9; // x8

  if ( (byte_4B18F69 & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, bActor, originalAnim);
    byte_4B18F69 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (ChangeBattlePhaseOverwriteAnimation_o *)UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = bActor->fields.fbxcomponent;
    if ( v9 && v6 )
      return !System_String__Equals_62409536((System_String_o *)v6, v9->fields.currentCommonAnimName, 0LL);
LABEL_14:
    sub_1BCAA3C(this, bActor);
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

  if ( (byte_4B18F6A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, bActor, baseAnimName);
    byte_4B18F6A = 1;
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
      sub_1BCAA3C(current, bActor);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_String_o *klass; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4B18F68 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, notify, method);
    byte_4B18F68 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  p_current = &this->fields.current;
  sub_1BCA784((PartyOrganizationUtility_o *)p_current, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  v14 = (UnityEngine_Object_o *)*(p_current - 1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( v15 )
  {
    if ( !v14 )
      sub_1BCAA3C(v15, v16);
    klass = (System_String_o *)v14[14].klass;
    IsNullOrEmpty = System_String__IsNullOrEmpty(klass, 0LL);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           (BattleActorControl_o *)v14,
           klass,
           v19) )
    {
      BattleActorControl__playAnimation_44433272((BattleActorControl_o *)v14, klass, 0, v20);
    }
  }
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18F6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5, v6);
    byte_4B18F6E = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dicOverwriteName, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        System_String_o *overwriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4B18F6C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName, overwriteName);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v7, v8);
    byte_4B18F6C = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_1BCAA3C(dicOverwriteName, targetName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
    (Il2CppObject *)targetName,
    (Il2CppObject *)overwriteName,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4B18F6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B18F6D = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
                                  (Il2CppObject *)targetName,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_1BCAA3C(dicOverwriteName, targetName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18F6F & 1) == 0 )
  {
    sub_1BCA7E0(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1, v2);
    byte_4B18F6F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.type;
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.phase == this->fields.phaseType;
}