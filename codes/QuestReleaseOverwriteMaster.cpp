void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E2D3B & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__,
      method);
    byte_48E2D3B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    405,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
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

  if ( (byte_48E2D39 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_48E2D39 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
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
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w22
  QuestReleaseOverwriteEntity_o *v13; // x23
  int32_t v14; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v16; // x2
  QuestReleaseOverwriteEntity_o *v17; // x25
  __int64 methodPtr_low; // x10
  int32_t priority; // w8
  int32_t v20; // w9

  if ( (byte_48E2D3C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&QuestReleaseOverwriteEntity_TypeInfo, v9);
    byte_48E2D3C = 1;
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
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0LL;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v14,
               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = (QuestReleaseOverwriteEntity_o *)Item;
        methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && LODWORD(Item[1].klass) == questId
          && QuestReleaseOverwriteEntity__IsPeriod((QuestReleaseOverwriteEntity_o *)Item, nowTime, v16) )
        {
          if ( !v13
            || (priority = v13->fields.priority, v20 = v17->fields.priority, priority < v20)
            || priority == v20 && v13->fields.imagePriority < v17->fields.imagePriority )
          {
            v13 = v17;
          }
        }
      }
      if ( v12 == ++v14 )
        return v13;
    }
LABEL_26:
    sub_1B00F28(list, *(_QWORD *)&questId);
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

  if ( (byte_48E2D3A & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_48E2D3A = 1;
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
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *v25; // x23
  __int64 v26; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v29; // w24
  int32_t v30; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v32; // x2
  Il2CppObject *v33; // x26
  __int64 methodPtr_low; // x10
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Comparison_T__o *v41; // x20
  Il2CppObject *v42; // x21
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int v46; // w20
  _BOOL8 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *current; // x8
  System_Collections_Generic_List_object__o *v52; // x0
  struct System_Object_array *v53; // x9
  _QWORD *v54; // x10
  __int64 v55; // x11
  Il2CppClass **v56; // x9
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E2D3D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, entityList);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B00CCC(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v10);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__, v19);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v20);
    sub_1B00CCC(&NetworkManager_TypeInfo, v21);
    sub_1B00CCC(&QuestReleaseOverwriteEntity_TypeInfo, v22);
    sub_1B00CCC(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__, v23);
    sub_1B00CCC(&QuestReleaseOverwriteMaster___c_TypeInfo, v24);
    byte_48E2D3D = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                (System_Collections_ObjectModel_Collection_T__o *)list,
                                                v30,
                                                (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v33 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && Item->fields.questId == questId )
        {
          list = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v32);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v25 )
              break;
            items = v25->fields._items;
            v38 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
            ++v25->fields._version;
            if ( !items )
              break;
            size = v25->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                v33,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &items->obj.klass + size;
              v25->fields._size = size + 1;
              v40[4] = (Il2CppClass *)v33;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v33, v35, v36);
            }
          }
        }
      }
      if ( v29 == ++v30 )
        goto LABEL_22;
    }
LABEL_43:
    sub_1B00F28(list, v26);
  }
LABEL_22:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v25,
         (const MethodInfo_2D6DE20 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
  {
    list = QuestReleaseOverwriteMaster___c_TypeInfo;
    if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
      list = QuestReleaseOverwriteMaster___c_TypeInfo;
    }
    v41 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v41 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v42 = (Il2CppObject *)**((_QWORD **)list + 23);
      v41 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(
        v41,
        v42,
        Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
        0LL);
      static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v41;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v41, v44, v45);
    }
    if ( !v25 )
      goto LABEL_43;
    System_Collections_Generic_List_object___Sort_54277268(
      v25,
      v41,
      (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    list = System_Collections_Generic_List_object___get_Item(
             v25,
             0,
             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    if ( !list )
      goto LABEL_43;
    v46 = *((_DWORD *)list + 5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
      v25,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v60 = v59;
    while ( 1 )
    {
      v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v60,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
      if ( !v47 )
        break;
      current = v60.fields._current;
      if ( !v60.fields._current )
        sub_1B00F28(v47, v48);
      if ( HIDWORD(v60.fields._current[1].klass) == v46 )
      {
        v52 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1B00F28(0LL, v48);
        v53 = v52->fields._items;
        v54 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v52->fields._version;
        if ( !v53 )
          sub_1B00F28(v52, v48);
        v55 = v52->fields._size;
        if ( (unsigned int)v55 >= v53->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v52,
            current,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &v53->obj.klass + v55;
          v52->fields._size = v55 + 1;
          v56[4] = (Il2CppClass *)current;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)current, v49, v50);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v60,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    return System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
             (const MethodInfo_2D6DE20 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E2D3E & 1) == 0 )
  {
    sub_1B00CCC(&QuestReleaseOverwriteMaster___c_TypeInfo, v1);
    byte_48E2D3E = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, a);
  return b->fields.priority - a->fields.priority;
}