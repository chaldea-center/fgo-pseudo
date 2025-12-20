void ServantLimitAddMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2D218 & 1) == 0 )
  {
    sub_1C94098(&ServantLimitAddMaster_TypeInfo);
    sub_1C94098(&StringLiteral_19050/*"effectFolder"*/);
    byte_4D2D218 = 1;
  }
  ServantLimitAddMaster_TypeInfo->static_fields->KEY_SCRIPT_EFFECT_FOLDER = (struct System_String_o *)StringLiteral_19050/*"effectFolder"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantLimitAddMaster_TypeInfo->static_fields,
    StringLiteral_19050/*"effectFolder"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void ServantLimitAddMaster___ctor(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2D215 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    byte_4D2D215 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v3,
    (const MethodInfo_34A56A0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.isVoiceList = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.isVoiceList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    119,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
}


int32_t ServantLimitAddMaster__GetBattleCharaId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t v5; // w19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v5 = svtId;
  entity = 0;
  v6 = ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4);
  if ( v6 )
  {
    if ( !entity )
      sub_1C942F0(v6, v7);
    return *(_DWORD *)((char *)&off_18 + (_QWORD)entity);
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *ServantLimitAddMaster__GetEntity(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D216 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
    byte_4D2D216 = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_345FF78 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
}


System_Int32_array *ServantLimitAddMaster__GetLimitAddIndividuality(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t LimitCountByDispLimit; // w20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct System_Int32_array *individuality; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2D214 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D214 = 1;
  }
  entity = 0;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(
                               (ServantLimitAddMaster_o *)Instance,
                               &entity,
                               svtId,
                               LimitCountByDispLimit,
                               v11);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_1C942F0(Instance, v10);
  individuality = entity->fields.individuality;
  if ( !individuality )
    return 0;
  if ( individuality->max_length )
    return entity->fields.individuality;
  else
    return 0;
}


System_String_o *ServantLimitAddMaster__GetOverwriteSkillName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t skillId,
        System_String_o *defaultSkillName,
        const MethodInfo *method)
{
  System_String_o *v7; // x19
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v7 = defaultSkillName;
  entity = 0;
  if ( ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, (const MethodInfo *)defaultSkillName) )
  {
    if ( !entity )
      sub_1C942F0(0, v8);
    return ServantLimitAddEntity__GetOverwriteSkillName(entity, skillId, v7, v9);
  }
  return v7;
}


System_String_o *ServantLimitAddMaster__GetOverwriteTDName(
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
  int32_t v21; // [xsp+4h] [xbp-4Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2D210 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_9384/*"NP_NAME"*/);
    sub_1C94098(&StringLiteral_9385/*"NP_NAME_LEVEL"*/);
    byte_4D2D210 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_19;
  if ( ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0)
    && ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v13) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_19;
    if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, v12) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( tdLv < 1 )
      {
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9384/*"NP_NAME"*/, 0);
        if ( entity )
        {
          v18 = (System_String_o *)Instance;
          OverwriteTDName = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v12);
          return System_String__Format(v18, OverwriteTDName, 0);
        }
      }
      else
      {
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9385/*"NP_NAME_LEVEL"*/, 0);
        if ( entity )
        {
          v14 = (System_String_o *)Instance;
          v15 = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v12);
          v21 = tdLv;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
          return System_String__Format_64459052(v14, v15, v16, 0);
        }
      }
LABEL_19:
      sub_1C942F0(Instance, v12);
    }
  }
  return orginalTDName;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitAddMaster__IsContainRadomGroupIndex(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantLimitAddEntity_o *v17; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4D2D211 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2D211 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitAddEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_16:
      v16 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, 0);
    }
    v17 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1C942F0(0, v18);
    if ( v17->fields.svtId == svtId && ServantLimitAddEntity__GetRandomGroupIndex(v17, v18) )
      goto LABEL_23;
  }
  v12 = 0;
LABEL_23:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_27;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_27:
    v22 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitAddMaster__IsOverwriteCv(ServantLimitAddMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantLimitAddEntity_o *v17; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4D2D213 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2D213 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitAddEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_16:
      v16 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, 0);
    }
    v17 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1C942F0(0, v18);
    if ( v17->fields.svtId == svtId && ServantLimitAddEntity__IsOverwriteCv(v17, v18) )
      goto LABEL_23;
  }
  v12 = 0;
LABEL_23:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_27;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_27:
    v22 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitAddMaster__IsOverwriteSvtDetailName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantLimitAddEntity_o *v17; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4D2D212 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2D212 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitAddEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_16:
      v16 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, 0);
    }
    v17 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1C942F0(0, v18);
    if ( v17->fields.svtId == svtId && ServantLimitAddEntity__IsOverwriteSvtDetailName(v17, v18) )
      goto LABEL_23;
  }
  v12 = 0;
