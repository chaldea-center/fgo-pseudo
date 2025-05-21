void __fastcall StageMaster___ctor(StageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B4568F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_StageMaster__StageEntity__string___ctor__, method);
    byte_4B4568F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    16,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StageEntity_o *__fastcall StageMaster__GetEntity(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4B4568D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__, *(_QWORD *)&questId);
    sub_1BDB878(&StageEntity_TypeInfo, v9);
    byte_4B4568D = 1;
  }
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = (Il2CppObject *)StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (StageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_32E68F4 *)Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_StageEntity__o *__fastcall StageMaster__GetEntityListIncludeRemap(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x19
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x5
  _BOOL8 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x1
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+10h] [xbp-90h] BYREF
  StageEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B45690 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_StageEntity__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BDB878(&Method_DataManager_GetMaster_ReprintStageMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__get_Current__, v11);
    sub_1BDB878(&System_IDisposable_TypeInfo, v12);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_StageEntity__TypeInfo, v13);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_StageEntity__Add__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_StageEntity___ctor__, v17);
    sub_1BDB878(&System_Collections_Generic_List_StageEntity__TypeInfo, v18);
    byte_4B45690 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  entity = 0LL;
  v19 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_StageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_StageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_StageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StageEntity__c **)v30 - 1) != System_Collections_Generic_IEnumerator_StageEntity__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_StageEntity__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    v35 = v32;
    if ( v32 && *(_DWORD *)(v32 + 16) == questId && *(_DWORD *)(v32 + 20) == questPhase )
    {
      if ( !v19 )
        sub_1BDBAD4(v32, v32);
      items = v19->fields._items;
      v37 = Method_System_Collections_Generic_List_StageEntity__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1BDBAD4(v32, v32);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)v32,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)(v39 + 4), v35, v33, v34);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_30;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_30:
    v43 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ReprintStageMaster___);
  if ( !list
    || (list = (System_Collections_ObjectModel_Collection_T__o *)ReprintStageMaster__GetEntityList(
                                                                   (ReprintStageMaster_o *)list,
                                                                   questId,
                                                                   questPhase,
                                                                   0LL)) == 0LL )
  {
LABEL_51:
    sub_1BDBAD4(list, v20);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)list,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
  v59 = v57;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    if ( !v44 )
      break;
    if ( !v59.fields._current )
      sub_1BDBAD4(v44, v45);
    v47 = StageMaster__TryGetEntity(
            this,
            &entity,
            HIDWORD(v59.fields._current[1].monitor),
            (int32_t)v59.fields._current[2].klass,
            HIDWORD(v59.fields._current[2].klass),
            v46);
    if ( v47 )
    {
      if ( !v19 )
        sub_1BDBAD4(v47, v48);
      v51 = (Il2CppObject *)entity;
      v52 = v19->fields._items;
      v53 = Method_System_Collections_Generic_List_StageEntity__Add__;
      ++v19->fields._version;
      if ( !v52 )
        sub_1BDBAD4(v47, v51);
      v54 = v19->fields._size;
      if ( (unsigned int)v54 >= v52->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          v51,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &v52->obj.klass + v54;
        v19->fields._size = v54 + 1;
        v55[4] = (Il2CppClass *)v51;
        sub_1BDB81C((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v51, v49, v50);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
  return (System_Collections_Generic_List_StageEntity__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageMaster__GetWaveCount(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v13; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  _DWORD *v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4B45691 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_StageEntity__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_StageEntity__TypeInfo, v8);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4B45691 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_StageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v11);
  v13 = 1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_StageEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_StageEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_17;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_17:
      v21 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_StageEntity__TypeInfo, 0LL);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    if ( v22 && v22[4] == questId && v22[5] == questPhase && v22[8] > v13 )
      v13 = v22[8];
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall StageMaster__TryGetEntity(
        StageMaster_o *this,
        StageEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4B4568E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__, entity);
    sub_1BDB878(&StageEntity_TypeInfo, v11);
    byte_4B4568E = 1;
  }
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = (Il2CppObject *)StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
}