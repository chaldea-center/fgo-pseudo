void __fastcall EventEquipSkillPartsMaster___ctor(EventEquipSkillPartsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01F96 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__, method);
    byte_4B01F96 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    552,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_EventEquipSkillPartsMaster__EventEquipSkillPartsEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventEquipSkillPartsEntity_array *__fastcall EventEquipSkillPartsMaster__GetEventEquipSkillPartsEntityArray(
        EventEquipSkillPartsMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x29
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_object__o *v38; // x19
  Il2CppObject *Master_object; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v43; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Object_array *v45; // x22
  System_Collections_Generic_Dictionary_int__object__o *v46; // x21
  __int64 v47; // x2
  int max_length; // w8
  unsigned int v49; // w28
  Il2CppObject *v50; // x23
  int32_t monitor; // w24
  System_Collections_Generic_List_object__o *v52; // x25
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x8
  CGThumbnailListItem_o *v59; // x22
  int32_t currentKey; // w23
  Il2CppObject *v61; // x0
  EventEquipSkillPartsMaster___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x24
  System_Func_object__int__o *_9__0_2; // x25
  Il2CppObject *v65; // x26
  struct EventEquipSkillPartsMaster___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v69; // x0
  System_Func_object__bool__o *klass; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x24
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x1
  Il2CppObject *v78; // x0
  EventEquipSkillPartsMaster___c_c *v79; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x23
  System_Func_object__int__o *_9__0_4; // x24
  Il2CppObject *v82; // x25
  struct EventEquipSkillPartsMaster___c_StaticFields *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  EventEquipSkillPartsMaster___c_c *v91; // x0
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v93; // x21
  struct EventEquipSkillPartsMaster___c_StaticFields *v94; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v100; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v101; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B01F93 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__, v11);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____76851064, v13);
    sub_1BC3008(&Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___, v14);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___, v15);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___, v16);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___, v17);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___, v18);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__,
      v19);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__,
      v20);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___get_Current__,
      v21);
    sub_1BC3008(&System_Func_EventEquipSkillPartsEntity__bool__TypeInfo, v22);
    sub_1BC3008(&System_Func_EventEquipSkillPartsEntity__int__TypeInfo, v23);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__,
      v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__, v25);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__, v26);
    sub_1BC3008(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo, v27);
    sub_1BC3008(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__, v28);
    sub_1BC3008(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__, v29);
    sub_1BC3008(&Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__, v30);
    sub_1BC3008(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__, v31);
    sub_1BC3008(&Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__, v32);
    sub_1BC3008(&EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo, v33);
    sub_1BC3008(&EventEquipSkillPartsMaster___c_TypeInfo, v34);
    byte_4B01F93 = 1;
  }
  memset(&v101, 0, sizeof(v101));
  v35 = sub_1BC3254(EventEquipSkillPartsMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_52;
  *(_DWORD *)(v35 + 16) = eventId;
  *(_DWORD *)(v35 + 20) = groupId;
  v38 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  *(_QWORD *)(v35 + 24) = Master_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 24), (int32_t)Master_object, v40, v41);
  list = this->fields.list;
  v43 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v43,
    (Il2CppObject *)v35,
    Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__0__,
    0LL);
  v44 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v43,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_EventEquipSkillPartsEntity___);
  v45 = System_Linq_Enumerable__ToArray_object_(
          v44,
          (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
  v46 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v46,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity____ctor__);
  if ( !v45 )
    goto LABEL_52;
  max_length = v45->max_length;
  if ( max_length >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      if ( v49 >= max_length )
        sub_1BC326C(Item, v37, v47);
      v50 = v45->m_Items[v49];
      if ( !v50 || !v46 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v46,
              (int32_t)v50[1].monitor,
              (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___ContainsKey__) )
      {
        monitor = (int32_t)v50[1].monitor;
        v52 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v52,
          (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
        System_Collections_Generic_Dictionary_int__object___Add(
          v46,
          monitor,
          (Il2CppObject *)v52,
          (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___Add__);
      }
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                            v46,
                                                            (int32_t)v50[1].monitor,
                                                            (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      if ( !Item )
        break;
      items = Item->fields._items;
      v56 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
      ++Item->fields._version;
      if ( !items )
        break;
      size = Item->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Item,
          v50,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        Item->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v50;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v50, v53, v54);
      }
      max_length = v45->max_length;
      if ( (int)++v49 >= max_length )
        goto LABEL_20;
    }
LABEL_52:
    sub_1BC3264(Item, v37);
  }
LABEL_20:
  if ( !v46 )
    goto LABEL_52;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                                        v46,
                                                        (const MethodInfo_3308214 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Keys__);
  if ( !Item )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
    &v100,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Item,
    (const MethodInfo_35C1818 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__List_EventEquipSkillPartsEntity___GetEnumerator__);
  v101 = v100;
  v59 = (CGThumbnailListItem_o *)(v35 + 32);
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
            &v101,
            (const MethodInfo_345AA50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___MoveNext__) )
  {
    currentKey = (int32_t)v101.fields._currentKey;
    v61 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v46,
            (int32_t)v101.fields._currentKey,
            (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
    v62 = EventEquipSkillPartsMaster___c_TypeInfo;
    v63 = (System_Collections_Generic_IEnumerable_TSource__o *)v61;
    if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
      v62 = EventEquipSkillPartsMaster___c_TypeInfo;
    }
    _9__0_2 = (System_Func_object__int__o *)v62->static_fields->__9__0_2;
    if ( !_9__0_2 )
    {
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        v62 = EventEquipSkillPartsMaster___c_TypeInfo;
      }
      v65 = (Il2CppObject *)v62->static_fields->__9;
      _9__0_2 = (System_Func_object__int__o *)sub_1BC3254(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__0_2,
        v65,
        Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_2__,
        0LL);
      static_fields = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_2 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_2;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__0_2, (int32_t)_9__0_2, v67, v68);
    }
    v69 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v63,
            (System_Func_TSource__TKey__o *)_9__0_2,
            (const MethodInfo_302DA1C *)Method_System_Linq_Enumerable_OrderByDescending_EventEquipSkillPartsEntity__int___);
    klass = (System_Func_object__bool__o *)v59->klass;
    v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v69;
    if ( !v59->klass )
    {
      klass = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventEquipSkillPartsEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        klass,
        (Il2CppObject *)v35,
        Method_EventEquipSkillPartsMaster___c__DisplayClass0_0__GetEventEquipSkillPartsEntityArray_b__3__,
        0LL);
      v59->klass = (CGThumbnailListItem_c *)klass;
      sub_1BC2FAC(v59, (int32_t)klass, v72, v73);
    }
    v74 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
            v71,
            (System_Func_TSource__bool__o *)klass,
            (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity____76851064);
    v77 = v74;
    if ( !v74 )
    {
      v78 = System_Collections_Generic_Dictionary_int__object___get_Item(
              v46,
              currentKey,
              (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__List_EventEquipSkillPartsEntity___get_Item__);
      v79 = EventEquipSkillPartsMaster___c_TypeInfo;
      v80 = (System_Collections_Generic_IEnumerable_TSource__o *)v78;
      if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
        v79 = EventEquipSkillPartsMaster___c_TypeInfo;
      }
      _9__0_4 = (System_Func_object__int__o *)v79->static_fields->__9__0_4;
      if ( !_9__0_4 )
      {
        if ( !v79->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v79);
          v79 = EventEquipSkillPartsMaster___c_TypeInfo;
        }
        v82 = (Il2CppObject *)v79->static_fields->__9;
        _9__0_4 = (System_Func_object__int__o *)sub_1BC3254(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__0_4,
          v82,
          Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_4__,
          0LL);
        v83 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
        v83->__9__0_4 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_4;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v83->__9__0_4, (int32_t)_9__0_4, v84, v85);
      }
      v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                   v80,
                                                                   (System_Func_TSource__TKey__o *)_9__0_4,
                                                                   (const MethodInfo_302D508 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
      v74 = System_Linq_Enumerable__First_object_(
              v86,
              (const MethodInfo_3024764 *)Method_System_Linq_Enumerable_First_EventEquipSkillPartsEntity___);
      v77 = v74;
      if ( !v74 )
        continue;
    }
    if ( !v38 )
      sub_1BC3264(v74, v77);
    v87 = v38->fields._items;
    v88 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
    ++v38->fields._version;
    if ( !v87 )
      sub_1BC3264(v74, v77);
    v89 = v38->fields._size;
    if ( (unsigned int)v89 >= v87->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v38,
        v77,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v90 = &v87->obj.klass + v89;
      v38->fields._size = v89 + 1;
      v90[4] = (Il2CppClass *)v77;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v90 + 4), (int32_t)v77, v75, v76);
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
    &v101,
    (const MethodInfo_345AA4C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__List_EventEquipSkillPartsEntity___Dispose__);
  v91 = EventEquipSkillPartsMaster___c_TypeInfo;
  if ( !EventEquipSkillPartsMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventEquipSkillPartsMaster___c_TypeInfo);
    v91 = EventEquipSkillPartsMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v91->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v91->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v91);
      v91 = EventEquipSkillPartsMaster___c_TypeInfo;
    }
    v93 = (Il2CppObject *)v91->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_EventEquipSkillPartsEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v93,
      Method_EventEquipSkillPartsMaster___c__GetEventEquipSkillPartsEntityArray_b__0_1__,
      0LL);
    v94 = EventEquipSkillPartsMaster___c_TypeInfo->static_fields;
    v94->__9__0_1 = (struct System_Func_EventEquipSkillPartsEntity__int__o *)_9__0_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v94->__9__0_1, (int32_t)_9__0_1, v95, v96);
  }
  v97 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_302D508 *)Method_System_Linq_Enumerable_OrderBy_EventEquipSkillPartsEntity__int___);
  return (EventEquipSkillPartsEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                               v97,
                                               (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_EventEquipSkillPartsEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventEquipSkillPartsMaster__TryGetUnclearedEventEquipSkillPartsEntity(
        EventEquipSkillPartsMaster_o *this,
        EventEquipSkillPartsEntity_o **eventEquipSkillPartsEntity,
        int32_t questId,
        bool isQuestClear,
        const MethodInfo *method)
{
  __int64 v9; // x1
  bool result; // w0
  System_Int32_array *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  bool ValidEventEquipSkillPartsEntityList; // w8
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01F95 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___, eventEquipSkillPartsEntity);
    sub_1BC3008(&int___TypeInfo, v9);
    byte_4B01F95 = 1;
  }
  eventEquipSkillPartsEntityList = 0LL;
  *eventEquipSkillPartsEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)eventEquipSkillPartsEntity, 0, questId, (const MethodInfo *)isQuestClear);
  if ( isQuestClear )
    return 0;
  v11 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 1LL);
  if ( !v11 )
    sub_1BC3264(0LL, v12);
  if ( !v11->max_length )
    sub_1BC326C(v11, v12, v11);
  v11->m_Items[1] = questId;
  ValidEventEquipSkillPartsEntityList = EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                                          this,
                                          &eventEquipSkillPartsEntityList,
                                          v11,
                                          0,
                                          v13);
  result = 0;
  if ( ValidEventEquipSkillPartsEntityList )
  {
    v15 = System_Linq_Enumerable__FirstOrDefault_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)eventEquipSkillPartsEntityList,
            (const MethodInfo_3026590 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEquipSkillPartsEntity___);
    *eventEquipSkillPartsEntity = (EventEquipSkillPartsEntity_o *)v15;
    sub_1BC2FAC((CGThumbnailListItem_o *)eventEquipSkillPartsEntity, (int32_t)v15, v16, v17);
    return *eventEquipSkillPartsEntity != 0LL;
  }
  return result;
}


