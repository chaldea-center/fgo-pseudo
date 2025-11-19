void QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6A2F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
    byte_4CB6A2F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    412,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
}


void QuestReleaseOverwriteMaster__CreateCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w21
  System_Collections_ObjectModel_Collection_T__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x23
  Il2CppClass *klass; // x8
  _QWORD *v15; // x9
  __int64 klass_low; // x10
  void **v17; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB6A32 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    byte_4CB6A32 = 1;
  }
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C6BC60(list, v7);
    v9 = 0;
    while ( v9 < System_Collections_ObjectModel_Collection_object___get_Count(
                   list,
                   (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v9,
                                                                   (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
        if ( list )
        {
          v10 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    (int32_t)v10->fields.items,
                    &value,
                    (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
            {
              v13 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v13,
                (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
              value = (Il2CppObject *)v13;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v10->fields.items,
                (Il2CppObject *)v13,
                (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v15 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v10,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
                }
                else
                {
                  v17 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v17[4] = v10;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v10, v11, v12);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v9;
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
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.idCache, 0, v2, v3);
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

  if ( (byte_4CB6A33 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__);
    byte_4CB6A33 = 1;
  }
  value = 0;
  QuestReleaseOverwriteMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C6BC60(0, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
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

  if ( (byte_4CB6A2D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
    byte_4CB6A2D = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_33FDB94 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
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

  if ( (byte_4CB6A30 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6A30 = 1;
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
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
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
                                                (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
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
    sub_1C6BC60(list, *(_QWORD *)&questId);
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

  if ( (byte_4CB6A2E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
    byte_4CB6A2E = 1;
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
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
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
  const MethodInfo *v20; // x3
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x21
  Il2CppObject *v26; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int v30; // w21
  _BOOL8 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x8
  System_Collections_Generic_List_object__o *v36; // x0
  struct System_Object_array *v37; // x9
  _QWORD *v38; // x10
  __int64 v39; // x11
  Il2CppClass **v40; // x9
  int32_t Count; // w0
  int32_t v42; // w24
  int32_t v43; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v45; // x2
  Il2CppObject *v46; // x26
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Comparison_T__o *v53; // x21
  Il2CppObject *v54; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int v58; // w21
  _BOOL8 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Il2CppObject *current; // x8
  System_Collections_Generic_List_object__o *v64; // x0
  struct System_Object_array *v65; // x9
  _QWORD *v66; // x10
  __int64 v67; // x11
  Il2CppClass **v68; // x9
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB6A31 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__);
    sub_1C6BA08(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__);
    sub_1C6BA08(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_4CB6A31 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  if ( !*((_BYTE *)Instance + 73) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_72;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    if ( Count >= 1 )
    {
      v42 = Count;
      v43 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                                  v43,
                                                  (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
        if ( Item )
        {
          v46 = (Il2CppObject *)Item;
          if ( Item->fields.questId == questId )
          {
            Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v45);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v9 )
                break;
              items = v9->fields._items;
              v50 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++v9->fields._version;
              if ( !items )
                break;
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  v46,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                v52 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v52[4] = (Il2CppClass *)v46;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v46, v47, v48);
              }
            }
          }
        }
        if ( v42 == ++v43 )
          goto LABEL_51;
      }
LABEL_72:
      sub_1C6BC60(Instance, v11);
    }
LABEL_51:
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v53 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v53 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v54 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v53 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v53,
          v54,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
          0);
        static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v53;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v53, v56, v57);
      }
      if ( !v9 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_58729528(
        v9,
        v53,
        (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   0,
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v58 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v70,
        v9,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v71 = v70;
      while ( 1 )
      {
        v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v71,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v59 )
          break;
        current = v71.fields._current;
        if ( !v71.fields._current )
          sub_1C6BC60(v59, v60);
        if ( HIDWORD(v71.fields._current[1].klass) == v58 )
        {
          v64 = (System_Collections_Generic_List_object__o *)*entityList;
          if ( !*entityList )
            sub_1C6BC60(0, v60);
          v65 = v64->fields._items;
          v66 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v64->fields._version;
          if ( !v65 )
            sub_1C6BC60(v64, v60);
          v67 = v64->fields._size;
          if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v64,
              current,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &v65->obj.klass + v67;
            v64->fields._size = v67 + 1;
            v68[4] = (Il2CppClass *)current;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v68 + 4), (int32_t)current, v61, v62);
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
                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
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
          v21 = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v9->fields._version;
          if ( !v21 )
            goto LABEL_72;
          v23 = v9->fields._size;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v18,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &v21->obj.klass + v23;
            v9->fields._size = v23 + 1;
            v24[4] = (Il2CppClass *)v18;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v18, v19, v20);
          }
        }
      }
      while ( v14 != ++v16 );
    }
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v25 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
      if ( !v25 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v25 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v25,
          v26,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__,
          0);
        v27 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        v27->__9__4_1 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v25;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v27->__9__4_1, (int32_t)v25, v28, v29);
      }
      if ( !v9 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_58729528(
        v9,
        v25,
        (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   0,
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v30 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v70,
        v9,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v71 = v70;
      while ( 1 )
      {
        v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v71,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v31 )
          break;
        v35 = v71.fields._current;
        if ( !v71.fields._current )
          sub_1C6BC60(v31, v32);
        if ( HIDWORD(v71.fields._current[1].klass) != v30 )
          break;
        v36 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1C6BC60(0, v32);
        v37 = v36->fields._items;
        v38 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v36->fields._version;
        if ( !v37 )
          sub_1C6BC60(v36, v32);
        v39 = v36->fields._size;
        if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            v35,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &v37->obj.klass + v39;
          v36->fields._size = v39 + 1;
          v40[4] = (Il2CppClass *)v35;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v35, v33, v34);
        }
      }
LABEL_70:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v71,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
      LOBYTE(CacheById) = System_Linq_Enumerable__Any_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
                            (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
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
  const MethodInfo *v3; // x3

  if ( (byte_4CB6A34 & 1) == 0 )
  {
    sub_1C6BA08(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_4CB6A34 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_1(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}