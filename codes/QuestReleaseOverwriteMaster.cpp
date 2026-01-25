void QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEDDE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
    byte_4CEEDDE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    412,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
}


void QuestReleaseOverwriteMaster__CreateCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x20
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

  if ( (byte_4CEEDE1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    byte_4CEEDE1 = 1;
  }
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6, v7, v8, v9, v10);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C7BD40(list, v11);
    v13 = 0;
    while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v13,
                                                                   (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
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
                    (const MethodInfo_3488E9C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
            {
              v21 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v21,
                (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
              value = (Il2CppObject *)v21;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v14->fields.items,
                (Il2CppObject *)v21,
                (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v23 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v14,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v25[4] = v14;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
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


void QuestReleaseOverwriteMaster__DeleteCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.idCache, 0, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *QuestReleaseOverwriteMaster__GetCacheById(
        QuestReleaseOverwriteMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEEDE2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__);
    byte_4CEEDE2 = 1;
  }
  value = 0;
  QuestReleaseOverwriteMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C7BD40(0, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3488E9C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)value;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *QuestReleaseOverwriteMaster__GetEntity(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEDDC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
    byte_4CEEDDC = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3432DB4 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  QuestReleaseOverwriteEntity_o *v10; // x23
  int32_t v11; // w24
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v13; // x2
  QuestReleaseOverwriteEntity_o *v14; // x25
  int32_t priority; // w8
  int32_t v16; // w9

  if ( (byte_4CEEDDF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEEDDF = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                list,
                                                v11,
                                                (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
      if ( Item )
      {
        v14 = Item;
        if ( Item->fields.questId == questId && QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v13) )
        {
          if ( !v10
            || (priority = v10->fields.priority, v16 = v14->fields.priority, priority < v16)
            || priority == v16 && v10->fields.imagePriority < v14->fields.imagePriority )
          {
            v10 = v14;
          }
        }
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_23:
    sub_1C7BD40(list, *(_QWORD *)&questId);
  }
  return 0;
}


void QuestReleaseOverwriteMaster__OnListChangedImplementation(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool QuestReleaseOverwriteMaster__TryGetEntity(
        QuestReleaseOverwriteMaster_o *this,
        QuestReleaseOverwriteEntity_o **entity,
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEDDD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
    byte_4CEEDDD = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


bool QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Generic_List_QuestReleaseOverwriteEntity__o **entityList,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  void *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  int v14; // w25
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w23
  const MethodInfo *v17; // x2
  Il2CppObject *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x21
  Il2CppObject *v30; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int v38; // w21
  _BOOL8 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  Il2CppObject *v47; // x8
  System_Collections_Generic_List_object__o *v48; // x0
  struct System_Object_array *v49; // x9
  _QWORD *v50; // x10
  __int64 v51; // x11
  Il2CppClass **v52; // x9
  int32_t Count; // w0
  int32_t v54; // w24
  int32_t v55; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v57; // x2
  Il2CppObject *v58; // x26
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  System_Comparison_T__o *v69; // x21
  Il2CppObject *v70; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  int v78; // w21
  _BOOL8 v79; // x0
  __int64 v80; // x1
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  Il2CppObject *current; // x8
  System_Collections_Generic_List_object__o *v88; // x0
  struct System_Object_array *v89; // x9
  _QWORD *v90; // x10
  __int64 v91; // x11
  Il2CppClass **v92; // x9
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEEDE0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C7BAE8(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C7BAE8(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__);
    sub_1C7BAE8(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__);
    sub_1C7BAE8(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_4CEEDE0 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  if ( !*((_BYTE *)Instance + 73) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_72;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    if ( Count >= 1 )
    {
      v54 = Count;
      v55 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                                  v55,
                                                  (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
        if ( Item )
        {
          v58 = (Il2CppObject *)Item;
          if ( Item->fields.questId == questId )
          {
            Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v57);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v9 )
                break;
              items = v9->fields._items;
              v66 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++v9->fields._version;
              if ( !items )
                break;
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  v58,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
              }
              else
              {
                v68 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v68[4] = (Il2CppClass *)v58;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v68 + 4), (int32_t)v58, v59, v60, v61, v62, v63, v64);
              }
            }
          }
        }
        if ( v54 == ++v55 )
          goto LABEL_51;
      }
LABEL_72:
      sub_1C7BD40(Instance, v11);
    }
LABEL_51:
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v69 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v69 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v70 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v69 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v69,
          v70,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
          0);
        static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v69;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)v69, v72, v73, v74, v75, v76, v77);
      }
      if ( !v9 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_58984640(
        v9,
        v69,
        (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   0,
                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v78 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v94,
        v9,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v95 = v94;
      while ( 1 )
      {
        v79 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v95,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v79 )
          break;
        current = v95.fields._current;
        if ( !v95.fields._current )
          sub_1C7BD40(v79, v80);
        if ( HIDWORD(v95.fields._current[1].klass) == v78 )
        {
          v88 = (System_Collections_Generic_List_object__o *)*entityList;
          if ( !*entityList )
            sub_1C7BD40(0, v80);
          v89 = v88->fields._items;
          v90 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v88->fields._version;
          if ( !v89 )
            sub_1C7BD40(v88, v80);
          v91 = v88->fields._size;
          if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v88,
              current,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
          }
          else
          {
            v92 = &v89->obj.klass + v91;
            v88->fields._size = v91 + 1;
            v92[4] = (Il2CppClass *)current;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v92 + 4), (int32_t)current, v81, v82, v83, v84, v85, v86);
          }
        }
      }
      goto LABEL_70;
    }
    goto LABEL_69;
  }
  CacheById = (System_Collections_Generic_List_object__o *)QuestReleaseOverwriteMaster__GetCacheById(this, questId, v12);
  if ( CacheById )
  {
    v14 = CacheById->fields._size;
    v15 = CacheById;
    if ( v14 >= 1 )
    {
      v16 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v15,
                     v16,
                     (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
        if ( !Instance )
          goto LABEL_72;
        v18 = (Il2CppObject *)Instance;
        Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(
                             (QuestReleaseOverwriteEntity_o *)Instance,
                             nowTime,
                             v17);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_72;
          v25 = v9->fields._items;
          v26 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v9->fields._version;
          if ( !v25 )
            goto LABEL_72;
          v27 = v9->fields._size;
          if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v18,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &v25->obj.klass + v27;
            v9->fields._size = v27 + 1;
            v28[4] = (Il2CppClass *)v18;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
          }
        }
      }
      while ( v14 != ++v16 );
    }
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v29 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
      if ( !v29 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v30 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v29 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v29,
          v30,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__,
          0);
        v31 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        v31->__9__4_1 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v29;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v31->__9__4_1, (int32_t)v29, v32, v33, v34, v35, v36, v37);
      }
      if ( !v9 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_58984640(
        v9,
        v29,
        (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   0,
                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v38 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v94,
        v9,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v95 = v94;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v95,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v39 )
          break;
        v47 = v95.fields._current;
        if ( !v95.fields._current )
          sub_1C7BD40(v39, v40);
        if ( HIDWORD(v95.fields._current[1].klass) != v38 )
          break;
        v48 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1C7BD40(0, v40);
        v49 = v48->fields._items;
        v50 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v48->fields._version;
        if ( !v49 )
          sub_1C7BD40(v48, v40);
        v51 = v48->fields._size;
        if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v48,
            v47,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &v49->obj.klass + v51;
          v48->fields._size = v51 + 1;
          v52[4] = (Il2CppClass *)v47;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v52 + 4), (int32_t)v47, v41, v42, v43, v44, v45, v46);
        }
      }
LABEL_70:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v95,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
      LOBYTE(CacheById) = System_Linq_Enumerable__Any_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
                            (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
      return (unsigned __int8)CacheById & 1;
    }
LABEL_69:
    LOBYTE(CacheById) = 0;
  }
  return (unsigned __int8)CacheById & 1;
}


void QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEEDE3 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_4CEEDE3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestReleaseOverwriteMaster___c___ctor(QuestReleaseOverwriteMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_0(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_1(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}