void ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7D96 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
    byte_4CC7D96 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    359,
    (const MethodInfo_340B614 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitImageEntity_o *ServantLimitImageMaster__GetEntity(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7D94 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
    byte_4CC7D94 = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_340D938 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
}


int32_t ServantLimitImageMaster__GetLimitCountSealQuestToSvtId(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  CommonReleaseMaster_o *v7; // x21
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
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
  __int64 v20; // x22
  unsigned int v21; // w8
  int32_t v22; // w21
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4CC7D99 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC7D99 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1C71608(Master_object, v6);
  v7 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v8);
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
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_18:
      v17 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1C71608(0, v19);
    v21 = *(_DWORD *)(v18 + 32);
    if ( v21 <= 0x2E && ((1LL << v21) & 0x400002000002LL) != 0 )
    {
      if ( *(_DWORD *)(v18 + 36) == questId )
        goto LABEL_28;
    }
    else if ( v21 == 113 )
    {
      if ( !v7 )
        sub_1C71608(v18, v19);
      if ( CommonReleaseMaster__IsQuestContain(v7, questId, *(_DWORD *)(v18 + 36), 0) )
      {
LABEL_28:
        v22 = *(_DWORD *)(v20 + 16);
        goto LABEL_30;
      }
    }
  }
  v22 = 0;
LABEL_30:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_34;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_34:
    v26 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v22;
}


System_String_o *ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x20
  System_String_o *v11; // x21
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = svtId;
  if ( (byte_4CC7D9A & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8274/*"LIMIT_COUNT_SEALED_MESSAGE_"*/);
    sub_1C713B0(&StringLiteral_8273/*"LIMIT_COUNT_SEALED_MESSAGE"*/);
    byte_4CC7D9A = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  0,
                                                  v4);
  v9 = System_Int32__ToString((int32_t)&v13, 0);
  v10 = System_String__Concat_64031724((System_String_o *)StringLiteral_8274/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v9, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get(v10, 0);
  if ( System_String__op_Equality(v11, v10, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8273/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0);
  }
  return System_String__Format(v11, LimitCountSealedServantName, 0);
}


System_String_o *ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool addIdentify,
        const MethodInfo *method)
{
  System_String_o *v9; // x23
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC7D9B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7D9B = 1;
  }
  entity = 0;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, v12);
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, (int32_t)Master_object, -1, addIdentify, v13);
LABEL_10:
    sub_1C71608(Master_object, v11);
  }
  return v9;
}


int32_t ServantLimitImageMaster__GetServantImageLimitSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v4; // w20
  int32_t ServantLimitCountSealAfter; // w0

  if ( limitCount >= 11 )
    v4 = limitCount;
  else
    v4 = limitCount + 1;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, v4, method);
  if ( ServantLimitCountSealAfter == v4 )
    return limitCount;
  else
    return ServantLimitCountSealAfter - (limitCount < 11);
}


int32_t ServantLimitImageMaster__GetServantLimitCountSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  ServantLimitImageMaster___c_c *v37; // x0
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v39; // x22
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  _BOOL8 v47; // x0
  __int64 v48; // x1
  Il2CppObject *current; // x26
  int32_t v50; // w20
  int32_t v51; // w22
  int64_t v52; // x21
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC7D97 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
    sub_1C713B0(&System_Comparison_ServantLimitImageEntity__TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
    sub_1C713B0(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__);
    sub_1C713B0(&ServantLimitImageMaster___c_TypeInfo);
    byte_4CC7D97 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_53;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1C71608(0, v21);
    if ( *(_DWORD *)(v20 + 16) == svtId && *(_DWORD *)(v20 + 20) == limitCount )
    {
      if ( !v7 )
        sub_1C71608(v20, v21);
      items = v7->fields._items;
      v30 = Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C71608(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_30:
    v36 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                                             Enumerator,
                                                             *(_QWORD *)(v36 + 8));
  if ( !v7 )
LABEL_53:
    sub_1C71608(list, v8);
  if ( v7->fields._size > 0 )
  {
    v37 = ServantLimitImageMaster___c_TypeInfo;
    if ( !ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo);
      v37 = ServantLimitImageMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v37->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = ServantLimitImageMaster___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v37->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_ServantLimitImageEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__4_0,
        v39,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        0);
      static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0,
        (int32_t)_9__4_0,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    System_Collections_Generic_List_object___Sort_58794460(
      v7,
      _9__4_0,
      (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      v7,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v47 )
        break;
      current = v54.fields._current;
      if ( !v54.fields._current )
        sub_1C71608(v47, v48);
      v51 = *(_DWORD *)((char *)&v54.fields._current->klass + (unsigned __int64)&qword_20);
      v50 = *(_DWORD *)((char *)&v54.fields._current->klass + (unsigned __int64)&qword_20 + 4);
      v52 = *(int *)((char *)&v54.fields._current->klass + (unsigned __int64)&qword_28);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v51, v50, v52, 0, 0, 0) )
        limitCount = *(_DWORD *)((char *)&off_18 + (_QWORD)current + 4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
  }
  return limitCount;
}


