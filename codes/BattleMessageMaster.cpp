void BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E772ED & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
    byte_4E772ED = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    415,
    (const MethodInfo_3538564 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


BattleActionData_DisplayMessageData_array *BattleMessageMaster__GetDisplayMessageArray(
        BattleMessageMaster_o *this,
        int32_t id,
        ParseBattleMessage_o *parser,
        int32_t actorId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  BattleMessageEntity_array *Entities; // x0
  __int64 v11; // x1
  BattleData_o *Data; // x0
  const MethodInfo *v13; // x4
  il2cpp_array_size_t max_length; // x8
  BattleMessageEntity_array *v15; // x21
  BattleActionData_DisplayMessageData_o *v16; // x23
  unsigned __int64 v17; // x25
  BattleMessageEntity_o *v18; // x24
  BattleActionData_DisplayMessageData_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4E772F1 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleActionData_DisplayMessageData_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    byte_4E772F1 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
  if ( !parser )
    goto LABEL_18;
  Data = ParseBattleMessage__get_Data(parser, 0);
  Entities = BattleMessageMaster__GetEntities(this, id, Data, actorId, v13);
  if ( !Entities )
    goto LABEL_18;
  max_length = Entities->max_length;
  v15 = Entities;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1D0F314(Entities);
      v18 = v15->m_Items[v17];
      v19 = (BattleActionData_DisplayMessageData_o *)sub_1D0F300(BattleActionData_DisplayMessageData_TypeInfo);
      BattleActionData_DisplayMessageData___ctor(v19, v18, parser, v16, 0);
      if ( !v9 )
        break;
      items = v9->fields._items;
      v27 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v19,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
      }
      LODWORD(max_length) = v15->max_length;
      ++v17;
      v16 = v19;
      if ( (__int64)v17 >= (int)max_length )
        goto LABEL_14;
    }
LABEL_18:
    sub_1D0F30C(Entities, v11);
  }
