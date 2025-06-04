void __fastcall ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B0296B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__, method);
    byte_4B0296B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    359,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitImageEntity_o *__fastcall ServantLimitImageMaster__GetEntity(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02969 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B02969 = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_32B3B28 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitImageMaster__GetLimitCountSealQuestToSvtId(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  CommonReleaseMaster_o *v12; // x21
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x22
  unsigned int v26; // w8
  int32_t v27; // w21
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B0296E & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&System_IDisposable_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, v8);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4B0296E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BC3264(Master_object, v11);
  v12 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
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
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      sub_1BC3264(0LL, v24);
    v26 = *(_DWORD *)(v23 + 32);
    if ( v26 <= 0x2E && ((1LL << v26) & 0x400002000002LL) != 0 )
    {
      if ( *(_DWORD *)(v23 + 36) == questId )
        goto LABEL_28;
    }
    else if ( v26 == 113 )
    {
      if ( !v12 )
        sub_1BC3264(v23, v24);
      if ( CommonReleaseMaster__IsQuestContain(v12, questId, *(_DWORD *)(v23 + 36), 0LL) )
      {
LABEL_28:
        v27 = *(_DWORD *)(v25 + 16);
        goto LABEL_30;
      }
    }
  }
  v27 = 0;
LABEL_30:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_34:
    v31 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v27;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  v15 = svtId;
  if ( (byte_4B0296F & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&StringLiteral_8193/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v8);
    sub_1BC3008(&StringLiteral_8192/*"LIMIT_COUNT_SEALED_MESSAGE"*/, v9);
    byte_4B0296F = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  0,
                                                  v4);
  v11 = System_Int32__ToString((int32_t)&v15, 0LL);
  v12 = System_String__Concat_62348648((System_String_o *)StringLiteral_8193/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v11, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get(v12, 0LL);
  if ( System_String__op_Equality(v13, v12, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8192/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0LL);
  }
  return System_String__Format(v13, LimitCountSealedServantName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool addIdentify,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x23
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B02970 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&StringLiteral_1/*""*/, v11);
    byte_4B02970 = 1;
  }
  entity = 0LL;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, v15);
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, (int32_t)Master_object, -1, addIdentify, v16);
LABEL_10:
    sub_1BC3264(Master_object, v14);
  }
  return v12;
}


int32_t __fastcall ServantLimitImageMaster__GetServantImageLimitSealAfter(
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitImageMaster__GetServantLimitCountSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v23; // x20
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
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
  const MethodInfo *v39; // x3
  __int64 v40; // x8
  struct System_Object_array *items; // x9
  _QWORD *v42; // x10
  __int64 size; // x11
  Il2CppClass **v44; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  ServantLimitImageMaster___c_c *v49; // x0
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v51; // x22
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *current; // x26
  int32_t klass_high; // w20
  int32_t v59; // w22
  int64_t monitor_low; // x21
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B0296C & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1BC3008(&System_Comparison_ServantLimitImageEntity__TypeInfo, v7);
    sub_1BC3008(&CondType_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__, v11);
    sub_1BC3008(&System_IDisposable_TypeInfo, v12);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, v13);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__, v19);
    sub_1BC3008(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo, v20);
    sub_1BC3008(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__, v21);
    sub_1BC3008(&ServantLimitImageMaster___c_TypeInfo, v22);
    byte_4B0296C = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_53;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v26);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
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
      v35 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v40 = v36;
    if ( !v36 )
      sub_1BC3264(0LL, v37);
    if ( *(_DWORD *)(v36 + 16) == svtId && *(_DWORD *)(v36 + 20) == limitCount )
    {
      if ( !v23 )
        sub_1BC3264(v36, v37);
      items = v23->fields._items;
      v42 = Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BC3264(v36, v37);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v36,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v40;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v44 + 4), v40, v38, v39);
      }
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
        goto LABEL_30;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_30:
    v48 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                                                             Enumerator,
                                                             *(_QWORD *)(v48 + 8));
  if ( !v23 )
