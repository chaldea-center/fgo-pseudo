void __fastcall ServantLimitAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FC7F1 & 1) == 0 )
  {
    sub_B16FFC(&ServantLimitAddMaster_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18198, v8);
    byte_40FC7F1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantLimitAddMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18198;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18198;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantLimitAddMaster___ctor(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FC7E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v7);
    byte_40FC7E7 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v8,
    (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.isVoiceList = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.isVoiceList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    113,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantLimitAddMaster__GetEntity(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FC7E5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FC7E5 = 1;
  }
  PK = ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantLimitAddMaster__GetLimitAddIndividuality(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t LimitCountByDispLimit; // w20
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v13; // x4
  struct System_Int32_array *individuality; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC7F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FC7F0 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( !ServantLimitAddMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          svtId,
          LimitCountByDispLimit,
          v13) )
    return 0LL;
  if ( !entity )
LABEL_16:
    sub_B170D4();
  individuality = entity->fields.individuality;
  if ( !individuality )
    return 0LL;
  if ( *(_QWORD *)&individuality->max_length )
    return entity->fields.individuality;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitAddMaster__GetOverwriteTDName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        System_String_o *orginalTDName,
        int32_t tdLv,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *v19; // x0
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x1
  System_String_o *v22; // x0
  const MethodInfo *v23; // x1
  System_String_o *v24; // x20
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x0
  System_String_o *v28; // x0
  const MethodInfo *v29; // x1
  System_String_o *v30; // x19
  Il2CppObject *OverwriteTDName; // x0
  int32_t v33; // [xsp+4h] [xbp-3Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC7EC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_9353, v15);
    sub_B16FFC(&StringLiteral_9354, v16);
    byte_40FC7EC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  v19 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             MasterData_WarQuestSelectionMaster,
                             svtId,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v19 )
    goto LABEL_23;
  if ( ServantEntity__IsNameTrue(v19, 0LL)
    && ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v20) )
  {
    if ( !entity )
      goto LABEL_23;
    if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, v21) )
    {
      if ( tdLv < 1 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9353, 0LL);
        if ( entity )
        {
          v30 = v28;
          OverwriteTDName = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v29);
          return System_String__Format(v30, OverwriteTDName, 0LL);
        }
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9354, 0LL);
        if ( entity )
        {
          v24 = v22;
          v25 = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v23);
          v33 = tdLv;
          v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
          return System_String__Format_43739268(v24, v25, v26, 0LL);
        }
      }
LABEL_23:
      sub_B170D4();
    }
  }
  return orginalTDName;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsContainRadomGroupIndex(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  ServantLimitAddEntity_o *v19; // x0
  __int64 v20; // x9
  bool v21; // w20
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  int v27; // [xsp+0h] [xbp-40h]

  if ( (byte_40FC7ED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&ServantLimitAddEntity_TypeInfo, v8);
    byte_40FC7ED = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_35;
    v20 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (ServantLimitAddEntity_c *)v19->klass->_2.typeHierarchy[v20 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B173C8(v19);
LABEL_35:
      sub_B170D4();
    }
    if ( v19->fields.svtId == svtId
      && ServantLimitAddEntity__GetRandomGroupIndex(v19, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v27 = 69;
      v21 = 1;
      goto LABEL_25;
    }
  }
  v21 = 0;
  v27 = 67;
LABEL_25:
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v27 == 67 )
    return 0;
  return v21;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsOverwriteCv(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  ServantLimitAddEntity_o *v19; // x0
  __int64 v20; // x9
  bool v21; // w20
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  int v27; // [xsp+0h] [xbp-40h]

  if ( (byte_40FC7EF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&ServantLimitAddEntity_TypeInfo, v8);
    byte_40FC7EF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_35;
    v20 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (ServantLimitAddEntity_c *)v19->klass->_2.typeHierarchy[v20 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B173C8(v19);
LABEL_35:
      sub_B170D4();
    }
    if ( v19->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteCv(v19, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v27 = 69;
      v21 = 1;
      goto LABEL_25;
    }
  }
  v21 = 0;
  v27 = 67;
LABEL_25:
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v27 == 67 )
    return 0;
  return v21;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsOverwriteSvtDetailName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  ServantLimitAddEntity_o *v19; // x0
  __int64 v20; // x9
  bool v21; // w20
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  int v27; // [xsp+0h] [xbp-40h]

  if ( (byte_40FC7EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&ServantLimitAddEntity_TypeInfo, v8);
    byte_40FC7EE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_35;
    v20 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (ServantLimitAddEntity_c *)v19->klass->_2.typeHierarchy[v20 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B173C8(v19);
LABEL_35:
      sub_B170D4();
    }
    if ( v19->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteSvtDetailName(v19, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v27 = 69;
      v21 = 1;
      goto LABEL_25;
    }
  }
  v21 = 0;
  v27 = 67;
LABEL_25:
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v27 == 67 )
    return 0;
  return v21;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__TryGetEntity(
        ServantLimitAddMaster_o *this,
        ServantLimitAddEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FC7E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__, entity);
    byte_40FC7E6 = 1;
  }
  PK = ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
}


