void __fastcall ServantLimitAddMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EAE2D & 1) == 0 )
  {
    sub_B5D5C4(&ServantLimitAddMaster_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18495/*"effectFolder"*/, v8, v9, v10);
    byte_42EAE2D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantLimitAddMaster_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18495/*"effectFolder"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18495/*"effectFolder"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantLimitAddMaster___ctor(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EAE23 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v8, v9, v10);
    byte_42EAE23 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v11,
    (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.isVoiceList = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isVoiceList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    114,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantLimitAddMaster__GetEntity(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EAE21 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__,
      svtId,
      limitCount,
      method);
    byte_42EAE21 = 1;
  }
  PK = ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantLimitAddMaster__GetLimitAddIndividuality(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t LimitCountByDispLimit; // w20
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  struct System_Int32_array *individuality; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EAE2C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitAddMaster___,
      svtId,
      limitCount,
      *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EAE2C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)ServantLimitAddMaster__TryGetEntity(
                                (ServantLimitAddMaster_o *)Instance,
                                &entity,
                                svtId,
                                LimitCountByDispLimit,
                                v17);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_16:
    sub_B5D69C(Instance, v16);
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
  System_String_o *v7; // x20
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x4
  System_String_o *v32; // x20
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x0
  System_String_o *v36; // x19
  Il2CppObject *OverwriteTDName; // x0
  int32_t v39; // [xsp+4h] [xbp-3Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v7 = orginalTDName;
  if ( (byte_42EAE28 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, svtId, dispLimitCount, orginalTDName);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9479/*"NP_NAME"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_9480/*"NP_NAME_LEVEL"*/, v26, v27, v28);
    byte_42EAE28 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_23;
  if ( ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL)
    && ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v31) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_23;
    if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, v30) )
    {
      if ( tdLv < 1 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9479/*"NP_NAME"*/, 0LL);
        if ( entity )
        {
          v36 = (System_String_o *)Instance;
          OverwriteTDName = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v30);
          return System_String__Format(v36, OverwriteTDName, 0LL);
        }
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9480/*"NP_NAME_LEVEL"*/, 0LL);
        if ( entity )
        {
          v32 = (System_String_o *)Instance;
          v33 = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v30);
          v39 = tdLv;
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
          return System_String__Format_44573324(v32, v33, v34, 0LL);
        }
      }
