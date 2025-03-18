void __fastcall ServantLimitAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4C2282B & 1) == 0 )
  {
    sub_1C3B764(&ServantLimitAddMaster_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_19283/*"freeShopCondMessage"*/, v8);
    byte_4C2282B = 1;
  }
  ServantLimitAddMaster_TypeInfo->static_fields->KEY_SCRIPT_EFFECT_FOLDER = (struct System_String_o *)StringLiteral_19283/*"freeShopCondMessage"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ServantLimitAddMaster_TypeInfo->static_fields,
    StringLiteral_19283/*"freeShopCondMessage"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantLimitAddMaster___ctor(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C22828 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v4);
    byte_4C22828 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_32E5600 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.isVoiceList = v5;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.isVoiceList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    119,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantLimitAddMaster__GetEntity(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22829 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4C22829 = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_329F900 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
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

  if ( (byte_4C22827 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C22827 = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
    sub_1C3B9C0(Instance, v12);
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

  if ( (byte_4C22823 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C3B764(&int_TypeInfo, v12);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C3B764(&StringLiteral_9519/*"OTHER_USER_SORT_PRIORITY_KIND_NONE"*/, v15);
    sub_1C3B764(&StringLiteral_9520/*"OTHER_USER_SORT_PRIORITY_KIND_QP_UP"*/, v16);
    byte_4C22823 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9519/*"OTHER_USER_SORT_PRIORITY_KIND_NONE"*/, 0LL);
        if ( entity )
        {
          v27 = (System_String_o *)Instance;
          OverwriteTDName = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v18);
          return System_String__Format(v27, OverwriteTDName, 0LL);
        }
      }
      else
      {
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9520/*"OTHER_USER_SORT_PRIORITY_KIND_QP_UP"*/, 0LL);
        if ( entity )
        {
          v20 = (System_String_o *)Instance;
          v21 = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v18);
          v30 = tdLv;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v22, v23, v24);
          return System_String__Format_63382984(v20, v21, v25, 0LL);
        }
      }
