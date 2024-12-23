void __fastcall QuestScriptMaterialOverwriteMaster___ctor(
        QuestScriptMaterialOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B671B7 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__,
      method);
    byte_4B671B7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    422,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
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
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x8
  QuestScriptMaterialOverwriteEntity_c *v45; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v48; // x10
  __int64 size; // x11
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v55; // x0
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v57; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  CommonReleaseMaster_o *v65; // x20
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B671B8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__, v10);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v11);
    sub_1BE4ACC(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v12);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v18);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v19);
    sub_1BE4ACC(&QuestScriptMaterialOverwriteEntity_TypeInfo, v20);
    sub_1BE4ACC(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__, v21);
    sub_1BE4ACC(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v22);
    byte_4B671B8 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v26);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v35 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v44 = v36;
    if ( !v36 )
      goto LABEL_53;
    v45 = QuestScriptMaterialOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      sub_1BE4FE8(v36);
LABEL_53:
      sub_1BE4D28(v36, v37);
    }
    if ( *(_DWORD *)(v36 + 16) == questId )
    {
      if ( !v23 )
        sub_1BE4D28(v36, QuestScriptMaterialOverwriteEntity_TypeInfo);
      items = v23->fields._items;
      v48 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BE4D28(v36, v45);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v36,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v44;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v50 + 4), v44, v38, v39, v40, v41, v42, v43);
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_31;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_31:
    v54 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v23,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
  {
    v55 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
      v55 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Func_object__int__o *)v55->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v55 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
      }
      v57 = (Il2CppObject *)v55->static_fields->__9;
      _9__1_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__1_0,
        v57,
        Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
        0LL);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
        (int64_t)_9__1_0,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)v23,
      (System_Func_T__int__o *)_9__1_0,
      1,
      (const MethodInfo_2F48D60 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( v23 )
    {
      v65 = (CommonReleaseMaster_o *)list;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v70,
        v23,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
      while ( 1 )
      {
        v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v70,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
        if ( !v66 )
          break;
        current = v70.fields._current;
        if ( !v70.fields._current )
          sub_1BE4D28(v66, v67);
        if ( !v65 )
          sub_1BE4D28(v66, v67);
        if ( CommonReleaseMaster__IsOpen(v65, (int32_t)v70.fields._current[2].klass, 0LL, 0, 0LL) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v70,
            (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
          return (QuestScriptMaterialOverwriteEntity_o *)current;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v70,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
      return 0LL;
    }
LABEL_58:
    sub_1BE4D28(list, v24);
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
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x8
  QuestScriptMaterialOverwriteEntity_c *v45; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v48; // x10
  __int64 size; // x11
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v55; // x0
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v57; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  bool v65; // w0
  Il2CppObject *current; // x20
  bool v67; // w19
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B671B9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__, v10);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v11);
    sub_1BE4ACC(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v12);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v18);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v19);
    sub_1BE4ACC(&QuestScriptMaterialOverwriteEntity_TypeInfo, v20);
    sub_1BE4ACC(&Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__, v21);
    sub_1BE4ACC(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v22);
    byte_4B671B9 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v26);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v35 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v44 = v36;
    if ( !v36 )
      goto LABEL_47;
    v45 = QuestScriptMaterialOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      sub_1BE4FE8(v36);
LABEL_47:
      sub_1BE4D28(v36, v37);
    }
    if ( *(_DWORD *)(v36 + 16) == questId )
    {
      if ( !v23 )
        sub_1BE4D28(v36, QuestScriptMaterialOverwriteEntity_TypeInfo);
      items = v23->fields._items;
      v48 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BE4D28(v36, v45);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v36,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v44;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v50 + 4), v44, v38, v39, v40, v41, v42, v43);
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_31;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_31:
    v54 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0LL;
  v55 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    v55 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v55->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v55->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_0,
      v57,
      Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__,
      0LL);
    static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__2_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v59, v60, v61, v62, v63, v64);
  }
  BasicHelper__StableSort_object_(
    (System_Collections_Generic_List_T__o *)v23,
    (System_Func_T__int__o *)_9__2_0,
    1,
    (const MethodInfo_2F48D60 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v23 )
LABEL_50:
    sub_1BE4D28(list, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    v23,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  v65 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v69,
          (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
  current = v69.fields._current;
  v67 = v65;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v67 )
    return (QuestScriptMaterialOverwriteEntity_o *)current;
  else
    return 0LL;
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B671BA & 1) == 0 )
  {
    sub_1BE4ACC(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v1);
    byte_4B671BA = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialOverwriteMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestScriptMaterialOverwriteMaster___c___GetUnconditionalEntity_b__2_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return x->fields.priority;
}