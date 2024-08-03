void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC979 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__,
      method);
    byte_49FC979 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    406,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
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

  if ( (byte_49FC977 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49FC977 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseOverwriteEntity__CreatePK(
                         questId,
                         priority,
                         imagePriority,
                         *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
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

  if ( (byte_49FC97A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&QuestReleaseOverwriteEntity_TypeInfo, v9);
    byte_49FC97A = 1;
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
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1B64324(list);
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

  if ( (byte_49FC978 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_49FC978 = 1;
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
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v28; // w24
  int32_t v29; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v31; // x2
  Il2CppObject *v32; // x26
  __int64 methodPtr_low; // x10
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  System_Comparison_T__o *v42; // x20
  Il2CppObject *v43; // x21
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  int v47; // w20
  _BOOL8 v48; // x0
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

  if ( (byte_49FC97B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, entityList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v20);
    sub_1B640C8(&NetworkManager_TypeInfo, v21);
    sub_1B640C8(&QuestReleaseOverwriteEntity_TypeInfo, v22);
    sub_1B640C8(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__, v23);
    sub_1B640C8(&QuestReleaseOverwriteMaster___c_TypeInfo, v24);
    byte_49FC97B = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                       entityList,
                                                       *(_QWORD *)&questId);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v28 = Count;
    v29 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                (System_Collections_ObjectModel_Collection_T__o *)list,
                                                v29,
                                                (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v32 = (Il2CppObject *)Item;
        methodPtr_low = LOBYTE(QuestReleaseOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && Item->fields.questId == questId )
        {
          list = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v31);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v25 )
              break;
            items = v25->fields._items;
            v37 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
            ++v25->fields._version;
            if ( !items )
              break;
            size = v25->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                v32,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v25->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v32;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
            }
          }
        }
      }
      if ( v28 == ++v29 )
        goto LABEL_22;
    }
LABEL_43:
    sub_1B64324(list);
  }
LABEL_22:
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v25,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
  {
    list = QuestReleaseOverwriteMaster___c_TypeInfo;
    if ( !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
      list = QuestReleaseOverwriteMaster___c_TypeInfo;
    }
    v42 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v42 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = QuestReleaseOverwriteMaster___c_TypeInfo;
      }
      v43 = (Il2CppObject *)**((_QWORD **)list + 23);
      v42 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v40, v41);
      System_Comparison_object____ctor(
        v42,
        v43,
        Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
        0LL);
      static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)v42;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v42, v45, v46);
    }
    if ( !v25 )
      goto LABEL_43;
    System_Collections_Generic_List_object___Sort_55243320(
      v25,
      v42,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    list = System_Collections_Generic_List_object___get_Item(
             v25,
             0,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    if ( !list )
      goto LABEL_43;
    v47 = *((_DWORD *)list + 5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
      v25,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v60 = v59;
    while ( 1 )
    {
      v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v60,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
      if ( !v48 )
        break;
      current = v60.fields._current;
      if ( !v60.fields._current )
        sub_1B64324(v48);
      if ( HIDWORD(v60.fields._current[1].klass) == v47 )
      {
        v52 = (System_Collections_Generic_List_object__o *)*entityList;
        if ( !*entityList )
          sub_1B64324(0LL);
        v53 = v52->fields._items;
        v54 = Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__;
        ++v52->fields._version;
        if ( !v53 )
          sub_1B64324(v52);
        v55 = v52->fields._size;
        if ( (unsigned int)v55 >= v53->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v52,
            current,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &v53->obj.klass + v55;
          v52->fields._size = v55 + 1;
          v56[4] = (Il2CppClass *)current;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)current, v49, v50);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v60,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    return System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
             (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC97C & 1) == 0 )
  {
    sub_1B640C8(&QuestReleaseOverwriteMaster___c_TypeInfo, v1);
    byte_49FC97C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestReleaseOverwriteMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestReleaseOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}