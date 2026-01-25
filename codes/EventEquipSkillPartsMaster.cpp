void EventEquipSkillPartsMaster___ctor(EventEquipSkillPartsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE60D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__);
    byte_4CEE60D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    552,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *v20; // x22
  System_Collections_Generic_Dictionary_int__object__o *v21; // x21
  int max_length; // w8
  unsigned int v23; // w28
  Il2CppObject *v24; // x23
  int32_t monitor; // w24
  System_Collections_Generic_List_object__o *v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  GrandQuestFolderBoardItem_o *v37; // x22
  int32_t currentKey; // w23
  Il2CppObject *v39; // x0
  EventEquipSkillPartsMaster___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x24
  System_Func_object__int__o *_9__0_2; // x25
  Il2CppObject *v43; // x26
  struct EventEquipSkillPartsMaster___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v51; // x0
  System_Func_object__bool__o *klass; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x24
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  Il2CppObject *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  Il2CppObject *v67; // x1
  Il2CppObject *v68; // x0
  EventEquipSkillPartsMaster___c_c *v69; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x23
  System_Func_object__int__o *_9__0_4; // x24
  Il2CppObject *v72; // x25
  struct EventEquipSkillPartsMaster___c_StaticFields *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  EventEquipSkillPartsMaster___c_c *v85; // x0
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v87; // x21
  struct EventEquipSkillPartsMaster___c_StaticFields *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v98; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v99; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEE60A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____78834032);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___get_Current__);
    sub_1C7BAE8(&System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C7BAE8(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__);
    sub_1C7BAE8(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__);
    sub_1C7BAE8(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__);
    sub_1C7BAE8(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__);
    sub_1C7BAE8(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__);
    sub_1C7BAE8(&EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C7BAE8(&EventEquipSkillPartsMaster___c_TypeInfo);
    byte_4CEE60A = 1;
  }
  memset(&v99, 0, sizeof(v99));
  v6 = sub_1C7BD34(EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_52;
  *(_DWORD *)(v6 + 16) = eventId;
  *(_DWORD *)(v6 + 20) = groupId;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  *(_QWORD *)(v6 + 24) = Master_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)Master_object, v11, v12, v13, v14, v15, v16);
  list = this->fields.list;
  v18 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__,
    0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__);
  if ( !v20 )
    goto LABEL_52;
  max_length = v20->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
        sub_1C7BD48(Item);
      v24 = v20->m_Items[v23];
      if ( !v24 || !v21 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v21,
              (int32_t)v24[1].monitor,
              (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__) )
      {
        monitor = (int32_t)v24[1].monitor;
        v26 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___Add(
          v21,
          monitor,
          (Il2CppObject *)v26,
          (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v21,
                                                            (int32_t)v24[1].monitor,
                                                            (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v34 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          v24,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v24;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v24, v27, v28, v29, v30, v31, v32);
      }
      max_length = v20->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_20;
    }
LABEL_52:
    sub_1C7BD40(Item, v8);
  }
