void AiMaster___ctor(AiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3757E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
    byte_4C3757E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    109,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiEntity_o *AiMaster__GetEntity(AiMaster_o *this, int32_t id, int32_t idx, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C3757C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
    byte_4C3757C = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                         PK,
                         (const MethodInfo_339B2F0 *)Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool AiMaster__TryGetEntity(AiMaster_o *this, AiEntity_o **entity, int32_t id, int32_t idx, const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C3757D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
    byte_4C3757D = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
}


AiEntity_array *AiMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  Il2CppClass **v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C3757F & 1) == 0 )
  {
    sub_1C32C20(&AiEntity_TypeInfo);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_AiEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMasterData_AiMaster___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_AiEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AiEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_AiEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3757F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_AiEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_AiEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_AiMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)Instance->fields.datalist;
  if ( !Instance )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_AiEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v9 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_AiEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_AiEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_18:
      v13 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_AiEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    v17 = v14;
    if ( !v14 )
      goto LABEL_38;
    naturalAligment = AiEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)naturalAligment
      || *(AiEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * naturalAligment - 8) != AiEntity_TypeInfo )
    {
      sub_1C3313C(v14);
LABEL_38:
      sub_1C32E7C(v14);
    }
    if ( *(_DWORD *)(v14 + 16) == id )
    {
      if ( !v3 )
        sub_1C32E7C(v14);
      items = v3->fields._items;
      v20 = Method_System_Collections_Generic_List_AiEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(v14);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v14,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v17;
        sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), v17, v15, v16);
      }
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_33:
    v26 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                Enumerator,
                                *(_QWORD *)(v26 + 8));
  if ( !v3 )
LABEL_41:
    sub_1C32E7C(Instance);
  return (AiEntity_array *)System_Collections_Generic_List_object___ToArray(
                             v3,
                             (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_AiEntity__ToArray__);
}