LABEL_19:
      sub_1C3B9C0(Instance, v18);
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

  if ( (byte_4C22824 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4C22824 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v9);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, 0LL);
    }
    v20 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1C3B9C0(0LL, v21);
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
    v25 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4C22826 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4C22826 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v9);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, 0LL);
    }
    v20 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1C3B9C0(0LL, v21);
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
    v25 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4C22825 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4C22825 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_ServantLimitAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v9);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitAddEntity__TypeInfo, 0LL);
    }
    v20 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1C3B9C0(0LL, v21);
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
    v25 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4C2282A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__, entity);
    byte_4C2282A = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
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
      sub_1C3B9C0(v5, v6);
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
      sub_1C3B9C0(v7, v8);
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

  if ( (byte_4C22820 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, *(_QWORD *)&svtId);
    byte_4C22820 = 1;
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
    sub_1C3B9C0(isVoiceList, v9);
  }
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_32E61D4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
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

  if ( (byte_4C22821 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, voiceId);
    byte_4C22821 = 1;
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
    sub_1C3B9C0(isVoiceList, v12);
  }
  *voicePrefix = 0;
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_32E61D4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
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
  MethodInfo *v21; // x4
  int32_t i; // w24
  int64_t v23; // x2
  int32_t v24; // w3
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t svtVoiceId; // w25
  int32_t voicePrefix; // w29
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  PartyOrganizationUtility_o *v34; // x0
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x8
  System_Collections_Generic_List_object__o *v40; // x0
  __int64 v41; // x8
  __int64 v42; // x25
  unsigned __int64 v43; // x23
  int32_t v44; // w3
  int32_t v45; // w24
  int32_t v46; // w29
  int64_t v47; // x2
  int32_t v48; // w3
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_Int32_array *v56; // x20
  unsigned __int64 j; // x21
  unsigned __int64 max_length; // x8
  int32_t bounds_high; // w9
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+10h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *v62; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+30h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C22822 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__get_Current__, v10);
    sub_1C3B764(&int___TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Count__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__, v16);
    sub_1C3B764(&System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo, v17);
    byte_4C22822 = 1;
  }
  entity = 0LL;
  memset(&v63, 0, sizeof(v63));
  v62 = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v61,
          v18,
          (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
        v63 = v61;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v63,
                  (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
        {
          if ( v63.fields._current )
          {
            if ( svtVoiceId == LODWORD(v63.fields._current[3].klass)
              && voicePrefix == HIDWORD(v63.fields._current[3].klass) )
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
          &v63,
          (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
        v20 = (Il2CppObject *)entity;
        if ( entity )
        {
          items = v18->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_67;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v39 = v31[4];
            v40 = v18;
LABEL_28:
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              v20,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v39 + 192) + 112LL));
            continue;
          }
          v33 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v20;
          v34 = (PartyOrganizationUtility_o *)(v33 + 4);
LABEL_25:
          sub_1C3B708(v34, (int64_t)v20, v23, v24, (System_String_o *)v21, v25, v26, v27);
        }
      }
      else if ( !i )
      {
        if ( !v18 )
          goto LABEL_67;
        v35 = v18->fields._items;
        v36 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
        ++v18->fields._version;
        if ( !v35 )
          goto LABEL_67;
        v37 = v18->fields._size;
        if ( (unsigned int)v37 >= v35->max_length )
        {
          v39 = v36[4];
          v40 = v18;
          v20 = 0LL;
          goto LABEL_28;
        }
        v38 = &v35->obj.klass + v37;
        v18->fields._size = v37 + 1;
        v38[4] = 0LL;
        v34 = (PartyOrganizationUtility_o *)(v38 + 4);
        v20 = 0LL;
        goto LABEL_25;
      }
    }
  }
  if ( costumeIds )
  {
    v41 = *(_QWORD *)&costumeIds->max_length;
    if ( v41 )
    {
      if ( (int)v41 >= 1 )
      {
        v42 = (unsigned int)*(_QWORD *)&costumeIds->max_length;
        if ( (unsigned int)*(_QWORD *)&costumeIds->max_length )
        {
          v43 = 0LL;
          do
          {
            v44 = costumeIds->m_Items[v43 + 1];
            if ( v44 >= 1 )
            {
              Item = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &v62, svtId, v44, v21);
              if ( ((unsigned __int8)Item & 1) != 0 )
              {
                if ( !v62 || !v18 )
                  goto LABEL_67;
                v45 = v62->fields.svtVoiceId;
                v46 = v62->fields.voicePrefix;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v61,
                  v18,
                  (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
                v63 = v61;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v63,
                          (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
                {
                  if ( v63.fields._current )
                  {
                    if ( v45 == LODWORD(v63.fields._current[3].klass) && v46 == HIDWORD(v63.fields._current[3].klass) )
                    {
LABEL_46:
                      v62 = 0LL;
                      break;
                    }
                  }
                  else if ( v45 == svtId && v46 == 0 )
                  {
                    goto LABEL_46;
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v63,
                  (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
                v20 = (Il2CppObject *)v62;
                if ( v62 )
                {
                  v52 = v18->fields._items;
                  v53 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
                  ++v18->fields._version;
                  if ( !v52 )
                    goto LABEL_67;
                  v54 = v18->fields._size;
                  if ( (unsigned int)v54 >= v52->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v18,
                      v20,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v55 = &v52->obj.klass + v54;
                    v18->fields._size = v54 + 1;
                    v55[4] = (Il2CppClass *)v20;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)(v55 + 4),
                      (int64_t)v20,
                      v47,
                      v48,
                      (System_String_o *)v21,
                      v49,
                      v50,
                      v51);
                  }
                }
              }
            }
            if ( ++v43 == v42 )
              goto LABEL_55;
          }
          while ( v43 < costumeIds->max_length );
        }
LABEL_68:
        sub_1C3B9C8(Item, v20);
      }
    }
  }
LABEL_55:
  if ( !v18 || (Item = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, (unsigned int)v18->fields._size)) == 0LL )
LABEL_67:
    sub_1C3B9C0(Item, v20);
  v56 = Item;
  if ( (int)Item->max_length >= 1 )
  {
    for ( j = 0LL; (__int64)j < (int)max_length; ++j )
    {
      Item = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                     v18,
                                     j,
                                     (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
      if ( Item )
      {
        Item = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                       v18,
                                       j,
                                       (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
        if ( !Item )
          goto LABEL_67;
        max_length = v56->max_length;
        if ( j >= max_length )
          goto LABEL_68;
        bounds_high = HIDWORD(Item->bounds);
      }
      else
      {
        max_length = v56->max_length;
        if ( j >= max_length )
          goto LABEL_68;
        bounds_high = 0;
      }
      v56->m_Items[j + 1] = bounds_high;
    }
  }
  return v56;
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
    sub_1C3B9C0(v5, v6);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4C2281F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C2281F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___),
        this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object,
        p_servantMaster = &this->fields.servantMaster,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.servantMaster,
          (int64_t)MasterData_object,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        (Instance = (DataManager_o *)this->fields.isVoiceList) == 0LL)
    || (System_Collections_Generic_Dictionary_int__bool___Clear(
          (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
          (const MethodInfo_32E6168 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__),
        (Instance = (DataManager_o *)*p_servantMaster) == 0LL) )
  {
    sub_1C3B9C0(Instance, v6);
  }
  ServantMaster__MargeServantVoiceId((ServantMaster_o *)Instance, this->fields.isVoiceList, v15);
  return 1;
}