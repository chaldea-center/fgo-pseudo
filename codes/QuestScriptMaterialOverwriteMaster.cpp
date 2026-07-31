void QuestScriptMaterialOverwriteMaster___ctor(QuestScriptMaterialOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938E9F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
    byte_5938E9F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    426,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
}


QuestScriptMaterialOverwriteEntity_o *QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x1
  QuestScriptMaterialOverwriteMaster___c_c *v36; // x0
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v39; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  CommonReleaseMaster_o *v48; // x20
  _BOOL8 v49; // x0
  __int64 v50; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v54; // [xsp+38h] [xbp-38h]

  if ( (byte_5938EA0 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__);
    sub_21FFC50(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_21FFC50(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__);
    sub_21FFC50(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_5938EA0 = 1;
  }
  v54 = 0;
  memset(&v53, 0, sizeof(v53));
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_62;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  v54 = Enumerator;
  if ( !Enumerator )
LABEL_28:
    sub_21FFECC(Enumerator, v9);
  v10 = Enumerator;
  while ( 1 )
  {
    klass = v10->klass;
    v12 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            v10,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v54 )
      sub_21FFECC(v15, v16);
    v17 = v54->klass;
    v18 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v54, System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v54,
                                                                  *(_QWORD *)(v20 + 8));
    v9 = Enumerator;
    if ( !Enumerator )
      sub_21FFECC(0, 0);
    if ( LODWORD(Enumerator[1].klass) == questId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v28 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_21FFECC(Enumerator, Enumerator);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Enumerator,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v9;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v9, v21, v22, v23, v24, v25, v26);
      }
    }
    v10 = v54;
    if ( !v54 )
      goto LABEL_28;
  }
  if ( v54 )
  {
    v31 = v54->klass;
    v32 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_34;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_34:
      v34 = sub_2237E2C(v54, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(v54, *(_QWORD *)(v34 + 8));
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0;
  v36 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( !*(&QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo, v35);
    v36 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__1_0 = (System_Func_object__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v36->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v36, v35);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__1_0,
      v39,
      Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
      0);
    v40 = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    v40->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->__9__1_0, (int32_t)_9__1_0, v41, v42, v43, v44, v45, v46);
  }
  BasicHelper__StableSort_object_(
    (System_Collections_Generic_List_T__o *)v5,
    (System_Func_T__int__o *)_9__1_0,
    1,
    (const MethodInfo_37E2B38 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v5 )
LABEL_62:
    sub_21FFECC(list, v6);
  v48 = (CommonReleaseMaster_o *)list;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    v5,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    if ( !v49 )
      break;
    current = v53.fields._current;
    if ( !v53.fields._current )
      sub_21FFECC(v49, v50);
    if ( !v48 )
      sub_21FFECC(v49, v50);
    if ( CommonReleaseMaster__IsOpen(
           v48,
           *(_DWORD *)((char *)&v53.fields._current->klass + (unsigned __int64)&qword_20),
           0,
           0,
           0) )
    {
      goto LABEL_55;
    }
  }
  current = 0;
LABEL_55:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  return (QuestScriptMaterialOverwriteEntity_o *)current;
}


QuestScriptMaterialOverwriteEntity_o *QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x1
  QuestScriptMaterialOverwriteMaster___c_c *v36; // x0
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v39; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v51; // [xsp+38h] [xbp-38h]

  if ( (byte_5938EA1 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__);
    sub_21FFC50(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_21FFC50(&Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__);
    sub_21FFC50(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_5938EA1 = 1;
  }
  v51 = 0;
  memset(&v50, 0, sizeof(v50));
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_56;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  v51 = Enumerator;
  if ( !Enumerator )
LABEL_28:
    sub_21FFECC(Enumerator, v9);
  v10 = Enumerator;
  while ( 1 )
  {
    klass = v10->klass;
    v12 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            v10,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v51 )
      sub_21FFECC(v15, v16);
    v17 = v51->klass;
    v18 = *(unsigned __int16 *)&v51->klass->_2.rank;
    if ( *(_WORD *)&v51->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v51, System_Collections_Generic_IEnumerator_QuestScriptMaterialOverwriteEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v51,
                                                                  *(_QWORD *)(v20 + 8));
    v9 = Enumerator;
    if ( !Enumerator )
      sub_21FFECC(0, 0);
    if ( LODWORD(Enumerator[1].klass) == questId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v28 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_21FFECC(Enumerator, Enumerator);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Enumerator,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v9;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v9, v21, v22, v23, v24, v25, v26);
      }
    }
    v10 = v51;
    if ( !v51 )
      goto LABEL_28;
  }
  if ( v51 )
  {
    v31 = v51->klass;
    v32 = *(unsigned __int16 *)&v51->klass->_2.rank;
    if ( *(_WORD *)&v51->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_34;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_34:
      v34 = sub_2237E2C(v51, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(v51, *(_QWORD *)(v34 + 8));
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0;
  v36 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( !*(&QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo, v35);
    v36 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__2_0 = (System_Func_object__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v36->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v36, v35);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v39,
      Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__,
      0);
    v40 = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    v40->__9__2_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__2_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->__9__2_0, (int32_t)_9__2_0, v41, v42, v43, v44, v45, v46);
  }
  BasicHelper__StableSort_object_(
    (System_Collections_Generic_List_T__o *)v5,
    (System_Func_T__int__o *)_9__2_0,
    1,
    (const MethodInfo_37E2B38 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v5 )
LABEL_56:
    sub_21FFECC(list, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    v5,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  if ( System_Collections_Generic_List_Enumerator_object___MoveNext(
         &v50,
         (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__) )
  {
    current = v50.fields._current;
  }
  else
  {
    current = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  return (QuestScriptMaterialOverwriteEntity_o *)current;
}


void QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938EA2 & 1) == 0 )
  {
    sub_21FFC50(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_5938EA2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialOverwriteMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
  return x->fields.priority;
}


int32_t QuestScriptMaterialOverwriteMaster___c___GetUnconditionalEntity_b__2_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.priority;
}