void __fastcall QuestScriptMaterialOverwriteMaster___ctor(
        QuestScriptMaterialOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB631F & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__,
      method);
    byte_4AB631F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    418,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
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
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x19
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x8
  QuestScriptMaterialOverwriteEntity_c *v41; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v44; // x10
  __int64 size; // x11
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v51; // x0
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v53; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  CommonReleaseMaster_o *v57; // x20
  _BOOL8 v58; // x0
  __int64 v59; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AB6320 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, *(_QWORD *)&questId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1BAB41C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__, v10);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v11);
    sub_1BAB41C(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v12);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v13);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v18);
    sub_1BAB41C(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v19);
    sub_1BAB41C(&QuestScriptMaterialOverwriteEntity_TypeInfo, v20);
    sub_1BAB41C(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__, v21);
    sub_1BAB41C(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v22);
    byte_4AB6320 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v40 = v36;
    if ( !v36 )
      goto LABEL_53;
    v41 = QuestScriptMaterialOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      sub_1BAB938(v36);
LABEL_53:
      sub_1BAB678(v36, v37);
    }
    if ( *(_DWORD *)(v36 + 16) == questId )
    {
      if ( !v23 )
        sub_1BAB678(v36, QuestScriptMaterialOverwriteEntity_TypeInfo);
      items = v23->fields._items;
      v44 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BAB678(v36, v41);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v36,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v40;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 4), v40, v38, v39);
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_31;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_31:
    v50 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v23,
         (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
  {
    v51 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
      v51 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Func_object__int__o *)v51->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v51->static_fields->__9;
      _9__1_0 = (System_Func_object__int__o *)sub_1BAB668(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_0,
        v53,
        Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
        0LL);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v55, v56);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)v23,
      (System_Func_T__int__o *)_9__1_0,
      1,
      (const MethodInfo_2EB4248 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( v23 )
    {
      v57 = (CommonReleaseMaster_o *)list;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v62,
        v23,
        (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
      while ( 1 )
      {
        v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v62,
                (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
        if ( !v58 )
          break;
        current = v62.fields._current;
        if ( !v62.fields._current )
          sub_1BAB678(v58, v59);
        if ( !v57 )
          sub_1BAB678(v58, v59);
        if ( CommonReleaseMaster__IsOpen(v57, (int32_t)v62.fields._current[2].klass, 0LL, 0, 0LL) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v62,
            (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
          return (QuestScriptMaterialOverwriteEntity_o *)current;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v62,
        (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
      return 0LL;
    }
LABEL_58:
    sub_1BAB678(list, v24);
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
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x19
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x8
  QuestScriptMaterialOverwriteEntity_c *v41; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v44; // x10
  __int64 size; // x11
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v51; // x0
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v53; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  bool v57; // w0
  Il2CppObject *current; // x20
  bool v59; // w19
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AB6321 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, *(_QWORD *)&questId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1BAB41C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__, v10);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v11);
    sub_1BAB41C(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v12);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v13);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v18);
    sub_1BAB41C(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v19);
    sub_1BAB41C(&QuestScriptMaterialOverwriteEntity_TypeInfo, v20);
    sub_1BAB41C(&Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__, v21);
    sub_1BAB41C(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v22);
    byte_4AB6321 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v40 = v36;
    if ( !v36 )
      goto LABEL_47;
    v41 = QuestScriptMaterialOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      sub_1BAB938(v36);
LABEL_47:
      sub_1BAB678(v36, v37);
    }
    if ( *(_DWORD *)(v36 + 16) == questId )
    {
      if ( !v23 )
        sub_1BAB678(v36, QuestScriptMaterialOverwriteEntity_TypeInfo);
      items = v23->fields._items;
      v44 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BAB678(v36, v41);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v36,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v40;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 4), v40, v38, v39);
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_31;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_31:
    v50 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0LL;
  v51 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    v51 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v51->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v51->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1BAB668(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v53,
      Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__,
      0LL);
    static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__2_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v55, v56);
  }
  BasicHelper__StableSort_object_(
    (System_Collections_Generic_List_T__o *)v23,
    (System_Func_T__int__o *)_9__2_0,
    1,
    (const MethodInfo_2EB4248 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v23 )
LABEL_50:
    sub_1BAB678(list, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    v23,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v61,
          (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
  current = v61.fields._current;
  v59 = v57;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v59 )
    return (QuestScriptMaterialOverwriteEntity_o *)current;
  else
    return 0LL;
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB6322 & 1) == 0 )
  {
    sub_1BAB41C(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v1);
    byte_4AB6322 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialOverwriteMaster___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields,
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
    sub_1BAB678(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestScriptMaterialOverwriteMaster___c___GetUnconditionalEntity_b__2_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BAB678(this, 0LL);
  return x->fields.priority;
}