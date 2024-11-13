void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__, method, v2);
    byte_4B15E27 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    356,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Func_object__bool__o *v21; // x20

  if ( (byte_4B15E2A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76879984,
      *(_QWORD *)&assistId,
      *(_QWORD *)&lv);
    sub_1BCA7E0(&System_Func_AssistEntity__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__, v9, v10);
    sub_1BCA7E0(&AssistMaster___c__DisplayClass5_0_TypeInfo, v11, v12);
    byte_4B15E2A = 1;
  }
  v13 = sub_1BCAA2C(AssistMaster___c__DisplayClass5_0_TypeInfo, *(_QWORD *)&assistId, *(_QWORD *)&lv, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_DWORD *)(v13 + 16) = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v16);
  v21 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_AssistEntity__bool__TypeInfo, v18, v19, v20);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v13,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    0LL);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v21,
                             (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76879984);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  AssistMaster___c_c *v33; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  System_Converter_TInput__TOutput__o *_9__8_0; // x22
  Il2CppObject *v36; // x23
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_TOutput__o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  Il2CppObject *v48; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v56; // x1
  __int64 v57; // x21
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  Il2CppObject *CurrentLevelEntity; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0

  if ( (byte_4B15E2C & 1) == 0 )
  {
    sub_1BCA7E0(&AssistMaster_AssistIdComparer_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Converter_DataEntityBase__AssistEntity__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_AssistEntity___, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssistEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_AssistEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___, v23, v24);
    sub_1BCA7E0(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, v25, v26);
    sub_1BCA7E0(&AssistMaster___c_TypeInfo, v27, v28);
    byte_4B15E2C = 1;
  }
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AssistEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  v33 = AssistMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v30);
    v33 = AssistMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Converter_TInput__TOutput__o *)v33->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v30);
      v33 = AssistMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__8_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                       System_Converter_DataEntityBase__AssistEntity__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
    System_Converter_object__object____ctor(_9__8_0, v36, Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Converter_DataEntityBase__AssistEntity__o *)_9__8_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v38, v39, v40, v41, v42, v43);
  }
  v44 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_2F98238 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
  v48 = (Il2CppObject *)sub_1BCAA2C(AssistMaster_AssistIdComparer_TypeInfo, v45, v46, v47);
  System_Object___ctor(v48, 0LL);
  v49 = System_Linq_Enumerable__Distinct_object__49480260(
          (System_Collections_Generic_IEnumerable_TSource__o *)v44,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v48,
          (const MethodInfo_2F30244 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v49 )
    sub_1BCAA3C(0LL, v50);
  klass = v49->klass;
  v52 = v49;
  v53 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v53;
      p_offset += 4;
      if ( !v53 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C1C7C0(v49, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL);
  }
  v57 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v52,
          *(_QWORD *)(p_method + 8));
  if ( !v57 )
    sub_1BCAA3C(0LL, v56);
  while ( 1 )
  {
    v58 = *(_QWORD *)v57;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_21;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_21:
      v61 = sub_1C1C7C0(v57, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v62 = *(_QWORD *)v57;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v64 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_28;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_28:
      v65 = sub_1C1C7C0(v57, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL);
    }
    v66 = (*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v57, *(_QWORD *)(v65 + 8));
    if ( !v66 )
      sub_1BCAA3C(0LL, v67);
    CurrentLevelEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v66 + 16), v68);
    v76 = (int64_t)CurrentLevelEntity;
    if ( CurrentLevelEntity )
    {
      if ( !v29 )
        sub_1BCAA3C(CurrentLevelEntity, CurrentLevelEntity);
      items = v29->fields._items;
      v78 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v29->fields._version;
      if ( !items )
        sub_1BCAA3C(CurrentLevelEntity, CurrentLevelEntity);
      size = v29->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          CurrentLevelEntity,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v80[4] = (Il2CppClass *)v76;
        sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 4), v76, v70, v71, v72, v73, v74, v75);
      }
    }
  }
  v81 = *(_QWORD *)v57;
  v82 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
  {
    v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
    {
      --v82;
      v83 += 4;
      if ( !v82 )
        goto LABEL_41;
    }
    v84 = v81 + 16LL * *v83 + 312;
  }
  else
  {
LABEL_41:
    v84 = sub_1C1C7C0(v57, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v84)(v57, *(_QWORD *)(v84 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v29;
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetCurrentLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  AssistMaster___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v24; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  AssistMaster___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  System_Func_object__bool__o *_9__4_1; // x20
  Il2CppObject *v39; // x21
  struct AssistMaster___c_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B15E29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76879984, *(_QWORD *)&assistId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5, v6);
    sub_1BCA7E0(&System_Func_AssistEntity__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Func_AssistEntity__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, v11, v12);
    sub_1BCA7E0(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, v13, v14);
    sub_1BCA7E0(&AssistMaster___c_TypeInfo, v15, v16);
    byte_4B15E29 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v21 = AssistMaster___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v18);
    v21 = AssistMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v21->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, v18);
      v21 = AssistMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_AssistEntity__int__TypeInfo, v18, v19, v20);
    System_Func_object__int____ctor(_9__4_0, v24, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v22,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v36 = AssistMaster___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v33);
    v36 = AssistMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__bool__o *)v36->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36, v33);
      v36 = AssistMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__4_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_AssistEntity__bool__TypeInfo, v33, v34, v35);
    System_Func_object__bool____ctor(_9__4_1, v39, Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, 0LL);
    v40 = AssistMaster___c_TypeInfo->static_fields;
    v40->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v40->__9__4_1, (int64_t)_9__4_1, v41, v42, v43, v44, v45, v46);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                             v37,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76879984);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15E25 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&priority);
    byte_4B15E25 = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_31B3198 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
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
  __int64 v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  AssistMaster___c_c *v28; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v30; // x22
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_object__bool__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_4B15E28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___, *(_QWORD *)&assistId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_AssistEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_AssistEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_AssistEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_DataEntityBase__AssistEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, v14, v15);
    sub_1BCA7E0(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__, v16, v17);
    sub_1BCA7E0(&AssistMaster___c__DisplayClass3_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&AssistMaster___c_TypeInfo, v20, v21);
    byte_4B15E28 = 1;
  }
  v22 = sub_1BCAA2C(AssistMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&assistId, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  *(_DWORD *)(v22 + 16) = assistId;
  list = this->fields.list;
  v28 = AssistMaster___c_TypeInfo;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v24);
    v28 = AssistMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v28->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v24);
      v28 = AssistMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__AssistEntity__TypeInfo,
                                                 v24,
                                                 v25,
                                                 v26);
    System_Func_object__object____ctor(_9__3_0, v30, Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__AssistEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
  v42 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_AssistEntity__bool__TypeInfo, v39, v40, v41);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v22,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    0LL);
  v43 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                              v43,
                                                              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetMaxLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  AssistMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v20; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4B15E2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, *(_QWORD *)&assistId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5, v6);
    sub_1BCA7E0(&System_Func_AssistEntity__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, v9, v10);
    sub_1BCA7E0(&AssistMaster___c_TypeInfo, v11, v12);
    byte_4B15E2B = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v17 = AssistMaster___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v14);
    v17 = AssistMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v17->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v14);
      v17 = AssistMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_AssistEntity__int__TypeInfo, v14, v15, v16);
    System_Func_object__int____ctor(_9__6_0, v20, Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v28,
                             (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssistMaster__TryGetEntity(
        AssistMaster_o *this,
        AssistEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15E26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B15E26 = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
}


void __fastcall AssistMaster_AssistIdComparer___ctor(AssistMaster_AssistIdComparer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster_AssistIdComparer__Equals(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *x,
        AssistEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BCAA3C(this, x);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1BCAA3C(this, 0LL);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15E2D & 1) == 0 )
  {
    sub_1BCA7E0(&AssistMaster___c_TypeInfo, v1, v2);
    byte_4B15E2D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AssistMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AssistMaster___c_TypeInfo->static_fields->__9 = (struct AssistMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AssistMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall AssistMaster___c___ctor(AssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetAvailableEntityList_b__8_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *e,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B15E2F & 1) == 0 )
  {
    sub_1BCA7E0(&AssistEntity_TypeInfo, e, method);
    byte_4B15E2F = 1;
  }
  if ( !e )
    return 0LL;
  methodPtr_low = LOBYTE(AssistEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(e->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (AssistEntity_c *)e->klass->_2.typeHierarchy[methodPtr_low - 1] == AssistEntity_TypeInfo )
    return (AssistEntity_o *)e;
  return 0LL;
}


int32_t __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B15E2E & 1) == 0 )
  {
    sub_1BCA7E0(&AssistEntity_TypeInfo, data, method);
    byte_4B15E2E = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(AssistEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (AssistEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == AssistEntity_TypeInfo )
    return (AssistEntity_o *)data;
  return 0LL;
}


int32_t __fastcall AssistMaster___c___GetMaxLevelEntity_b__6_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.lv;
}


void __fastcall AssistMaster___c__DisplayClass3_0___ctor(
        AssistMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster___c__DisplayClass3_0___GetEntityListFromAssistId_b__1(
        AssistMaster___c__DisplayClass3_0_o *this,
        AssistEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.id == this->fields.assistId;
}


void __fastcall AssistMaster___c__DisplayClass5_0___ctor(
        AssistMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster___c__DisplayClass5_0___GetAssistEntity_b__0(
        AssistMaster___c__DisplayClass5_0_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.lv == this->fields.lv;
}