LABEL_53:
    sub_1BC3264(list, v24);
  if ( v23->fields._size > 0 )
  {
    v49 = ServantLimitImageMaster___c_TypeInfo;
    if ( !ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo);
      v49 = ServantLimitImageMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v49->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        v49 = ServantLimitImageMaster___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v49->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_ServantLimitImageEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__4_0,
        v51,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        0LL);
      static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v53, v54);
    }
    System_Collections_Generic_List_object___Sort_57288964(
      v23,
      _9__4_0,
      (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v62,
      v23,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v62,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v55 )
        break;
      current = v62.fields._current;
      if ( !v62.fields._current )
        sub_1BC3264(v55, v56);
      v59 = (int32_t)v62.fields._current[2].klass;
      klass_high = HIDWORD(v62.fields._current[2].klass);
      monitor_low = SLODWORD(v62.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v59, klass_high, monitor_low, 0, 0LL, 0LL) )
        limitCount = HIDWORD(current[1].monitor);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v62,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
  }
  return limitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  _DWORD *v26; // x0
  __int64 v27; // x1
  _DWORD *v28; // x23
  unsigned int v29; // w8
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v33; // x23
  void *QuestType; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  void *v37; // x23
  int v38; // w8
  unsigned int v39; // w22
  __int64 v40; // x24
  unsigned int v41; // w8
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  _DWORD *v44; // x24
  int32_t questId; // w20
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  CommonReleaseMaster_o *v51; // [xsp+8h] [xbp-68h]

  if ( (byte_4B02973 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&System_IDisposable_TypeInfo, v9);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, v10);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    byte_4B02973 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(Master_object, v14);
  v51 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v16);
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
LABEL_7:
        klass = Enumerator->klass;
        v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v19;
            p_offset += 4;
            if ( !v19 )
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
        {
          questId = 0;
          goto LABEL_45;
        }
        v22 = Enumerator->klass;
        v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v24 = &v22->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
          {
            --v23;
            v24 += 4;
            if ( !v23 )
              goto LABEL_18;
          }
          v25 = (__int64)&v22->vtable[*v24].method;
        }
        else
        {
LABEL_18:
          v25 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0LL);
        }
        v26 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                          Enumerator,
                          *(_QWORD *)(v25 + 8));
        v28 = v26;
        if ( !v26 )
          sub_1BC3264(0LL, v27);
      }
      while ( v26[4] != svtId || v26[5] != limitCount );
      v29 = v26[8];
      if ( v29 > 0x2E || ((1LL << v29) & 0x400002000002LL) == 0 )
        break;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_1BC3264(0LL, v31);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v28[9], 0LL);
      v33 = QuestInfo;
      if ( QuestInfo && MapControl_QuestInfo__GetQuestType(QuestInfo, 0LL) == 3 )
      {
        questId = v33->fields.questId;
        goto LABEL_45;
      }
    }
    if ( v29 == 113 )
    {
      if ( !v51 )
        sub_1BC3264(0LL, v27);
      QuestType = CommonReleaseMaster__getList(v51, v26[9], 0LL);
      v37 = QuestType;
      if ( !QuestType )
        sub_1BC3264(0LL, v35);
      v38 = *((_DWORD *)QuestType + 6);
      if ( v38 >= 1 )
        break;
    }
  }
  v39 = 0;
  while ( 1 )
  {
    if ( v39 >= v38 )
      sub_1BC326C(QuestType, v35, v36);
    v40 = *((_QWORD *)v37 + (int)v39 + 4);
    if ( !v40 )
      sub_1BC3264(QuestType, v35);
    v41 = *(_DWORD *)(v40 + 28);
    if ( v41 <= 0x2E && ((1LL << v41) & 0x400002000002LL) != 0 )
    {
      v42 = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v42 )
        sub_1BC3264(0LL, v43);
      QuestType = QuestTree__GetQuestInfo((QuestTree_o *)v42, *(_DWORD *)(v40 + 32), 0LL);
      v44 = QuestType;
      if ( QuestType )
      {
        QuestType = (void *)MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)QuestType, 0LL);
        if ( (_DWORD)QuestType == 3 )
          break;
      }
    }
    v38 = *((_DWORD *)v37 + 6);
    if ( (int)++v39 >= v38 )
      goto LABEL_7;
  }
  questId = v44[4];
