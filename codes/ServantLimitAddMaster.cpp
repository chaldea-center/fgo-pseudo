void __fastcall ServantLimitAddMaster___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B24D0 & 1) == 0 )
  {
    sub_B52984(&ServantLimitAddMaster_TypeInfo);
    sub_B52984(&StringLiteral_18401/*"effectFolder"*/);
    byte_42B24D0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantLimitAddMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18401/*"effectFolder"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18401/*"effectFolder"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall ServantLimitAddMaster___ctor(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B24C6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    byte_42B24C6 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v3,
    (const MethodInfo_2EF75B8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.isVoiceList = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.isVoiceList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    114,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantLimitAddMaster__GetEntity(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B24C4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
    byte_42B24C4 = 1;
  }
  PK = ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
}


System_Int32_array *__fastcall ServantLimitAddMaster__GetLimitAddIndividuality(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t LimitCountByDispLimit; // w20
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct System_Int32_array *individuality; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B24CF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B24CF = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)ServantLimitAddMaster__TryGetEntity(
                                (ServantLimitAddMaster_o *)Instance,
                                &entity,
                                svtId,
                                LimitCountByDispLimit,
                                v11);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_16:
    sub_B52A5C(Instance, v10);
  individuality = entity->fields.individuality;
  if ( !individuality )
    return 0LL;
  if ( *(_QWORD *)&individuality->max_length )
    return entity->fields.individuality;
  else
    return 0LL;
}


System_String_o *__fastcall ServantLimitAddMaster__GetOverwriteTDName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        System_String_o *orginalTDName,
        int32_t tdLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x4
  System_String_o *v14; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v18; // x19
  Il2CppObject *OverwriteTDName; // x0
  int32_t v21; // [xsp+4h] [xbp-3Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B24CB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_9440/*"NP_NAME"*/);
    sub_B52984(&StringLiteral_9441/*"NP_NAME_LEVEL"*/);
    byte_42B24CB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_23;
  if ( ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL)
    && ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v13) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_23;
    if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, v12) )
    {
      if ( tdLv < 1 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NP_NAME"*/, 0LL);
        if ( entity )
        {
          v18 = (System_String_o *)Instance;
          OverwriteTDName = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v12);
          return System_String__Format(v18, OverwriteTDName, 0LL);
        }
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9441/*"NP_NAME_LEVEL"*/, 0LL);
        if ( entity )
        {
          v14 = (System_String_o *)Instance;
          v15 = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v12);
          v21 = tdLv;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
          return System_String__Format_44563852(v14, v15, v16, 0LL);
        }
      }