bool __fastcall EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
        EventEquipSkillPartsMaster_o *this,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o **eventEquipSkillPartsEntityList,
        System_Int32_array *questIdList,
        int32_t groupId,
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
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x8
  __int64 v37; // x24
  unsigned __int64 v38; // x25
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0

  if ( (byte_4B01F94 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__,
      eventEquipSkillPartsEntityList);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&System_IDisposable_TypeInfo, v11);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo, v12);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__, v15);
    sub_1BC3008(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo, v16);
    byte_4B01F94 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  *eventEquipSkillPartsEntityList = (System_Collections_Generic_List_EventEquipSkillPartsEntity__o *)v18;
  sub_1BC2FAC((CGThumbnailListItem_o *)eventEquipSkillPartsEntityList, (int32_t)v18, v19, v20);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_EventEquipSkillPartsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_18;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_18:
      v32 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_EventEquipSkillPartsEntity__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    if ( !questIdList )
      sub_1BC3264(v33, v34);
    v36 = *(_QWORD *)&questIdList->max_length;
    if ( (int)v36 >= 1 )
    {
      v37 = v33;
      v38 = 0LL;
      do
      {
        if ( v38 >= (unsigned int)v36 )
          sub_1BC326C(v33, v34, v35);
        if ( !v37 )
          sub_1BC3264(v33, v34);
        if ( !Master_object )
          sub_1BC3264(v33, v34);
        v33 = CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                *(_DWORD *)(v37 + 44),
                questIdList->m_Items[v38 + 1],
                0LL);
        if ( (v33 & 1) != 0 && *(_DWORD *)(v37 + 32) == groupId )
        {
          v40 = (System_Collections_Generic_List_object__o *)*eventEquipSkillPartsEntityList;
          if ( !*eventEquipSkillPartsEntityList )
            sub_1BC3264(0LL, v34);
          items = v40->fields._items;
          v42 = Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__Add__;
          ++v40->fields._version;
          if ( !items )
            sub_1BC3264(v40, v34);
          size = v40->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)v37,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v40->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v37;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v44 + 4), v37, v35, v39);
          }
        }
        LODWORD(v36) = questIdList->max_length;
        ++v38;
      }
      while ( (__int64)v38 < (int)v36 );
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_39;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_39:
    v48 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*eventEquipSkillPartsEntityList, 0LL);
}


