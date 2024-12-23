void __fastcall ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67452 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__, method);
    byte_4B67452 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    357,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
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

  if ( (byte_4B67450 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B67450 = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31FDB1C *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
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
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  CommonReleaseMaster_o *v13; // x21
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  __int64 v25; // x1
  _DWORD *v26; // x22
  __int64 methodPtr_low; // x9
  unsigned int v28; // w8
  int32_t v29; // w21
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B67455 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&ServantLimitImageEntity_TypeInfo, v10);
    byte_4B67455 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BE4D28(Master_object, v12);
  v13 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_18:
      v23 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1BE4FE8(v24);
LABEL_40:
      sub_1BE4D28(v24, v25);
    }
    v28 = v24[8];
    if ( v28 <= 0x2E && ((1LL << v28) & 0x400002000002LL) != 0 )
    {
      if ( v24[9] == questId )
        goto LABEL_30;
    }
    else if ( v28 == 113 )
    {
      if ( !v13 )
        sub_1BE4D28(v24, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v13, questId, v24[9], 0LL) )
      {
LABEL_30:
        v29 = v26[4];
        goto LABEL_32;
      }
    }
  }
  v29 = 0;
LABEL_32:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_36;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_36:
    v33 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v29;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = svtId;
  if ( (byte_4B67456 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1BE4ACC(&StringLiteral_8392/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v7);
    sub_1BE4ACC(&StringLiteral_8391/*"LIMIT_COUNT_SEALED_MESSAGE"*/, v8);
    byte_4B67456 = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  method);
  v10 = System_Int32__ToString((int32_t)&v14, 0LL);
  v11 = System_String__Concat_62698808((System_String_o *)StringLiteral_8392/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v10, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get(v11, 0LL);
  if ( System_String__op_Equality(v12, v11, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8391/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0LL);
  }
  return System_String__Format(v12, LimitCountSealedServantName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x22
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B67457 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v9);
    byte_4B67457 = 1;
  }
  entity = 0LL;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, v13);
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, (int32_t)Master_object, -1, 0LL);
LABEL_10:
    sub_1BE4D28(Master_object, v12);
  }
  return v10;
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
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x20
  __int64 v25; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x8
  ServantLimitImageEntity_c *v46; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v49; // x10
  __int64 size; // x11
  Il2CppClass **v51; // x0
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  ServantLimitImageMaster___c_c *v56; // x0
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v58; // x22
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *current; // x26
  int32_t klass_high; // w20
  int32_t v70; // w22
  int64_t monitor_low; // x21
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B67453 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&System_Comparison_ServantLimitImageEntity__TypeInfo, v7);
    sub_1BE4ACC(&CondType_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__, v11);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v12);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__, v19);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo, v20);
    sub_1BE4ACC(&ServantLimitImageEntity_TypeInfo, v21);
    sub_1BE4ACC(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__, v22);
    sub_1BE4ACC(&ServantLimitImageMaster___c_TypeInfo, v23);
    byte_4B67453 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v24 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_56;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
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
    v33 = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_16;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_16:
      v36 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
            Enumerator,
            *(_QWORD *)(v36 + 8));
    v45 = v37;
    if ( !v37 )
      goto LABEL_52;
    v46 = ServantLimitImageEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1BE4FE8(v37);
LABEL_52:
      sub_1BE4D28(v37, v38);
    }
    if ( *(_DWORD *)(v37 + 16) == svtId && *(_DWORD *)(v37 + 20) == limitCount )
    {
      if ( !v24 )
        sub_1BE4D28(v37, ServantLimitImageEntity_TypeInfo);
      items = v24->fields._items;
      v49 = Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1BE4D28(v37, v46);
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)v37,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v45;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v51 + 4), v45, v39, v40, v41, v42, v43, v44);
      }
    }
  }
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_32;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_32:
    v55 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                                                             Enumerator,
                                                             *(_QWORD *)(v55 + 8));
  if ( !v24 )
