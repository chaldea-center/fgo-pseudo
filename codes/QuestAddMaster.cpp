void QuestAddMaster___ctor(QuestAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F88 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
    byte_4C37F88 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
}


void QuestAddMaster__CreateCache(QuestAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o **p_idCache; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w21
  System_Collections_ObjectModel_Collection_T__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x23
  Il2CppClass *klass; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  void **v16; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C37F8A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestAddEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestAddEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestAddEntity__TypeInfo);
    byte_4C37F8A = 1;
  }
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C32E7C(list);
    v8 = 0;
    while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                   list,
                   (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v8,
                                                                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Item__);
        if ( list )
        {
          v9 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    (int32_t)v9->fields.items,
                    &value,
                    (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
            {
              v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestAddEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v12,
                (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestAddEntity___ctor__);
              value = (Il2CppObject *)v12;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v9->fields.items,
                (Il2CppObject *)v12,
                (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v14 = Method_System_Collections_Generic_List_QuestAddEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v9,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
                }
                else
                {
                  v16 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v16[4] = v9;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v9, v10, v11);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v8;
                if ( list )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_19;
    }
  }
}


void QuestAddMaster__DeleteCache(QuestAddMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.idCache, 0, v2, v3);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestAddEntity__o *QuestAddMaster__GetCacheById(
        QuestAddMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37F8B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__);
    byte_4C37F8B = 1;
  }
  value = 0;
  QuestAddMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C32E7C(0);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_QuestAddEntity__o *)value;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
QuestAddEntity_o *QuestAddMaster__GetEntity(
        QuestAddMaster_o *this,
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37F86 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
    byte_4C37F86 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&priority);
  return (QuestAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_339B2F0 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
}


QuestAddEntity_o *QuestAddMaster__GetReplaceDataByQuestId(
        QuestAddMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t Time; // x23
  System_Collections_ObjectModel_Collection_T__o *Instance; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  Il2CppObject *current; // x22
  QuestAddEntity_o *v11; // x19
  _BOOL8 v12; // x0
  int32_t klass_high; // w8
  int32_t klass; // w1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  QuestAddEntity_o *v16; // x24
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  int32_t v26; // w1
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C37F89 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__get_Current__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C37F89 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  if ( BYTE1(Instance[3].klass) )
  {
    CacheById = (System_Collections_Generic_List_object__o *)QuestAddMaster__GetCacheById(this, questId, v8);
    if ( !CacheById )
      return 0;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      CacheById,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__);
    current = 0;
    v34 = v33;
LABEL_11:
    v11 = (QuestAddEntity_o *)current;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__);
      if ( !v12 )
        break;
      current = v34.fields._current;
      if ( !v34.fields._current )
        sub_1C32E7C(v12);
      if ( Time >= (__int64)v34.fields._current[3].monitor
        && (__int64)v34.fields._current[4].klass >= Time
        && (!v11 || (klass_high = HIDWORD(v34.fields._current[1].klass)) != 0 && klass_high > v11->fields.priority) )
      {
        klass = (int32_t)v34.fields._current[2].klass;
        if ( !klass )
          goto LABEL_11;
        if ( !Master_object )
          sub_1C32E7C(v12);
        if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, klass, 0, 0, 0) )
          goto LABEL_11;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__);
    return v11;
  }
  Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Instance )
LABEL_64:
    sub_1C32E7C(Instance);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Instance,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  v16 = 0;
LABEL_27:
  v11 = v16;
  while ( 1 )
  {
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_32;
      }
      v20 = (__int64)&v17->vtable[*p_offset];
    }
    else
    {
LABEL_32:
      v20 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8))
        & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAddEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_39;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_39:
      v24 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v16 = (QuestAddEntity_o *)v25;
    if ( !v25 )
      sub_1C32E7C(0);
    if ( *(_DWORD *)(v25 + 16) == questId && Time >= *(_QWORD *)(v25 + 56) && Time <= *(_QWORD *)(v25 + 64) )
    {
      v26 = *(_DWORD *)(v25 + 32);
      if ( !v26 )
        goto LABEL_48;
      if ( !Master_object )
        sub_1C32E7C(v25);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v26, 0, 0, 0) )
      {
LABEL_48:
        if ( !v11 )
          goto LABEL_27;
        priority = v16->fields.priority;
        if ( priority )
        {
          if ( priority > v11->fields.priority )
            goto LABEL_27;
        }
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_56;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_56:
    v31 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v11;
}


void QuestAddMaster__OnListChangedImplementation(
        QuestAddMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAddMaster__TryGetEntity(
        QuestAddMaster_o *this,
        QuestAddEntity_o **entity,
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37F87 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
    byte_4C37F87 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
}