int32_t ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  _DWORD *v20; // x0
  __int64 v21; // x1
  _DWORD *v22; // x23
  unsigned int v23; // w8
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v27; // x23
  void *QuestType; // x0
  __int64 v29; // x1
  void *v30; // x23
  int v31; // w8
  unsigned int v32; // w22
  __int64 v33; // x24
  unsigned int v34; // w8
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  _DWORD *v37; // x24
  int32_t questId; // w20
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  CommonReleaseMaster_o *v44; // [xsp+8h] [xbp-68h]

  if ( (byte_4CC7D9E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CC7D9E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(Master_object, v8);
  v44 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v10);
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
LABEL_7:
        klass = Enumerator->klass;
        v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v13;
            p_offset += 4;
            if ( !v13 )
              goto LABEL_11;
          }
          v15 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_11:
          v15 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                Enumerator,
                *(_QWORD *)(v15 + 8))
            & 1) == 0 )
        {
          questId = 0;
          goto LABEL_45;
        }
        v16 = Enumerator->klass;
        v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          v18 = &v16->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
          {
            --v17;
            v18 += 4;
            if ( !v17 )
              goto LABEL_18;
          }
          v19 = (__int64)&v16->vtable[*v18];
        }
        else
        {
LABEL_18:
          v19 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0);
        }
        v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                          Enumerator,
                          *(_QWORD *)(v19 + 8));
        v22 = v20;
        if ( !v20 )
          sub_1C71608(0, v21);
      }
      while ( v20[4] != svtId || v20[5] != limitCount );
      v23 = v20[8];
      if ( v23 > 0x2E || ((1LL << v23) & 0x400002000002LL) == 0 )
        break;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_1C71608(0, v25);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v22[9], 0);
      v27 = QuestInfo;
      if ( QuestInfo && MapControl_QuestInfo__GetQuestType(QuestInfo, 0) == 3 )
      {
        questId = v27->fields.questId;
        goto LABEL_45;
      }
    }
    if ( v23 == 113 )
    {
      if ( !v44 )
        sub_1C71608(0, v21);
      QuestType = CommonReleaseMaster__getList(v44, v20[9], 0);
      v30 = QuestType;
      if ( !QuestType )
        sub_1C71608(0, v29);
      v31 = *((_DWORD *)QuestType + 6);
      if ( v31 >= 1 )
        break;
    }
  }
  v32 = 0;
  while ( 1 )
  {
    if ( v32 >= v31 )
      sub_1C71610(QuestType);
    v33 = *((_QWORD *)v30 + (int)v32 + 4);
    if ( !v33 )
      sub_1C71608(QuestType, v29);
    v34 = *(_DWORD *)(v33 + 28);
    if ( v34 <= 0x2E && ((1LL << v34) & 0x400002000002LL) != 0 )
    {
      v35 = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v35 )
        sub_1C71608(0, v36);
      QuestType = QuestTree__GetQuestInfo((QuestTree_o *)v35, *(_DWORD *)(v33 + 32), 0);
      v37 = QuestType;
      if ( QuestType )
      {
        QuestType = (void *)MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)QuestType, 0);
        if ( (_DWORD)QuestType == 3 )
          break;
      }
    }
    v31 = *((_DWORD *)v30 + 6);
    if ( (int)++v32 >= v31 )
      goto LABEL_7;
  }
  questId = v37[4];
LABEL_45:
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_49;
    }
    v42 = (__int64)&v39->vtable[*v41];
  }
  else
  {
LABEL_49:
    v42 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return questId;
}


