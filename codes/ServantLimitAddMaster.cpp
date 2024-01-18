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

  if ( (byte_418A015 & 1) == 0 )
  {
    sub_B2C35C(&ServantLimitAddMaster_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18267/*"effectFolder"*/, v8);
    byte_418A015 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantLimitAddMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18267/*"effectFolder"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18267/*"effectFolder"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantLimitAddMaster___ctor(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A00B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v4);
    byte_418A00B = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_2E1C05C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.isVoiceList = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isVoiceList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    113,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantLimitAddMaster__GetEntity(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A009 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_418A009 = 1;
  }
  PK = ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  struct System_Int32_array *individuality; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A014 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A014 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)ServantLimitAddMaster__TryGetEntity(
                                (ServantLimitAddMaster_o *)Instance,
                                &entity,
                                svtId,
                                LimitCountByDispLimit,
                                v13);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_16:
    sub_B2C434(Instance, v12);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x4
  System_String_o *v20; // x20
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x0
  System_String_o *v24; // x19
  Il2CppObject *OverwriteTDName; // x0
  int32_t v27; // [xsp+4h] [xbp-3Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A010 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_9383/*"NP_NAME"*/, v15);
    sub_B2C35C(&StringLiteral_9384/*"NP_NAME_LEVEL"*/, v16);
    byte_418A010 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_23;
  if ( ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL)
    && ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v19) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_23;
    if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, v18) )
    {
      if ( tdLv < 1 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9383/*"NP_NAME"*/, 0LL);
        if ( entity )
        {
          v24 = (System_String_o *)Instance;
          OverwriteTDName = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v18);
          return System_String__Format(v24, OverwriteTDName, 0LL);
        }
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9384/*"NP_NAME_LEVEL"*/, 0LL);
        if ( entity )
        {
          v20 = (System_String_o *)Instance;
          v21 = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v18);
          v27 = tdLv;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
          return System_String__Format_44301068(v20, v21, v22, 0LL);
        }
      }
LABEL_23:
      sub_B2C434(Instance, v18);
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
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ServantLimitAddEntity_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x9
  bool v24; // w20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-40h]

  if ( (byte_418A011 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&ServantLimitAddEntity_TypeInfo, v8);
    byte_418A011 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_35;
    v23 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (ServantLimitAddEntity_c *)v21->klass->_2.typeHierarchy[v23 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B2C728(v21);
LABEL_35:
      sub_B2C434(v21, v22);
    }
    if ( v21->fields.svtId == svtId
      && ServantLimitAddEntity__GetRandomGroupIndex(v21, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v30 = 69;
      v24 = 1;
      goto LABEL_25;
    }
  }
  v24 = 0;
  v30 = 67;
LABEL_25:
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 67 )
    return 0;
  return v24;
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
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ServantLimitAddEntity_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x9
  bool v24; // w20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-40h]

  if ( (byte_418A013 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&ServantLimitAddEntity_TypeInfo, v8);
    byte_418A013 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_35;
    v23 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (ServantLimitAddEntity_c *)v21->klass->_2.typeHierarchy[v23 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B2C728(v21);
LABEL_35:
      sub_B2C434(v21, v22);
    }
    if ( v21->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteCv(v21, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v30 = 69;
      v24 = 1;
      goto LABEL_25;
    }
  }
  v24 = 0;
  v30 = 67;
LABEL_25:
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 67 )
    return 0;
  return v24;
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
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ServantLimitAddEntity_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x9
  bool v24; // w20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-40h]

  if ( (byte_418A012 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&ServantLimitAddEntity_TypeInfo, v8);
    byte_418A012 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_35;
    v23 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (ServantLimitAddEntity_c *)v21->klass->_2.typeHierarchy[v23 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B2C728(v21);
LABEL_35:
      sub_B2C434(v21, v22);
    }
    if ( v21->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteSvtDetailName(v21, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v30 = 69;
      v24 = 1;
      goto LABEL_25;
    }
  }
  v24 = 0;
  v30 = 67;
LABEL_25:
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 67 )
    return 0;
  return v24;
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

  if ( (byte_418A00A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__, entity);
    byte_418A00A = 1;
  }
  PK = ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
}