LABEL_45:
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_49;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_49:
    v49 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return questId;
}


System_String_o *__fastcall ServantLimitImageMaster__GetServantStatusExplanationText(
        ServantLimitImageMaster_o *this,
        System_String_o *key,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = svtId;
  if ( (byte_4B02971 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, key);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v5);
    byte_4B02971 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  v7 = System_String__Concat_62386896(key, (System_String_o *)StringLiteral_15961/*"_"*/, v6, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v7, 0LL);
  if ( System_String__op_Equality(v8, v7, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get(key, 0LL);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__IsCommonReleaseMultiClear(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  CommonReleaseMaster_o *v12; // x21
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x22
  bool IsOpen; // w21
  char v27; // w22
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B02972 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&System_IDisposable_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, v8);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4B02972 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BC3264(Master_object, v11);
  v12 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
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
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      sub_1BC3264(0LL, v24);
    if ( *(_DWORD *)(v23 + 32) == 113 )
    {
      if ( !v12 )
        sub_1BC3264(v23, v24);
      if ( CommonReleaseMaster__IsQuestContain(v12, questId, *(_DWORD *)(v23 + 36), 0LL) )
      {
        IsOpen = CommonReleaseMaster__IsOpen(v12, *(_DWORD *)(v25 + 36), 0LL, 0, 0LL);
        v27 = 1;
        goto LABEL_26;
      }
    }
  }
  v27 = 0;
  IsOpen = 0;
LABEL_26:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_30:
    v31 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v27 & IsOpen;
}


bool __fastcall ServantLimitImageMaster__IsCommonReleaseQuest(int32_t condType, const MethodInfo *method)
{
  _BOOL8 v2; // x0

  if ( (unsigned int)(condType - 1) > 0x2D )
    LOBYTE(v2) = 0;
  else
    return (0x200001000001uLL >> ((unsigned __int8)condType - 1)) & 1;
  return v2;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__IsLimitCountSealQuest(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  CommonReleaseMaster_o *v12; // x21
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  unsigned int v25; // w9
  bool v26; // w21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4B0296D & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&System_IDisposable_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, v8);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4B0296D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BC3264(Master_object, v11);
  v12 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
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
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1BC3264(0LL, v24);
    v25 = *(_DWORD *)(v23 + 32);
    if ( v25 <= 0x2E && ((1LL << v25) & 0x400002000002LL) != 0 )
    {
      if ( *(_DWORD *)(v23 + 36) == questId )
        goto LABEL_28;
    }
    else if ( v25 == 113 )
    {
      if ( !v12 )
        sub_1BC3264(v23, v24);
      if ( CommonReleaseMaster__IsQuestContain(v12, questId, *(_DWORD *)(v23 + 36), 0LL) )
      {
LABEL_28:
        v26 = 1;
        goto LABEL_30;
      }
    }
  }
  v26 = 0;
LABEL_30:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_34;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_34:
    v30 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v26;
}


bool __fastcall ServantLimitImageMaster__IsServantLimitCountSeal(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, method) != limitCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__TryGetEntity(
        ServantLimitImageMaster_o *this,
        ServantLimitImageEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B0296A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__, entity);
    byte_4B0296A = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void __fastcall ServantLimitImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B02974 & 1) == 0 )
  {
    sub_1BC3008(&ServantLimitImageMaster___c_TypeInfo, v1);
    byte_4B02974 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ServantLimitImageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantLimitImageMaster___c_TypeInfo->static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ServantLimitImageMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantLimitImageMaster___c___ctor(ServantLimitImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantLimitImageMaster___c___GetServantLimitCountSealAfter_b__4_0(
        ServantLimitImageMaster___c_o *this,
        ServantLimitImageEntity_o *x,
        ServantLimitImageEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1BC3264(this, x);
  return y->fields.priority - x->fields.priority;
}