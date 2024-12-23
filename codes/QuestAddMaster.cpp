void __fastcall QuestAddMaster___ctor(QuestAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67008 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__, method);
    byte_4B67008 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
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
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_int__object__o *v12; // x21
  bool *p_isDirty; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v22; // w21
  int64_t v23; // x22
  __int64 methodPtr_low; // x10
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x23
  Il2CppClass *klass; // x8
  _QWORD *v33; // x9
  __int64 klass_low; // x10
  void **v35; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B6700A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestAddEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestAddEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestAddEntity__TypeInfo, v10);
    sub_1BE4ACC(&QuestAddEntity_TypeInfo, v11);
    byte_4B6700A = 1;
  }
  value = 0LL;
  if ( *((_BYTE *)&this->fields.revision + 4) )
  {
    *((_BYTE *)&this->fields.revision + 4) = 0;
    v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v12,
      (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__);
    *(_QWORD *)&this->fields.isDirty = v12;
    p_isDirty = &this->fields.isDirty;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.isDirty, (int64_t)v12, v14, v15, v16, v17, v18, v19);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_21:
      sub_1BE4D28(list, v20);
    v22 = 0;
    while ( v22 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v22,
                                                                   (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v23 = (int64_t)list;
          methodPtr_low = LOBYTE(QuestAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (QuestAddEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestAddEntity_TypeInfo )
          {
            list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
            if ( *(_QWORD *)p_isDirty )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)list,
                      *(_DWORD *)(v23 + 16),
                      &value,
                      (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
              {
                v31 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestAddEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v31,
                  (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestAddEntity___ctor__);
                value = (Il2CppObject *)v31;
                list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
                if ( !*(_QWORD *)p_isDirty )
                  goto LABEL_21;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)list,
                  *(_DWORD *)(v23 + 16),
                  (Il2CppObject *)v31,
                  (const MethodInfo_3250854 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)value;
              if ( value )
              {
                klass = value[1].klass;
                v33 = Method_System_Collections_Generic_List_QuestAddEntity__Add__;
                ++HIDWORD(value[1].monitor);
                if ( klass )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v23,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v35 = &klass->_1.image + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v35[4] = (void *)v23;
                    sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 4), v23, v25, v26, v27, v28, v29, v30);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v22;
                  if ( list )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_21;
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
  bool *p_isDirty; // x19

  *(_QWORD *)&this->fields.isDirty = 0LL;
  p_isDirty = &this->fields.isDirty;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.isDirty, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_isDirty - 4) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestAddEntity__o *__fastcall QuestAddMaster__GetCacheById(
        QuestAddMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6700B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__, *(_QWORD *)&id);
    byte_4B6700B = 1;
  }
  value = 0LL;
  QuestAddMaster__CreateCache(this, *(const MethodInfo **)&id);
  v6 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isDirty;
  if ( !v6 )
    sub_1BE4D28(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v6,
         id,
         &value,
         (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
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

  if ( (byte_4B67006 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4B67006 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&priority);
  return (QuestAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31FDB1C *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
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
  __int64 v16; // x1
  Il2CppObject *Master_object; // x22
  int64_t Time; // x23
  System_Collections_ObjectModel_Collection_T__o *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  Il2CppObject *current; // x21
  QuestAddEntity_o *v24; // x19
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int32_t klass_high; // w8
  __int64 klass_low; // x1
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
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
  QuestAddEntity_o *v41; // x24
  __int64 methodPtr_low; // x9
  __int64 v43; // x1
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B67009 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__get_Current__, v9);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v10);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__, v13);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    sub_1BE4ACC(&QuestAddEntity_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    byte_4B67009 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  if ( BYTE1(Instance[3].klass) )
  {
    CacheById = (System_Collections_Generic_List_object__o *)QuestAddMaster__GetCacheById(this, questId, v21);
    if ( !CacheById )
      return 0LL;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      CacheById,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__);
    current = 0LL;
    v51 = v50;
LABEL_11:
    v24 = (QuestAddEntity_o *)current;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__);
      if ( !v25 )
        break;
      current = v51.fields._current;
      if ( !v51.fields._current )
        goto LABEL_63;
      if ( Time >= (__int64)v51.fields._current[3].monitor
        && (__int64)v51.fields._current[4].klass >= Time
        && (!v24 || (klass_high = HIDWORD(v51.fields._current[1].klass)) != 0 && klass_high > v24->fields.priority) )
      {
        klass_low = LODWORD(v51.fields._current[2].klass);
        if ( !(_DWORD)klass_low )
          goto LABEL_11;
        if ( !Master_object )
          sub_1BE4D28(v25, klass_low);
        if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, klass_low, 0LL, 0, 0LL) )
          goto LABEL_11;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__);
    return v24;
  }
  Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Instance )
LABEL_66:
    sub_1BE4D28(Instance, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Instance,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v29);
  v24 = 0LL;
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
          goto LABEL_31;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_31:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_38;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_38:
      v38 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
            Enumerator,
            *(_QWORD *)(v38 + 8));
    v41 = (QuestAddEntity_o *)v39;
    if ( !v39 )
      sub_1BE4D28(0LL, v40);
    methodPtr_low = LOBYTE(QuestAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v39 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestAddEntity_c **)(*(_QWORD *)(*(_QWORD *)v39 + 200LL) + 8 * methodPtr_low - 8) != QuestAddEntity_TypeInfo )
    {
      sub_1BE4FE8(v39);
LABEL_63:
      sub_1BE4D28(v25, v26);
    }
    if ( *(_DWORD *)(v39 + 16) == questId && Time >= *(_QWORD *)(v39 + 56) && Time <= *(_QWORD *)(v39 + 64) )
    {
      v43 = *(unsigned int *)(v39 + 32);
      if ( !(_DWORD)v43 )
        goto LABEL_51;
      if ( !Master_object )
        sub_1BE4D28(v39, v43);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v43, 0LL, 0, 0LL) )
      {
LABEL_51:
        if ( !v24 || (priority = v41->fields.priority) != 0 && priority > v24->fields.priority )
          v24 = v41;
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_57;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_57:
    v48 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return v24;
}


void __fastcall QuestAddMaster__OnListChangedImplementation(
        QuestAddMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  *((_BYTE *)&this->fields.revision + 4) = 1;
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

  if ( (byte_4B67007 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__, entity);
    byte_4B67007 = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
}