System_String_o *__fastcall ServantLimitAddMaster__getBattleChrId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 Entity; // x0
  __int64 v6; // x1
  ServantLimitAddEntity_o *v8; // [xsp+0h] [xbp-10h] BYREF
  int32_t battleCharaId; // [xsp+Ch] [xbp-4h] BYREF

  battleCharaId = svtId;
  v8 = 0LL;
  Entity = ServantLimitAddMaster__TryGetEntity(this, &v8, svtId, limitCount, v4);
  if ( Entity )
  {
    if ( !v8 )
      sub_B2C434(Entity, v6);
    battleCharaId = v8->fields.battleCharaId;
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
  _BOOL8 v7; // x0
  __int64 v8; // x1
  ServantLimitAddEntity_o *v9; // x8
  int32_t fileConvertLimitCount; // w8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  v7 = ServantLimitAddMaster__TryGetEntity(this, &entity, *svtId, *imageLimitCount, v4);
  if ( v7 )
  {
    v9 = entity;
    if ( !entity )
      sub_B2C434(v7, v8);
    *svtId = entity->fields.battleCharaId;
    fileConvertLimitCount = v9->fields.fileConvertLimitCount;
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
  __int64 v9; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A00D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, *(_QWORD *)&svtId);
    byte_418A00D = 1;
  }
  entity = 0LL;
  isVoiceList = (System_Collections_Generic_Dictionary_int__bool__o *)ServantLimitAddMaster__TryGetEntity(
                                                                        this,
                                                                        &entity,
                                                                        svtId,
                                                                        limitCount,
                                                                        v4);
  if ( ((unsigned __int8)isVoiceList & 1) != 0 )
  {
    if ( entity )
      return entity->fields.svtVoiceId;
LABEL_11:
    sub_B2C434(isVoiceList, v9);
  }
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
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
  System_Collections_Generic_Dictionary_int__bool__o *isVoiceList; // x0
  __int64 v12; // x1
  ServantLimitAddEntity_o *v13; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A00E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, voiceId);
    byte_418A00E = 1;
  }
  entity = 0LL;
  isVoiceList = (System_Collections_Generic_Dictionary_int__bool__o *)ServantLimitAddMaster__TryGetEntity(
                                                                        this,
                                                                        &entity,
                                                                        svtId,
                                                                        limitCount,
                                                                        *(const MethodInfo **)&limitCount);
  if ( ((unsigned __int8)isVoiceList & 1) != 0 )
  {
    v13 = entity;
    if ( entity )
    {
      *voiceId = entity->fields.svtVoiceId;
      *voicePrefix = v13->fields.voicePrefix;
      return;
    }
LABEL_11:
    sub_B2C434(isVoiceList, v12);
  }
  *voicePrefix = 0;
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
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
  const MethodInfo *v21; // x4
  int32_t i; // w24
  int32_t svtVoiceId; // w25
  int32_t voicePrefix; // w28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x0
  __int64 v26; // x8
  unsigned __int64 v27; // x24
  signed __int64 v28; // x25
  int32_t v29; // w3
  int32_t v30; // w23
  int32_t v31; // w26
  unsigned __int64 j; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x9
  unsigned __int64 max_length; // x8
  int32_t missionConditionDetailId; // w9
  __int64 v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37[2]; // [xsp+0h] [xbp-B0h] BYREF
  int v38; // [xsp+30h] [xbp-80h]
  ServantLimitAddEntity_o *v39; // [xsp+38h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+40h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_418A00F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__get_Current__, v10);
    sub_B2C35C(&int___TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo, v17);
    byte_418A00F = 1;
  }
  entity = 0LL;
  memset(&v40, 0, sizeof(v40));
  v39 = 0LL;
  v38 = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
  if ( (maxLimitCount & 0x80000000) == 0 )
  {
    for ( i = 0; i <= maxLimitCount; ++i )
    {
      result = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, i, v21);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !entity || !v18 )
          goto LABEL_66;
        svtVoiceId = entity->fields.svtVoiceId;
        voicePrefix = entity->fields.voicePrefix;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v37,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
        v40 = v37[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v40,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
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
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
        if ( v38 && *((_DWORD *)&v37[0].fields.current + v38 + 1) == 128 )
          --v38;
        v20 = entity;
        if ( entity )
        {
          v25 = v18;
LABEL_24:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
        }
      }
      else if ( !i )
      {
        if ( !v18 )
          goto LABEL_66;
        v25 = v18;
        v20 = 0LL;
        goto LABEL_24;
      }
    }
  }
  if ( costumeIds )
  {
    v26 = *(_QWORD *)&costumeIds->max_length;
    if ( v26 )
    {
      if ( (int)v26 >= 1 )
      {
        if ( (_DWORD)v26 )
        {
          v27 = 0LL;
          v28 = (int)v26;
          do
          {
            v29 = costumeIds->m_Items[v27 + 1];
            if ( v29 >= 1 )
            {
              result = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &v39, svtId, v29, v21);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                if ( !v39 || !v18 )
                  goto LABEL_66;
                v30 = v39->fields.svtVoiceId;
                v31 = v39->fields.voicePrefix;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  v37,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
                  (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
                v40 = v37[0];
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v40,
                          (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
                {
                  if ( v40.fields.current )
                  {
                    if ( v30 == LODWORD(v40.fields.current[3].klass) && v31 == HIDWORD(v40.fields.current[3].klass) )
                    {
LABEL_42:
                      v39 = 0LL;
                      break;
                    }
                  }
                  else if ( v30 == svtId && v31 == 0 )
                  {
                    goto LABEL_42;
                  }
                }
                *((_DWORD *)&v37[1].fields.list + v38++) = 321;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v40,
                  (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
                if ( v38 && *((_DWORD *)&v37[0].fields.current + v38 + 1) == 321 )
                  --v38;
                v20 = v39;
                if ( v39 )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v18,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
              }
            }
            if ( (__int64)++v27 >= v28 )
              goto LABEL_51;
          }
          while ( v27 < costumeIds->max_length );
        }
LABEL_67:
        v36 = sub_B2C460(result);
        sub_B2C400(v36, 0LL);
      }
    }
  }
LABEL_51:
  if ( !v18 || (result = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v18->fields._size)) == 0LL )
