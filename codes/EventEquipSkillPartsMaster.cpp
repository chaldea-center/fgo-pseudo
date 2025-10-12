void EventEquipSkillPartsMaster___ctor(EventEquipSkillPartsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37938 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__);
    byte_4C37938 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    552,
    (const MethodInfo_3394514 *)Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__);
}


EventEquipSkillPartsEntity_array *EventEquipSkillPartsMaster__GetEventEquipSkillPartsEntityArray(
        EventEquipSkillPartsMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v6; // x29
  System_Collections_Generic_List_object__o *Item; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  Il2CppObject *Master_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v13; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Object_array *v15; // x22
  System_Collections_Generic_Dictionary_int__object__o *v16; // x21
  int max_length; // w8
  unsigned int v18; // w28
  Il2CppObject *v19; // x23
  int32_t monitor; // w24
  System_Collections_Generic_List_object__o *v21; // x25
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  CGThumbnailListItem_o *v28; // x22
  int32_t currentKey; // w23
  Il2CppObject *v30; // x0
  EventEquipSkillPartsMaster___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  System_Func_object__int__o *_9__0_2; // x25
  Il2CppObject *v34; // x26
  struct EventEquipSkillPartsMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x0
  System_Func_object__bool__o *klass; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x24
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x1
  Il2CppObject *v47; // x0
  EventEquipSkillPartsMaster___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x23
  System_Func_object__int__o *_9__0_4; // x24
  Il2CppObject *v51; // x25
  struct EventEquipSkillPartsMaster___c_StaticFields *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  EventEquipSkillPartsMaster___c_c *v60; // x0
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v62; // x21
  struct EventEquipSkillPartsMaster___c_StaticFields *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v69; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v70; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C37935 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____78101456);
    sub_1C32C20(&Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___get_Current__);
    sub_1C32C20(&System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C32C20(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__);
    sub_1C32C20(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__);
    sub_1C32C20(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__);
    sub_1C32C20(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__);
    sub_1C32C20(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__);
    sub_1C32C20(&EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&EventEquipSkillPartsMaster___c_TypeInfo);
    byte_4C37935 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v6 = sub_1C32E6C(EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_52;
  *(_DWORD *)(v6 + 16) = eventId;
  *(_DWORD *)(v6 + 20) = groupId;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  *(_QWORD *)(v6 + 24) = Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 24), (int32_t)Master_object, v10, v11);
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v6,
    Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          v14,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__);
  if ( !v15 )
    goto LABEL_52;
  max_length = v15->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_1C32E84(Item);
      v19 = v15->m_Items[v18];
      if ( !v19 || !v16 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v16,
              (int32_t)v19[1].monitor,
              (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__) )
      {
        monitor = (int32_t)v19[1].monitor;
        v21 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v21,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___Add(
          v16,
          monitor,
          (Il2CppObject *)v21,
          (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v16,
                                                            (int32_t)v19[1].monitor,
                                                            (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v25 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          v19,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v19, v22, v23);
      }
      max_length = v15->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_20;
    }
LABEL_52:
    sub_1C32E7C(Item);
  }
