void __fastcall ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B8D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
    byte_4A5B8D6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    353,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
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

  if ( (byte_4A5B8D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
    byte_4A5B8D4 = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
}


int32_t __fastcall ServantLimitImageMaster__GetLimitCountSealQuestToSvtId(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  _DWORD *v18; // x0
  __int64 v19; // x1
  _DWORD *v20; // x22
  __int64 methodPtr_low; // x9
  unsigned int v22; // w8
  int32_t v23; // w21
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A5B8D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantLimitImageEntity_TypeInfo);
    byte_4A5B8D9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1B8880C(Master_object, v6);
  v7 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
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
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
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
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_18:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_40:
      sub_1B8880C(v18, v19);
    }
    v22 = v18[8];
    if ( v22 <= 0x2E && ((1LL << v22) & 0x400002000002LL) != 0 )
    {
      if ( v18[9] == questId )
        goto LABEL_30;
    }
    else if ( v22 == 113 )
    {
      if ( !v7 )
        sub_1B8880C(v18, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v7, questId, v18[9], 0LL) )
      {
LABEL_30:
        v23 = v20[4];
        goto LABEL_32;
      }
    }
  }
  v23 = 0;
LABEL_32:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_36;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_36:
    v27 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v23;
}


System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  v12 = svtId;
  if ( (byte_4A5B8DA & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8246/*"LIMIT_COUNT_SEALED_MESSAGE_"*/);
    sub_1B885B0(&StringLiteral_8245/*"LIMIT_COUNT_SEALED_MESSAGE"*/);
    byte_4A5B8DA = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  method);
  v8 = System_Int32__ToString((int32_t)&v12, 0LL);
  v9 = System_String__Concat_61707032((System_String_o *)StringLiteral_8246/*"LIMIT_COUNT_SEALED_MESSAGE_"*/, v8, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v9, 0LL);
  if ( System_String__op_Equality(v10, v9, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8245/*"LIMIT_COUNT_SEALED_MESSAGE"*/, 0LL);
  }
  return System_String__Format(v10, LimitCountSealedServantName, 0LL);
}


System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B8DB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8DB = 1;
  }
  entity = 0LL;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          svtId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return v7;
  Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, v10);
  if ( !entity )
LABEL_12:
    sub_1B8880C(Master_object, v9);
  Name = ServantEntity__GetName((ServantEntity_o *)entity, (int32_t)Master_object, 0, -1, v11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(Name, 0LL);
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


int32_t __fastcall ServantLimitImageMaster__GetServantLimitCountSealAfter(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  ServantLimitImageEntity_c *v25; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  ServantLimitImageMaster___c_c *v35; // x0
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v37; // x22
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x26
  int32_t klass_high; // w20
  int32_t v45; // w22
  int64_t monitor_low; // x21
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B8D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_ServantLimitImageEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
    sub_1B885B0(&ServantLimitImageEntity_TypeInfo);
    sub_1B885B0(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__);
    sub_1B885B0(&ServantLimitImageMaster___c_TypeInfo);
    byte_4A5B8D7 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_56;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
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
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      goto LABEL_52;
    v25 = ServantLimitImageEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_52:
      sub_1B8880C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 16) == svtId && *(_DWORD *)(v20 + 20) == limitCount )
    {
      if ( !v7 )
        sub_1B8880C(v20, ServantLimitImageEntity_TypeInfo);
      items = v7->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v25);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), v24, v22, v23);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                             Enumerator,
                                                             *(_QWORD *)(v34 + 8));
  if ( !v7 )
LABEL_56:
    sub_1B8880C(list, v8);
  if ( v7->fields._size > 0 )
  {
    v35 = ServantLimitImageMaster___c_TypeInfo;
    if ( !ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo);
      v35 = ServantLimitImageMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v35->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = ServantLimitImageMaster___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v35->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantLimitImageEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__4_0,
        v37,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        0LL);
      static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v39, v40);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      v7,
      _9__4_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      v7,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v48,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v41 )
        break;
      current = v48.fields._current;
      if ( !v48.fields._current )
        sub_1B8880C(v41, v42);
      v45 = (int32_t)v48.fields._current[2].klass;
      klass_high = HIDWORD(v48.fields._current[2].klass);
      monitor_low = SLODWORD(v48.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v45, klass_high, monitor_low, 0, 0LL, 0LL) )
        limitCount = HIDWORD(current[1].monitor);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
  }
  return limitCount;
}


System_String_o *__fastcall ServantLimitImageMaster__GetServantStatusExplanationText(
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
  if ( (byte_4A5B8DC & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5B8DC = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_String__Concat_61718292(key, (System_String_o *)StringLiteral_16123/*"_"*/, v5, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get(v6, 0LL);
  if ( System_String__op_Equality(v7, v6, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get(key, 0LL);
  }
  return v7;
}


bool __fastcall ServantLimitImageMaster__IsCommonReleaseMultiClear(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  _DWORD *v18; // x0
  __int64 v19; // x1
  _DWORD *v20; // x22
  __int64 methodPtr_low; // x9
  bool IsOpen; // w21
  char v23; // w22
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A5B8DD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantLimitImageEntity_TypeInfo);
    byte_4A5B8DD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1B8880C(Master_object, v6);
  v7 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
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
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
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
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_18:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_36:
      sub_1B8880C(v18, v19);
    }
    if ( v18[8] == 113 )
    {
      if ( !v7 )
        sub_1B8880C(v18, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v7, questId, v18[9], 0LL) )
      {
        IsOpen = CommonReleaseMaster__IsOpen(v7, v20[9], 0LL, 0, 0LL);
        v23 = 1;
        goto LABEL_28;
      }
    }
  }
  v23 = 0;
  IsOpen = 0;
LABEL_28:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_32;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_32:
    v27 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v23 & IsOpen;
}


bool __fastcall ServantLimitImageMaster__IsLimitCountSealQuest(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  _DWORD *v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x9
  unsigned int v21; // w8
  bool v22; // w21
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4A5B8D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantLimitImageEntity_TypeInfo);
    byte_4A5B8D8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1B8880C(Master_object, v6);
  v7 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
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
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
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
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_18:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantLimitImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitImageEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_40:
      sub_1B8880C(v18, v19);
    }
    v21 = v18[8];
    if ( v21 <= 0x2E && ((1LL << v21) & 0x400002000002LL) != 0 )
    {
      if ( v18[9] == questId )
        goto LABEL_30;
    }
    else if ( v21 == 113 )
    {
      if ( !v7 )
        sub_1B8880C(v18, ServantLimitImageEntity_TypeInfo);
      if ( CommonReleaseMaster__IsQuestContain(v7, questId, v18[9], 0LL) )
      {
LABEL_30:
        v22 = 1;
        goto LABEL_32;
      }
    }
  }
  v22 = 0;
LABEL_32:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_36;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_36:
    v26 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v22;
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

  if ( (byte_4A5B8D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
    byte_4A5B8D5 = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void __fastcall ServantLimitImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B8DE & 1) == 0 )
  {
    sub_1B885B0(&ServantLimitImageMaster___c_TypeInfo);
    byte_4A5B8DE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantLimitImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantLimitImageMaster___c_TypeInfo->static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantLimitImageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, x);
  return y->fields.priority - x->fields.priority;
}