void __fastcall EventEquipSkillPartsMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B01F97 & 1) == 0 )
  {
    sub_1BC3008(&EventEquipSkillPartsMaster___c_TypeInfo, v1);
    byte_4B01F97 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventEquipSkillPartsMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventEquipSkillPartsMaster___c_TypeInfo->static_fields->__9 = (struct EventEquipSkillPartsMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventEquipSkillPartsMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventEquipSkillPartsMaster___c___ctor(EventEquipSkillPartsMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_1(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BC3264(this, 0LL);
  return e->fields.num;
}


int32_t __fastcall EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_2(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BC3264(this, 0LL);
  return e->fields.priority;
}


int32_t __fastcall EventEquipSkillPartsMaster___c___GetEventEquipSkillPartsEntityArray_b__0_4(
        EventEquipSkillPartsMaster___c_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BC3264(this, 0LL);
  return e->fields.priority;
}


void __fastcall EventEquipSkillPartsMaster___c__DisplayClass0_0___ctor(
        EventEquipSkillPartsMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventEquipSkillPartsMaster___c__DisplayClass0_0___GetEventEquipSkillPartsEntityArray_b__0(
        EventEquipSkillPartsMaster___c__DisplayClass0_0_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BC3264(this, 0LL);
  return e->fields.eventId == this->fields.eventId && e->fields.groupId == this->fields.groupId;
}


bool __fastcall EventEquipSkillPartsMaster___c__DisplayClass0_0___GetEventEquipSkillPartsEntityArray_b__3(
        EventEquipSkillPartsMaster___c__DisplayClass0_0_o *this,
        EventEquipSkillPartsEntity_o *e,
        const MethodInfo *method)
{
  if ( !e || (this = (EventEquipSkillPartsMaster___c__DisplayClass0_0_o *)this->fields.commonReleaseMaster) == 0LL )
    sub_1BC3264(this, e);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, e->fields.commonReleaseId, 0LL, 0, 0LL);
}