void StageMaster___ctor(StageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939385 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
    byte_5939385 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    16,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StageEntity_o *StageMaster__GetEntity(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939383 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
    sub_21FFC50(&StageEntity_TypeInfo);
    byte_5939383 = 1;
  }
  if ( !*(&StageEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, *(_QWORD *)&questId);
  PK = (Il2CppObject *)StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (StageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_3EE2044 *)Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
}


System_Collections_Generic_List_StageEntity__o *StageMaster__GetEntityListIncludeRemap(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v11; // x1
  System_Collections_Generic_IEnumerator_T__o *v12; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *v19; // x23
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__o *v34; // x24
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  _BOOL8 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x5
  _BOOL8 v42; // x0
  Il2CppObject *v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+0h] [xbp-90h] BYREF
  StageEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v58; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_5939386 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_StageEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_ReprintStageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__get_Current__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_StageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StageEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StageEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_StageEntity__TypeInfo);
    byte_5939386 = 1;
  }
  v58 = 0;
  memset(&v57, 0, sizeof(v57));
  entity = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_56;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_StageEntity__GetEnumerator__);
  v58 = Enumerator;
  v55.fields._list = 0;
  *(_QWORD *)&v55.fields._index = &v58;
  if ( !Enumerator )
LABEL_29:
    sub_21FFECC(Enumerator, v11);
  v12 = Enumerator;
  while ( 1 )
  {
    klass = v12->klass;
    v14 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_2237E2C(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v12,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    v19 = v58;
    if ( !v58 )
      sub_21FFECC(v17, v18);
    v20 = v58->klass;
    v21 = *(unsigned __int16 *)&v58->klass->_2.rank;
    if ( *(_WORD *)&v58->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StageEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_StageEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_18:
      v23 = sub_2237E2C(v58, System_Collections_Generic_IEnumerator_StageEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                                                  v19,
                                                                  *(_QWORD *)(v23 + 8));
    v11 = Enumerator;
    if ( Enumerator && LODWORD(Enumerator[1].klass) == questId && HIDWORD(Enumerator[1].klass) == questPhase )
    {
      if ( !v7
        || (items = v7->fields._items,
            v31 = Method_System_Collections_Generic_List_StageEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(Enumerator, Enumerator);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)Enumerator,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v11;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v11, v24, v25, v26, v27, v28, v29);
      }
    }
    v12 = v58;
    if ( !v58 )
      goto LABEL_29;
  }
  v34 = v58;
  if ( v58 )
  {
    v35 = v58->klass;
    v36 = *(unsigned __int16 *)&v58->klass->_2.rank;
    if ( *(_WORD *)&v58->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_35;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_35:
      v38 = sub_2237E2C(v58, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8));
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ReprintStageMaster___);
  if ( !list
    || (list = (System_Collections_ObjectModel_Collection_T__o *)ReprintStageMaster__GetEntityList(
                                                                   (ReprintStageMaster_o *)list,
                                                                   questId,
                                                                   questPhase,
                                                                   0)) == 0 )
  {
LABEL_56:
    sub_21FFECC(list, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)list,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
  v57 = v55;
  v55.fields._list = 0;
  *(_QWORD *)&v55.fields._index = &v57;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    if ( !v39 )
      break;
    if ( !v57.fields._current )
      sub_21FFECC(v39, v40);
    v42 = StageMaster__TryGetEntity(
            this,
            &entity,
            HIDWORD(v57.fields._current[1].monitor),
            (int32_t)v57.fields._current[2].klass,
            HIDWORD(v57.fields._current[2].klass),
            v41);
    if ( v42 )
    {
      if ( !v7
        || (v50 = v7->fields._items,
            v43 = (Il2CppObject *)entity,
            v51 = Method_System_Collections_Generic_List_StageEntity__Add__,
            ++v7->fields._version,
            !v50) )
      {
        sub_21FFECC(v42, v43);
      }
      v52 = v7->fields._size;
      if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v43,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &v50->obj.klass + v52;
        v7->fields._size = v52 + 1;
        v53[4] = (Il2CppClass *)v43;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v43, v44, v45, v46, v47, v48, v49);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
  return (System_Collections_Generic_List_StageEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t StageMaster__GetWaveCount(StageMaster_o *this, int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x22
  int32_t v11; // w19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  _DWORD *v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_Generic_IEnumerator_T__o *v28; // [xsp+18h] [xbp-38h]

  if ( (byte_5939387 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_StageEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_StageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5939387 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_StageEntity__GetEnumerator__);
  v28 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  v10 = Enumerator;
  v11 = 1;
  while ( 1 )
  {
    klass = v10->klass;
    v13 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v15 = sub_2237E2C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v10,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v28 )
      sub_21FFECC(v16, v17);
    v18 = v28->klass;
    v19 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StageEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_StageEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_2237E2C(v28, System_Collections_Generic_IEnumerator_StageEntity__TypeInfo, 0);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      v28,
                      *(_QWORD *)(v21 + 8));
    if ( v22 && v22[4] == questId && v22[5] == questPhase )
    {
      v10 = v28;
      if ( v22[8] > v11 )
        v11 = v22[8];
    }
    else
    {
      v10 = v28;
    }
  }
  if ( v28 )
  {
    v23 = v28->klass;
    v24 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_35;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_35:
      v26 = sub_2237E2C(v28, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(v28, *(_QWORD *)(v26 + 8));
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool StageMaster__TryGetEntity(
        StageMaster_o *this,
        StageEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939384 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
    sub_21FFC50(&StageEntity_TypeInfo);
    byte_5939384 = 1;
  }
  if ( !*(&StageEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, entity);
  PK = (Il2CppObject *)StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
}