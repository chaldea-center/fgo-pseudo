void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B6DA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
    byte_4A5B6DA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
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

  if ( (byte_4A5B6D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
    byte_4A5B6D8 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
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
  Il2CppObject *Item; // x0
  const MethodInfo *v13; // x2
  QuestReleaseOverwriteEntity_o *v14; // x25
  __int64 methodPtr_low; // x10
  int32_t priority; // w8
  int32_t v17; // w9

  if ( (byte_4A5B6DB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&QuestReleaseOverwriteEntity_TypeInfo);
    byte_4A5B6DB = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = (QuestReleaseOverwriteEntity_o *)Item;
        methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && LODWORD(Item[1].klass) == questId
          && QuestReleaseOverwriteEntity__IsPeriod((QuestReleaseOverwriteEntity_o *)Item, nowTime, v13) )
        {
          if ( !v10
            || (priority = v10->fields.priority, v17 = v14->fields.priority, priority < v17)
            || priority == v17 && v10->fields.imagePriority < v14->fields.imagePriority )
          {
            v10 = v14;
          }
        }
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_26:
    sub_1B8880C(list, *(_QWORD *)&questId);
  }
  return 0LL;
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

  if ( (byte_4A5B6D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
    byte_4A5B6D9 = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Generic_List_QuestReleaseOverwriteEntity__o **entityList,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x26
  __int64 methodPtr_low; // x10
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x20
  Il2CppObject *v26; // x21
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int v30; // w20
  _BOOL8 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *current; // x8
  System_Collections_Generic_List_object__o *v36; // x0
  struct System_Object_array *v37; // x9
  _QWORD *v38; // x10
  __int64 v39; // x11
  Il2CppClass **v40; // x9
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B6DC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&QuestReleaseOverwriteEntity_TypeInfo);
    sub_1B885B0(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__);
    sub_1B885B0(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_4A5B6DC = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                (System_Collections_ObjectModel_Collection_T__o *)list,
                                                v14,
                                                (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && Item->fields.questId == questId )
        {
          list = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v16);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v22 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v17,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v17;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
            }
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_22;
    }
LABEL_43:
    sub_1B8880C(list, v10);
  }
LABEL_22:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
  {
    list = QuestReleaseOverwriteMaster___c_TypeInfo;
    if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
      list = QuestReleaseOverwriteMaster___c_TypeInfo;
    }
    v25 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v25 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v26 = (Il2CppObject *)**((_QWORD **)list + 23);
      v25 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(
        v25,
        v26,
        Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
        0LL);
      static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v25;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v25, v28, v29);
    }
    if ( !v9 )
      goto LABEL_43;
    System_Collections_Generic_List_object___Sort_55571192(
      v9,
      v25,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    list = System_Collections_Generic_List_object___get_Item(
             v9,
             0,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    if ( !list )
      goto LABEL_43;
    v30 = *((_DWORD *)list + 5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      v9,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v44 = v43;
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
      if ( !v31 )
        break;
      current = v44.fields._current;
      if ( !v44.fields._current )
        sub_1B8880C(v31, v32);
      if ( HIDWORD(v44.fields._current[1].klass) == v30 )
      {
        v36 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1B8880C(0LL, v32);
        v37 = v36->fields._items;
        v38 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v36->fields._version;
        if ( !v37 )
          sub_1B8880C(v36, v32);
        v39 = v36->fields._size;
        if ( (unsigned int)v39 >= v37->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            current,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &v37->obj.klass + v39;
          v36->fields._size = v39 + 1;
          v40[4] = (Il2CppClass *)current;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)current, v33, v34);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    return System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
             (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B6DD & 1) == 0 )
  {
    sub_1B885B0(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_4A5B6DD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}