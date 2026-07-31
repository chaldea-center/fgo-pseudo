void ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593908D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
    byte_593908D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    361,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
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

  if ( (byte_593908B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
    byte_593908B = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLimitImageMaster__GetLimitCountSealQuestToSvtId(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v8; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x21
  unsigned int v25; // w8
  int32_t v27; // w20
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_Collections_Generic_IEnumerator_T__o *v33; // [xsp+18h] [xbp-48h]

  if ( (byte_5939090 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5939090 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(Master_object, v6);
  v8 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  v33 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v10);
  for ( i = Enumerator; ; i = v33 )
  {
    klass = i->klass;
    v13 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            i,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
    {
      v27 = 0;
      goto LABEL_36;
    }
    if ( !v33 )
      sub_21FFECC(v16, v17);
    v18 = v33->klass;
    v19 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_20;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_20:
      v21 = sub_2237E2C(v33, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            v33,
            *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      sub_21FFECC(0, v23);
    v25 = *(_DWORD *)(v22 + 32);
    if ( v25 > 0x2E || ((1LL << v25) & 0x400002000002LL) == 0 )
      break;
    if ( *(_DWORD *)(v22 + 36) == questId )
      goto LABEL_35;
LABEL_32:
    ;
  }
  if ( v25 != 113 )
    goto LABEL_32;
  if ( !v8 )
    sub_21FFECC(v22, v23);
  if ( !CommonReleaseMaster__IsQuestContain(v8, questId, *(_DWORD *)(v22 + 36), 0) )
    goto LABEL_32;
LABEL_35:
  v27 = *(_DWORD *)(v24 + 16);
LABEL_36:
  if ( v33 )
  {
    v28 = v33->klass;
    v29 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_41;
      }
      v31 = (__int64)&v28->vtable[*v30];
    }
    else
    {
LABEL_41:
      v31 = sub_2237E2C(v33, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(v33, *(_QWORD *)(v31 + 8));
  }
  return v27;
}


System_String_o *ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  __int64 v13; // x1
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  v15 = svtId;
  if ( (byte_5939091 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8608/*"LIMIT_COUNT_SEALED_MESSAGE_"*/);
    sub_21FFC50(&StringLiteral_8607/*"LIMIT_COUNT_SEALED_MESSAGE"*/);
    byte_5939091 = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  0,
                                                  0,
                                                  v4);
  v9 = System_Int32__ToString((int32_t)&v15, 0);
  v11 = System_String__Concat_75438412((System_String_o *)StringLiteral_8608/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v9, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  v12 = LocalizationManager__Get(v11, 0);
  if ( System_String__op_Equality(v12, v11, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8607/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0);
  }
  return System_String__Format(v12, LimitCountSealedServantName, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool addIdentify,
        bool isCommonName,
        const MethodInfo *method)
{
  int v11; // w8
  System_String_o *v12; // x24
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5939092 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939092 = 1;
  }
  v11 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, v15);
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, (int32_t)Master_object, -1, addIdentify, isCommonName, 0);
LABEL_10:
    sub_21FFECC(Master_object, v14);
  }
  return v12;
}


int32_t ServantLimitImageMaster__GetServantImageLimitSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v5; // w20
  _BOOL4 v6; // w21
  int32_t ServantLimitCountSealAfter; // w0

  if ( limitCount >= 11 )
    v5 = limitCount;
  else
    v5 = limitCount + 1;
  v6 = limitCount < 11;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, v5, method);
  if ( ServantLimitCountSealAfter == v5 )
    return limitCount;
  else
    return ServantLimitCountSealAfter - v6;
}


