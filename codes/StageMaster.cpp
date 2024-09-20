void __fastcall StageMaster___ctor(StageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC4B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
    byte_4A5BC4B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    16,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StageEntity_o *__fastcall StageMaster__GetEntity(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BC49 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
    sub_1B885B0(&StageEntity_TypeInfo);
    byte_4A5BC49 = 1;
  }
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = (Il2CppObject *)StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (StageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_311DC8C *)Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
}


System_Collections_Generic_List_StageEntity__o *__fastcall StageMaster__GetEntityListIncludeRemap(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x5
  _BOOL8 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x1
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF
  StageEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4A5BC4C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_ReprintStageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_StageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StageEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_StageEntity__TypeInfo);
    sub_1B885B0(&StageEntity_TypeInfo);
    byte_4A5BC4C = 1;
  }
  memset(&v47, 0, sizeof(v47));
  entity = 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_StageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_StageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( v20 )
    {
      methodPtr_low = LOBYTE(StageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) >= (unsigned int)methodPtr_low
        && *(StageEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) == StageEntity_TypeInfo
        && *(_DWORD *)(v20 + 16) == questId
        && *(_DWORD *)(v20 + 20) == questPhase )
      {
        if ( !v7 )
          sub_1B8880C(v20, v20);
        items = v7->fields._items;
        v26 = Method_System_Collections_Generic_List_StageEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1B8880C(v20, v20);
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v20,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v23;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v23, v21, v22);
        }
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_32;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_32:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ReprintStageMaster___);
  if ( !list
    || (list = (System_Collections_ObjectModel_Collection_T__o *)ReprintStageMaster__GetEntityList(
                                                                   (ReprintStageMaster_o *)list,
                                                                   questId,
                                                                   questPhase,
                                                                   0LL)) == 0LL )
  {
LABEL_51:
    sub_1B8880C(list, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)list,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    if ( !v33 )
      break;
    if ( !v47.fields._current )
      sub_1B8880C(v33, v34);
    v36 = StageMaster__TryGetEntity(
            this,
            &entity,
            HIDWORD(v47.fields._current[1].monitor),
            (int32_t)v47.fields._current[2].klass,
            HIDWORD(v47.fields._current[2].klass),
            v35);
    if ( v36 )
    {
      if ( !v7 )
        sub_1B8880C(v36, v37);
      v40 = (Il2CppObject *)entity;
      v41 = v7->fields._items;
      v42 = Method_System_Collections_Generic_List_StageEntity__Add__;
      ++v7->fields._version;
      if ( !v41 )
        sub_1B8880C(v36, v40);
      v43 = v7->fields._size;
      if ( (unsigned int)v43 >= v41->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v40,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &v41->obj.klass + v43;
        v7->fields._size = v43 + 1;
        v44[4] = (Il2CppClass *)v40;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v40, v38, v39);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
  return (System_Collections_Generic_List_StageEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageMaster__GetWaveCount(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v10; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4A5BC4D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&StageEntity_TypeInfo);
    byte_4A5BC4D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  v10 = 1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      methodPtr_low = LOBYTE(StageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) >= (unsigned int)methodPtr_low
        && *(StageEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * methodPtr_low - 8) == StageEntity_TypeInfo
        && v19[4] == questId
        && v19[5] == questPhase
        && v19[8] > v10 )
      {
        v10 = v19[8];
      }
    }
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_31;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_31:
    v24 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v10;
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5BC4A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
    sub_1B885B0(&StageEntity_TypeInfo);
    byte_4A5BC4A = 1;
  }
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  PK = (Il2CppObject *)StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
}