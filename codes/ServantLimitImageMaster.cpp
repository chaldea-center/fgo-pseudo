void __fastcall ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16A64 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__, method, v2);
    byte_4B16A64 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    353,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
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

  if ( (byte_4B16A62 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    byte_4B16A62 = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitImageMaster__GetLimitCountSealQuestToSvtId(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  CommonReleaseMaster_o *v19; // x21
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  _DWORD *v30; // x0
  __int64 v31; // x1
  _DWORD *v32; // x22
  __int64 methodPtr_low; // x9
  unsigned int v34; // w8
  int32_t v35; // w21
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B16A67 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantLimitImageEntity_TypeInfo, v15, v16);
    byte_4B16A67 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BCAA3C(Master_object, v18);
  v19 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_18;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_18:
      v29 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1BCACFC(v30);
LABEL_40:
      sub_1BCAA3C(v30, v31);
    }
    v34 = v30[8];
    if ( v34 <= 0x2E && ((1LL << v34) & 0x400002000002LL) != 0 )
    {
      if ( v30[9] == questId )
        goto LABEL_30;
    }
    else if ( v34 == 113 )
    {
      if ( !v19 )
        sub_1BCAA3C(v30, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v19, questId, v30[9], 0LL) )
      {
LABEL_30:
        v35 = v32[4];
        goto LABEL_32;
      }
    }
  }
  v35 = 0;
LABEL_32:
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_36;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_36:
    v39 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return v35;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x20
  System_String_o *v15; // x21
  __int64 v16; // x1
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  v18 = svtId;
  if ( (byte_4B16A68 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&StringLiteral_8372/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_8371/*"LIMIT_COUNT_SEALED_MESSAGE"*/, v9, v10);
    byte_4B16A68 = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  method);
  v12 = System_Int32__ToString((int32_t)&v18, 0LL);
  v14 = System_String__Concat_62401220((System_String_o *)StringLiteral_8372/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v12, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v15 = LocalizationManager__Get(v14, 0LL);
  if ( System_String__op_Equality(v15, v14, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8371/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0LL);
  }
  return System_String__Format(v15, LimitCountSealedServantName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x22
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16A69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B16A69 = 1;
  }
  entity = 0LL;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, v16);
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, (int32_t)Master_object, -1, 0LL);
LABEL_10:
    sub_1BCAA3C(Master_object, v15);
  }
  return v13;
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
  int32_t monitor_high; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_object__o *v41; // x20
  __int64 v42; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v44; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x8
  ServantLimitImageEntity_c *v63; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v66; // x10
  __int64 size; // x11
  Il2CppClass **v68; // x0
  System_Collections_Generic_IEnumerator_T__c *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x2
  __int64 v74; // x3
  ServantLimitImageMaster___c_c *v75; // x0
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v77; // x22
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  _BOOL8 v85; // x0
  __int64 v86; // x1
  Il2CppObject *current; // x26
  int32_t klass_high; // w20
  int32_t v89; // w22
  int64_t monitor_low; // x21
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+8h] [xbp-68h] BYREF

  monitor_high = limitCount;
  if ( (byte_4B16A65 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    sub_1BCA7E0(&System_Comparison_ServantLimitImageEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&CondType_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__, v15, v16);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo, v33, v34);
    sub_1BCA7E0(&ServantLimitImageEntity_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__, v37, v38);
    sub_1BCA7E0(&ServantLimitImageMaster___c_TypeInfo, v39, v40);
    byte_4B16A65 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&limitCount,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_56;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v44);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v47;
        p_offset += 4;
        if ( !v47 )
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
    v50 = Enumerator->klass;
    v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v52 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_16;
      }
      v53 = (__int64)&v50->vtable[*v52].method;
    }
    else
    {
LABEL_16:
      v53 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v54 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
            Enumerator,
            *(_QWORD *)(v53 + 8));
    v62 = v54;
    if ( !v54 )
      goto LABEL_52;
    v63 = ServantLimitImageEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v54 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v54 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1BCACFC(v54);
LABEL_52:
      sub_1BCAA3C(v54, v55);
    }
    if ( *(_DWORD *)(v54 + 16) == svtId && *(_DWORD *)(v54 + 20) == monitor_high )
    {
      if ( !v41 )
        sub_1BCAA3C(v54, ServantLimitImageEntity_TypeInfo);
      items = v41->fields._items;
      v66 = Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__;
      ++v41->fields._version;
      if ( !items )
        sub_1BCAA3C(v54, v63);
      size = v41->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v41,
          (Il2CppObject *)v54,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &items->obj.klass + size;
        v41->fields._size = size + 1;
        v68[4] = (Il2CppClass *)v62;
        sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), v62, v56, v57, v58, v59, v60, v61);
      }
    }
  }
  v69 = Enumerator->klass;
  v70 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v71 = &v69->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
    {
      --v70;
      v71 += 4;
      if ( !v70 )
        goto LABEL_32;
    }
    v72 = (__int64)&v69->vtable[*v71].method;
  }
  else
  {
LABEL_32:
    v72 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v72)(
                                                             Enumerator,
                                                             *(_QWORD *)(v72 + 8));
  if ( !v41 )