LABEL_56:
    sub_1BE4D28(list, v25);
  if ( v24->fields._size > 0 )
  {
    v56 = ServantLimitImageMaster___c_TypeInfo;
    if ( !ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo);
      v56 = ServantLimitImageMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v56->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = ServantLimitImageMaster___c_TypeInfo;
      }
      v58 = (Il2CppObject *)v56->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_ServantLimitImageEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__4_0,
        v58,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        0LL);
      static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
        (int64_t)_9__4_0,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    System_Collections_Generic_List_object___Sort_56548584(
      v24,
      _9__4_0,
      (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v73,
      v24,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v73,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v66 )
        break;
      current = v73.fields._current;
      if ( !v73.fields._current )
        sub_1BE4D28(v66, v67);
      v70 = (int32_t)v73.fields._current[2].klass;
      klass_high = HIDWORD(v73.fields._current[2].klass);
      monitor_low = SLODWORD(v73.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v70, klass_high, monitor_low, 0, 0LL, 0LL) )
        limitCount = HIDWORD(current[1].monitor);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v73,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
  }
  return limitCount;
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
  if ( (byte_4B67458 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, key);
    sub_1BE4ACC(&StringLiteral_16330/*"_"*/, v5);
    byte_4B67458 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  v7 = System_String__Concat_62710068(key, (System_String_o *)StringLiteral_16330/*"_"*/, v6, 0LL);
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
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  CommonReleaseMaster_o *v13; // x21
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  __int64 v25; // x1
  _DWORD *v26; // x22
  __int64 methodPtr_low; // x9
  bool IsOpen; // w21
  char v29; // w22
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B67459 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&ServantLimitImageEntity_TypeInfo, v10);
    byte_4B67459 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BE4D28(Master_object, v12);
  v13 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_18:
      v23 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1BE4FE8(v24);
LABEL_36:
      sub_1BE4D28(v24, v25);
    }
    if ( v24[8] == 113 )
    {
      if ( !v13 )
        sub_1BE4D28(v24, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v13, questId, v24[9], 0LL) )
      {
        IsOpen = CommonReleaseMaster__IsOpen(v13, v26[9], 0LL, 0, 0LL);
        v29 = 1;
        goto LABEL_28;
      }
    }
  }
  v29 = 0;
  IsOpen = 0;
LABEL_28:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_32;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_32:
    v33 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v29 & IsOpen;
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
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  CommonReleaseMaster_o *v13; // x21
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  __int64 v25; // x1
  __int64 methodPtr_low; // x9
  unsigned int v27; // w8
  bool v28; // w21
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4B67454 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&ServantLimitImageEntity_TypeInfo, v10);
    byte_4B67454 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BE4D28(Master_object, v12);
  v13 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_18:
      v23 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1BE4FE8(v24);
LABEL_40:
      sub_1BE4D28(v24, v25);
    }
    v27 = v24[8];
    if ( v27 <= 0x2E && ((1LL << v27) & 0x400002000002LL) != 0 )
    {
      if ( v24[9] == questId )
        goto LABEL_30;
    }
    else if ( v27 == 113 )
    {
      if ( !v13 )
        sub_1BE4D28(v24, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v13, questId, v24[9], 0LL) )
      {
LABEL_30:
        v28 = 1;
        goto LABEL_32;
      }
    }
  }
  v28 = 0;
LABEL_32:
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
        goto LABEL_36;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_36:
    v32 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return v28;
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

  if ( (byte_4B67451 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__, entity);
    byte_4B67451 = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void __fastcall ServantLimitImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6745A & 1) == 0 )
  {
    sub_1BE4ACC(&ServantLimitImageMaster___c_TypeInfo, v1);
    byte_4B6745A = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantLimitImageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantLimitImageMaster___c_TypeInfo->static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ServantLimitImageMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, x);
  return y->fields.priority - x->fields.priority;
}