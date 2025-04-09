void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB468 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__,
      method);
    byte_49BB468 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    412,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
}


void __fastcall QuestReleaseOverwriteMaster__CreateCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v17; // w21
  System_Collections_ObjectModel_Collection_T__o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x23
  Il2CppClass *klass; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  void **v25; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BB46B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__, v6);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v10);
    byte_49BB46B = 1;
  }
  value = 0LL;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v11,
      (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *)v11;
    p_idCache = &this->fields.idCache;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.idCache, (int32_t)v11, v13, v14);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1B4D1EC(list, v15);
    v17 = 0;
    while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v17,
                                                                   (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
        if ( list )
        {
          v18 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    (int32_t)v18->fields.items,
                    &value,
                    (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
            {
              v21 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v21,
                (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
              value = (Il2CppObject *)v21;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v18->fields.items,
                (Il2CppObject *)v21,
                (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___set_Item__);
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
                    (Il2CppObject *)v18,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v25[4] = v18;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v18, v19, v20);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v17;
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


void __fastcall QuestReleaseOverwriteMaster__DeleteCache(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o **p_idCache; // x19

  this->fields.idCache = 0LL;
  p_idCache = &this->fields.idCache;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.idCache, 0, v2, v3);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *__fastcall QuestReleaseOverwriteMaster__GetCacheById(
        QuestReleaseOverwriteMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB46C & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__,
      *(_QWORD *)&id);
    byte_49BB46C = 1;
  }
  value = 0LL;
  QuestReleaseOverwriteMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1B4D1EC(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseOverwriteEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntity(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB466 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49BB466 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31A2454 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  QuestReleaseOverwriteEntity_o *v12; // x23
  int32_t v13; // w24
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v15; // x2
  QuestReleaseOverwriteEntity_o *v16; // x25
  int32_t priority; // w8
  int32_t v18; // w9

  if ( (byte_49BB469 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__, v7);
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    byte_49BB469 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                list,
                                                v13,
                                                (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
      if ( Item )
      {
        v16 = Item;
        if ( Item->fields.questId == questId && QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v15) )
        {
          if ( !v12
            || (priority = v12->fields.priority, v18 = v16->fields.priority, priority < v18)
            || priority == v18 && v12->fields.imagePriority < v16->fields.imagePriority )
          {
            v12 = v16;
          }
        }
      }
      if ( v11 == ++v13 )
        return v12;
    }
LABEL_23:
    sub_1B4D1EC(list, *(_QWORD *)&questId);
  }
  return 0LL;
}


void __fastcall QuestReleaseOverwriteMaster__OnListChangedImplementation(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseOverwriteMaster__TryGetEntity(
        QuestReleaseOverwriteMaster_o *this,
        QuestReleaseOverwriteEntity_o **entity,
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB467 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_49BB467 = 1;
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
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Generic_List_QuestReleaseOverwriteEntity__o **entityList,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *v27; // x20
  void *Instance; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  int v32; // w25
  System_Collections_Generic_List_object__o *v33; // x22
  int32_t v34; // w23
  const MethodInfo *v35; // x2
  Il2CppObject *v36; // x24
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x21
  Il2CppObject *v44; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int v48; // w21
  _BOOL8 v49; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x8
  System_Collections_Generic_List_object__o *v54; // x0
  struct System_Object_array *v55; // x9
  _QWORD *v56; // x10
  __int64 v57; // x11
  Il2CppClass **v58; // x9
  int32_t Count; // w0
  int32_t v60; // w24
  int32_t v61; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v63; // x2
  Il2CppObject *v64; // x26
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  System_Comparison_T__o *v71; // x21
  Il2CppObject *v72; // x22
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int v76; // w21
  _BOOL8 v77; // x0
  __int64 v78; // x1
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  Il2CppObject *current; // x8
  System_Collections_Generic_List_object__o *v82; // x0
  struct System_Object_array *v83; // x9
  _QWORD *v84; // x10
  __int64 v85; // x11
  Il2CppClass **v86; // x9
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49BB46A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__, entityList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__, v9);
    sub_1B4CF90(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Count__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v21);
    sub_1B4CF90(&NetworkManager_TypeInfo, v22);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v23);
    sub_1B4CF90(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__, v24);
    sub_1B4CF90(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__, v25);
    sub_1B4CF90(&QuestReleaseOverwriteMaster___c_TypeInfo, v26);
    byte_49BB46A = 1;
  }
  memset(&v89, 0, sizeof(v89));
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  if ( !*((_BYTE *)Instance + 73) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_72;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Count__);
    if ( Count >= 1 )
    {
      v60 = Count;
      v61 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                                  v61,
                                                  (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseOverwriteEntity__get_Item__);
        if ( Item )
        {
          v64 = (Il2CppObject *)Item;
          if ( Item->fields.questId == questId )
          {
            Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v63);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v27 )
                break;
              items = v27->fields._items;
              v68 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
              ++v27->fields._version;
              if ( !items )
                break;
              size = v27->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v27,
                  v64,
                  *(const MethodInfo_35801DC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
              }
              else
              {
                v70 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v70[4] = (Il2CppClass *)v64;
                sub_1B4CF34((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v64, v65, v66);
              }
            }
          }
        }
        if ( v60 == ++v61 )
          goto LABEL_51;
      }
