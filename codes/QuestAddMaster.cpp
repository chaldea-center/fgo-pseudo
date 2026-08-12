void QuestAddMaster___ctor(QuestAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970E6D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
    byte_5970E6D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string___ctor__);
}


void QuestAddMaster__CreateCache(QuestAddMaster_o *this, const MethodInfo *method)
{
  _BOOL4 isDirty; // w8
  System_Collections_Generic_Dictionary_int__object__o *v4; // x21
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o **p_idCache; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w21
  System_Collections_ObjectModel_Collection_T__o *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x23
  Il2CppClass *klass; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  void **v26; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5970E6F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAddEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestAddEntity__TypeInfo);
    byte_5970E6F = 1;
  }
  isDirty = this->fields.isDirty;
  value = 0;
  if ( isDirty )
  {
    this->fields.isDirty = 0;
    v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v4,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o *)v4;
    p_idCache = &this->fields.idCache;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.idCache, (int32_t)v4, v6, v7, v8, v9, v10, v11);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_2213CDC(list, v12);
    v14 = 0;
    while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v14,
                                                                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__get_Item__);
        if ( list )
        {
          v15 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    (int32_t)v15->fields.items,
                    &value,
                    (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
            {
              v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestAddEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v22,
                (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestAddEntity___ctor__);
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              value = (Il2CppObject *)v22;
              if ( !list )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v15->fields.items,
                (Il2CppObject *)v22,
                (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v24 = Method_System_Collections_Generic_List_QuestAddEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v15,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v26[4] = v15;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v14;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_Dictionary_int__List_QuestAddEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.idCache, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_5970E70 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__);
    byte_5970E70 = 1;
  }
  value = 0;
  QuestAddMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_2213CDC(0, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_QuestAddEntity___TryGetValue__) )
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

  if ( (byte_5970E6B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
    byte_5970E6B = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&priority);
  return (QuestAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestAddEntity_o *QuestAddMaster__GetReplaceDataByQuestId(
        QuestAddMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  int v5; // w8
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  int64_t Time; // x22
  System_Collections_ObjectModel_Collection_T__o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  Il2CppObject *current; // x23
  QuestAddEntity_o *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int32_t klass_high; // w8
  __int64 klass_low; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *v21; // x23
  QuestAddEntity_o *v22; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int *p_offset; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__o *v29; // x23
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  int32_t priority; // w8
  __int64 *v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v43; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_5970E6E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestAddEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5970E6E = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v43 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  Instance = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  if ( BYTE1(Instance[3].klass) )
  {
    CacheById = (System_Collections_Generic_List_object__o *)QuestAddMaster__GetCacheById(this, questId, v11);
    if ( !CacheById )
      return 0;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      CacheById,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestAddEntity__GetEnumerator__);
    current = 0;
    v42 = v41;
    v41.fields._list = 0;
    *(_QWORD *)&v41.fields._index = &v42;
LABEL_11:
    v14 = (QuestAddEntity_o *)current;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__MoveNext__);
      if ( !v15 )
        break;
      current = v42.fields._current;
      if ( !v42.fields._current )
        sub_2213CDC(v15, v16);
      if ( Time >= (__int64)v42.fields._current[3].monitor
        && (__int64)v42.fields._current[4].klass >= Time
        && (!v14 || (klass_high = HIDWORD(v42.fields._current[1].klass)) != 0 && klass_high > v14->fields.priority) )
      {
        klass_low = LODWORD(v42.fields._current[2].klass);
        if ( !(_DWORD)klass_low )
          goto LABEL_11;
        if ( !Master_object )
          sub_2213CDC(v15, klass_low);
        if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, klass_low, 0, 0, 0) )
          goto LABEL_11;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestAddEntity__Dispose__);
    return v14;
  }
  Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Instance )
LABEL_62:
    sub_2213CDC(Instance, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Instance,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestAddEntity__GetEnumerator__);
  v43 = Enumerator;
  v41.fields._list = 0;
  *(_QWORD *)&v41.fields._index = &v43;
  if ( !Enumerator )
LABEL_60:
    sub_2213CDC(Enumerator, v20);
  v21 = Enumerator;
  v22 = 0;
LABEL_27:
  v14 = v22;
  while ( 1 )
  {
    klass = v21->klass;
    v24 = *(unsigned __int16 *)&v21->klass->_2.rank;
    if ( *(_WORD *)&v21->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_32;
      }
      v26 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_32:
      v26 = sub_224BC3C(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            v21,
            *(_QWORD *)(v26 + 8));
    if ( (v27 & 1) == 0 )
      break;
    v29 = v43;
    if ( !v43 )
      sub_2213CDC(v27, v28);
    v30 = v43->klass;
    v31 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAddEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_40;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_40:
      v33 = sub_224BC3C(v43, System_Collections_Generic_IEnumerator_QuestAddEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                                                  v29,
                                                                  *(_QWORD *)(v33 + 8));
    v22 = (QuestAddEntity_o *)Enumerator;
    if ( !Enumerator )
      sub_2213CDC(0, v20);
    if ( LODWORD(Enumerator[1].klass) == questId
      && Time >= (__int64)Enumerator[3].monitor
      && Time <= (__int64)Enumerator[4].klass )
    {
      v20 = LODWORD(Enumerator[2].klass);
      if ( !(_DWORD)v20 )
        goto LABEL_51;
      if ( !Master_object )
        sub_2213CDC(Enumerator, v20);
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)CommonReleaseMaster__IsOpen(
                                                                    (CommonReleaseMaster_o *)Master_object,
                                                                    v20,
                                                                    0,
                                                                    0,
                                                                    0);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
LABEL_51:
        if ( !v14 || (priority = v22->fields.priority) != 0 && priority > v14->fields.priority )
        {
          v21 = v43;
          if ( !v43 )
            goto LABEL_60;
          goto LABEL_27;
        }
      }
    }
    v21 = v43;
    if ( !v43 )
      goto LABEL_60;
  }
  v35 = **(__int64 ***)&v41.fields._index;
  if ( **(_QWORD **)&v41.fields._index )
  {
    v36 = *v35;
    v37 = *(unsigned __int16 *)(*v35 + 302);
    if ( *(_WORD *)(*v35 + 302) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_70;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_70:
      v39 = sub_224BC3C(**(_QWORD **)&v41.fields._index, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
  }
  return v14;
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

  if ( (byte_5970E6C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
    byte_5970E6C = 1;
  }
  PK = (Il2CppObject *)QuestAddEntity__CreatePK(questId, priority, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestAddMaster__QuestAddEntity__string__TryGetEntity__);
}