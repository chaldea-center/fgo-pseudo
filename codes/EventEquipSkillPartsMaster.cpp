void EventEquipSkillPartsMaster___ctor(EventEquipSkillPartsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938605 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__);
    byte_5938605 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    554,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__);
}


EventEquipSkillPartsEntity_array *EventEquipSkillPartsMaster__GetEventEquipSkillPartsEntityArray(
        EventEquipSkillPartsMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_EventEquipSkillPartsEntity__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x22
  System_Collections_Generic_Dictionary_int__object__o *v22; // x21
  int max_length; // w8
  unsigned int v24; // w29
  Il2CppObject *v25; // x23
  int32_t monitor; // w24
  System_Collections_Generic_List_object__o *v27; // x25
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  int32_t currentKey; // w22
  __int64 v39; // x1
  Il2CppObject *v40; // x23
  EventEquipSkillPartsMaster___c_c *v41; // x0
  struct EventEquipSkillPartsMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__0_2; // x24
  Il2CppObject *v44; // x25
  struct EventEquipSkillPartsMaster___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x0
  System_Func_object__bool__o *v53; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x23
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  Il2CppObject *object; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  Il2CppObject *v68; // x1
  __int64 v69; // x1
  Il2CppObject *v70; // x22
  EventEquipSkillPartsMaster___c_c *v71; // x0
  struct EventEquipSkillPartsMaster___c_StaticFields *v72; // x8
  System_Func_object__int__o *_9__0_4; // x23
  Il2CppObject *v74; // x24
  struct EventEquipSkillPartsMaster___c_StaticFields *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  __int64 v87; // x1
  EventEquipSkillPartsMaster___c_c *v88; // x0
  struct EventEquipSkillPartsMaster___c_StaticFields *v89; // x8
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v91; // x21
  struct EventEquipSkillPartsMaster___c_StaticFields *v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v103; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v104; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_5938602 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____91526072);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___get_Current__);
    sub_21FFC50(&System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    sub_21FFC50(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__);
    sub_21FFC50(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__);
    sub_21FFC50(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__);
    sub_21FFC50(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__);
    sub_21FFC50(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__);
    sub_21FFC50(&EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&EventEquipSkillPartsMaster___c_TypeInfo);
    byte_5938602 = 1;
  }
  memset(&v104, 0, sizeof(v104));
  v5 = sub_21FFEBC(EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_52;
  v8 = System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo;
  *(_DWORD *)(v5 + 16) = eventId;
  *(_DWORD *)(v5 + 20) = groupId;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  *(_QWORD *)(v5 + 24) = Master_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Master_object, v12, v13, v14, v15, v16, v17);
  list = this->fields.list;
  v19 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__,
    0);
  v20 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__);
  if ( !v21 )
    goto LABEL_52;
  max_length = v21->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
        sub_21FFED4(Item);
      v25 = v21->m_Items[v24];
      if ( !v25 || !v22 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v22,
              (int32_t)v25[1].monitor,
              (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__) )
      {
        monitor = (int32_t)v25[1].monitor;
        v27 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v27,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___Add(
          v22,
          monitor,
          (Il2CppObject *)v27,
          (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v22,
                                                            (int32_t)v25[1].monitor,
                                                            (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v35 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          v25,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v25;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)v25, v28, v29, v30, v31, v32, v33);
      }
      max_length = v21->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_20;
    }
LABEL_52:
    sub_21FFECC(Item, v7);
  }
