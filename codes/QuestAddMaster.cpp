void __fastcall QuestAddMaster___ctor(QuestAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7F08 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__, method);
    byte_4BC7F08 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
}


void __fastcall QuestAddMaster__CreateCache(QuestAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *v11; // x21
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o **p_idCache; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v21; // w21
  int64_t v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x23
  Il2CppClass *klass; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  void **v33; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC7F0A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Item__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__, v6);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestAddEntity__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestAddEntity___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestAddEntity__TypeInfo, v10);
    byte_4BC7F0A = 1;
  }
  value = 0LL;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v11,
      (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o *)v11;
    p_idCache = &this->fields.idCache;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.idCache, (int64_t)v11, v13, v14, v15, v16, v17, v18);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C1AE30(list, v19);
    v21 = 0;
    while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v21,
                                                                   (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Item__);
        if ( list )
        {
          v22 = (int64_t)list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    *(_DWORD *)(v22 + 16),
                    &value,
                    (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
            {
              v29 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestAddEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v29,
                (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_QuestAddEntity___ctor__);
              value = (Il2CppObject *)v29;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                *(_DWORD *)(v22 + 16),
                (Il2CppObject *)v29,
                (const MethodInfo_32A22E8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v31 = Method_System_Collections_Generic_List_QuestAddEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v22,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v33[4] = (void *)v22;
                  sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), v22, v23, v24, v25, v26, v27, v28);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v21;
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


void __fastcall QuestAddMaster__DeleteCache(QuestAddMaster_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o **p_idCache; // x19

  this->fields.idCache = 0LL;
  p_idCache = &this->fields.idCache;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.idCache, 0LL, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestAddEntity__o *__fastcall QuestAddMaster__GetCacheById(
        QuestAddMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7F0B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__, *(_QWORD *)&id);
    byte_4BC7F0B = 1;
  }
  value = 0LL;
  QuestAddMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C1AE30(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_QuestAddEntity__o *)value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
QuestAddEntity_o *__fastcall QuestAddMaster__GetEntity(
        QuestAddMaster_o *this,
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7F06 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4BC7F06 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&priority);
  return (QuestAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_324D130 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestAddEntity_o *__fastcall QuestAddMaster__GetReplaceDataByQuestId(
        QuestAddMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Master_object; // x21
  int64_t Time; // x23
  System_Collections_ObjectModel_Collection_T__o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  Il2CppObject *current; // x22
  QuestAddEntity_o *v23; // x19
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t klass_high; // w8
  __int64 klass_low; // x1
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  QuestAddEntity_o *v30; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC7F09 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__GetEnumerator__, *(_QWORD *)&questId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1C1ABD4(&DataManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__get_Current__, v9);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo, v11);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__, v13);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonTemplate_QuestTree__get_Instance__, v15);
    byte_4BC7F09 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  if ( BYTE1(Instance[3].klass) )
  {
    CacheById = (System_Collections_Generic_List_object__o *)QuestAddMaster__GetCacheById(this, questId, v20);
    if ( !CacheById )
      return 0LL;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      CacheById,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__);
    current = 0LL;
    v49 = v48;
LABEL_11:
    v23 = (QuestAddEntity_o *)current;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__);
      if ( !v24 )
        break;
      current = v49.fields._current;
      if ( !v49.fields._current )
        sub_1C1AE30(v24, v25);
      if ( Time >= (__int64)v49.fields._current[3].monitor
        && (__int64)v49.fields._current[4].klass >= Time
        && (!v23 || (klass_high = HIDWORD(v49.fields._current[1].klass)) != 0 && klass_high > v23->fields.priority) )
      {
        klass_low = LODWORD(v49.fields._current[2].klass);
        if ( !(_DWORD)klass_low )
          goto LABEL_11;
        if ( !Master_object )
          sub_1C1AE30(v24, klass_low);
        if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, klass_low, 0LL, 0, 0LL) )
          goto LABEL_11;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__);
    return v23;
  }
  Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Instance )
LABEL_64:
    sub_1C1AE30(Instance, v19);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Instance,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v28);
  v30 = 0LL;
LABEL_27:
  v23 = v30;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_32;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_32:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAddEntity__c **)v37 - 1) != System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_39;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_39:
      v38 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
            Enumerator,
            *(_QWORD *)(v38 + 8));
    v30 = (QuestAddEntity_o *)v39;
    if ( !v39 )
      sub_1C1AE30(0LL, v40);
    if ( *(_DWORD *)(v39 + 16) == questId && Time >= *(_QWORD *)(v39 + 56) && Time <= *(_QWORD *)(v39 + 64) )
    {
      v41 = *(unsigned int *)(v39 + 32);
      if ( !(_DWORD)v41 )
        goto LABEL_48;
      if ( !Master_object )
        sub_1C1AE30(v39, v41);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v41, 0LL, 0, 0LL) )
      {
LABEL_48:
        if ( !v23 )
          goto LABEL_27;
        priority = v30->fields.priority;
        if ( priority )
        {
          if ( priority > v23->fields.priority )
            goto LABEL_27;
        }
      }
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_56;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_56:
    v46 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  return v23;
}


void __fastcall QuestAddMaster__OnListChangedImplementation(
        QuestAddMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAddMaster__TryGetEntity(
        QuestAddMaster_o *this,
        QuestAddEntity_o **entity,
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC7F07 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__, entity);
    byte_4BC7F07 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
}