System_String_o *__fastcall ServantLimitAddMaster__getBattleChrId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ServantLimitAddEntity_o *v6; // [xsp+0h] [xbp-10h] BYREF
  int32_t battleCharaId; // [xsp+Ch] [xbp-4h] BYREF

  battleCharaId = svtId;
  v6 = 0LL;
  if ( ServantLimitAddMaster__TryGetEntity(this, &v6, svtId, limitCount, v4) )
  {
    if ( !v6 )
      sub_B170D4();
    battleCharaId = v6->fields.battleCharaId;
  }
  return System_Int32__ToString((int32_t)&battleCharaId, 0LL);
}


void __fastcall ServantLimitAddMaster__getCostumeId(
        ServantLimitAddMaster_o *this,
        int32_t *svtId,
        int32_t *imageLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ServantLimitAddEntity_o *v7; // x8
  int32_t fileConvertLimitCount; // w8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  if ( ServantLimitAddMaster__TryGetEntity(this, &entity, *svtId, *imageLimitCount, v4) )
  {
    v7 = entity;
    if ( !entity )
      sub_B170D4();
    *svtId = entity->fields.battleCharaId;
    fileConvertLimitCount = v7->fields.fileConvertLimitCount;
  }
  else
  {
    fileConvertLimitCount = 0;
  }
  *imageLimitCount = fileConvertLimitCount;
}


int32_t __fastcall ServantLimitAddMaster__getScriptIntValue(
        ServantLimitAddEntity_o *limitAddEnt,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  if ( limitAddEnt )
    return ServantLimitAddEntity__getScript(limitAddEnt, key, defVal, method);
  else
    return defVal;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddMaster__getVoiceId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_Dictionary_int__bool__o *isVoiceList; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC7E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, *(_QWORD *)&svtId);
    byte_40FC7E9 = 1;
  }
  entity = 0LL;
  if ( ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4) )
  {
    if ( entity )
      return entity->fields.svtVoiceId;
LABEL_11:
    sub_B170D4();
  }
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    return svtId;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLimitAddMaster__getVoiceIndex(
        ServantLimitAddMaster_o *this,
        int32_t *voiceId,
        int32_t *voicePrefix,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitAddEntity_o *v11; // x8
  System_Collections_Generic_Dictionary_int__bool__o *isVoiceList; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC7EA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, voiceId);
    byte_40FC7EA = 1;
  }
  entity = 0LL;
  if ( ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, *(const MethodInfo **)&limitCount) )
  {
    v11 = entity;
    if ( entity )
    {
      *voiceId = entity->fields.svtVoiceId;
      *voicePrefix = v11->fields.voicePrefix;
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  *voicePrefix = 0;
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    *voiceId = svtId;
  }
  else
  {
    *voiceId = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantLimitAddMaster__getVoiceLimitCountList(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t maxLimitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Int32_array *result; // x0
  ServantLimitAddEntity_o *v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x4
  int32_t i; // w24
  int32_t svtVoiceId; // w25
  int32_t voicePrefix; // w28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x0
  __int64 v27; // x8
  unsigned __int64 v28; // x24
  signed __int64 v29; // x25
  int32_t v30; // w3
  int32_t v31; // w23
  int32_t v32; // w26
  unsigned __int64 j; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x9
  unsigned __int64 max_length; // x8
  int32_t missionConditionDetailId; // w9
  System_Collections_Generic_List_Enumerator_T__o v37[2]; // [xsp+0h] [xbp-B0h] BYREF
  int v38; // [xsp+30h] [xbp-80h]
  ServantLimitAddEntity_o *v39; // [xsp+38h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+40h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40FC7EB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__get_Current__, v10);
    sub_B16FFC(&int___TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo, v17);
    byte_40FC7EB = 1;
  }
  entity = 0LL;
  memset(&v40, 0, sizeof(v40));
  v39 = 0LL;
  v38 = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&maxLimitCount,
                                                                                                  costumeIds,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
  if ( (maxLimitCount & 0x80000000) == 0 )
  {
    for ( i = 0; i <= maxLimitCount; ++i )
    {
      result = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, i, v22);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !entity || !v18 )
          goto LABEL_66;
        svtVoiceId = entity->fields.svtVoiceId;
        voicePrefix = entity->fields.voicePrefix;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v37,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
        v40 = v37[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v40,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
        {
          if ( v40.fields.current )
          {
            if ( svtVoiceId == LODWORD(v40.fields.current[3].klass)
              && voicePrefix == HIDWORD(v40.fields.current[3].klass) )
            {
LABEL_15:
              entity = 0LL;
              break;
            }
          }
          else if ( svtVoiceId == svtId && voicePrefix == 0 )
          {
            goto LABEL_15;
          }
        }
        *((_DWORD *)&v37[1].fields.list + v38++) = 128;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v40,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
        if ( v38 && *((_DWORD *)&v37[0].fields.current + v38 + 1) == 128 )
          --v38;
        v20 = entity;
        if ( entity )
        {
          v26 = v18;
LABEL_24:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
        }
      }
      else if ( !i )
      {
        if ( !v18 )
          goto LABEL_66;
        v26 = v18;
        v20 = 0LL;
        goto LABEL_24;
      }
    }
  }
  if ( costumeIds )
  {
    v27 = *(_QWORD *)&costumeIds->max_length;
    if ( v27 )
    {
      if ( (int)v27 >= 1 )
      {
        if ( (_DWORD)v27 )
        {
          v28 = 0LL;
          v29 = (int)v27;
          do
          {
            v30 = costumeIds->m_Items[v28 + 1];
            if ( v30 >= 1 )
            {
              result = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &v39, svtId, v30, v22);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                if ( !v39 || !v18 )
                  goto LABEL_66;
                v31 = v39->fields.svtVoiceId;
                v32 = v39->fields.voicePrefix;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  v37,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
                  (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
                v40 = v37[0];
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v40,
                          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
                {
                  if ( v40.fields.current )
                  {
                    if ( v31 == LODWORD(v40.fields.current[3].klass) && v32 == HIDWORD(v40.fields.current[3].klass) )
                    {
LABEL_42:
                      v39 = 0LL;
                      break;
                    }
                  }
                  else if ( v31 == svtId && v32 == 0 )
                  {
                    goto LABEL_42;
                  }
                }
                *((_DWORD *)&v37[1].fields.list + v38++) = 321;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v40,
                  (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
                if ( v38 && *((_DWORD *)&v37[0].fields.current + v38 + 1) == 321 )
                  --v38;
                v20 = v39;
                if ( v39 )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v18,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
              }
            }
            if ( (__int64)++v28 >= v29 )
              goto LABEL_51;
          }
          while ( v28 < costumeIds->max_length );
        }
LABEL_67:
        sub_B17100(result, v20, v21);
        sub_B170A0();
      }
    }
  }
