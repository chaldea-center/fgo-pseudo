void QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938E4B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
    byte_5938E4B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    414,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
}


void QuestReleaseOverwriteMaster__CreateCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  _BOOL4 isDirty; // w8
  System_Collections_Generic_Dictionary_int__object__o *v4; // x21
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x20
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

  if ( (byte_5938E4E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    byte_5938E4E = 1;
  }
  isDirty = this->fields.isDirty;
  value = 0;
  if ( isDirty )
  {
    this->fields.isDirty = 0;
    v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v4,
      (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *)v4;
    p_idCache = &this->fields.idCache;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.idCache, (int32_t)v4, v6, v7, v8, v9, v10, v11);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_21FFECC(list, v12);
    v14 = 0;
    while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v14,
                                                                   (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
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
                    (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
            {
              v22 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v22,
                (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              value = (Il2CppObject *)v22;
              if ( !list )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v15->fields.items,
                (Il2CppObject *)v22,
                (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v24 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v15,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v26[4] = v15;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
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


void QuestReleaseOverwriteMaster__DeleteCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.idCache, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_5938E4F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__);
    byte_5938E4F = 1;
  }
  value = 0;
  QuestReleaseOverwriteMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_21FFECC(0, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
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

  if ( (byte_5938E49 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
    byte_5938E49 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3EE2044 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
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

  if ( (byte_5938E4C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938E4C = 1;
  }
  if ( !nowTime )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&questId);
    nowTime = NetworkManager__getTime(0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
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
                                                (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
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
LABEL_24:
    sub_21FFECC(list, *(_QWORD *)&questId);
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

  if ( (byte_5938E4A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
    byte_5938E4A = 1;
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
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  struct QuestReleaseOverwriteMaster___c_StaticFields *v29; // x8
  System_Comparison_T__o *_9__4_1; // x21
  Il2CppObject *v31; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int v39; // w21
  _BOOL8 v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  Il2CppObject *v47; // x1
  System_Collections_Generic_List_object__o *v48; // x0
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x8
  int32_t Count; // w0
  int32_t v54; // w24
  int32_t v55; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v57; // x2
  Il2CppObject *v58; // x26
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v71; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  int v79; // w21
  _BOOL8 v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  Il2CppObject *current; // x1
  System_Collections_Generic_List_object__o *v88; // x0
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x8
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5938E4D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_21FFC50(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__);
    sub_21FFC50(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__);
    sub_21FFC50(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_5938E4D = 1;
  }
  memset(&v95, 0, sizeof(v95));
  if ( !nowTime )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, entityList);
    nowTime = NetworkManager__getTime(0);
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  if ( !*((_BYTE *)Instance + 73) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_72;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
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
                                                  (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
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
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
              }
              else
              {
                v68 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v68[4] = (Il2CppClass *)v58;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 4), (int32_t)v58, v59, v60, v61, v62, v63, v64);
              }
            }
          }
        }
        if ( v54 == ++v55 )
          goto LABEL_51;
      }
LABEL_72:
      sub_21FFECC(Instance, v11);
    }
LABEL_51:
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !*(&QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo, v11);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      static_fields = (struct QuestReleaseOverwriteMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !*((_DWORD *)Instance + 57) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v11);
          static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        }
        v71 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__4_0,
          v71,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
          0);
        v72 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        v72->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)_9__4_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v72->__9__4_0, (int32_t)_9__4_0, v73, v74, v75, v76, v77, v78);
      }
      if ( !v9 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_71636404(
        v9,
        _9__4_0,
        (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   0,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v79 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v94,
        v9,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v95 = v94;
      v94.fields._list = 0;
      *(_QWORD *)&v94.fields._index = &v95;
      while ( 1 )
      {
        v80 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v95,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v80 )
          break;
        current = v95.fields._current;
        if ( !v95.fields._current )
          sub_21FFECC(v80, 0);
        if ( HIDWORD(v95.fields._current[1].klass) == v79 )
        {
          v88 = (System_Collections_Generic_List_object__o *)*entityList;
          if ( !*entityList
            || (v89 = v88->fields._items,
                v90 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__,
                ++v88->fields._version,
                !v89) )
          {
            sub_21FFECC(v88, current);
          }
          v91 = v88->fields._size;
          if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v88,
              current,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
          }
          else
          {
            v92 = &v89->obj.klass + v91;
            v88->fields._size = v91 + 1;
            v92[4] = (Il2CppClass *)current;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v92 + 4), (int32_t)current, v81, v82, v83, v84, v85, v86);
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
                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &v25->obj.klass + v27;
            v9->fields._size = v27 + 1;
            v28[4] = (Il2CppClass *)v18;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
          }
        }
      }
      while ( v14 != ++v16 );
    }
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !*(&QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo, v11);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v29 = (struct QuestReleaseOverwriteMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__4_1 = (System_Comparison_T__o *)v29->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !*((_DWORD *)Instance + 57) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v11);
          v29 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)v29->__9;
        _9__4_1 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__4_1,
          v31,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__,
          0);
        v32 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        v32->__9__4_1 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)_9__4_1;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->__9__4_1, (int32_t)_9__4_1, v33, v34, v35, v36, v37, v38);
      }
      if ( !v9 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_71636404(
        v9,
        _9__4_1,
        (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   0,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v39 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v94,
        v9,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v95 = v94;
      v94.fields._list = 0;
      *(_QWORD *)&v94.fields._index = &v95;
      while ( 1 )
      {
        v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v95,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v40 )
          break;
        v47 = v95.fields._current;
        if ( !v95.fields._current )
          sub_21FFECC(v40, 0);
        if ( HIDWORD(v95.fields._current[1].klass) != v39 )
          break;
        v48 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList
          || (v49 = v48->fields._items,
              v50 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__,
              ++v48->fields._version,
              !v49) )
        {
          sub_21FFECC(v48, v47);
        }
        v51 = v48->fields._size;
        if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v48,
            v47,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &v49->obj.klass + v51;
          v48->fields._size = v51 + 1;
          v52[4] = (Il2CppClass *)v47;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v47, v41, v42, v43, v44, v45, v46);
        }
      }
LABEL_70:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v95,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
      LOBYTE(CacheById) = System_Linq_Enumerable__Any_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
                            (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938E50 & 1) == 0 )
  {
    sub_21FFC50(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_5938E50 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_1(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}