LABEL_23:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_27;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_27:
    v22 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitAddMaster__TryGetEntity(
        ServantLimitAddMaster_o *this,
        ServantLimitAddEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D217 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
    byte_4D2D217 = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
}


System_String_o *ServantLimitAddMaster__getBattleChrId(
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
      sub_1C942F0(v5, v6);
    battleCharaId = entity->fields.battleCharaId;
  }
  return System_Int32__ToString((int32_t)&battleCharaId, 0);
}


void ServantLimitAddMaster__getCostumeId(
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

  entity = 0;
  v7 = ServantLimitAddMaster__TryGetEntity(this, &entity, *svtId, *imageLimitCount, v4);
  if ( v7 )
  {
    v9 = entity;
    if ( !entity )
      sub_1C942F0(v7, v8);
    *svtId = entity->fields.battleCharaId;
    fileConvertLimitCount = v9->fields.fileConvertLimitCount;
  }
  else
  {
    fileConvertLimitCount = 0;
  }
  *imageLimitCount = fileConvertLimitCount;
}


int32_t ServantLimitAddMaster__getScriptIntValue(
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


int32_t ServantLimitAddMaster__getVoiceId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_Dictionary_int__bool__o *isVoiceList; // x0
  __int64 v9; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2D20D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    byte_4D2D20D = 1;
  }
  entity = 0;
  isVoiceList = (System_Collections_Generic_Dictionary_int__bool__o *)ServantLimitAddMaster__TryGetEntity(
                                                                        this,
                                                                        &entity,
                                                                        svtId,
                                                                        limitCount,
                                                                        v4);
  if ( ((unsigned __int8)isVoiceList & 1) != 0 )
  {
    if ( entity )
      return *(int *)((char *)&dword_30 + (_QWORD)entity);
LABEL_10:
    sub_1C942F0(isVoiceList, v9);
  }
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_34A6274 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    return svtId;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantLimitAddMaster__getVoiceIndex(
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

  if ( (byte_4D2D20E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    byte_4D2D20E = 1;
  }
  entity = 0;
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
      *voiceId = *(int *)((char *)&dword_30 + (_QWORD)entity);
      *voicePrefix = *(_DWORD *)((char *)&word_34 + (_QWORD)v13);
      return;
    }
LABEL_10:
    sub_1C942F0(isVoiceList, v12);
  }
  *voicePrefix = 0;
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_34A6274 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    *voiceId = svtId;
  }
  else
  {
    *voiceId = 0;
  }
}