LABEL_66:
    sub_B2C434(result, v20);
  if ( (int)result->max_length >= 1 )
  {
    for ( j = 0LL; (__int64)j < (int)max_length; ++j )
    {
      if ( j >= (unsigned int)v18->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v33 = v18->fields._items->m_Items[j];
      if ( v33 )
      {
        if ( j >= (unsigned int)v18->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        max_length = result->max_length;
        if ( j >= max_length )
          goto LABEL_67;
        missionConditionDetailId = v33->fields.missionConditionDetailId;
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
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v5 = ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_B2C434(v5, v6);
  return entity->fields.voicePrefix;
}


bool __fastcall ServantLimitAddMaster__preProcess(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantMaster_o **p_servantMaster; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_418A00C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A00C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         Instance,
                                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
        this->fields.servantMaster = MasterData_WarQuestSelectionMaster,
        p_servantMaster = &this->fields.servantMaster,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.servantMaster,
          (System_Int32_array **)MasterData_WarQuestSelectionMaster,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        (Instance = (DataManager_o *)this->fields.isVoiceList) == 0LL)
    || (System_Collections_Generic_Dictionary_int__bool___Clear(
          (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
          (const MethodInfo_2E1CDE8 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__),
        (Instance = (DataManager_o *)*p_servantMaster) == 0LL) )
  {
    sub_B2C434(Instance, v6);
  }
  ServantMaster__MargeServantVoiceId((ServantMaster_o *)Instance, this->fields.isVoiceList, 0LL);
  return 1;
}