LABEL_14:
  Entities = (BattleMessageEntity_array *)System_Linq_Enumerable__LastOrDefault_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                            (const MethodInfo_327C204 *)Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
  if ( Entities )
    BattleActionData_DisplayMessageData__ResetIntervalTime((BattleActionData_DisplayMessageData_o *)Entities, 0);
  if ( !v9 )
    goto LABEL_18;
  return (BattleActionData_DisplayMessageData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v9,
                                                        (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
}


BattleMessageEntity_array *BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
        BattleData_o *battleData,
        int32_t actorId,
        const MethodInfo *method)
{
  __int64 v9; // x23
  System_Linq_IOrderedEnumerable_TSource__o *v10; // x0
  __int64 v11; // x1
  BattleServantData_o *ServantData; // x21
  System_Collections_Generic_List_object__o *v13; // x19
  BattleMessageMaster___c_c *v14; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x22
  System_Func_object__object__o *_9__3_0; // x24
  Il2CppObject *v17; // x25
  struct BattleMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  System_Func_object__bool__o *v26; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  BattleMessageMaster___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x22
  System_Func_object__int__o *_9__3_2; // x23
  Il2CppObject *v31; // x24
  struct BattleMessageMaster___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x0
  BattleMessageMaster___c_c *v40; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x22
  System_Func_object__int__o *_9__3_3; // x23
  Il2CppObject *v43; // x24
  struct BattleMessageMaster___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x22
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x22
  int v58; // w28
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  __int64 v75; // x23
  __int64 IsOpenInBattle; // x0
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0

  if ( (byte_4E772F0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
    sub_1D0F0B4(&System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    sub_1D0F0B4(&System_Func_BattleMessageEntity__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_BattleMessageEntity__int__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
    sub_1D0F0B4(&Method_BattleMessageMaster___c__GetEntities_b__3_0__);
    sub_1D0F0B4(&Method_BattleMessageMaster___c__GetEntities_b__3_2__);
    sub_1D0F0B4(&Method_BattleMessageMaster___c__GetEntities_b__3_3__);
    sub_1D0F0B4(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_1D0F0B4(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
    sub_1D0F0B4(&BattleMessageMaster___c_TypeInfo);
    byte_4E772F0 = 1;
  }
  v9 = sub_1D0F300(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_64;
  *(_DWORD *)(v9 + 16) = id;
  if ( !battleData )
    goto LABEL_64;
  ServantData = BattleData__getServantData(battleData, actorId, 0);
  v13 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  v14 = BattleMessageMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v14 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v14->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleMessageMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1D0F300(System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v17, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0);
    static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattleMessageEntity__BattleMessageEntity__o *)_9__3_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_32866A4 *)Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
  v26 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0);
  v27 = System_Linq_Enumerable__Where_object_(
          v25,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v28 = BattleMessageMaster___c_TypeInfo;
  v29 = v27;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v28 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__int__o *)v28->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = BattleMessageMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_1D0F300(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_2, v31, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0);
    v32 = BattleMessageMaster___c_TypeInfo->static_fields;
    v32->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v32->__9__3_2, (int32_t)_9__3_2, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__OrderBy_object__int_(
          v29,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_327F0D4 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v40 = BattleMessageMaster___c_TypeInfo;
  v41 = v39;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v40 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__int__o *)v40->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = BattleMessageMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_1D0F300(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_3, v43, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0);
    v44 = BattleMessageMaster___c_TypeInfo->static_fields;
    v44->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v44->__9__3_3, (int32_t)_9__3_3, v45, v46, v47, v48, v49, v50);
  }
  v10 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v41,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_328F338 *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v10 )
    goto LABEL_64;
  klass = v10->klass;
  v52 = v10;
  v53 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v53;
      p_offset += 4;
      if ( !v53 )
        goto LABEL_28;
    }
    v55 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_28:
    v55 = sub_1CE5430(v10, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0);
  }
  v57 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
  if ( !v57 )
    sub_1D0F30C(0, v56);
  v58 = -1;
  while ( 1 )
  {
    v59 = *(_QWORD *)v57;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v61 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_36;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_36:
      v62 = sub_1CE5430(v57, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v57, *(_QWORD *)(v62 + 8)) & 1) == 0 )
      break;
    v63 = *(_QWORD *)v57;
    v64 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v65 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_43;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_43:
      v66 = sub_1CE5430(v57, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0);
    }
    v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v57, *(_QWORD *)(v66 + 8));
    v75 = v67;
    if ( !v67 )
      sub_1D0F30C(0, v68);
    if ( v58 != *(_DWORD *)(v67 + 20) )
    {
      IsOpenInBattle = *(unsigned int *)(v67 + 28);
      if ( (int)IsOpenInBattle < 1
        || (IsOpenInBattle = CommonReleaseExtension__IsOpenInBattle(IsOpenInBattle, battleData, ServantData, 0, 0, 0),
            (IsOpenInBattle & 1) != 0) )
      {
        if ( !v13 )
          sub_1D0F30C(IsOpenInBattle, v68);
        items = v13->fields._items;
        v78 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1D0F30C(IsOpenInBattle, v68);
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v75,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        }
        else
        {
          v80 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v80[4] = (Il2CppClass *)v75;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v80 + 4), v75, v69, v70, v71, v72, v73, v74);
        }
        v58 = *(_DWORD *)(v75 + 20);
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
        goto LABEL_59;
    }
    v84 = v81 + 16LL * *v83 + 312;
  }
  else
  {
LABEL_59:
    v84 = sub_1CE5430(v57, System_IDisposable_TypeInfo, 0);
  }
  v10 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v84)(
                                                       v57,
                                                       *(_QWORD *)(v84 + 8));
  if ( !v13 )
LABEL_64:
    sub_1D0F30C(v10, v11);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v13,
                                        (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_o *BattleMessageMaster__GetEntity(
        BattleMessageMaster_o *this,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4E772EE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
    byte_4E772EE = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_353AADC *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool BattleMessageMaster__TryGetEntity(
        BattleMessageMaster_o *this,
        BattleMessageEntity_o **entity,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4E772EF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
    byte_4E772EF = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_353AB28 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E772F2 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleMessageMaster___c_TypeInfo);
    byte_4E772F2 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)BattleMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleMessageMaster___c___ctor(BattleMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleMessageEntity_o *BattleMessageMaster___c___GetEntities_b__3_0(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
}


int32_t BattleMessageMaster___c___GetEntities_b__3_2(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1D0F30C(this, 0);
  return ent->fields.idx;
}


int32_t BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1D0F30C(this, 0);
  return ent->fields.priority;
}


void BattleMessageMaster___c__DisplayClass3_0___ctor(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleMessageMaster___c__DisplayClass3_0___GetEntities_b__1(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.id == this->fields.id;
}