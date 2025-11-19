void AiFieldMaster___ctor(AiFieldMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5E75 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__);
    byte_4CB5E75 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    185,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiFieldEntity_o *AiFieldMaster__GetEntity(AiFieldMaster_o *this, int32_t id, int32_t idx, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB5E73 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__);
    byte_4CB5E73 = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiFieldEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_33FDB94 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool AiFieldMaster__TryGetEntity(
        AiFieldMaster_o *this,
        AiFieldEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB5E74 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__);
    byte_4CB5E74 = 1;
  }
  PK = (Il2CppObject *)AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_AiFieldMaster__AiFieldEntity__string__TryGetEntity__);
}


AiFieldEntity_array *AiFieldMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  AiFieldEntity_c *v21; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4CB5E76 & 1) == 0 )
  {
    sub_1C6BA08(&AiFieldEntity_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_AiFieldEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_AiFieldMaster___);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_AiFieldEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AiFieldEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AiFieldEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AiFieldEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_AiFieldEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB5E76 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AiFieldEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AiFieldEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_AiFieldMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)Instance->fields.datalist;
  if ( !Instance )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_AiFieldEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_AiFieldEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_AiFieldEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_18:
      v15 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_AiFieldEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v20 = v16;
    if ( !v16 )
      goto LABEL_38;
    v21 = AiFieldEntity_TypeInfo;
    naturalAligment = AiFieldEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 304LL) < (unsigned int)naturalAligment
      || *(AiFieldEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * naturalAligment - 8) != AiFieldEntity_TypeInfo )
    {
      sub_1C6BFFC(v16);
LABEL_38:
      sub_1C6BC60(v16, v17);
    }
    if ( *(_DWORD *)(v16 + 16) == id )
    {
      if ( !v3 )
        sub_1C6BC60(v16, AiFieldEntity_TypeInfo);
      items = v3->fields._items;
      v24 = Method_System_Collections_Generic_List_AiFieldEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(v16, v21);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v16,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v20;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), v20, v18, v19);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_33;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_33:
    v30 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                Enumerator,
                                *(_QWORD *)(v30 + 8));
  if ( !v3 )
LABEL_41:
    sub_1C6BC60(Instance, v5);
  return (AiFieldEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v3,
                                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_AiFieldEntity__ToArray__);
}