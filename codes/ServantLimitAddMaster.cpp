void __fastcall ServantLimitAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_49BB755 & 1) == 0 )
  {
    sub_1B4CF90(&ServantLimitAddMaster_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_18604/*"effectFolder"*/, v4);
    byte_49BB755 = 1;
  }
  ServantLimitAddMaster_TypeInfo->static_fields->KEY_SCRIPT_EFFECT_FOLDER = (struct System_String_o *)StringLiteral_18604/*"effectFolder"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)ServantLimitAddMaster_TypeInfo->static_fields, StringLiteral_18604/*"effectFolder"*/, v2, v3);
}


void __fastcall ServantLimitAddMaster___ctor(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BB752 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v4);
    byte_49BB752 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_31E79DC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.isVoiceList = v5;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.isVoiceList, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    119,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantLimitAddMaster__GetEntity(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB753 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49BB753 = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31A2454 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  struct System_Int32_array *individuality; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BB751 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1B4CF90(&ImageLimitCount_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49BB751 = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(
                               (ServantLimitAddMaster_o *)Instance,
                               &entity,
                               svtId,
                               LimitCountByDispLimit,
                               v13);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_15:
    sub_1B4D1EC(Instance, v12);
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v27; // x19
  Il2CppObject *OverwriteTDName; // x0
  int32_t v30; // [xsp+4h] [xbp-4Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49BB74D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B4CF90(&int_TypeInfo, v12);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B4CF90(&StringLiteral_9157/*"NP_NAME"*/, v15);
    sub_1B4CF90(&StringLiteral_9158/*"NP_NAME_LEVEL"*/, v16);
    byte_49BB74D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_19;
  if ( ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL)
    && ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v19) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_19;
    if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, v18) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( tdLv < 1 )
      {
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9157/*"NP_NAME"*/, 0LL);
        if ( entity )
        {
          v27 = (System_String_o *)Instance;
          OverwriteTDName = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v18);
          return System_String__Format(v27, OverwriteTDName, 0LL);
        }
      }
      else
      {
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9158/*"NP_NAME_LEVEL"*/, 0LL);
        if ( entity )
        {
          v20 = (System_String_o *)Instance;
          v21 = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v18);
          v30 = tdLv;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v22, v23, v24);
          return System_String__Format_61134760(v20, v21, v25, 0LL);
        }
      }
LABEL_19:
      sub_1B4D1EC(Instance, v18);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v15; // w21
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  ServantLimitAddEntity_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_49BB74E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_49BB74E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v15 & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitAddEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo )
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
      v19 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, 0LL);
    }
    v20 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1B4D1EC(0LL, v21);
    if ( v20->fields.svtId == svtId && ServantLimitAddEntity__GetRandomGroupIndex(v20, v21) )
      goto LABEL_23;
  }
  v15 = 0;
LABEL_23:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_27:
    v25 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v15 & 1;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v15; // w21
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  ServantLimitAddEntity_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_49BB750 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_49BB750 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v15 & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitAddEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo )
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
      v19 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, 0LL);
    }
    v20 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1B4D1EC(0LL, v21);
    if ( v20->fields.svtId == svtId && ServantLimitAddEntity__IsOverwriteCv(v20, v21) )
      goto LABEL_23;
  }
  v15 = 0;
LABEL_23:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_27:
    v25 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v15 & 1;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v15; // w21
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  ServantLimitAddEntity_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_49BB74F & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_49BB74F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v15 & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitAddEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo )
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
      v19 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, 0LL);
    }
    v20 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1B4D1EC(0LL, v21);
    if ( v20->fields.svtId == svtId && ServantLimitAddEntity__IsOverwriteSvtDetailName(v20, v21) )
      goto LABEL_23;
  }
  v15 = 0;
LABEL_23:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_27:
    v25 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v15 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__TryGetEntity(
        ServantLimitAddMaster_o *this,
        ServantLimitAddEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB754 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__, entity);
    byte_49BB754 = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
}