LABEL_72:
      sub_1B4D1EC(Instance, v29);
    }
LABEL_51:
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v27,
           (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v71 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v71 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v72 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v71 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v71,
          v72,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
          0LL);
        static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v71;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v71, v74, v75);
      }
      if ( !v27 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_56106144(
        v27,
        v71,
        (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v27,
                   0,
                   (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v76 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v88,
        v27,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v89 = v88;
      while ( 1 )
      {
        v77 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v89,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v77 )
          break;
        current = v89.fields._current;
        if ( !v89.fields._current )
          sub_1B4D1EC(v77, v78);
        if ( HIDWORD(v89.fields._current[1].klass) == v76 )
        {
          v82 = (System_Collections_Generic_List_object__o *)*entityList;
          if ( !*entityList )
            sub_1B4D1EC(0LL, v78);
          v83 = v82->fields._items;
          v84 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v82->fields._version;
          if ( !v83 )
            sub_1B4D1EC(v82, v78);
          v85 = v82->fields._size;
          if ( (unsigned int)v85 >= v83->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v82,
              current,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
          }
          else
          {
            v86 = &v83->obj.klass + v85;
            v82->fields._size = v85 + 1;
            v86[4] = (Il2CppClass *)current;
            sub_1B4CF34((CGThumbnailListItem_o *)(v86 + 4), (int32_t)current, v79, v80);
          }
        }
      }
      goto LABEL_70;
    }
    goto LABEL_69;
  }
  CacheById = (System_Collections_Generic_List_object__o *)QuestReleaseOverwriteMaster__GetCacheById(this, questId, v30);
  if ( CacheById )
  {
    v32 = CacheById->fields._size;
    v33 = CacheById;
    if ( v32 >= 1 )
    {
      v34 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v33,
                     v34,
                     (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
        if ( !Instance )
          goto LABEL_72;
        v36 = (Il2CppObject *)Instance;
        Instance = (void *)QuestReleaseOverwriteEntity__IsPeriod(
                             (QuestReleaseOverwriteEntity_o *)Instance,
                             nowTime,
                             v35);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v27 )
            goto LABEL_72;
          v39 = v27->fields._items;
          v40 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
          ++v27->fields._version;
          if ( !v39 )
            goto LABEL_72;
          v41 = v27->fields._size;
          if ( (unsigned int)v41 >= v39->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              v36,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &v39->obj.klass + v41;
            v27->fields._size = v41 + 1;
            v42[4] = (Il2CppClass *)v36;
            sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v36, v37, v38);
          }
        }
      }
      while ( v32 != ++v34 );
    }
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v27,
           (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
    {
      Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
        Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v43 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
      if ( !v43 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = QuestReleaseOverwriteMaster___c_TypeInfo;
        }
        v44 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v43 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
        System_Comparison_object____ctor(
          v43,
          v44,
          Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_1__,
          0LL);
        v45 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
        v45->__9__4_1 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v43;
        sub_1B4CF34((CGThumbnailListItem_o *)&v45->__9__4_1, (int32_t)v43, v46, v47);
      }
      if ( !v27 )
        goto LABEL_72;
      System_Collections_Generic_List_object___Sort_56106144(
        v27,
        v43,
        (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v27,
                   0,
                   (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
      if ( !Instance )
        goto LABEL_72;
      v48 = *((_DWORD *)Instance + 5);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v88,
        v27,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
      v89 = v88;
      while ( 1 )
      {
        v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v89,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
        if ( !v49 )
          break;
        v53 = v89.fields._current;
        if ( !v89.fields._current )
          sub_1B4D1EC(v49, v50);
        if ( HIDWORD(v89.fields._current[1].klass) != v48 )
          break;
        v54 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1B4D1EC(0LL, v50);
        v55 = v54->fields._items;
        v56 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v54->fields._version;
        if ( !v55 )
          sub_1B4D1EC(v54, v50);
        v57 = v54->fields._size;
        if ( (unsigned int)v57 >= v55->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v54,
            v53,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &v55->obj.klass + v57;
          v54->fields._size = v57 + 1;
          v58[4] = (Il2CppClass *)v53;
          sub_1B4CF34((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v53, v51, v52);
        }
      }
LABEL_70:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v89,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
      LOBYTE(CacheById) = System_Linq_Enumerable__Any_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
                            (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
      return (unsigned __int8)CacheById & 1;
    }
LABEL_69:
    LOBYTE(CacheById) = 0;
  }
  return (unsigned __int8)CacheById & 1;
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB46D & 1) == 0 )
  {
    sub_1B4CF90(&QuestReleaseOverwriteMaster___c_TypeInfo, v1);
    byte_49BB46D = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestReleaseOverwriteMaster___c___ctor(
        QuestReleaseOverwriteMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_0(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_1(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}