LABEL_20:
  if ( !v21 )
    goto LABEL_52;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                                        v21,
                                                        (const MethodInfo_34873D0 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__);
  if ( !Item )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    &v98,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Item,
    (const MethodInfo_3754908 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__);
  v99 = v98;
  v37 = (GrandQuestFolderBoardItem_o *)(v6 + 32);
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            &v99,
            (const MethodInfo_35E2660 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__) )
  {
    currentKey = (int32_t)v99.fields._currentKey;
    v39 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v21,
            (int32_t)v99.fields._currentKey,
            (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
    v40 = EventEquipSkillPartsMaster___c_TypeInfo;
    v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
    if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
      v40 = EventEquipSkillPartsMaster___c_TypeInfo;
    }
    _9__0_2 = (System_Func_object__int__o *)v40->static_fields->__9__0_2;
    if ( !_9__0_2 )
    {
      if ( !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v40 = EventEquipSkillPartsMaster___c_TypeInfo;
      }
      v43 = (Il2CppObject *)v40->static_fields->__9;
      _9__0_2 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__0_2,
        v43,
        Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__,
        0);
      static_fields = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_2 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_2;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__0_2,
        (int32_t)_9__0_2,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    v51 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v41,
            (System_Func_TSource__TKey__o *)_9__0_2,
            (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___);
    klass = (System_Func_object__bool__o *)v37->klass;
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)v51;
    if ( !v37->klass )
    {
      klass = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        klass,
        (Il2CppObject *)v6,
        Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__,
        0);
      v37->klass = (GrandQuestFolderBoardItem_c *)klass;
      sub_1C7BA8C(v37, (int32_t)klass, v54, v55, v56, v57, v58, v59);
    }
    v60 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
            v53,
            (System_Func_TSource__bool__o *)klass,
            (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____78834032);
    v67 = v60;
    if ( !v60 )
    {
      v68 = System_Collections_Generic_Dictionary_int__object___get_Item(
              v21,
              currentKey,
              (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      v69 = EventEquipSkillPartsMaster___c_TypeInfo;
      v70 = (System_Collections_Generic_IEnumerable_TSource__o *)v68;
      if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
        v69 = EventEquipSkillPartsMaster___c_TypeInfo;
      }
      _9__0_4 = (System_Func_object__int__o *)v69->static_fields->__9__0_4;
      if ( !_9__0_4 )
      {
        if ( !v69->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v69);
          v69 = EventEquipSkillPartsMaster___c_TypeInfo;
        }
        v72 = (Il2CppObject *)v69->static_fields->__9;
        _9__0_4 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__0_4,
          v72,
          Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__,
          0);
        v73 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
        v73->__9__0_4 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v73->__9__0_4, (int32_t)_9__0_4, v74, v75, v76, v77, v78, v79);
      }
      v80 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                   v70,
                                                                   (System_Func_TSource__TKey__o *)_9__0_4,
                                                                   (const MethodInfo_319EF58 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
      v60 = System_Linq_Enumerable__First_object_(
              v80,
              (const MethodInfo_319601C *)Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___);
      v67 = v60;
      if ( !v60 )
        continue;
    }
    if ( !v9 )
      sub_1C7BD40(v60, v67);
    v81 = v9->fields._items;
    v82 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
    ++v9->fields._version;
    if ( !v81 )
      sub_1C7BD40(v60, v67);
    v83 = v9->fields._size;
    if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v67,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = &v81->obj.klass + v83;
      v9->fields._size = v83 + 1;
      v84[4] = (Il2CppClass *)v67;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)v67, v61, v62, v63, v64, v65, v66);
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    &v99,
    (const MethodInfo_35E265C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__);
  v85 = EventEquipSkillPartsMaster___c_TypeInfo;
  if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
    v85 = EventEquipSkillPartsMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v85->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v85->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v85);
      v85 = EventEquipSkillPartsMaster___c_TypeInfo;
    }
    v87 = (Il2CppObject *)v85->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v87,
      Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__,
      0);
    v88 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
    v88->__9__0_1 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v88->__9__0_1, (int32_t)_9__0_1, v89, v90, v91, v92, v93, v94);
  }
  v95 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_319EF58 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
  return (EventEquipSkillPartsEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v95,
                                               (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
}


bool EventEquipSkillPartsMaster__TryGetUnclearedEventEquipSkillPartsEntity(
        EventEquipSkillPartsMaster_o *this,
        EventEquipSkillPartsEntity_o **eventEquipSkillPartsEntity,
        int32_t questId,
        bool isQuestClear,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  bool result; // w0
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  bool ValidEventEquipSkillPartsEntityList; // w8
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  char v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEE60C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___);
    sub_1C7BAE8(&int___TypeInfo);
    byte_4CEE60C = 1;
  }
  eventEquipSkillPartsEntityList = 0;
  *eventEquipSkillPartsEntity = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)eventEquipSkillPartsEntity,
    0,
    questId,
    isQuestClear,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( isQuestClear )
    return 0;
  v13 = sub_1C7BB90(int___TypeInfo, 1);
  if ( !v13 )
    sub_1C7BD40(0, v14);
  if ( !*(_DWORD *)(v13 + 24) )
    sub_1C7BD48(v13);
  *(_DWORD *)(v13 + 32) = questId;
  ValidEventEquipSkillPartsEntityList = EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                                          this,
                                          &eventEquipSkillPartsEntityList,
                                          (System_Int32_array *)v13,
                                          0,
                                          v15);
  result = 0;
  if ( ValidEventEquipSkillPartsEntityList )
  {
    v17 = System_Linq_Enumerable__FirstOrDefault_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)eventEquipSkillPartsEntityList,
            (const MethodInfo_3197A00 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___);
    *eventEquipSkillPartsEntity = (EventEquipSkillPartsEntity_o *)v17;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)eventEquipSkillPartsEntity, (int32_t)v17, v18, v19, v20, v21, v22, v23);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  il2cpp_array_size_t max_length; // x8
  __int64 v33; // x24
  unsigned __int64 v34; // x25
  int32_t v35; // w2
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0

  if ( (byte_4CEE60B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    byte_4CEE60B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  *eventEquipSkillPartsEntityList = (System_Collections_Generic_List_EventEquipSkillPartsEntity__o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)eventEquipSkillPartsEntityList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_11;
      }
      v24 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v24 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8))
        & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_18;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_18:
      v28 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    if ( !questIdList )
      sub_1C7BD40(v29, v30);
    max_length = questIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v33 = v29;
      v34 = 0;
      do
      {
        if ( v34 >= (unsigned int)max_length )
          sub_1C7BD48(v29);
        if ( !v33 )
          sub_1C7BD40(v29, v30);
        if ( !Master_object )
          sub_1C7BD40(v29, v30);
        v29 = CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                *(_DWORD *)(v33 + 44),
                questIdList->m_Items[v34],
                v31);
        if ( (v29 & 1) != 0 && *(_DWORD *)(v33 + 32) == groupId )
        {
          v40 = (System_Collections_Generic_List_object__o *)*eventEquipSkillPartsEntityList;
          if ( !*eventEquipSkillPartsEntityList )
            sub_1C7BD40(0, v30);
          items = v40->fields._items;
          v42 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
          ++v40->fields._version;
          if ( !items )
            sub_1C7BD40(v40, v30);
          size = v40->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)v33,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v40->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v33;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v44 + 4), v33, v35, (int32_t)v31, v36, v37, v38, v39);
          }
        }
        LODWORD(max_length) = questIdList->max_length;
        ++v34;
      }
      while ( (__int64)v34 < (int)max_length );
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_39;
    }
    v48 = (__int64)&v45->vtable[*v47];
  }
  else
  {
LABEL_39:
    v48 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*eventEquipSkillPartsEntityList, 0);
}


void EventEquipSkillPartsMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE60E & 1) == 0 )
  {
    sub_1C7BAE8(&EventEquipSkillPartsMaster___c_TypeInfo);
    byte_4CEE60E = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(EventEquipSkillPartsMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventEquipSkillPartsMaster___c_TypeInfo->static_fields->__9 = (struct EventEquipSkillPartsMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventEquipSkillPartsMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, 0);
  return e->fields.num;
}


int32_t EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_2(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return e->fields.priority;
}


int32_t EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_4(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
  return e->fields.eventId == this->fields.eventId && e->fields.groupId == this->fields.groupId;
}


bool EventEquipSkillPartsMaster___c__DisplayClass0_0___GetEventEquipSkillPartsEntityArray_b__3(
        EventEquipSkillPartsMaster___c__DisplayClass0_0_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !e || (this = (EventEquipSkillPartsMaster___c__DisplayClass0_0_o *)this->fields.commonReleaseMaster) == 0 )
    sub_1C7BD40(this, e);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, e->fields.commonReleaseId, 0, 0, v3);
}