System_String_o *__fastcall ServantLimitAddMaster__getBattleChrId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF
  int32_t battleCharaId; // [xsp+1Ch] [xbp-4h] BYREF

  battleCharaId = svtId;
  v5 = ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4);
  if ( v5 )
  {
    if ( !entity )
      sub_1B4D1EC(v5, v6);
    battleCharaId = entity->fields.battleCharaId;
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
      sub_1B4D1EC(v7, v8);
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

  if ( (byte_49BB74A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, *(_QWORD *)&svtId);
    byte_49BB74A = 1;
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
LABEL_10:
    sub_1B4D1EC(isVoiceList, v9);
  }
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_31E85B0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
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

  if ( (byte_49BB74B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, voiceId);
    byte_49BB74B = 1;
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
LABEL_10:
    sub_1B4D1EC(isVoiceList, v12);
  }
  *voicePrefix = 0;
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_31E85B0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
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
  System_Collections_Generic_List_object__o *v18; // x19
  System_Int32_array *Item; // x0
  Il2CppObject *v20; // x1
  const MethodInfo *v21; // x4
  int32_t i; // w24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t svtVoiceId; // w25
  int32_t voicePrefix; // w29
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CGThumbnailListItem_o *v31; // x0
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  __int64 v36; // x8
  System_Collections_Generic_List_object__o *v37; // x0
  __int64 v38; // x8
  __int64 v39; // x25
  unsigned __int64 v40; // x23
  int32_t v41; // w3
  int32_t v42; // w24
  int32_t v43; // w29
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  System_Int32_array *v50; // x20
  unsigned __int64 j; // x21
  unsigned __int64 max_length; // x8
  int32_t bounds_high; // w9
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+10h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *v56; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+30h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49BB74C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__get_Current__, v10);
    sub_1B4CF90(&int___TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Count__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__, v16);
    sub_1B4CF90(&System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo, v17);
    byte_49BB74C = 1;
  }
  entity = 0LL;
  memset(&v57, 0, sizeof(v57));
  v56 = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
  if ( (maxLimitCount & 0x80000000) == 0 )
  {
    for ( i = 0; i <= maxLimitCount; ++i )
    {
      Item = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, i, v21);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( !entity || !v18 )
          goto LABEL_67;
        svtVoiceId = entity->fields.svtVoiceId;
        voicePrefix = entity->fields.voicePrefix;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v55,
          v18,
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
        v57 = v55;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v57,
                  (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
        {
          if ( v57.fields._current )
          {
            if ( svtVoiceId == LODWORD(v57.fields._current[3].klass)
              && voicePrefix == HIDWORD(v57.fields._current[3].klass) )
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
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v57,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
        v20 = (Il2CppObject *)entity;
        if ( entity )
        {
          items = v18->fields._items;
          v28 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_67;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v36 = v28[4];
            v37 = v18;
LABEL_28:
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              v20,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v36 + 192) + 112LL));
            continue;
          }
          v30 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v20;
          v31 = (CGThumbnailListItem_o *)(v30 + 4);
LABEL_25:
          sub_1B4CF34(v31, (int32_t)v20, v23, v24);
        }
      }
      else if ( !i )
      {
        if ( !v18 )
          goto LABEL_67;
        v32 = v18->fields._items;
        v33 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
        ++v18->fields._version;
        if ( !v32 )
          goto LABEL_67;
        v34 = v18->fields._size;
        if ( (unsigned int)v34 >= v32->max_length )
        {
          v36 = v33[4];
          v37 = v18;
          v20 = 0LL;
          goto LABEL_28;
        }
        v35 = &v32->obj.klass + v34;
        v18->fields._size = v34 + 1;
        v35[4] = 0LL;
        v31 = (CGThumbnailListItem_o *)(v35 + 4);
        LODWORD(v20) = 0;
        goto LABEL_25;
      }
    }
  }
  if ( costumeIds )
  {
    v38 = *(_QWORD *)&costumeIds->max_length;
    if ( v38 )
    {
      if ( (int)v38 >= 1 )
      {
        v39 = (unsigned int)*(_QWORD *)&costumeIds->max_length;
        if ( (unsigned int)*(_QWORD *)&costumeIds->max_length )
        {
          v40 = 0LL;
          do
          {
            v41 = costumeIds->m_Items[v40 + 1];
            if ( v41 >= 1 )
            {
              Item = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &v56, svtId, v41, v21);
              if ( ((unsigned __int8)Item & 1) != 0 )
              {
                if ( !v56 || !v18 )
                  goto LABEL_67;
                v42 = v56->fields.svtVoiceId;
                v43 = v56->fields.voicePrefix;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v55,
                  v18,
                  (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
                v57 = v55;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v57,
                          (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
                {
                  if ( v57.fields._current )
                  {
                    if ( v42 == LODWORD(v57.fields._current[3].klass) && v43 == HIDWORD(v57.fields._current[3].klass) )
                    {
LABEL_46:
                      v56 = 0LL;
                      break;
                    }
                  }
                  else if ( v42 == svtId && v43 == 0 )
                  {
                    goto LABEL_46;
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v57,
                  (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
                v20 = (Il2CppObject *)v56;
                if ( v56 )
                {
                  v46 = v18->fields._items;
                  v47 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
                  ++v18->fields._version;
                  if ( !v46 )
                    goto LABEL_67;
                  v48 = v18->fields._size;
                  if ( (unsigned int)v48 >= v46->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v18,
                      v20,
                      *(const MethodInfo_35801DC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v49 = &v46->obj.klass + v48;
                    v18->fields._size = v48 + 1;
                    v49[4] = (Il2CppClass *)v20;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v20, v44, v45);
                  }
                }
              }
            }
            if ( ++v40 == v39 )
              goto LABEL_55;
          }
          while ( v40 < costumeIds->max_length );
        }
LABEL_68:
        sub_1B4D1F4(Item, v20);
      }
    }
  }
LABEL_55:
  if ( !v18 || (Item = (System_Int32_array *)sub_1B4D038(int___TypeInfo, (unsigned int)v18->fields._size)) == 0LL )
LABEL_67:
    sub_1B4D1EC(Item, v20);
  v50 = Item;
  if ( (int)Item->max_length >= 1 )
  {
    for ( j = 0LL; (__int64)j < (int)max_length; ++j )
    {
      Item = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                     v18,
                                     j,
                                     (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
      if ( Item )
      {
        Item = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                       v18,
                                       j,
                                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
        if ( !Item )
          goto LABEL_67;
        max_length = v50->max_length;
        if ( j >= max_length )
          goto LABEL_68;
        bounds_high = HIDWORD(Item->bounds);
      }
      else
      {
        max_length = v50->max_length;
        if ( j >= max_length )
          goto LABEL_68;
        bounds_high = 0;
      }
      v50->m_Items[j + 1] = bounds_high;
    }
  }
  return v50;
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
    sub_1B4D1EC(v5, v6);
  return entity->fields.voicePrefix;
}


bool __fastcall ServantLimitAddMaster__preProcess(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  struct ServantMaster_o **p_servantMaster; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49BB749 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49BB749 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___),
        this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object,
        p_servantMaster = &this->fields.servantMaster,
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.servantMaster, (int32_t)MasterData_object, v9, v10),
        (Instance = (DataManager_o *)this->fields.isVoiceList) == 0LL)
    || (System_Collections_Generic_Dictionary_int__bool___Clear(
          (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
          (const MethodInfo_31E8544 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__),
        (Instance = (DataManager_o *)*p_servantMaster) == 0LL) )
  {
    sub_1B4D1EC(Instance, v6);
  }
  ServantMaster__MargeServantVoiceId((ServantMaster_o *)Instance, this->fields.isVoiceList, v11);
  return 1;
}