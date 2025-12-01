void QuestAddMaster___ctor(QuestAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC79C2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
    byte_4CC79C2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_340B614 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
}


void QuestAddMaster__CreateCache(QuestAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o **p_idCache; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w21
  System_Collections_ObjectModel_Collection_T__o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x23
  Il2CppClass *klass; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  void **v25; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC79C4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestAddEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestAddEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_QuestAddEntity__TypeInfo);
    byte_4CC79C4 = 1;
  }
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6, v7, v8, v9, v10);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C71608(list, v11);
    v13 = 0;
    while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v13,
                                                                   (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Item__);
        if ( list )
        {
          v14 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    (int32_t)v14->fields.items,
                    &value,
                    (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
            {
              v21 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_QuestAddEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v21,
                (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_QuestAddEntity___ctor__);
              value = (Il2CppObject *)v21;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v14->fields.items,
                (Il2CppObject *)v21,
                (const MethodInfo_3462280 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v23 = Method_System_Collections_Generic_List_QuestAddEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v14,
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v25[4] = v14;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v13;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.idCache, 0, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestAddEntity__o *QuestAddMaster__GetCacheById(
        QuestAddMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC79C5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__);
    byte_4CC79C5 = 1;
  }
  value = 0;
  QuestAddMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C71608(0, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
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

  if ( (byte_4CC79C0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
    byte_4CC79C0 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&priority);
  return (QuestAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_340D938 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
}


QuestAddEntity_o *QuestAddMaster__GetReplaceDataByQuestId(
        QuestAddMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t Time; // x23
  System_Collections_ObjectModel_Collection_T__o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  Il2CppObject *current; // x22
  QuestAddEntity_o *v12; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t klass_high; // w8
  __int64 klass_low; // x1
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  QuestAddEntity_o *v19; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC79C3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__get_Current__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CC79C3 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  if ( BYTE1(Instance[3].klass) )
  {
    CacheById = (System_Collections_Generic_List_object__o *)QuestAddMaster__GetCacheById(this, questId, v9);
    if ( !CacheById )
      return 0;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      CacheById,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__);
    current = 0;
    v38 = v37;
LABEL_11:
    v12 = (QuestAddEntity_o *)current;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__);
      if ( !v13 )
        break;
      current = v38.fields._current;
      if ( !v38.fields._current )
        sub_1C71608(v13, v14);
      if ( Time >= (__int64)v38.fields._current[3].monitor
        && (__int64)v38.fields._current[4].klass >= Time
        && (!v12 || (klass_high = HIDWORD(v38.fields._current[1].klass)) != 0 && klass_high > v12->fields.priority) )
      {
        klass_low = LODWORD(v38.fields._current[2].klass);
        if ( !(_DWORD)klass_low )
          goto LABEL_11;
        if ( !Master_object )
          sub_1C71608(v13, klass_low);
        if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, klass_low, 0, 0, 0) )
          goto LABEL_11;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__);
    return v12;
  }
  Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Instance )
LABEL_64:
    sub_1C71608(Instance, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Instance,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v17);
  v19 = 0;
LABEL_27:
  v12 = v19;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_32;
      }
      v23 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_32:
      v23 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8))
        & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAddEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_39;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_39:
      v27 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    v19 = (QuestAddEntity_o *)v28;
    if ( !v28 )
      sub_1C71608(0, v29);
    if ( *(_DWORD *)(v28 + 16) == questId && Time >= *(_QWORD *)(v28 + 56) && Time <= *(_QWORD *)(v28 + 64) )
    {
      v30 = *(unsigned int *)(v28 + 32);
      if ( !(_DWORD)v30 )
        goto LABEL_48;
      if ( !Master_object )
        sub_1C71608(v28, v30);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v30, 0, 0, 0) )
      {
LABEL_48:
        if ( !v12 )
          goto LABEL_27;
        priority = v19->fields.priority;
        if ( priority )
        {
          if ( priority > v12->fields.priority )
            goto LABEL_27;
        }
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_56;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_56:
    v35 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v12;
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

  if ( (byte_4CC79C1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
    byte_4CC79C1 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
}