LABEL_23:
      sub_B52A5C(Instance, v12);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  ServantLimitAddEntity_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x9
  bool v20; // w20
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int v26; // [xsp+0h] [xbp-40h]

  if ( (byte_42B24CC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantLimitAddEntity_TypeInfo);
    byte_42B24CC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_35;
    v19 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (ServantLimitAddEntity_c *)v17->klass->_2.typeHierarchy[v19 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B52D50(v17);
LABEL_35:
      sub_B52A5C(v17, v18);
    }
    if ( v17->fields.svtId == svtId
      && ServantLimitAddEntity__GetRandomGroupIndex(v17, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v26 = 69;
      v20 = 1;
      goto LABEL_25;
    }
  }
  v20 = 0;
  v26 = 67;
LABEL_25:
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_29:
    v24 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  if ( v26 == 67 )
    return 0;
  return v20;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsOverwriteCv(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  ServantLimitAddEntity_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x9
  bool v20; // w20
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int v26; // [xsp+0h] [xbp-40h]

  if ( (byte_42B24CE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantLimitAddEntity_TypeInfo);
    byte_42B24CE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_35;
    v19 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (ServantLimitAddEntity_c *)v17->klass->_2.typeHierarchy[v19 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B52D50(v17);
LABEL_35:
      sub_B52A5C(v17, v18);
    }
    if ( v17->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteCv(v17, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v26 = 69;
      v20 = 1;
      goto LABEL_25;
    }
  }
  v20 = 0;
  v26 = 67;
LABEL_25:
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_29:
    v24 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  if ( v26 == 67 )
    return 0;
  return v20;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsOverwriteSvtDetailName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  ServantLimitAddEntity_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x9
  bool v20; // w20
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int v26; // [xsp+0h] [xbp-40h]

  if ( (byte_42B24CD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantLimitAddEntity_TypeInfo);
    byte_42B24CD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_35;
    v19 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (ServantLimitAddEntity_c *)v17->klass->_2.typeHierarchy[v19 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B52D50(v17);
LABEL_35:
      sub_B52A5C(v17, v18);
    }
    if ( v17->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteSvtDetailName(v17, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v26 = 69;
      v20 = 1;
      goto LABEL_25;
    }
  }
  v20 = 0;
  v26 = 67;
LABEL_25:
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_29:
    v24 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  if ( v26 == 67 )
    return 0;
  return v20;
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

  if ( (byte_42B24C5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
    byte_42B24C5 = 1;
  }
  PK = ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
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
      sub_B52A5C(Entity, v6);
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
      sub_B52A5C(v7, v8);
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

  if ( (byte_42B24C8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    byte_42B24C8 = 1;
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
    sub_B52A5C(isVoiceList, v9);
  }
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
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

  if ( (byte_42B24C9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    byte_42B24C9 = 1;
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
    sub_B52A5C(isVoiceList, v12);
  }
  *voicePrefix = 0;
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    *voiceId = svtId;
  }
  else
  {
    *voiceId = 0;
  }
}


System_Int32_array *__fastcall ServantLimitAddMaster__getVoiceLimitCountList(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t maxLimitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  System_Int32_array *result; // x0
  ServantLimitAddEntity_o *v11; // x1
  const MethodInfo *v12; // x4
  int32_t i; // w24
  int32_t svtVoiceId; // w25
  int32_t voicePrefix; // w28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x24
  signed __int64 v19; // x25
  int32_t v20; // w3
  int32_t v21; // w23
  int32_t v22; // w26
  unsigned __int64 j; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x9
  unsigned __int64 max_length; // x8
  int32_t missionConditionDetailId; // w9
  __int64 v27; // x0
  System_Collections_Generic_List_Enumerator_T__o v28[2]; // [xsp+0h] [xbp-B0h] BYREF
  int v29; // [xsp+30h] [xbp-80h]
  ServantLimitAddEntity_o *v30; // [xsp+38h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+40h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42B24CA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__get_Current__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
    byte_42B24CA = 1;
  }
  entity = 0LL;
  memset(&v31, 0, sizeof(v31));
  v30 = 0LL;
  v29 = 0;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
  if ( (maxLimitCount & 0x80000000) == 0 )
  {
    for ( i = 0; i <= maxLimitCount; ++i )
    {
      result = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, i, v12);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !entity || !v9 )
          goto LABEL_66;
        svtVoiceId = entity->fields.svtVoiceId;
        voicePrefix = entity->fields.voicePrefix;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v28,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
        v31 = v28[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v31,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
        {
          if ( v31.fields.current )
          {
            if ( svtVoiceId == LODWORD(v31.fields.current[3].klass)
              && voicePrefix == HIDWORD(v31.fields.current[3].klass) )
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
        *((_DWORD *)&v28[1].fields.list + v29++) = 128;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v31,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
        if ( v29 && *((_DWORD *)&v28[0].fields.current + v29 + 1) == 128 )
          --v29;
        v11 = entity;
        if ( entity )
        {
          v16 = v9;
LABEL_24:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
        }
      }
      else if ( !i )
      {
        if ( !v9 )
          goto LABEL_66;
        v16 = v9;
        v11 = 0LL;
        goto LABEL_24;
      }
    }
  }
  if ( costumeIds )
  {
    v17 = *(_QWORD *)&costumeIds->max_length;
    if ( v17 )
    {
      if ( (int)v17 >= 1 )
      {
        if ( (_DWORD)v17 )
        {
          v18 = 0LL;
          v19 = (int)v17;
          do
          {
            v20 = costumeIds->m_Items[v18 + 1];
            if ( v20 >= 1 )
            {
              result = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &v30, svtId, v20, v12);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                if ( !v30 || !v9 )
                  goto LABEL_66;
                v21 = v30->fields.svtVoiceId;
                v22 = v30->fields.voicePrefix;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  v28,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9,
                  (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
                v31 = v28[0];
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v31,
                          (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
                {
                  if ( v31.fields.current )
                  {
                    if ( v21 == LODWORD(v31.fields.current[3].klass) && v22 == HIDWORD(v31.fields.current[3].klass) )
                    {
LABEL_42:
                      v30 = 0LL;
                      break;
                    }
                  }
                  else if ( v21 == svtId && v22 == 0 )
                  {
                    goto LABEL_42;
                  }
                }
                *((_DWORD *)&v28[1].fields.list + v29++) = 321;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v31,
                  (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
                if ( v29 && *((_DWORD *)&v28[0].fields.current + v29 + 1) == 321 )
                  --v29;
                v11 = v30;
                if ( v30 )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v9,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
              }
            }
            if ( (__int64)++v18 >= v19 )
              goto LABEL_51;
          }
          while ( v18 < costumeIds->max_length );
        }
LABEL_67:
        v27 = sub_B52A88(result);
        sub_B52A28(v27, 0LL);
      }
    }
  }
LABEL_51:
  if ( !v9 || (result = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)v9->fields._size)) == 0LL )
LABEL_66:
    sub_B52A5C(result, v11);
  if ( (int)result->max_length >= 1 )
  {
    for ( j = 0LL; (__int64)j < (int)max_length; ++j )
    {
      if ( j >= (unsigned int)v9->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v24 = v9->fields._items->m_Items[j];
      if ( v24 )
      {
        if ( j >= (unsigned int)v9->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        max_length = result->max_length;
        if ( j >= max_length )
          goto LABEL_67;
        missionConditionDetailId = v24->fields.missionConditionDetailId;
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
    sub_B52A5C(v5, v6);
  return entity->fields.voicePrefix;
}


bool __fastcall ServantLimitAddMaster__preProcess(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantMaster_o **p_servantMaster; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B24C7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B24C7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         Instance,
                                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___),
        this->fields.servantMaster = MasterData_WarQuestSelectionMaster,
        p_servantMaster = &this->fields.servantMaster,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.servantMaster,
          (System_Int32_array **)MasterData_WarQuestSelectionMaster,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (Instance = (DataManager_o *)this->fields.isVoiceList) == 0LL)
    || (System_Collections_Generic_Dictionary_int__bool___Clear(
          (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
          (const MethodInfo_2EF8344 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__),
        (Instance = (DataManager_o *)*p_servantMaster) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
  }
  ServantMaster__MargeServantVoiceId((ServantMaster_o *)Instance, this->fields.isVoiceList, 0LL);
  return 1;
}