System_String_o *ServantLimitImageMaster__GetServantStatusExplanationText(
        ServantLimitImageMaster_o *this,
        System_String_o *key,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = svtId;
  if ( (byte_4CC7D9C & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CC7D9C = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v6 = System_String__Concat_64069988(key, (System_String_o *)StringLiteral_16109/*"_"*/, v5, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get(v6, 0);
  if ( System_String__op_Equality(v7, v6, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get(key, 0);
  }
  return v7;
}


bool ServantLimitImageMaster__IsCommonReleaseMultiClear(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  CommonReleaseMaster_o *v7; // x21
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
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
  __int64 v20; // x22
  bool IsOpen; // w21
  char v22; // w22
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4CC7D9D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC7D9D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1C71608(Master_object, v6);
  v7 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v8);
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
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_18:
      v17 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1C71608(0, v19);
    if ( *(_DWORD *)(v18 + 32) == 113 )
    {
      if ( !v7 )
        sub_1C71608(v18, v19);
      if ( CommonReleaseMaster__IsQuestContain(v7, questId, *(_DWORD *)(v18 + 36), 0) )
      {
        IsOpen = CommonReleaseMaster__IsOpen(v7, *(_DWORD *)(v20 + 36), 0, 0, 0);
        v22 = 1;
        goto LABEL_26;
      }
    }
  }
  v22 = 0;
  IsOpen = 0;
LABEL_26:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_30;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_30:
    v26 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v22 & IsOpen;
}


bool ServantLimitImageMaster__IsCommonReleaseQuest(int32_t condType, const MethodInfo *method)
{
  _BOOL8 v2; // x0

  if ( (unsigned int)(condType - 1) > 0x2D )
    LOBYTE(v2) = 0;
  else
    return (0x200001000001uLL >> ((unsigned __int8)condType - 1)) & 1;
  return v2;
}


bool ServantLimitImageMaster__IsLimitCountSealQuest(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  CommonReleaseMaster_o *v7; // x21
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
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
  unsigned int v20; // w9
  bool v21; // w21
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4CC7D98 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC7D98 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1C71608(Master_object, v6);
  v7 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v8);
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
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_18:
      v17 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C71608(0, v19);
    v20 = *(_DWORD *)(v18 + 32);
    if ( v20 <= 0x2E && ((1LL << v20) & 0x400002000002LL) != 0 )
    {
      if ( *(_DWORD *)(v18 + 36) == questId )
        goto LABEL_28;
    }
    else if ( v20 == 113 )
    {
      if ( !v7 )
        sub_1C71608(v18, v19);
      if ( CommonReleaseMaster__IsQuestContain(v7, questId, *(_DWORD *)(v18 + 36), 0) )
      {
LABEL_28:
        v21 = 1;
        goto LABEL_30;
      }
    }
  }
  v21 = 0;
LABEL_30:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_34;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_34:
    v25 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v21;
}


bool ServantLimitImageMaster__IsServantImageLimitSeal(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v4; // w20
  _BOOL4 v6; // w21
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v8; // w8

  if ( limitCount >= 11 )
    v4 = limitCount;
  else
    v4 = limitCount + 1;
  v6 = limitCount < 11;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, v4, method);
  v8 = ServantLimitCountSealAfter - v6;
  if ( ServantLimitCountSealAfter == v4 )
    v8 = limitCount;
  return v8 != limitCount;
}


bool ServantLimitImageMaster__IsServantLimitCountSeal(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, method) != limitCount;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitImageMaster__TryGetEntity(
        ServantLimitImageMaster_o *this,
        ServantLimitImageEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC7D95 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
    byte_4CC7D95 = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void ServantLimitImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7DA0 & 1) == 0 )
  {
    sub_1C713B0(&ServantLimitImageMaster___c_TypeInfo);
    byte_4CC7DA0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ServantLimitImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantLimitImageMaster___c_TypeInfo->static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantLimitImageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantLimitImageMaster___c___ctor(ServantLimitImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantLimitImageMaster___c___GetServantLimitCountSealAfter_b__4_0(
        ServantLimitImageMaster___c_o *this,
        ServantLimitImageEntity_o *x,
        ServantLimitImageEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1C71608(this, x);
  return y->fields.priority - x->fields.priority;
}