LABEL_20:
  if ( !v22 )
    goto LABEL_52;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                                        v22,
                                                        (const MethodInfo_3F689B0 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__);
  if ( !Item )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    &v103,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Item,
    (const MethodInfo_4349BA4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__);
  v104 = v103;
  v103.fields._dictionary = 0;
  *(_QWORD *)&v103.fields._index = &v104;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            &v104,
            (const MethodInfo_41254C0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__) )
  {
    currentKey = (int32_t)v104.fields._currentKey;
    v40 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v22,
            (int32_t)v104.fields._currentKey,
            (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
    v41 = EventEquipSkillPartsMaster___c_TypeInfo;
    if ( !*(&EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo, v39);
      v41 = EventEquipSkillPartsMaster___c_TypeInfo;
    }
    static_fields = v41->static_fields;
    _9__0_2 = (System_Func_object__int__o *)static_fields->__9__0_2;
    if ( !_9__0_2 )
    {
      if ( !*(&v41->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v41, v39);
        static_fields = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__0_2 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__0_2,
        v44,
        Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__,
        0);
      v45 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
      v45->__9__0_2 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_2;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->__9__0_2, (int32_t)_9__0_2, v46, v47, v48, v49, v50, v51);
    }
    v52 = System_Linq_Enumerable__OrderByDescending_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
            (System_Func_TSource__TKey__o *)_9__0_2,
            (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___);
    v53 = *(System_Func_object__bool__o **)(v5 + 32);
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v52;
    if ( !v53 )
    {
      v53 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v53,
        (Il2CppObject *)v5,
        Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__,
        0);
      *(_QWORD *)(v5 + 32) = v53;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v53, v55, v56, v57, v58, v59, v60);
    }
    object = System_Linq_Enumerable__FirstOrDefault_object__59044732(
               v54,
               (System_Func_TSource__bool__o *)v53,
               (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____91526072);
    v68 = object;
    if ( !object )
    {
      v70 = System_Collections_Generic_Dictionary_int__object___get_Item(
              v22,
              currentKey,
              (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      v71 = EventEquipSkillPartsMaster___c_TypeInfo;
      if ( !*(&EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo, v69);
        v71 = EventEquipSkillPartsMaster___c_TypeInfo;
      }
      v72 = v71->static_fields;
      _9__0_4 = (System_Func_object__int__o *)v72->__9__0_4;
      if ( !_9__0_4 )
      {
        if ( !*(&v71->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v71, v69);
          v72 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
        }
        v74 = (Il2CppObject *)v72->__9;
        _9__0_4 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__0_4,
          v74,
          Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__,
          0);
        v75 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
        v75->__9__0_4 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_4;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v75->__9__0_4, (int32_t)_9__0_4, v76, v77, v78, v79, v80, v81);
      }
      v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v70,
                                                                   (System_Func_TSource__TKey__o *)_9__0_4,
                                                                   (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
      object = System_Linq_Enumerable__First_object_(
                 v82,
                 (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___);
      v68 = object;
      if ( !object )
        continue;
    }
    if ( !v9
      || (v83 = v9->fields._items,
          v84 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__,
          ++v9->fields._version,
          !v83) )
    {
      sub_21FFECC(object, v68);
    }
    v85 = v9->fields._size;
    if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v68,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = &v83->obj.klass + v85;
      v9->fields._size = v85 + 1;
      v86[4] = (Il2CppClass *)v68;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v86 + 4), (int32_t)v68, v62, v63, v64, v65, v66, v67);
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    &v104,
    (const MethodInfo_41254BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__);
  v88 = EventEquipSkillPartsMaster___c_TypeInfo;
  if ( !*(&EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo, v87);
    v88 = EventEquipSkillPartsMaster___c_TypeInfo;
  }
  v89 = v88->static_fields;
  _9__0_1 = (System_Func_object__int__o *)v89->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !*(&v88->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v88, v87);
      v89 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
    }
    v91 = (Il2CppObject *)v89->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v91,
      Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__,
      0);
    v92 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
    v92->__9__0_1 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v92->__9__0_1, (int32_t)_9__0_1, v93, v94, v95, v96, v97, v98);
  }
  v99 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
  return (EventEquipSkillPartsEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v99,
                                               (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool EventEquipSkillPartsMaster__TryGetUnclearedEventEquipSkillPartsEntity(
        EventEquipSkillPartsMaster_o *this,
        EventEquipSkillPartsEntity_o **eventEquipSkillPartsEntity,
        int32_t questId,
        bool isQuestClear,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  bool result; // w0
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  bool ValidEventEquipSkillPartsEntityList; // w8
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938604 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___);
    sub_21FFC50(&int___TypeInfo);
    byte_5938604 = 1;
  }
  eventEquipSkillPartsEntityList = 0;
  *eventEquipSkillPartsEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)eventEquipSkillPartsEntity,
    0,
    *(System_String_o **)&questId,
    (System_String_o *)isQuestClear,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( isQuestClear )
    return 0;
  v13 = sub_21FFD10(int___TypeInfo, 1);
  if ( !v13 )
    sub_21FFECC(0, v14);
  if ( !*(_DWORD *)(v13 + 24) )
    sub_21FFED4(v13);
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
            (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___);
    *eventEquipSkillPartsEntity = (EventEquipSkillPartsEntity_o *)v17;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)eventEquipSkillPartsEntity,
      (int32_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
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
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v10; // x24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  MethodInfo *v34; // x3
  il2cpp_array_size_t max_length; // x8
  __int64 v36; // x23
  unsigned __int64 v37; // x28
  System_String_o *v38; // x2
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_List_object__o *v43; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  System_Collections_Generic_IEnumerator_T__o *v53; // [xsp+18h] [xbp-58h]

  if ( (byte_5938603 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    byte_5938603 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventEquipSkillPartsEntityList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  *eventEquipSkillPartsEntityList = (System_Collections_Generic_List_EventEquipSkillPartsEntity__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)eventEquipSkillPartsEntityList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__);
  v53 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v20);
  for ( i = Enumerator; ; i = v53 )
  {
    klass = i->klass;
    v23 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_12;
      }
      v25 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v25 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            i,
            *(_QWORD *)(v25 + 8));
    if ( (v26 & 1) == 0 )
      break;
    if ( !v53 )
      sub_21FFECC(v26, v27);
    v28 = v53->klass;
    v29 = *(unsigned __int16 *)&v53->klass->_2.rank;
    if ( *(_WORD *)&v53->klass->_2.rank )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__c **)v30 - 1) != System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_20;
      }
      v31 = (__int64)&v28->vtable[*v30];
    }
    else
    {
LABEL_20:
      v31 = sub_2237E2C(v53, System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo, 0);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            v53,
            *(_QWORD *)(v31 + 8));
    if ( !questIdList )
      sub_21FFECC(v32, v33);
    max_length = questIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v36 = v32;
      v37 = 0;
      do
      {
        if ( v37 >= (unsigned int)max_length )
          sub_21FFED4(v32);
        if ( !v36 )
          sub_21FFECC(v32, v33);
        if ( !Master_object )
          sub_21FFECC(v32, v33);
        v32 = CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                *(_DWORD *)(v36 + 44),
                questIdList->m_Items[v37],
                v34);
        if ( (v32 & 1) != 0 && *(_DWORD *)(v36 + 32) == groupId )
        {
          v43 = (System_Collections_Generic_List_object__o *)*eventEquipSkillPartsEntityList;
          if ( !*eventEquipSkillPartsEntityList
            || (items = v43->fields._items,
                v45 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__,
                ++v43->fields._version,
                !items) )
          {
            sub_21FFECC(v43, v33);
          }
          size = v43->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v43,
              (Il2CppObject *)v36,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v43->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v36;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v47 + 4),
              v36,
              v38,
              (System_String_o *)v34,
              v39,
              v40,
              v41,
              v42);
          }
        }
        LODWORD(max_length) = questIdList->max_length;
        ++v37;
      }
      while ( (__int64)v37 < (int)max_length );
    }
  }
  if ( v53 )
  {
    v48 = v53->klass;
    v49 = *(unsigned __int16 *)&v53->klass->_2.rank;
    if ( *(_WORD *)&v53->klass->_2.rank )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_43;
      }
      v51 = (__int64)&v48->vtable[*v50];
    }
    else
    {
LABEL_43:
      v51 = sub_2237E2C(v53, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(v53, *(_QWORD *)(v51 + 8));
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*eventEquipSkillPartsEntityList, 0);
}


void EventEquipSkillPartsMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938606 & 1) == 0 )
  {
    sub_21FFC50(&EventEquipSkillPartsMaster___c_TypeInfo);
    byte_5938606 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventEquipSkillPartsMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventEquipSkillPartsMaster___c_TypeInfo->static_fields->__9 = (struct EventEquipSkillPartsMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventEquipSkillPartsMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return e->fields.num;
}


int32_t EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_2(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields.priority;
}


int32_t EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_4(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return e->fields.eventId == this->fields.eventId && e->fields.groupId == this->fields.groupId;
}


bool EventEquipSkillPartsMaster___c__DisplayClass0_0___GetEventEquipSkillPartsEntityArray_b__3(
        EventEquipSkillPartsMaster___c__DisplayClass0_0_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !e || (this = (EventEquipSkillPartsMaster___c__DisplayClass0_0_o *)this->fields.commonReleaseMaster) == 0 )
    sub_21FFECC(this, e);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, e->fields.commonReleaseId, 0, 0, v3);
}