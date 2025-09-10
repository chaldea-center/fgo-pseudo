void EventEquipSkillPartsMaster___ctor(EventEquipSkillPartsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27242 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__);
    byte_4C27242 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    552,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__);
}


EventEquipSkillPartsEntity_array *EventEquipSkillPartsMaster__GetEventEquipSkillPartsEntityArray(
        EventEquipSkillPartsMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v6; // x29
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  Il2CppObject *Master_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x22
  System_Collections_Generic_Dictionary_int__object__o *v17; // x21
  __int64 v18; // x2
  int max_length; // w8
  unsigned int v20; // w28
  Il2CppObject *v21; // x23
  int32_t monitor; // w24
  System_Collections_Generic_List_object__o *v23; // x25
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  CGThumbnailListItem_o *v30; // x22
  int32_t currentKey; // w23
  Il2CppObject *v32; // x0
  EventEquipSkillPartsMaster___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x24
  System_Func_object__int__o *_9__0_2; // x25
  Il2CppObject *v36; // x26
  struct EventEquipSkillPartsMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  System_Func_object__bool__o *klass; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x24
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x1
  Il2CppObject *v49; // x0
  EventEquipSkillPartsMaster___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x23
  System_Func_object__int__o *_9__0_4; // x24
  Il2CppObject *v53; // x25
  struct EventEquipSkillPartsMaster___c_StaticFields *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  EventEquipSkillPartsMaster___c_c *v62; // x0
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v64; // x21
  struct EventEquipSkillPartsMaster___c_StaticFields *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v71; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v72; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C2723F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____78036056);
    sub_1C2D490(&Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___get_Current__);
    sub_1C2D490(&System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C2D490(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__);
    sub_1C2D490(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__);
    sub_1C2D490(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__);
    sub_1C2D490(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__);
    sub_1C2D490(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__);
    sub_1C2D490(&EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C2D490(&EventEquipSkillPartsMaster___c_TypeInfo);
    byte_4C2723F = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v6 = sub_1C2D6DC(EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_52;
  *(_DWORD *)(v6 + 16) = eventId;
  *(_DWORD *)(v6 + 20) = groupId;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  *(_QWORD *)(v6 + 24) = Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 24), (int32_t)Master_object, v11, v12);
  list = this->fields.list;
  v14 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v6,
    Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__);
  if ( !v16 )
    goto LABEL_52;
  max_length = v16->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1C2D6F4(Item, v8, v18);
      v21 = v16->m_Items[v20];
      if ( !v21 || !v17 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v17,
              (int32_t)v21[1].monitor,
              (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__) )
      {
        monitor = (int32_t)v21[1].monitor;
        v23 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v23,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___Add(
          v17,
          monitor,
          (Il2CppObject *)v23,
          (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v17,
                                                            (int32_t)v21[1].monitor,
                                                            (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v27 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          v21,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v21;
        sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v21, v24, v25);
      }
      max_length = v16->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_20;
    }
LABEL_52:
    sub_1C2D6EC(Item, v8);
  }
