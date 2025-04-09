void __fastcall QuestScriptMaterialOverwriteMaster___ctor(
        QuestScriptMaterialOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB4B3 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__,
      method);
    byte_49BB4B3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    424,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptMaterialOverwriteEntity_o *__fastcall QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  System_Collections_Generic_List_object__o *v22; // x19
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  struct System_Object_array *items; // x9
  _QWORD *v41; // x10
  __int64 size; // x11
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v48; // x0
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v50; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  CommonReleaseMaster_o *v54; // x20
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49BB4B4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, *(_QWORD *)&questId);
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__,
      v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__, v10);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v11);
    sub_1B4CF90(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v12);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v13);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo, v14);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v18);
    sub_1B4CF90(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v19);
    sub_1B4CF90(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__, v20);
    sub_1B4CF90(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v21);
    byte_49BB4B4 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v22 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1B9D724(
              Enumerator,
              System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo,
              0LL);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    v39 = v35;
    if ( !v35 )
      sub_1B4D1EC(0LL, v36);
    if ( *(_DWORD *)(v35 + 16) == questId )
    {
      if ( !v22 )
        sub_1B4D1EC(v35, v36);
      items = v22->fields._items;
      v41 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1B4D1EC(v35, v36);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v35,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v39;
        sub_1B4CF34((CGThumbnailListItem_o *)(v43 + 4), v39, v37, v38);
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_29;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_29:
    v47 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v22,
         (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
  {
    v48 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
      v48 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Func_object__int__o *)v48->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v48->static_fields->__9;
      _9__1_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_0,
        v50,
        Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
        0LL);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v52, v53);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)v22,
      (System_Func_T__int__o *)_9__1_0,
      1,
      (const MethodInfo_2EF1484 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( v22 )
    {
      v54 = (CommonReleaseMaster_o *)list;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v59,
        v22,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
      while ( 1 )
      {
        v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v59,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
        if ( !v55 )
          break;
        current = v59.fields._current;
        if ( !v59.fields._current )
          sub_1B4D1EC(v55, v56);
        if ( !v54 )
          sub_1B4D1EC(v55, v56);
        if ( CommonReleaseMaster__IsOpen(v54, (int32_t)v59.fields._current[2].klass, 0LL, 0, 0LL) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v59,
            (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
          return (QuestScriptMaterialOverwriteEntity_o *)current;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v59,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
      return 0LL;
    }
LABEL_55:
    sub_1B4D1EC(list, v23);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
QuestScriptMaterialOverwriteEntity_o *__fastcall QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  System_Collections_Generic_List_object__o *v22; // x19
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  struct System_Object_array *items; // x9
  _QWORD *v41; // x10
  __int64 size; // x11
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v48; // x0
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v50; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  bool v54; // w0
  Il2CppObject *current; // x20
  bool v56; // w19
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49BB4B5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, *(_QWORD *)&questId);
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__,
      v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__, v10);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v11);
    sub_1B4CF90(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v12);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v13);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo, v14);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v18);
    sub_1B4CF90(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v19);
    sub_1B4CF90(&Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__, v20);
    sub_1B4CF90(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v21);
    byte_49BB4B5 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v22 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1B9D724(
              Enumerator,
              System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo,
              0LL);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    v39 = v35;
    if ( !v35 )
      sub_1B4D1EC(0LL, v36);
    if ( *(_DWORD *)(v35 + 16) == questId )
    {
      if ( !v22 )
        sub_1B4D1EC(v35, v36);
      items = v22->fields._items;
      v41 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1B4D1EC(v35, v36);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v35,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v39;
        sub_1B4CF34((CGThumbnailListItem_o *)(v43 + 4), v39, v37, v38);
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_29;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_29:
    v47 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0LL;
  v48 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    v48 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v48->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v50,
      Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__,
      0LL);
    static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__2_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v52, v53);
  }
  BasicHelper__StableSort_object_(
    (System_Collections_Generic_List_T__o *)v22,
    (System_Func_T__int__o *)_9__2_0,
    1,
    (const MethodInfo_2EF1484 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v22 )
LABEL_47:
    sub_1B4D1EC(list, v23);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v22,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v58,
          (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
  current = v58.fields._current;
  v56 = v54;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v56 )
    return (QuestScriptMaterialOverwriteEntity_o *)current;
  else
    return 0LL;
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB4B6 & 1) == 0 )
  {
    sub_1B4CF90(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v1);
    byte_49BB4B6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialOverwriteMaster___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___ctor(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestScriptMaterialOverwriteMaster___c___GetConditionClearEntity_b__1_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestScriptMaterialOverwriteMaster___c___GetUnconditionalEntity_b__2_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.priority;
}