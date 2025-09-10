void QuestScriptMaterialOverwriteMaster___ctor(QuestScriptMaterialOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A62 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
    byte_4C27A62 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    424,
    (const MethodInfo_338A52C *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
}


QuestScriptMaterialOverwriteEntity_o *QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v31; // x0
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v33; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  CommonReleaseMaster_o *v37; // x20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C27A63 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__);
    sub_1C2D490(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_1C2D490(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__);
    sub_1C2D490(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_4C27A63 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(
              Enumerator,
              System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo,
              0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, v19);
      items = v5->fields._items;
      v24 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), v22, v20, v21);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_29:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
  {
    v31 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
      v31 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Func_object__int__o *)v31->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v31->static_fields->__9;
      _9__1_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_0,
        v33,
        Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
        0);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v35, v36);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)v5,
      (System_Func_T__int__o *)_9__1_0,
      1,
      (const MethodInfo_30BDF78 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( v5 )
    {
      v37 = (CommonReleaseMaster_o *)list;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        v5,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v42,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
        if ( !v38 )
          break;
        current = v42.fields._current;
        if ( !v42.fields._current )
          sub_1C2D6EC(v38, v39);
        if ( !v37 )
          sub_1C2D6EC(v38, v39);
        if ( CommonReleaseMaster__IsOpen(
               v37,
               *(_DWORD *)((char *)&v42.fields._current->klass + (unsigned __int64)&qword_20),
               0,
               0,
               0) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v42,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
          return (QuestScriptMaterialOverwriteEntity_o *)current;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v42,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
      return 0;
    }
LABEL_55:
    sub_1C2D6EC(list, v6);
  }
  return 0;
}


QuestScriptMaterialOverwriteEntity_o *QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v31; // x0
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v33; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  bool v37; // w0
  Il2CppObject *current; // x20
  bool v39; // w19
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C27A64 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__);
    sub_1C2D490(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_1C2D490(&Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__);
    sub_1C2D490(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_4C27A64 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(
              Enumerator,
              System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo,
              0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, v19);
      items = v5->fields._items;
      v24 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), v22, v20, v21);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_29:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0;
  v31 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    v31 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v31->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v33,
      Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__,
      0);
    static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__2_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v35, v36);
  }
  BasicHelper__StableSort_object_(
    (System_Collections_Generic_List_T__o *)v5,
    (System_Func_T__int__o *)_9__2_0,
    1,
    (const MethodInfo_30BDF78 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v5 )
LABEL_47:
    sub_1C2D6EC(list, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    v5,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v41,
          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
  current = v41.fields._current;
  v39 = v37;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v39 )
    return (QuestScriptMaterialOverwriteEntity_o *)current;
  else
    return 0;
}


void QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27A65 & 1) == 0 )
  {
    sub_1C2D490(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_4C27A65 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialOverwriteMaster___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void QuestScriptMaterialOverwriteMaster___c___ctor(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestScriptMaterialOverwriteMaster___c___GetConditionClearEntity_b__1_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t QuestScriptMaterialOverwriteMaster___c___GetUnconditionalEntity_b__2_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}