LABEL_51:
  if ( !v18 || (result = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v18->fields._size, v21)) == 0LL )
LABEL_66:
    sub_B170D4();
  if ( (int)result->max_length >= 1 )
  {
    for ( j = 0LL; (__int64)j < (int)max_length; ++j )
    {
      if ( j >= (unsigned int)v18->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v34 = v18->fields._items->m_Items[j];
      if ( v34 )
      {
        if ( j >= (unsigned int)v18->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        max_length = result->max_length;
        if ( j >= max_length )
          goto LABEL_67;
        missionConditionDetailId = v34->fields.missionConditionDetailId;
      }
      else
      {
        max_length = result->max_length;
        if ( j >= max_length )
          goto LABEL_67;
        missionConditionDetailId = 0;
      }
      result->m_Items[j + 1] = missionConditionDetailId;
    }
  }
  return result;
}


int32_t __fastcall ServantLimitAddMaster__getVoicePrefix(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( !ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4) )
    return 0;
  if ( !entity )
    sub_B170D4();
  return entity->fields.voicePrefix;
}


bool __fastcall ServantLimitAddMaster__preProcess(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantMaster_o **p_servantMaster; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_Dictionary_int__bool__o *isVoiceList; // x0

  if ( (byte_40FC7E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FC7E8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
        this->fields.servantMaster = MasterData_WarQuestSelectionMaster,
        p_servantMaster = &this->fields.servantMaster,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.servantMaster,
          (System_Int32_array **)MasterData_WarQuestSelectionMaster,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (isVoiceList = this->fields.isVoiceList) == 0LL)
    || (System_Collections_Generic_Dictionary_int__bool___Clear(
          isVoiceList,
          (const MethodInfo_2DD585C *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__),
        !*p_servantMaster) )
  {
    sub_B170D4();
  }
  ServantMaster__MargeServantVoiceId(*p_servantMaster, this->fields.isVoiceList, 0LL);
  return 1;
}