int32_t ServantLimitImageMaster__GetServantLimitCountSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v11; // x1
  System_Collections_Generic_IEnumerator_T__o *v12; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
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
  ServantLimitImageMaster___c_c *v35; // x0
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v38; // x22
  struct ServantLimitImageMaster___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *current; // x26
  int64_t monitor_low; // x22
  int32_t v50; // w20
  int32_t klass_high; // w21
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+10h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v54; // [xsp+28h] [xbp-58h]

  if ( (byte_593908E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
    sub_21FFC50(&System_Comparison_ServantLimitImageEntity__TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
    sub_21FFC50(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__);
    sub_21FFC50(&ServantLimitImageMaster___c_TypeInfo);
    byte_593908E = 1;
  }
  v54 = 0;
  memset(&v53, 0, sizeof(v53));
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_59;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  v54 = Enumerator;
  if ( !Enumerator )
LABEL_29:
    sub_21FFECC(Enumerator, v11);
  v12 = Enumerator;
  while ( 1 )
  {
    klass = v12->klass;
    v14 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_2237E2C(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
             v12,
             *(_QWORD *)(v16 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v54 )
      sub_21FFECC(list, v8);
    v17 = v54->klass;
    v18 = *(unsigned __int16 *)&v54->klass->_2.rank;
    if ( *(_WORD *)&v54->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
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
      v20 = sub_2237E2C(v54, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v54,
                                                                  *(_QWORD *)(v20 + 8));
    v11 = Enumerator;
    if ( !Enumerator )
      sub_21FFECC(0, 0);
    if ( LODWORD(Enumerator[1].klass) == svtId && HIDWORD(Enumerator[1].klass) == limitCount )
    {
      if ( !v7
        || (items = v7->fields._items,
            v28 = Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(Enumerator, Enumerator);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)Enumerator,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v11;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v11, v21, v22, v23, v24, v25, v26);
      }
    }
    v12 = v54;
    if ( !v54 )
      goto LABEL_29;
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
          goto LABEL_35;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_35:
      v34 = sub_2237E2C(v54, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
             v54,
             *(_QWORD *)(v34 + 8));
  }
  if ( !v7 )
LABEL_59:
    sub_21FFECC(list, v8);
  if ( v7->fields._size > 0 )
  {
    v35 = ServantLimitImageMaster___c_TypeInfo;
    if ( !*(&ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo, v8);
      v35 = ServantLimitImageMaster___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !*(&v35->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v35, v8);
        static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantLimitImageEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__4_0,
        v38,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        0);
      v39 = ServantLimitImageMaster___c_TypeInfo->static_fields;
      v39->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v39->__9__4_0, (int32_t)_9__4_0, v40, v41, v42, v43, v44, v45);
    }
    System_Collections_Generic_List_object___Sort_71636404(
      v7,
      _9__4_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      v7,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v53,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v46 )
        break;
      current = v53.fields._current;
      if ( !v53.fields._current )
        sub_21FFECC(v46, v47);
      monitor_low = SLODWORD(v53.fields._current[2].monitor);
      v50 = (int32_t)v53.fields._current[2].klass;
      klass_high = HIDWORD(v53.fields._current[2].klass);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v47);
      if ( !CondType__IsOpen(v50, klass_high, monitor_low, 0, 0, 0) )
        limitCount = HIDWORD(current[1].monitor);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v53,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
  }
  return limitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v10; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  __int64 v25; // x1
  _DWORD *v26; // x22
  unsigned int v27; // w8
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v31; // x22
  void *QuestType; // x0
  __int64 v33; // x1
  void *v34; // x22
  int v35; // w8
  unsigned int v36; // w29
  __int64 v37; // x23
  unsigned int v38; // w8
  bool v39; // cc
  __int64 v40; // x8
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  _DWORD *v44; // x23
  int32_t questId; // w20
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  System_Collections_Generic_IEnumerator_T__o *v51; // [xsp+18h] [xbp-68h]

  if ( (byte_5939094 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5939094 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(Master_object, v8);
  v10 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  v51 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v12);
  for ( i = Enumerator; ; i = v51 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            i,
            *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
    {
      questId = 0;
      goto LABEL_50;
    }
    if ( !v51 )
      sub_21FFECC(v18, v19);
    v20 = v51->klass;
    v21 = *(unsigned __int16 *)&v51->klass->_2.rank;
    if ( *(_WORD *)&v51->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_20;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_20:
      v23 = sub_2237E2C(v51, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      v51,
                      *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_21FFECC(0, v25);
    if ( v24[4] == svtId && v24[5] == limitCount )
      break;
LABEL_46:
    ;
  }
  v27 = v24[8];
  if ( v27 <= 0x2E && ((1LL << v27) & 0x400002000002LL) != 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v29);
    QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v26[9], 0);
    v31 = QuestInfo;
    if ( QuestInfo && MapControl_QuestInfo__GetQuestType(QuestInfo, 0) == 3 )
    {
      questId = v31->fields.questId;
      goto LABEL_50;
    }
    goto LABEL_46;
  }
  if ( v27 != 113 )
    goto LABEL_46;
  if ( !v10 )
    sub_21FFECC(v24, v25);
  QuestType = CommonReleaseMaster__getList(v10, v24[9], 0);
  v34 = QuestType;
  if ( !QuestType )
    sub_21FFECC(0, v33);
  v35 = *((_DWORD *)QuestType + 6);
  if ( v35 < 1 )
    goto LABEL_46;
  v36 = 0;
  while ( 1 )
  {
    if ( v36 >= v35 )
      sub_21FFED4(QuestType);
    v37 = *((_QWORD *)v34 + (int)v36 + 4);
    if ( !v37 )
      sub_21FFECC(QuestType, v33);
    v38 = *(_DWORD *)(v37 + 28);
    v39 = v38 > 0x2E;
    v40 = (1LL << v38) & 0x400002000002LL;
    if ( !v39 && v40 != 0 )
    {
      v42 = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v42 )
        sub_21FFECC(0, v43);
      QuestType = QuestTree__GetQuestInfo((QuestTree_o *)v42, *(_DWORD *)(v37 + 32), 0);
      v44 = QuestType;
      if ( QuestType )
      {
        QuestType = (void *)MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)QuestType, 0);
        if ( (_DWORD)QuestType == 3 )
          break;
      }
    }
    v35 = *((_DWORD *)v34 + 6);
    if ( (int)++v36 >= v35 )
      goto LABEL_46;
  }
  questId = v44[4];
