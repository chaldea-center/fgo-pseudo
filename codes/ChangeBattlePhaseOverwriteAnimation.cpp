void __fastcall ChangeBattlePhaseOverwriteAnimation___ctor(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *battleActor,
        ServantAnimationOverwriteEntity_array *overwriteArray,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x23
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
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4C24F03 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__,
      battleActor);
    sub_1C3B764(
      &System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
      v9);
    byte_4C24F03 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v10;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.overwriteList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actor = battleActor;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.actor, (int64_t)battleActor, v17, v18, v19, v20, v21, v22);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v23);
  if ( notify )
  {
    v25 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v24);
    this->fields.current = v25;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.current, (int64_t)v25, v26, v27, v28, v29, v30, v31);
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

  if ( (byte_4C24F05 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__,
      *(_QWORD *)&phaseType);
    sub_1C3B764(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo, v5);
    sub_1C3B764(
      &Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
      v6);
    sub_1C3B764(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo, v7);
    byte_4C24F05 = 1;
  }
  v8 = sub_1C3B9B0(ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = phaseType,
        overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList,
        v12 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          0LL),
        !overwriteList) )
  {
    sub_1C3B9C0(v9, v10);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_object___Find(
                                                                           overwriteList,
                                                                           (System_Predicate_T__o *)v12,
                                                                           (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
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
    sub_1C3B9C0(this, 0LL);
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

  if ( (byte_4C24F09 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, baseAnimName);
    byte_4C24F09 = 1;
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x0
  ChangeBattlePhaseOverwriteAnimation___c_c *v27; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x20
  System_Func_object__int__o *_9__5_1; // x21
  Il2CppObject *v30; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x20
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v45; // x1
  __int64 v46; // x20
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x2
  __int64 v58; // x21
  int32_t v59; // w23
  const MethodInfo *v60; // x3
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v61; // x22
  const MethodInfo *v62; // x1
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_List_object__o *overwriteList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x8
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0

  if ( (byte_4C24F04 & 1) == 0 )
  {
    sub_1C3B764(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo, overwriteEntArray);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___, v6);
    sub_1C3B764(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo, v7);
    sub_1C3B764(&System_IDisposable_TypeInfo, v8);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, v9);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, v10);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__,
      v12);
    sub_1C3B764(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__, v13);
    sub_1C3B764(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__, v14);
    sub_1C3B764(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v15);
    byte_4C24F04 = 1;
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
    _9__5_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_0,
      v18,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      0LL);
    static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v20, v21, v22, v23, v24, v25);
  }
  v26 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_301A1E4 *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v27 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v28 = v26;
  if ( !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v27 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v27->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_1,
      v30,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      0LL);
    v31 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v31->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v31->__9__5_1, (int64_t)_9__5_1, v32, v33, v34, v35, v36, v37);
  }
  v38 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v28,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_302A558 *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v38 )
    sub_1C3B9C0(0LL, v39);
  klass = v38->klass;
  v41 = v38;
  v42 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      --v42;
      p_offset += 4;
      if ( !v42 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_1C8D744(v38, System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
  }
  v46 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v41,
          *(_QWORD *)(p_method + 8));
  if ( !v46 )
    sub_1C3B9C0(0LL, v45);
  while ( 1 )
  {
    v47 = *(_QWORD *)v46;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_27;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_27:
      v50 = sub_1C8D744(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v51 = *(_QWORD *)v46;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v53 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_34;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_34:
      v54 = sub_1C8D744(v46, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
    }
    v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
    v58 = v55;
    if ( !v55 )
      sub_1C3B9C0(0LL, v56);
    v59 = *(_DWORD *)(v55 + 28);
    v61 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v59, v57);
    if ( !v61 )
    {
      v61 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_1C3B9B0(ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v61, v62);
      if ( !v61 )
        sub_1C3B9C0(v63, v64);
      v61->fields.phase = v59;
      overwriteList = (System_Collections_Generic_List_object__o *)this->fields.overwriteList;
      if ( !overwriteList )
        sub_1C3B9C0(0LL, v64);
      items = overwriteList->fields._items;
      v73 = Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__;
      ++overwriteList->fields._version;
      if ( !items )
        sub_1C3B9C0(overwriteList, v64);
      size = overwriteList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          overwriteList,
          (Il2CppObject *)v61,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        overwriteList->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v61;
        sub_1C3B708((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v61, v65, v66, v67, v68, v69, v70);
      }
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v61,
      *(System_String_o **)(v58 + 40),
      *(System_String_o **)(v58 + 48),
      v60);
  }
  v76 = *(_QWORD *)v46;
  v77 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
  {
    v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      --v77;
      v78 += 4;
      if ( !v77 )
        goto LABEL_49;
    }
    v79 = v76 + 16LL * *v78 + 312;
  }
  else
  {
LABEL_49:
    v79 = sub_1C8D744(v46, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v79)(v46, *(_QWORD *)(v79 + 8));
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

  if ( (byte_4C24F07 & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, bActor);
    byte_4C24F07 = 1;
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
      return !System_String__Equals_63376928(v6, v10->fields.currentCommonAnimName, 0LL);
LABEL_14:
    sub_1C3B9C0(this, bActor);
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

  if ( (byte_4C24F08 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, bActor);
    byte_4C24F08 = 1;
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
    sub_1C3B9C0(current, bActor);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4C24F06 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, notify);
    byte_4C24F06 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  p_current = &this->fields.current;
  sub_1C3B708((PartyOrganizationUtility_o *)p_current, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  v13 = (__int64)*(p_current - 1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
  if ( v14 )
  {
    if ( !v13 )
      sub_1C3B9C0(v14, v15);
    v16 = *(System_String_o **)(v13 + 352);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v16, 0LL);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           (BattleActorControl_o *)v13,
           v16,
           v18) )
    {
      BattleActorControl__playAnimation_45259528((BattleActorControl_o *)v13, v16, 0, 0LL);
    }
  }
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C24F0C & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v3);
    byte_4C24F0C = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3354DB8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.dicOverwriteName, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4C24F0A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v7);
    byte_4C24F0A = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_1C3B9C0(dicOverwriteName, targetName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
    (Il2CppObject *)targetName,
    (Il2CppObject *)overwriteName,
    (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4C24F0B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C24F0B = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
         (Il2CppObject *)targetName,
         (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)dicOverwriteName,
                                  (Il2CppObject *)targetName,
                                  (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_1C3B9C0(dicOverwriteName, targetName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C24F0D & 1) == 0 )
  {
    sub_1C3B764(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1);
    byte_4C24F0D = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.type;
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.phase == this->fields.phaseType;
}