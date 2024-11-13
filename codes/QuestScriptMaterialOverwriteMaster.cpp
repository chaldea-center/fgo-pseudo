void __fastcall QuestScriptMaterialOverwriteMaster___ctor(
        QuestScriptMaterialOverwriteMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167D3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__,
      method,
      v2);
    byte_4B167D3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    418,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptMaterialOverwriteEntity_o *__fastcall QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_object__o *v42; // x19
  __int64 v43; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v45; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x8
  QuestScriptMaterialOverwriteEntity_c *v64; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v67; // x10
  __int64 size; // x11
  Il2CppClass **v69; // x0
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  QuestScriptMaterialOverwriteMaster___c_c *v77; // x0
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v79; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x1
  CommonReleaseMaster_o *v88; // x20
  _BOOL8 v89; // x0
  __int64 v90; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B167D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v18,
      v19);
    sub_1BCA7E0(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v34, v35);
    sub_1BCA7E0(&QuestScriptMaterialOverwriteEntity_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__, v38, v39);
    sub_1BCA7E0(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v40, v41);
    byte_4B167D4 = 1;
  }
  memset(&v93, 0, sizeof(v93));
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v45);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        p_offset += 4;
        if ( !v48 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v51 = Enumerator->klass;
    v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v53 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_16;
      }
      v54 = (__int64)&v51->vtable[*v53].method;
    }
    else
    {
LABEL_16:
      v54 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v55 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
            Enumerator,
            *(_QWORD *)(v54 + 8));
    v63 = v55;
    if ( !v55 )
      goto LABEL_53;
    v64 = QuestScriptMaterialOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v55 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      sub_1BCACFC(v55);
LABEL_53:
      sub_1BCAA3C(v55, v56);
    }
    if ( *(_DWORD *)(v55 + 16) == questId )
    {
      if ( !v42 )
        sub_1BCAA3C(v55, QuestScriptMaterialOverwriteEntity_TypeInfo);
      items = v42->fields._items;
      v67 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v42->fields._version;
      if ( !items )
        sub_1BCAA3C(v55, v64);
      size = v42->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v42,
          (Il2CppObject *)v55,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &items->obj.klass + size;
        v42->fields._size = size + 1;
        v69[4] = (Il2CppClass *)v63;
        sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), v63, v57, v58, v59, v60, v61, v62);
      }
    }
  }
  v70 = Enumerator->klass;
  v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v72 = &v70->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_31;
    }
    v73 = (__int64)&v70->vtable[*v72].method;
  }
  else
  {
LABEL_31:
    v73 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(Enumerator, *(_QWORD *)(v73 + 8));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v42,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
  {
    v77 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo, v74);
      v77 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    _9__1_0 = (System_Func_object__int__o *)v77->static_fields->__9__1_0;
    if ( !_9__1_0 )
    {
      if ( !v77->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v77, v74);
        v77 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
      }
      v79 = (Il2CppObject *)v77->static_fields->__9;
      _9__1_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo,
                                                v74,
                                                v75,
                                                v76);
      System_Func_object__int____ctor(
        _9__1_0,
        v79,
        Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
        0LL);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
        (int64_t)_9__1_0,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)v42,
      (System_Func_T__int__o *)_9__1_0,
      1,
      (const MethodInfo_2F028E0 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v87);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( v42 )
    {
      v88 = (CommonReleaseMaster_o *)list;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v93,
        v42,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
      while ( 1 )
      {
        v89 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v93,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
        if ( !v89 )
          break;
        current = v93.fields._current;
        if ( !v93.fields._current )
          sub_1BCAA3C(v89, v90);
        if ( !v88 )
          sub_1BCAA3C(v89, v90);
        if ( CommonReleaseMaster__IsOpen(v88, (int32_t)v93.fields._current[2].klass, 0LL, 0, 0LL) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v93,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
          return (QuestScriptMaterialOverwriteEntity_o *)current;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v93,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
      return 0LL;
    }
LABEL_58:
    sub_1BCAA3C(list, v43);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
QuestScriptMaterialOverwriteEntity_o *__fastcall QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_object__o *v42; // x19
  __int64 v43; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v45; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x8
  QuestScriptMaterialOverwriteEntity_c *v64; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v67; // x10
  __int64 size; // x11
  Il2CppClass **v69; // x0
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  QuestScriptMaterialOverwriteMaster___c_c *v77; // x0
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v79; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x1
  bool v88; // w0
  Il2CppObject *current; // x20
  bool v90; // w19
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B167D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v18,
      v19);
    sub_1BCA7E0(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v34, v35);
    sub_1BCA7E0(&QuestScriptMaterialOverwriteEntity_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__, v38, v39);
    sub_1BCA7E0(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v40, v41);
    byte_4B167D5 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v45);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        p_offset += 4;
        if ( !v48 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v51 = Enumerator->klass;
    v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v53 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_16;
      }
      v54 = (__int64)&v51->vtable[*v53].method;
    }
    else
    {
LABEL_16:
      v54 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v55 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
            Enumerator,
            *(_QWORD *)(v54 + 8));
    v63 = v55;
    if ( !v55 )
      goto LABEL_47;
    v64 = QuestScriptMaterialOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v55 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      sub_1BCACFC(v55);
LABEL_47:
      sub_1BCAA3C(v55, v56);
    }
    if ( *(_DWORD *)(v55 + 16) == questId )
    {
      if ( !v42 )
        sub_1BCAA3C(v55, QuestScriptMaterialOverwriteEntity_TypeInfo);
      items = v42->fields._items;
      v67 = Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__;
      ++v42->fields._version;
      if ( !items )
        sub_1BCAA3C(v55, v64);
      size = v42->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v42,
          (Il2CppObject *)v55,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &items->obj.klass + size;
        v42->fields._size = size + 1;
        v69[4] = (Il2CppClass *)v63;
        sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), v63, v57, v58, v59, v60, v61, v62);
      }
    }
  }
  v70 = Enumerator->klass;
  v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v72 = &v70->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_31;
    }
    v73 = (__int64)&v70->vtable[*v72].method;
  }
  else
  {
LABEL_31:
    v73 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(Enumerator, *(_QWORD *)(v73 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v42,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0LL;
  v77 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo, v74);
    v77 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v77->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v77->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v77, v74);
      v77 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
    }
    v79 = (Il2CppObject *)v77->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo,
                                              v74,
                                              v75,
                                              v76);
    System_Func_object__int____ctor(
      _9__2_0,
      v79,
      Method_QuestScriptMaterialOverwriteMaster___c__GetUnconditionalEntity_b__2_0__,
      0LL);
    static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v81, v82, v83, v84, v85, v86);
  }
  BasicHelper__StableSort_object_(
    (System_Collections_Generic_List_T__o *)v42,
    (System_Func_T__int__o *)_9__2_0,
    1,
    (const MethodInfo_2F028E0 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v87);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v42 )
LABEL_50:
    sub_1BCAA3C(list, v43);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v92,
    v42,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  v88 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v92,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
  current = v92.fields._current;
  v90 = v88;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v92,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v90 )
    return (QuestScriptMaterialOverwriteEntity_o *)current;
  else
    return 0LL;
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B167D6 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v1, v2);
    byte_4B167D6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestScriptMaterialOverwriteMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialOverwriteMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestScriptMaterialOverwriteMaster___c___GetUnconditionalEntity_b__2_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.priority;
}