LABEL_20:
  if ( !v16 )
    goto LABEL_52;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                                        v16,
                                                        (const MethodInfo_33EF9DC *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__);
  if ( !Item )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    &v69,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Item,
    (const MethodInfo_36B3930 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__);
  v70 = v69;
  v28 = (CGThumbnailListItem_o *)(v6 + 32);
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            &v70,
            (const MethodInfo_3547660 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__) )
  {
    currentKey = (int32_t)v70.fields._currentKey;
    v30 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v16,
            (int32_t)v70.fields._currentKey,
            (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
    v31 = EventEquipSkillPartsMaster___c_TypeInfo;
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
    if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
      v31 = EventEquipSkillPartsMaster___c_TypeInfo;
    }
    _9__0_2 = (System_Func_object__int__o *)v31->static_fields->__9__0_2;
    if ( !_9__0_2 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = EventEquipSkillPartsMaster___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__0_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__0_2,
        v34,
        Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__,
        0);
      static_fields = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_2 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_2;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_2, (int32_t)_9__0_2, v36, v37);
    }
    v38 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v32,
            (System_Func_TSource__TKey__o *)_9__0_2,
            (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___);
    klass = (System_Func_object__bool__o *)v28->klass;
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
    if ( !v28->klass )
    {
      klass = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        klass,
        (Il2CppObject *)v6,
        Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__,
        0);
      v28->klass = (CGThumbnailListItem_c *)klass;
      sub_1C32BC4(v28, (int32_t)klass, v41, v42);
    }
    v43 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
            v40,
            (System_Func_TSource__bool__o *)klass,
            (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____78101456);
    v46 = v43;
    if ( !v43 )
    {
      v47 = System_Collections_Generic_Dictionary_int__object___get_Item(
              v16,
              currentKey,
              (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      v48 = EventEquipSkillPartsMaster___c_TypeInfo;
      v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
      if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
        v48 = EventEquipSkillPartsMaster___c_TypeInfo;
      }
      _9__0_4 = (System_Func_object__int__o *)v48->static_fields->__9__0_4;
      if ( !_9__0_4 )
      {
        if ( !v48->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v48);
          v48 = EventEquipSkillPartsMaster___c_TypeInfo;
        }
        v51 = (Il2CppObject *)v48->static_fields->__9;
        _9__0_4 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__0_4,
          v51,
          Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__,
          0);
        v52 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
        v52->__9__0_4 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_4;
        sub_1C32BC4((CGThumbnailListItem_o *)&v52->__9__0_4, (int32_t)_9__0_4, v53, v54);
      }
      v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                   v49,
                                                                   (System_Func_TSource__TKey__o *)_9__0_4,
                                                                   (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
      v43 = System_Linq_Enumerable__First_object_(
              v55,
              (const MethodInfo_3103CC8 *)Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___);
      v46 = v43;
      if ( !v43 )
        continue;
    }
    if ( !v8 )
      sub_1C32E7C(v43);
    v56 = v8->fields._items;
    v57 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
    ++v8->fields._version;
    if ( !v56 )
      sub_1C32E7C(v43);
    v58 = v8->fields._size;
    if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v46,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v56->obj.klass + v58;
      v8->fields._size = v58 + 1;
      v59[4] = (Il2CppClass *)v46;
      sub_1C32BC4((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v46, v44, v45);
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    &v70,
    (const MethodInfo_354765C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__);
  v60 = EventEquipSkillPartsMaster___c_TypeInfo;
  if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
    v60 = EventEquipSkillPartsMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v60->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = EventEquipSkillPartsMaster___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v62,
      Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__,
      0);
    v63 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
    v63->__9__0_1 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v63->__9__0_1, (int32_t)_9__0_1, v64, v65);
  }
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
  return (EventEquipSkillPartsEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v66,
                                               (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool EventEquipSkillPartsMaster__TryGetUnclearedEventEquipSkillPartsEntity(
        EventEquipSkillPartsMaster_o *this,
        EventEquipSkillPartsEntity_o **eventEquipSkillPartsEntity,
        int32_t questId,
        bool isQuestClear,
        const MethodInfo *method)
{
  bool result; // w0
  __int64 v10; // x0
  const MethodInfo *v11; // x4
  bool ValidEventEquipSkillPartsEntityList; // w8
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C37937 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___);
    sub_1C32C20(&int___TypeInfo);
    byte_4C37937 = 1;
  }
  eventEquipSkillPartsEntityList = 0;
  *eventEquipSkillPartsEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)eventEquipSkillPartsEntity, 0, questId, (const MethodInfo *)isQuestClear);
  if ( isQuestClear )
    return 0;
  v10 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v10 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1C32E84(v10);
  *(_DWORD *)(v10 + 32) = questId;
  ValidEventEquipSkillPartsEntityList = EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                                          this,
                                          &eventEquipSkillPartsEntityList,
                                          (System_Int32_array *)v10,
                                          0,
                                          v11);
  result = 0;
  if ( ValidEventEquipSkillPartsEntityList )
  {
    v13 = System_Linq_Enumerable__FirstOrDefault_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)eventEquipSkillPartsEntityList,
            (const MethodInfo_3105AF4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___);
    *eventEquipSkillPartsEntity = (EventEquipSkillPartsEntity_o *)v13;
    sub_1C32BC4((CGThumbnailListItem_o *)eventEquipSkillPartsEntity, (int32_t)v13, v14, v15);
    return *eventEquipSkillPartsEntity != 0;
  }
  return result;
}