LABEL_23:
      sub_B5D69C(Instance, v30);
    }
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsContainRadomGroupIndex(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  ServantLimitAddEntity_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  bool v33; // w20
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-40h]

  if ( (byte_42EAE29 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantLimitAddEntity_TypeInfo, v15, v16, v17);
    byte_42EAE29 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                       Enumerator,
                                       *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_35;
    v32 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (ServantLimitAddEntity_c *)v30->klass->_2.typeHierarchy[v32 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B5D990(v30);
LABEL_35:
      sub_B5D69C(v30, v31);
    }
    if ( v30->fields.svtId == svtId
      && ServantLimitAddEntity__GetRandomGroupIndex(v30, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v39 = 69;
      v33 = 1;
      goto LABEL_25;
    }
  }
  v33 = 0;
  v39 = 67;
LABEL_25:
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 67 )
    return 0;
  return v33;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsOverwriteCv(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  ServantLimitAddEntity_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  bool v33; // w20
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-40h]

  if ( (byte_42EAE2B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantLimitAddEntity_TypeInfo, v15, v16, v17);
    byte_42EAE2B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                       Enumerator,
                                       *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_35;
    v32 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (ServantLimitAddEntity_c *)v30->klass->_2.typeHierarchy[v32 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B5D990(v30);
LABEL_35:
      sub_B5D69C(v30, v31);
    }
    if ( v30->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteCv(v30, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v39 = 69;
      v33 = 1;
      goto LABEL_25;
    }
  }
  v33 = 0;
  v39 = 67;
LABEL_25:
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 67 )
    return 0;
  return v33;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsOverwriteSvtDetailName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  ServantLimitAddEntity_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  bool v33; // w20
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-40h]

  if ( (byte_42EAE2A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantLimitAddEntity_TypeInfo, v15, v16, v17);
    byte_42EAE2A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                       Enumerator,
                                       *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_35;
    v32 = *(&ServantLimitAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (ServantLimitAddEntity_c *)v30->klass->_2.typeHierarchy[v32 - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_B5D990(v30);
LABEL_35:
      sub_B5D69C(v30, v31);
    }
    if ( v30->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteSvtDetailName(v30, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      v39 = 69;
      v33 = 1;
      goto LABEL_25;
    }
  }
  v33 = 0;
  v39 = 67;
LABEL_25:
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 67 )
    return 0;
  return v33;
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

  if ( (byte_42EAE22 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&limitCount);
    byte_42EAE22 = 1;
  }
  PK = ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
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
      sub_B5D69C(Entity, v6);
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
      sub_B5D69C(v7, v8);
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

  if ( (byte_42EAE25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, svtId, limitCount, method);
    byte_42EAE25 = 1;
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
    sub_B5D69C(isVoiceList, v9);
  }
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
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

  if ( (byte_42EAE26 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__,
      (_DWORD)voiceId,
      (_DWORD)voicePrefix,
      *(_QWORD *)&svtId);
    byte_42EAE26 = 1;
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
    sub_B5D69C(isVoiceList, v12);
  }
  *voicePrefix = 0;
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x19
  System_Int32_array *result; // x0
  ServantLimitAddEntity_o *v38; // x1
  const MethodInfo *v39; // x4
  int32_t i; // w24
  int32_t svtVoiceId; // w25
  int32_t voicePrefix; // w28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x0
  __int64 v44; // x8
  unsigned __int64 v45; // x24
  signed __int64 v46; // x25
  int32_t v47; // w3
  int32_t v48; // w23
  int32_t v49; // w26
  unsigned __int64 j; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x9
  unsigned __int64 max_length; // x8
  int32_t missionConditionDetailId; // w9
  __int64 v54; // x0
  System_Collections_Generic_List_Enumerator_T__o v55[2]; // [xsp+0h] [xbp-B0h] BYREF
  int v56; // [xsp+30h] [xbp-80h]
  ServantLimitAddEntity_o *v57; // [xsp+38h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+40h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42EAE27 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__,
      svtId,
      maxLimitCount,
      costumeIds);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__get_Current__, v12, v13, v14);
    sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo, v33, v34, v35);
    byte_42EAE27 = 1;
  }
  entity = 0LL;
  memset(&v58, 0, sizeof(v58));
  v57 = 0LL;
  v56 = 0;
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
  if ( (maxLimitCount & 0x80000000) == 0 )
  {
    for ( i = 0; i <= maxLimitCount; ++i )
    {
      result = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, i, v39);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !entity || !v36 )
          goto LABEL_66;
        svtVoiceId = entity->fields.svtVoiceId;
        voicePrefix = entity->fields.voicePrefix;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v55,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v36,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
        v58 = v55[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v58,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
        {
          if ( v58.fields.current )
          {
            if ( svtVoiceId == LODWORD(v58.fields.current[3].klass)
              && voicePrefix == HIDWORD(v58.fields.current[3].klass) )
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
        *((_DWORD *)&v55[1].fields.list + v56++) = 128;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v58,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
        if ( v56 && *((_DWORD *)&v55[0].fields.current + v56 + 1) == 128 )
          --v56;
        v38 = entity;
        if ( entity )
        {
          v43 = v36;
LABEL_24:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v43,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
        }
      }
      else if ( !i )
      {
        if ( !v36 )
          goto LABEL_66;
        v43 = v36;
        v38 = 0LL;
        goto LABEL_24;
      }
    }
  }
  if ( costumeIds )
  {
    v44 = *(_QWORD *)&costumeIds->max_length;
    if ( v44 )
    {
      if ( (int)v44 >= 1 )
      {
        if ( (_DWORD)v44 )
        {
          v45 = 0LL;
          v46 = (int)v44;
          do
          {
            v47 = costumeIds->m_Items[v45 + 1];
            if ( v47 >= 1 )
            {
              result = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &v57, svtId, v47, v39);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                if ( !v57 || !v36 )
                  goto LABEL_66;
                v48 = v57->fields.svtVoiceId;
                v49 = v57->fields.voicePrefix;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  v55,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v36,
                  (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
                v58 = v55[0];
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v58,
                          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
                {
                  if ( v58.fields.current )
                  {
                    if ( v48 == LODWORD(v58.fields.current[3].klass) && v49 == HIDWORD(v58.fields.current[3].klass) )
                    {
LABEL_42:
                      v57 = 0LL;
                      break;
                    }
                  }
                  else if ( v48 == svtId && v49 == 0 )
                  {
                    goto LABEL_42;
                  }
                }
                *((_DWORD *)&v55[1].fields.list + v56++) = 321;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v58,
                  (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
                if ( v56 && *((_DWORD *)&v55[0].fields.current + v56 + 1) == 321 )
                  --v56;
                v38 = v57;
                if ( v57 )
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v36,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
              }
            }
            if ( (__int64)++v45 >= v46 )
              goto LABEL_51;
          }
          while ( v45 < costumeIds->max_length );
        }
LABEL_67:
        v54 = sub_B5D6C8(result);
        sub_B5D668(v54, 0LL);
      }
    }
  }
LABEL_51:
  if ( !v36 || (result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v36->fields._size)) == 0LL )
LABEL_66:
    sub_B5D69C(result, v38);
  if ( (int)result->max_length >= 1 )
  {
    for ( j = 0LL; (__int64)j < (int)max_length; ++j )
    {
      if ( j >= (unsigned int)v36->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v51 = v36->fields._items->m_Items[j];
      if ( v51 )
      {
        if ( j >= (unsigned int)v36->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        max_length = result->max_length;
        if ( j >= max_length )
          goto LABEL_67;
        missionConditionDetailId = v51->fields.missionConditionDetailId;
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
    sub_B5D69C(v5, v6);
  return entity->fields.voicePrefix;
}


bool __fastcall ServantLimitAddMaster__preProcess(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantMaster_o **p_servantMaster; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EAE24 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EAE24 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         Instance,
                                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___),
        this->fields.servantMaster = MasterData_WarQuestSelectionMaster,
        p_servantMaster = &this->fields.servantMaster,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.servantMaster,
          (System_Int32_array **)MasterData_WarQuestSelectionMaster,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        (Instance = (DataManager_o *)this->fields.isVoiceList) == 0LL)
    || (System_Collections_Generic_Dictionary_int__bool___Clear(
          (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
          (const MethodInfo_2F03700 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__),
        (Instance = (DataManager_o *)*p_servantMaster) == 0LL) )
  {
    sub_B5D69C(Instance, v12);
  }
  ServantMaster__MargeServantVoiceId((ServantMaster_o *)Instance, this->fields.isVoiceList, 0LL);
  return 1;
}