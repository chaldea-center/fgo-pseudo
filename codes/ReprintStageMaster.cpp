void __fastcall ReprintStageMaster___ctor(ReprintStageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A7045E & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string___ctor__, method);
    byte_4A7045E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    304,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ReprintStageEntity_o *__fastcall ReprintStageMaster__GetEntity(
        ReprintStageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A7045C & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4A7045C = 1;
  }
  PK = (Il2CppObject *)ReprintStageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (ReprintStageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_312C900 *)Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ReprintStageEntity__o *__fastcall ReprintStageMaster__GetEntityList(
        ReprintStageMaster_o *this,
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
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4A7045F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B90010(&System_IDisposable_TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ReprintStageEntity__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_ReprintStageEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_ReprintStageEntity__TypeInfo, v12);
    sub_1B90010(&ReprintStageEntity_TypeInfo, v13);
    byte_4A7045F = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ReprintStageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ReprintStageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v30 = v27;
    if ( v27 )
    {
      methodPtr_low = LOBYTE(ReprintStageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)methodPtr_low
        && *(ReprintStageEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) == ReprintStageEntity_TypeInfo
        && *(_DWORD *)(v27 + 16) == questId
        && *(_DWORD *)(v27 + 20) == questPhase )
      {
        if ( !v14 )
          sub_1B9026C(v27, v27);
        items = v14->fields._items;
        v33 = Method_System_Collections_Generic_List_ReprintStageEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          sub_1B9026C(v27, v27);
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v27,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v30;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v35 + 4), v30, v28, v29);
        }
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_32:
    v39 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_ReprintStageEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ReprintStageMaster__TryGetEntity(
        ReprintStageMaster_o *this,
        ReprintStageEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A7045D & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__TryGetEntity__, entity);
    byte_4A7045D = 1;
  }
  PK = (Il2CppObject *)ReprintStageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__TryGetEntity__);
}