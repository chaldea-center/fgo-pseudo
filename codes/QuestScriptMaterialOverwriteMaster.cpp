void __fastcall QuestScriptMaterialOverwriteMaster___ctor(
        QuestScriptMaterialOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B722 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
    byte_4A5B722 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    418,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
}


QuestScriptMaterialOverwriteEntity_o *__fastcall QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  QuestScriptMaterialOverwriteEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v33; // x0
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v35; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  CommonReleaseMaster_o *v39; // x20
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B723 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__);
    sub_1B885B0(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_1B885B0(&QuestScriptMaterialOverwriteEntity_TypeInfo);
    sub_1B885B0(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__);
    sub_1B885B0(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_4A5B723 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_53;
    v23 = QuestScriptMaterialOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_53:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      if ( !v5 )
        sub_1B8880C(v18, QuestScriptMaterialOverwriteEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
  {
    v33 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
      v33 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Func_object__int__o *)v33->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__1_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_0,
        v35,
        Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
        0LL);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v37, v38);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)v5,
      (System_Func_T__int__o *)_9__1_0,
      1,
      (const MethodInfo_2E6F7DC *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( v5 )
    {
      v39 = (CommonReleaseMaster_o *)list;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v44,
        v5,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
      while ( 1 )
      {
        v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v44,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
        if ( !v40 )
          break;
        current = v44.fields._current;
        if ( !v44.fields._current )
          sub_1B8880C(v40, v41);
        if ( !v39 )
          sub_1B8880C(v40, v41);
        if ( CommonReleaseMaster__IsOpen(v39, (int32_t)v44.fields._current[2].klass, 0LL, 0, 0LL) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v44,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
          return (QuestScriptMaterialOverwriteEntity_o *)current;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v44,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
      return 0LL;
    }
LABEL_58:
    sub_1B8880C(list, v6);
  }
  return 0LL;
}


QuestScriptMaterialOverwriteEntity_o *__fastcall QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  QuestScriptMaterialOverwriteEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v33; // x0
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v35; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  bool v39; // w0
  Il2CppObject *current; // x20
  bool v41; // w19
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B724 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__);
    sub_1B885B0(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_1B885B0(&QuestScriptMaterialOverwriteEntity_TypeInfo);
    sub_1B885B0(&Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__);
    sub_1B885B0(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_4A5B724 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_47;
    v23 = QuestScriptMaterialOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_47:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      if ( !v5 )
        sub_1B8880C(v18, QuestScriptMaterialOverwriteEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0LL;
  v33 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    v33 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v33->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v35,
      Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__,
      0LL);
    static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v37, v38);
  }
  BasicHelper__StableSort_object_(
    (System_Collections_Generic_List_T__o *)v5,
    (System_Func_T__int__o *)_9__2_0,
    1,
    (const MethodInfo_2E6F7DC *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v5 )
LABEL_50:
    sub_1B8880C(list, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    v5,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v43,
          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
  current = v43.fields._current;
  v41 = v39;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v41 )
    return (QuestScriptMaterialOverwriteEntity_o *)current;
  else
    return 0LL;
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B725 & 1) == 0 )
  {
    sub_1B885B0(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_4A5B725 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialOverwriteMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestScriptMaterialOverwriteMaster___c___GetUnconditionalEntity_b__2_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.priority;
}