System_Int32_array *ServantLimitAddMaster__getVoiceLimitCountList(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t maxLimitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x1
  MethodInfo *v12; // x4
  int32_t i; // w24
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t svtVoiceId; // w25
  int32_t voicePrefix; // w29
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  GrandQuestFolderBoardItem_o *v25; // x0
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  __int64 v30; // x8
  System_Collections_Generic_List_object__o *v31; // x0
  il2cpp_array_size_t max_length; // x8
  __int64 v33; // x25
  unsigned __int64 v34; // x23
  int32_t v35; // w3
  int32_t v36; // w24
  int32_t v37; // w29
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  Il2CppObject *v47; // x20
  unsigned __int64 j; // x21
  unsigned __int64 monitor_low; // x8
  int klass_high; // w9
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+10h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *v53; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+30h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4D2D20F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__get_Current__);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
    byte_4D2D20F = 1;
  }
  entity = 0;
  memset(&v54, 0, sizeof(v54));
  v53 = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
  if ( (maxLimitCount & 0x80000000) == 0 )
  {
    for ( i = 0; i <= maxLimitCount; ++i )
    {
      Item = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, i, v12);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( !entity || !v9 )
          goto LABEL_67;
        svtVoiceId = entity->fields.svtVoiceId;
        voicePrefix = entity->fields.voicePrefix;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v52,
          v9,
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
        v54 = v52;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v54,
                  (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
        {
          if ( v54.fields._current )
          {
            if ( svtVoiceId == LODWORD(v54.fields._current[3].klass)
              && voicePrefix == HIDWORD(v54.fields._current[3].klass) )
            {
LABEL_15:
              entity = 0;
              break;
            }
          }
          else if ( svtVoiceId == svtId && voicePrefix == 0 )
          {
            goto LABEL_15;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v54,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
        v11 = (Il2CppObject *)entity;
        if ( entity )
        {
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_67;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v22[4];
            v31 = v9;
LABEL_28:
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              v11,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30 + 192) + 112LL));
            continue;
          }
          v24 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v11;
          v25 = (GrandQuestFolderBoardItem_o *)(v24 + 4);
LABEL_25:
          sub_1C9403C(v25, (int32_t)v11, v14, v15, (System_String_o *)v12, v16, v17, v18);
        }
      }
      else if ( !i )
      {
        if ( !v9 )
          goto LABEL_67;
        v26 = v9->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
        ++v9->fields._version;
        if ( !v26 )
          goto LABEL_67;
        v28 = v9->fields._size;
        if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
        {
          v30 = v27[4];
          v31 = v9;
          v11 = 0;
          goto LABEL_28;
        }
        v29 = &v26->obj.klass + v28;
        v9->fields._size = v28 + 1;
        v29[4] = 0;
        v25 = (GrandQuestFolderBoardItem_o *)(v29 + 4);
        LODWORD(v11) = 0;
        goto LABEL_25;
      }
    }
  }
  if ( costumeIds )
  {
    max_length = costumeIds->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v33 = (unsigned int)costumeIds->max_length;
        if ( (unsigned int)costumeIds->max_length )
        {
          v34 = 0;
          do
          {
            v35 = costumeIds->m_Items[v34];
            if ( v35 >= 1 )
            {
              Item = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(this, &v53, svtId, v35, v12);
              if ( ((unsigned __int8)Item & 1) != 0 )
              {
                if ( !v53 || !v9 )
                  goto LABEL_67;
                v36 = v53->fields.svtVoiceId;
                v37 = v53->fields.voicePrefix;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v52,
                  v9,
                  (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
                v54 = v52;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v54,
                          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
                {
                  if ( v54.fields._current )
                  {
                    if ( v36 == LODWORD(v54.fields._current[3].klass) && v37 == HIDWORD(v54.fields._current[3].klass) )
                    {
LABEL_46:
                      v53 = 0;
                      break;
                    }
                  }
                  else if ( v36 == svtId && v37 == 0 )
                  {
                    goto LABEL_46;
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v54,
                  (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
                v11 = (Il2CppObject *)v53;
                if ( v53 )
                {
                  v43 = v9->fields._items;
                  v44 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
                  ++v9->fields._version;
                  if ( !v43 )
                    goto LABEL_67;
                  v45 = v9->fields._size;
                  if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v9,
                      v11,
                      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v46 = &v43->obj.klass + v45;
                    v9->fields._size = v45 + 1;
                    v46[4] = (Il2CppClass *)v11;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)(v46 + 4),
                      (int32_t)v11,
                      v38,
                      v39,
                      (System_String_o *)v12,
                      v40,
                      v41,
                      v42);
                  }
                }
              }
            }
            if ( ++v34 == v33 )
              goto LABEL_55;
          }
          while ( v34 < LODWORD(costumeIds->max_length) );
        }
LABEL_68:
        sub_1C942F8(Item);
      }
    }
  }
LABEL_55:
  if ( !v9 || (Item = (Il2CppObject *)sub_1C94140(int___TypeInfo, (unsigned int)v9->fields._size)) == 0 )
LABEL_67:
    sub_1C942F0(Item, v11);
  v47 = Item;
  if ( SLODWORD(Item[1].monitor) >= 1 )
  {
    for ( j = 0; (__int64)j < (int)monitor_low; ++j )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v9,
               j,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
      if ( Item )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v9,
                 j,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
        if ( !Item )
          goto LABEL_67;
        monitor_low = LODWORD(v47[1].monitor);
        if ( j >= monitor_low )
          goto LABEL_68;
        klass_high = HIDWORD(Item[1].klass);
      }
      else
      {
        monitor_low = LODWORD(v47[1].monitor);
        if ( j >= monitor_low )
          goto LABEL_68;
        klass_high = 0;
      }
      *((_DWORD *)&v47[2].klass + j) = klass_high;
    }
  }
  return (System_Int32_array *)v47;
}


int32_t ServantLimitAddMaster__getVoicePrefix(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  v5 = ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1C942F0(v5, v6);
  return *(_DWORD *)((char *)&word_34 + (_QWORD)entity);
}


bool ServantLimitAddMaster__preProcess(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  struct ServantMaster_o **p_servantMaster; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2D20C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D20C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___),
        this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object,
        p_servantMaster = &this->fields.servantMaster,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.servantMaster,
          (int32_t)MasterData_object,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (Instance = (DataManager_o *)this->fields.isVoiceList) == 0)
    || (System_Collections_Generic_Dictionary_int__bool___Clear(
          (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
          (const MethodInfo_34A6208 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__),
        (Instance = (DataManager_o *)*p_servantMaster) == 0) )
  {
    sub_1C942F0(Instance, v4);
  }
  ServantMaster__MargeServantVoiceId((ServantMaster_o *)Instance, this->fields.isVoiceList, v13);
  return 1;
}