LABEL_50:
  if ( v51 )
  {
    v46 = v51->klass;
    v47 = *(unsigned __int16 *)&v51->klass->_2.rank;
    if ( *(_WORD *)&v51->klass->_2.rank )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_55;
      }
      v49 = (__int64)&v46->vtable[*v48];
    }
    else
    {
LABEL_55:
      v49 = sub_2237E2C(v51, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(v51, *(_QWORD *)(v49 + 8));
  }
  return questId;
}


System_String_o *ServantLimitImageMaster__GetServantStatusExplanationText(
        ServantLimitImageMaster_o *this,
        System_String_o *key,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  __int64 v9; // x1
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = svtId;
  if ( (byte_5939093 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    byte_5939093 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v11, 0);
  v7 = System_String__Concat_75481624(key, (System_String_o *)StringLiteral_16714/*"_"*/, v5, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  v8 = LocalizationManager__Get(v7, 0);
  if ( System_String__op_Equality(v8, v7, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    return LocalizationManager__Get(key, 0);
  }
  return v8;
}


bool ServantLimitImageMaster__IsCommonReleaseQuest(int32_t condType, const MethodInfo *method)
{
  return ((unsigned int)condType < 0x2F) & (0x400002000002uLL >> condType);
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitImageMaster__IsLimitCountSealQuest(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  CommonReleaseMaster_o *v7; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  char v17; // w20
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  unsigned int v24; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_Collections_Generic_IEnumerator_T__o *v31; // [xsp+18h] [xbp-48h]

  if ( (byte_593908F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593908F = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_21FFECC(Master_object, v6);
  v7 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  v31 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v9);
  for ( i = Enumerator; ; i = v31 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_12;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( (v15 & 1) == 0 )
      break;
    if ( !v31 )
      sub_21FFECC(v15, v16);
    v18 = v31->klass;
    v19 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_20;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_20:
      v21 = sub_2237E2C(v31, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            v31,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_21FFECC(0, v23);
    v24 = *(_DWORD *)(v22 + 32);
    if ( v24 > 0x2E || ((1LL << v24) & 0x400002000002LL) == 0 )
    {
      if ( v24 == 113 )
      {
        if ( !v7 )
          sub_21FFECC(v22, v23);
        if ( CommonReleaseMaster__IsQuestContain(v7, questId, *(_DWORD *)(v22 + 36), 0) )
          goto LABEL_35;
      }
    }
    else if ( *(_DWORD *)(v22 + 36) == questId )
    {
      goto LABEL_35;
    }
  }
  v17 = 0;
LABEL_35:
  if ( v31 )
  {
    v26 = v31->klass;
    v27 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_40;
      }
      v29 = (__int64)&v26->vtable[*v28];
    }
    else
    {
LABEL_40:
      v29 = sub_2237E2C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v31, *(_QWORD *)(v29 + 8));
  }
  return v17 & 1;
}


bool ServantLimitImageMaster__IsServantImageLimitSeal(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v5; // w20
  _BOOL4 v6; // w21
  int32_t ServantLimitCountSealAfter; // w0

  if ( limitCount >= 11 )
    v5 = limitCount;
  else
    v5 = limitCount + 1;
  v6 = limitCount < 11;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, v5, method);
  return ServantLimitCountSealAfter != v5 && ServantLimitCountSealAfter - v6 != limitCount;
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

  if ( (byte_593908C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
    byte_593908C = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void ServantLimitImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939095 & 1) == 0 )
  {
    sub_21FFC50(&ServantLimitImageMaster___c_TypeInfo);
    byte_5939095 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantLimitImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantLimitImageMaster___c_TypeInfo->static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantLimitImageMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, x);
  return y->fields.priority - x->fields.priority;
}