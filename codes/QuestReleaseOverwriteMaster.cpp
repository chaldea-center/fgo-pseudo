void QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43711 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
    byte_4C43711 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    412,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
}


void QuestReleaseOverwriteMaster__CreateCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x20
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

  if ( (byte_4C43714 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    byte_4C43714 = 1;
  }
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C372B4(list);
    v8 = 0;
    while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                   list,
                   (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v8,
                                                                   (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
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
                    (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
            {
              v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v12,
                (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
              value = (Il2CppObject *)v12;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v9->fields.items,
                (Il2CppObject *)v12,
                (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v14 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v9,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
                }
                else
                {
                  v16 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v16[4] = v9;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v9, v10, v11);
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


void QuestReleaseOverwriteMaster__DeleteCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.idCache, 0, v2, v3);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *QuestReleaseOverwriteMaster__GetCacheById(
        QuestReleaseOverwriteMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C43715 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__);
    byte_4C43715 = 1;
  }
  value = 0;
  QuestReleaseOverwriteMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C372B4(0);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
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

  if ( (byte_4C4370F & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
    byte_4C4370F = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_33A5B58 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
}


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

  if ( (byte_4C43712 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43712 = 1;
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
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
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
                                                (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
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
    sub_1C372B4(list);
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

  if ( (byte_4C43710 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
    byte_4C43710 = 1;
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
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
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
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  int v13; // w25
  System_Collections_Generic_List_object__o *v14; // x22
  int32_t v15; // w23
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  System_Comparison_T__o *v24; // x21
  Il2CppObject *v25; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int v29; // w21
  _BOOL8 v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x8
  System_Collections_Generic_List_object__o *v34; // x0
  struct System_Object_array *v35; // x9
  _QWORD *v36; // x10
  __int64 v37; // x11
  Il2CppClass **v38; // x9
  int32_t Count; // w0
  int32_t v40; // w24
  int32_t v41; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v43; // x2
  Il2CppObject *v44; // x26
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Comparison_T__o *v51; // x21
  Il2CppObject *v52; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int v56; // w21
  _BOOL8 v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  Il2CppObject *current; // x8
  System_Collections_Generic_List_object__o *v61; // x0
  struct System_Object_array *v62; // x9
  _QWORD *v63; // x10
  __int64 v64; // x11
  Il2CppClass **v65; // x9
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C43713 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C37058(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__);
    sub_1C37058(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__);
    sub_1C37058(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_4C43713 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  if ( !*((_BYTE *)Instance + 73) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_72;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    if ( Count >= 1 )
    {
      v40 = Count;
      v41 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                                  v41,
                                                  (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
        if ( Item )
        {
          v44 = (Il2CppObject *)Item;
          if ( Item->fields.questId == questId )
          {
            Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v43);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v9 )
                break;
              items = v9->fields._items;
              v48 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++v9->fields._version;
              if ( !items )
                break;
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  v44,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
              }
              else
              {
                v50 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v50[4] = (Il2CppClass *)v44;
                sub_1C36FFC((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v44, v45, v46);
              }
            }
          }
        }
        if ( v40 == ++v41 )
          goto LABEL_51;
      }
LABEL_72:
      sub_1C372B4(Instance);
    }
LABEL_51:
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v51 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v51 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v51,
          v52,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
          0);
        static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v51;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v51, v54, v55);
      }
      if ( !v9 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_58346216(
        v9,
        v51,
        (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   0,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v56 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v67,
        v9,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v68 = v67;
      while ( 1 )
      {
        v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v68,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v57 )
          break;
        current = v68.fields._current;
        if ( !v68.fields._current )
          sub_1C372B4(v57);
        if ( HIDWORD(v68.fields._current[1].klass) == v56 )
        {
          v61 = (System_Collections_Generic_List_object__o *)*entityList;
          if ( !*entityList )
            sub_1C372B4(0);
          v62 = v61->fields._items;
          v63 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v61->fields._version;
          if ( !v62 )
            sub_1C372B4(v61);
          v64 = v61->fields._size;
          if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v61,
              current,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v62->obj.klass + v64;
            v61->fields._size = v64 + 1;
            v65[4] = (Il2CppClass *)current;
            sub_1C36FFC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)current, v58, v59);
          }
        }
      }
      goto LABEL_70;
    }
    goto LABEL_69;
  }
  CacheById = (System_Collections_Generic_List_object__o *)QuestReleaseOverwriteMaster__GetCacheById(this, questId, v11);
  if ( CacheById )
  {
    v13 = CacheById->fields._size;
    v14 = CacheById;
    if ( v13 >= 1 )
    {
      v15 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v14,
                     v15,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
        if ( !Instance )
          goto LABEL_72;
        v17 = (Il2CppObject *)Instance;
        Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(
                             (QuestReleaseOverwriteEntity_o *)Instance,
                             nowTime,
                             v16);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_72;
          v20 = v9->fields._items;
          v21 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v9->fields._version;
          if ( !v20 )
            goto LABEL_72;
          v22 = v9->fields._size;
          if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v17,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v20->obj.klass + v22;
            v9->fields._size = v22 + 1;
            v23[4] = (Il2CppClass *)v17;
            sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
          }
        }
      }
      while ( v13 != ++v15 );
    }
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v24 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
      if ( !v24 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v25 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v24 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v24,
          v25,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__,
          0);
        v26 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        v26->__9__4_1 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v24;
        sub_1C36FFC((CGThumbnailListItem_o *)&v26->__9__4_1, (int32_t)v24, v27, v28);
      }
      if ( !v9 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_58346216(
        v9,
        v24,
        (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   0,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v29 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v67,
        v9,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v68 = v67;
      while ( 1 )
      {
        v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v68,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v30 )
          break;
        v33 = v68.fields._current;
        if ( !v68.fields._current )
          sub_1C372B4(v30);
        if ( HIDWORD(v68.fields._current[1].klass) != v29 )
          break;
        v34 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1C372B4(0);
        v35 = v34->fields._items;
        v36 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v34->fields._version;
        if ( !v35 )
          sub_1C372B4(v34);
        v37 = v34->fields._size;
        if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            v33,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &v35->obj.klass + v37;
          v34->fields._size = v37 + 1;
          v38[4] = (Il2CppClass *)v33;
          sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v33, v31, v32);
        }
      }
LABEL_70:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v68,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
      LOBYTE(CacheById) = System_Linq_Enumerable__Any_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
                            (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
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

  if ( (byte_4C43716 & 1) == 0 )
  {
    sub_1C37058(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_4C43716 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}


int32_t QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_1(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}