LABEL_56:
    sub_1BCAA3C(list, v42);
  if ( v41->fields._size > 0 )
  {
    v75 = ServantLimitImageMaster___c_TypeInfo;
    if ( !ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo, v42);
      v75 = ServantLimitImageMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v75->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v75->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v75, v42);
        v75 = ServantLimitImageMaster___c_TypeInfo;
      }
      v77 = (Il2CppObject *)v75->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                            System_Comparison_ServantLimitImageEntity__TypeInfo,
                                            v42,
                                            v73,
                                            v74);
      System_Comparison_object____ctor(
        _9__4_0,
        v77,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        0LL);
      static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
        (int64_t)_9__4_0,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      v41,
      _9__4_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v92,
      v41,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v85 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v92,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v85 )
        break;
      current = v92.fields._current;
      if ( !v92.fields._current )
        sub_1BCAA3C(v85, v86);
      v89 = (int32_t)v92.fields._current[2].klass;
      klass_high = HIDWORD(v92.fields._current[2].klass);
      monitor_low = SLODWORD(v92.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v86);
      if ( !CondType__IsOpen(v89, klass_high, monitor_low, 0, 0LL, 0LL) )
        monitor_high = HIDWORD(current[1].monitor);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v92,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
  }
  return monitor_high;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetServantStatusExplanationText(
        ServantLimitImageMaster_o *this,
        System_String_o *key,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  __int64 v11; // x1
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = svtId;
  if ( (byte_4B16A6A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, key, *(_QWORD *)&svtId);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v5, v6);
    byte_4B16A6A = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v13, 0LL);
  v9 = System_String__Concat_62412480(key, (System_String_o *)StringLiteral_16290/*"_"*/, v7, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  v10 = LocalizationManager__Get(v9, 0LL);
  if ( System_String__op_Equality(v10, v9, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    return LocalizationManager__Get(key, 0LL);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__IsCommonReleaseMultiClear(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  CommonReleaseMaster_o *v19; // x21
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  _DWORD *v30; // x0
  __int64 v31; // x1
  _DWORD *v32; // x22
  __int64 methodPtr_low; // x9
  bool IsOpen; // w21
  char v35; // w22
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B16A6B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantLimitImageEntity_TypeInfo, v15, v16);
    byte_4B16A6B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BCAA3C(Master_object, v18);
  v19 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_18;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_18:
      v29 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1BCACFC(v30);
LABEL_36:
      sub_1BCAA3C(v30, v31);
    }
    if ( v30[8] == 113 )
    {
      if ( !v19 )
        sub_1BCAA3C(v30, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v19, questId, v30[9], 0LL) )
      {
        IsOpen = CommonReleaseMaster__IsOpen(v19, v32[9], 0LL, 0, 0LL);
        v35 = 1;
        goto LABEL_28;
      }
    }
  }
  v35 = 0;
  IsOpen = 0;
LABEL_28:
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_32:
    v39 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return v35 & IsOpen;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__IsLimitCountSealQuest(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  CommonReleaseMaster_o *v19; // x21
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  _DWORD *v30; // x0
  __int64 v31; // x1
  __int64 methodPtr_low; // x9
  unsigned int v33; // w8
  bool v34; // w21
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4B16A66 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantLimitImageEntity_TypeInfo, v15, v16);
    byte_4B16A66 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1BCAA3C(Master_object, v18);
  v19 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_18;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_18:
      v29 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1BCACFC(v30);
LABEL_40:
      sub_1BCAA3C(v30, v31);
    }
    v33 = v30[8];
    if ( v33 <= 0x2E && ((1LL << v33) & 0x400002000002LL) != 0 )
    {
      if ( v30[9] == questId )
        goto LABEL_30;
    }
    else if ( v33 == 113 )
    {
      if ( !v19 )
        sub_1BCAA3C(v30, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v19, questId, v30[9], 0LL) )
      {
LABEL_30:
        v34 = 1;
        goto LABEL_32;
      }
    }
  }
  v34 = 0;
LABEL_32:
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_36;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_36:
    v38 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return v34;
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

  if ( (byte_4B16A63 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16A63 = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void __fastcall ServantLimitImageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16A6C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantLimitImageMaster___c_TypeInfo, v1, v2);
    byte_4B16A6C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantLimitImageMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantLimitImageMaster___c_TypeInfo->static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantLimitImageMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
  return y->fields.priority - x->fields.priority;
}