LABEL_20:
  if ( !v17 )
    goto LABEL_52;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                                        v17,
                                                        (const MethodInfo_33E0F3C *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__);
  if ( !Item )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    &v71,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Item,
    (const MethodInfo_36A4E90 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__);
  v72 = v71;
  v30 = (CGThumbnailListItem_o *)(v6 + 32);
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            &v72,
            (const MethodInfo_3538BC0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__) )
  {
    currentKey = (int32_t)v72.fields._currentKey;
    v32 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v17,
            (int32_t)v72.fields._currentKey,
            (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
    v33 = EventEquipSkillPartsMaster___c_TypeInfo;
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
    if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
      v33 = EventEquipSkillPartsMaster___c_TypeInfo;
    }
    _9__0_2 = (System_Func_object__int__o *)v33->static_fields->__9__0_2;
    if ( !_9__0_2 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = EventEquipSkillPartsMaster___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__0_2 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__0_2,
        v36,
        Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__,
        0);
      static_fields = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_2 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_2;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_2, (int32_t)_9__0_2, v38, v39);
    }
    v40 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v34,
            (System_Func_TSource__TKey__o *)_9__0_2,
            (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___);
    klass = (System_Func_object__bool__o *)v30->klass;
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
    if ( !v30->klass )
    {
      klass = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        klass,
        (Il2CppObject *)v6,
        Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__,
        0);
      v30->klass = (CGThumbnailListItem_c *)klass;
      sub_1C2D434(v30, (int32_t)klass, v43, v44);
    }
    v45 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
            v42,
            (System_Func_TSource__bool__o *)klass,
            (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____78036056);
    v48 = v45;
    if ( !v45 )
    {
      v49 = System_Collections_Generic_Dictionary_int__object___get_Item(
              v17,
              currentKey,
              (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      v50 = EventEquipSkillPartsMaster___c_TypeInfo;
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)v49;
      if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
        v50 = EventEquipSkillPartsMaster___c_TypeInfo;
      }
      _9__0_4 = (System_Func_object__int__o *)v50->static_fields->__9__0_4;
      if ( !_9__0_4 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v50 = EventEquipSkillPartsMaster___c_TypeInfo;
        }
        v53 = (Il2CppObject *)v50->static_fields->__9;
        _9__0_4 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__0_4,
          v53,
          Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__,
          0);
        v54 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
        v54->__9__0_4 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_4;
        sub_1C2D434((CGThumbnailListItem_o *)&v54->__9__0_4, (int32_t)_9__0_4, v55, v56);
      }
      v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                   v51,
                                                                   (System_Func_TSource__TKey__o *)_9__0_4,
                                                                   (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
      v45 = System_Linq_Enumerable__First_object_(
              v57,
              (const MethodInfo_30F5228 *)Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___);
      v48 = v45;
      if ( !v45 )
        continue;
    }
    if ( !v9 )
      sub_1C2D6EC(v45, v48);
    v58 = v9->fields._items;
    v59 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
    ++v9->fields._version;
    if ( !v58 )
      sub_1C2D6EC(v45, v48);
    v60 = v9->fields._size;
    if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v48,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->obj.klass + v60;
      v9->fields._size = v60 + 1;
      v61[4] = (Il2CppClass *)v48;
      sub_1C2D434((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v48, v46, v47);
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    &v72,
    (const MethodInfo_3538BBC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__);
  v62 = EventEquipSkillPartsMaster___c_TypeInfo;
  if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
    v62 = EventEquipSkillPartsMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v62->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = EventEquipSkillPartsMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v62->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v64,
      Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__,
      0);
    v65 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
    v65->__9__0_1 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v65->__9__0_1, (int32_t)_9__0_1, v66, v67);
  }
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
  return (EventEquipSkillPartsEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v68,
                                               (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  bool ValidEventEquipSkillPartsEntityList; // w8
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C27241 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___);
    sub_1C2D490(&int___TypeInfo);
    byte_4C27241 = 1;
  }
  eventEquipSkillPartsEntityList = 0;
  *eventEquipSkillPartsEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)eventEquipSkillPartsEntity, 0, questId, (const MethodInfo *)isQuestClear);
  if ( isQuestClear )
    return 0;
  v10 = sub_1C2D538(int___TypeInfo, 1);
  if ( !v10 )
    sub_1C2D6EC(0, v11);
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1C2D6F4(v10, v11, v10);
  *(_DWORD *)(v10 + 32) = questId;
  ValidEventEquipSkillPartsEntityList = EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                                          this,
                                          &eventEquipSkillPartsEntityList,
                                          (System_Int32_array *)v10,
                                          0,
                                          v12);
  result = 0;
  if ( ValidEventEquipSkillPartsEntityList )
  {
    v14 = System_Linq_Enumerable__FirstOrDefault_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)eventEquipSkillPartsEntityList,
            (const MethodInfo_30F7054 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___);
    *eventEquipSkillPartsEntity = (EventEquipSkillPartsEntity_o *)v14;
    sub_1C2D434((CGThumbnailListItem_o *)eventEquipSkillPartsEntity, (int32_t)v14, v15, v16);
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
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  il2cpp_array_size_t max_length; // x8
  __int64 v29; // x24
  unsigned __int64 v30; // x25
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_object__o *v32; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4C27240 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    byte_4C27240 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  *eventEquipSkillPartsEntityList = (System_Collections_Generic_List_EventEquipSkillPartsEntity__o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)eventEquipSkillPartsEntityList, (int32_t)v10, v11, v12);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_11;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v20 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8))
        & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_18;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_18:
      v24 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( !questIdList )
      sub_1C2D6EC(v25, v26);
    max_length = questIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v29 = v25;
      v30 = 0;
      do
      {
        if ( v30 >= (unsigned int)max_length )
          sub_1C2D6F4(v25, v26, v27);
        if ( !v29 )
          sub_1C2D6EC(v25, v26);
        if ( !Master_object )
          sub_1C2D6EC(v25, v26);
        v25 = CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                *(_DWORD *)(v29 + 44),
                questIdList->m_Items[v30],
                0);
        if ( (v25 & 1) != 0 && *(_DWORD *)(v29 + 32) == groupId )
        {
          v32 = (System_Collections_Generic_List_object__o *)*eventEquipSkillPartsEntityList;
          if ( !*eventEquipSkillPartsEntityList )
            sub_1C2D6EC(0, v26);
          items = v32->fields._items;
          v34 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
          ++v32->fields._version;
          if ( !items )
            sub_1C2D6EC(v32, v26);
          size = v32->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v29,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v29;
            sub_1C2D434((CGThumbnailListItem_o *)(v36 + 4), v29, v27, v31);
          }
        }
        LODWORD(max_length) = questIdList->max_length;
        ++v30;
      }
      while ( (__int64)v30 < (int)max_length );
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_39;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_39:
    v40 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*eventEquipSkillPartsEntityList, 0);
}


void EventEquipSkillPartsMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27243 & 1) == 0 )
  {
    sub_1C2D490(&EventEquipSkillPartsMaster___c_TypeInfo);
    byte_4C27243 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventEquipSkillPartsMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventEquipSkillPartsMaster___c_TypeInfo->static_fields->__9 = (struct EventEquipSkillPartsMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventEquipSkillPartsMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return e->fields.num;
}


int32_t EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_2(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
  return e->fields.priority;
}


int32_t EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_4(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return e->fields.eventId == this->fields.eventId && e->fields.groupId == this->fields.groupId;
}


bool EventEquipSkillPartsMaster___c__DisplayClass0_0___GetEventEquipSkillPartsEntityArray_b__3(
        EventEquipSkillPartsMaster___c__DisplayClass0_0_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e || (this = (EventEquipSkillPartsMaster___c__DisplayClass0_0_o *)this->fields.commonReleaseMaster) == 0 )
    sub_1C2D6EC(this, e);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, e->fields.commonReleaseId, 0, 0, 0);
}