bool EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
        EventEquipSkillPartsMaster_o *this,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o **eventEquipSkillPartsEntityList,
        System_Int32_array *questIdList,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  const MethodInfo *v24; // x3
  il2cpp_array_size_t max_length; // x8
  __int64 v26; // x24
  unsigned __int64 v27; // x25
  int32_t v28; // w2
  System_Collections_Generic_List_object__o *v29; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4C37936 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    byte_4C37936 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  *eventEquipSkillPartsEntityList = (System_Collections_Generic_List_EventEquipSkillPartsEntity__o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)eventEquipSkillPartsEntityList, (int32_t)v10, v11, v12);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v18 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !questIdList )
      sub_1C32E7C(v23);
    max_length = questIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v26 = v23;
      v27 = 0;
      do
      {
        if ( v27 >= (unsigned int)max_length )
          sub_1C32E84(v23);
        if ( !v26 )
          sub_1C32E7C(v23);
        if ( !Master_object )
          sub_1C32E7C(v23);
        v23 = CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                *(_DWORD *)(v26 + 44),
                questIdList->m_Items[v27],
                v24);
        if ( (v23 & 1) != 0 && *(_DWORD *)(v26 + 32) == groupId )
        {
          v29 = (System_Collections_Generic_List_object__o *)*eventEquipSkillPartsEntityList;
          if ( !*eventEquipSkillPartsEntityList )
            sub_1C32E7C(0);
          items = v29->fields._items;
          v31 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
          ++v29->fields._version;
          if ( !items )
            sub_1C32E7C(v29);
          size = v29->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)v26,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v29->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v26;
            sub_1C32BC4((CGThumbnailListItem_o *)(v33 + 4), v26, v28, v24);
          }
        }
        LODWORD(max_length) = questIdList->max_length;
        ++v27;
      }
      while ( (__int64)v27 < (int)max_length );
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_39;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_39:
    v37 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*eventEquipSkillPartsEntityList, 0);
}


void EventEquipSkillPartsMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37939 & 1) == 0 )
  {
    sub_1C32C20(&EventEquipSkillPartsMaster___c_TypeInfo);
    byte_4C37939 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventEquipSkillPartsMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventEquipSkillPartsMaster___c_TypeInfo->static_fields->__9 = (struct EventEquipSkillPartsMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventEquipSkillPartsMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventEquipSkillPartsMaster___c___ctor(EventEquipSkillPartsMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_1(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.num;
}


int32_t EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_2(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.priority;
}


int32_t EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_4(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.priority;
}


void EventEquipSkillPartsMaster___c__DisplayClass0_0___ctor(
        EventEquipSkillPartsMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventEquipSkillPartsMaster___c__DisplayClass0_0___GetEventEquipSkillPartsEntityArray_b__0(
        EventEquipSkillPartsMaster___c__DisplayClass0_0_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.eventId == this->fields.eventId && e->fields.groupId == this->fields.groupId;
}


bool EventEquipSkillPartsMaster___c__DisplayClass0_0___GetEventEquipSkillPartsEntityArray_b__3(
        EventEquipSkillPartsMaster___c__DisplayClass0_0_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !e || (this = (EventEquipSkillPartsMaster___c__DisplayClass0_0_o *)this->fields.commonReleaseMaster) == 0 )
    sub_1C32E7C(this);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, e->fields.commonReleaseId, 0, 0, v3);
}