void ServantTreasureDvcMaster___ctor(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971356 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
    byte_5971356 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    8,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__GetEntity(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971354 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
    byte_5971354 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDvcEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantTreasureDvcMaster__TryGetEntity(
        ServantTreasureDvcMaster_o *this,
        ServantTreasureDvcEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5971355 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
    byte_5971355 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
}


ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getEntityFromIDID(
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  ServantTreasureDvcEntity_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  ServantTreasureDvcEntity_o *v23; // x21
  __int64 naturalAligment; // x9
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_IEnumerator_T__o *v30; // [xsp+18h] [xbp-38h]

  if ( (byte_5971359 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&ServantTreasureDvcEntity_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971359 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0
    || (Instance = (DataManager_o *)Instance->fields.datalist) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  v30 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v8);
  for ( i = Enumerator; ; i = v30 )
  {
    klass = i->klass;
    v11 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_12;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v13 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            i,
            *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    if ( !v30 )
      sub_2213CDC(v14, v15);
    v16 = v30->klass;
    v17 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_20;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_20:
      v19 = sub_224BC3C(v30, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    v20 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                          v30,
                                          *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( !v20 )
      goto LABEL_40;
    naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment;
    if ( v20->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantTreasureDvcEntity_c *)v20->klass->_2.typeHierarchy[naturalAligment - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_221405C(v20, ServantTreasureDvcEntity_TypeInfo, v22);
LABEL_40:
      sub_2213CDC(v20, v21);
    }
    if ( v20->fields.svtId == svtId && v20->fields.treasureDeviceId == dvcId )
      goto LABEL_30;
  }
  v23 = 0;
LABEL_30:
  if ( v30 )
  {
    v25 = v30->klass;
    v26 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_35;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_35:
      v28 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(v30, *(_QWORD *)(v28 + 8));
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getEntityFromSvtIdCondQuestIdAndPhase(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t condQuestId,
        int32_t condQuestPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  ServantTreasureDvcEntity_o *v23; // x0
  __int64 v24; // x1
  ServantTreasureDvcEntity_o *v25; // x22
  __int64 naturalAligment; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // [xsp+18h] [xbp-48h]

  if ( (byte_597135C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&ServantTreasureDvcEntity_TypeInfo);
    byte_597135C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  v32 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v11);
  for ( i = Enumerator; ; i = v32 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v32 )
      sub_2213CDC(v17, v18);
    v19 = v32->klass;
    v20 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_224BC3C(v32, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    v23 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                          v32,
                                          *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23
      || (naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment,
          v23->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (ServantTreasureDvcEntity_c *)v23->klass->_2.typeHierarchy[naturalAligment - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_2213CDC(v23, v24);
    }
    if ( v23->fields.svtId == svtId
      && v23->fields.condQuestId == condQuestId
      && v23->fields.condQuestPhase == condQuestPhase )
    {
      goto LABEL_29;
    }
  }
  v25 = 0;
LABEL_29:
  if ( v32 )
  {
    v27 = v32->klass;
    v28 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_34;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_34:
      v30 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(v32, *(_QWORD *)(v30 + 8));
  }
  return v25;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  ServantTreasureDvcEntity_o *v21; // x0
  __int64 v22; // x1
  ServantTreasureDvcEntity_o *v23; // x21
  __int64 naturalAligment; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_IEnumerator_T__o *v30; // [xsp+18h] [xbp-38h]

  if ( (byte_597135A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&ServantTreasureDvcEntity_TypeInfo);
    byte_597135A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  v30 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v30 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v30 )
      sub_2213CDC(v15, v16);
    v17 = v30->klass;
    v18 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v30, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    v21 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                          v30,
                                          *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21
      || (naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment,
          v21->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (ServantTreasureDvcEntity_c *)v21->klass->_2.typeHierarchy[naturalAligment - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_2213CDC(v21, v22);
    }
    if ( v21->fields.svtId == svtId && v21->fields.treasureDeviceId == dvcId )
      goto LABEL_28;
  }
  v23 = 0;
LABEL_28:
  if ( v30 )
  {
    v25 = v30->klass;
    v26 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_33;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_33:
      v28 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(v30, *(_QWORD *)(v28 + 8));
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        bool isLowPriorityPick,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x22
  int *v11; // x23
  ServantTreasureDvcEntity_o *v12; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  int *v23; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_IEnumerator_T__o *v30; // [xsp+18h] [xbp-48h]

  if ( (byte_597135B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&ServantTreasureDvcEntity_TypeInfo);
    byte_597135B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  v30 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  v10 = Enumerator;
  v11 = 0;
LABEL_6:
  v12 = (ServantTreasureDvcEntity_o *)v11;
  while ( 1 )
  {
    klass = v10->klass;
    v14 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v16 = sub_224BC3C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v10,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v30 )
      sub_2213CDC(v17, v18);
    v19 = v30->klass;
    v20 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_19:
      v22 = sub_224BC3C(v30, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    v23 = (int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                   v30,
                   *(_QWORD *)(v22 + 8));
    v11 = v23;
    if ( v23 )
    {
      naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) >= (unsigned int)naturalAligment
        && *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * naturalAligment - 8) == ServantTreasureDvcEntity_TypeInfo
        && v23[4] == svtId )
      {
        if ( !isLowPriorityPick || v23[6] <= 0 )
        {
          v10 = v30;
          goto LABEL_6;
        }
        v12 = (ServantTreasureDvcEntity_o *)v23;
        break;
      }
    }
    v10 = v30;
  }
  if ( v30 )
  {
    v25 = v30->klass;
    v26 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_35;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_35:
      v28 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(v30, *(_QWORD *)(v28 + 8));
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_array *ServantTreasureDvcMaster__getEntityListFromIdNum(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971358 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__);
    byte_5971358 = 1;
  }
  listCache = this->fields.listCache;
  value = 0;
  if ( !listCache )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)listCache,
         svtId,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__) )
  {
    return (ServantTreasureDvcEntity_array *)value;
  }
  else
  {
    return 0;
  }
}


ServantTreasureDvcEntity_o *ServantTreasureDvcMaster__getUseEntity(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  ServantTreasureDvcEntity_array *EntityListFromIdNum; // x0
  __int64 v15; // x1
  int32_t v16; // w3
  const MethodInfo *v17; // x7
  unsigned int max_length; // w26
  ServantTreasureDvcEntity_array *v19; // x24
  Il2CppClass **v20; // x8
  ServantTreasureDvcEntity_o *v21; // x25

  EntityListFromIdNum = ServantTreasureDvcMaster__getEntityListFromIdNum(this, svtId, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    max_length = EntityListFromIdNum->max_length;
    v19 = EntityListFromIdNum;
    while ( (--max_length & 0x80000000) == 0 )
    {
      if ( max_length >= LODWORD(v19->max_length) )
        sub_2213CE4(EntityListFromIdNum);
      v20 = &v19->obj.klass + max_length;
      v21 = (ServantTreasureDvcEntity_o *)v20[4];
      if ( !v21 )
        sub_2213CDC(EntityListFromIdNum, v15);
      EntityListFromIdNum = (ServantTreasureDvcEntity_array *)ServantTreasureDvcEntity__isUse(
                                                                (ServantTreasureDvcEntity_o *)v20[4],
                                                                userId,
                                                                svtLv,
                                                                v16,
                                                                dispLimitCount,
                                                                friendshipRank,
                                                                beforeClearQuestId,
                                                                v17);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v21;
    }
  }
  return 0;
}


bool ServantTreasureDvcMaster__preProcess(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  __int64 listCache; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t *Enumerator; // x0
  ServantTreasureDvcEntity_c *v6; // x1
  int32_t *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x9
  int *v10; // x10
  __int64 v11; // x0
  int32_t *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t *v19; // x21
  __int64 naturalAligment; // x9
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_List_object__o *v28; // x22
  int32_t v29; // w1
  System_Collections_Generic_List_object__o *v30; // x0
  Il2CppClass *klass; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  void **v34; // x8
  int32_t *v35; // x22
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  ServantTreasureDvcMaster___c_c *v41; // x0
  int32_t key; // w22
  Il2CppObject *v43; // x21
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v46; // x24
  struct ServantTreasureDvcMaster___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *v54; // x23
  System_Object_array *v55; // x0
  __int64 v56; // x1
  int32_t monitor; // w2
  int v58; // w8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+60h] [xbp-70h] BYREF
  int32_t *v63; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_5971357 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_2213A60(&ServantTreasureDvcEntity_TypeInfo);
    sub_2213A60(&Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__);
    sub_2213A60(&ServantTreasureDvcMaster___c_TypeInfo);
    byte_5971357 = 1;
  }
  listCache = (__int64)this->fields.listCache;
  value = 0;
  v63 = 0;
  memset(&v61, 0, sizeof(v61));
  if ( !listCache )
    goto LABEL_64;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)listCache,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
  listCache = (__int64)this->fields.list;
  if ( !listCache )
    goto LABEL_64;
  Enumerator = (int32_t *)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                            (System_Collections_ObjectModel_Collection_T__o *)listCache,
                            (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  v63 = Enumerator;
  v60.fields._dictionary = 0;
  *(_QWORD *)&v60.fields._version = &v63;
  if ( !Enumerator )
LABEL_34:
    sub_2213CDC(Enumerator, v6);
  v7 = Enumerator;
  while ( 1 )
  {
    v8 = *(_QWORD *)v7;
    v9 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
    {
      v10 = (int *)(*(_QWORD *)(v8 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v10 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        v10 += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = v8 + 16LL * *v10 + 312;
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(int32_t *, _QWORD))v11)(v7, *(_QWORD *)(v11 + 8));
    if ( (listCache & 1) == 0 )
      break;
    v12 = v63;
    if ( !v63 )
      sub_2213CDC(listCache, method);
    v13 = *(_QWORD *)v63;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_19:
      v16 = sub_224BC3C(v63, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0);
    }
    Enumerator = (int32_t *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8));
    v19 = Enumerator;
    if ( !Enumerator )
      goto LABEL_58;
    v6 = ServantTreasureDvcEntity_TypeInfo;
    naturalAligment = ServantTreasureDvcEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Enumerator + 304LL) < (unsigned int)naturalAligment
      || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)Enumerator + 200LL) + 8 * naturalAligment - 8) != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_221405C(Enumerator, ServantTreasureDvcEntity_TypeInfo, v18);
LABEL_58:
      sub_2213CDC(Enumerator, v17);
    }
    if ( Enumerator[5] == 1 )
    {
      if ( !v4 )
        sub_2213CDC(Enumerator, ServantTreasureDvcEntity_TypeInfo);
      if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
              v4,
              Enumerator[4],
              &value,
              (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__) )
      {
        v28 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v28,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
        v29 = v19[4];
        value = (Il2CppObject *)v28;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v4,
          v29,
          (Il2CppObject *)v28,
          (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
      }
      v30 = (System_Collections_Generic_List_object__o *)value;
      if ( !value
        || (klass = value[1].klass,
            v32 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__,
            ++HIDWORD(value[1].monitor),
            !klass) )
      {
        sub_2213CDC(v30, v21);
      }
      size = v30->fields._size;
      if ( (unsigned int)size >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)v19,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &klass->_1.image + size;
        v30->fields._size = size + 1;
        v34[4] = v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
    v7 = v63;
    if ( !v63 )
      goto LABEL_34;
  }
  v35 = v63;
  if ( v63 )
  {
    v36 = *(_QWORD *)v63;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_40;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_40:
      v39 = sub_224BC3C(v63, System_IDisposable_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(int32_t *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
  }
  if ( !v4 )
LABEL_64:
    sub_2213CDC(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v60,
    v4,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
  v61 = v60;
  v60.fields._dictionary = 0;
  *(_QWORD *)&v60.fields._version = &v61;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v61,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__) )
  {
    v41 = ServantTreasureDvcMaster___c_TypeInfo;
    key = (int32_t)v61.fields._current.fields.key;
    v43 = v61.fields._current.fields.value;
    if ( !*(&ServantTreasureDvcMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDvcMaster___c_TypeInfo, v40);
      v41 = ServantTreasureDvcMaster___c_TypeInfo;
    }
    static_fields = v41->static_fields;
    _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !*(&v41->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v41, v40);
        static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      }
      v46 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v46, Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__, 0);
      v47 = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      v47->__9__4_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__4_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->__9__4_0, (int32_t)_9__4_0, v48, v49, v50, v51, v52, v53);
    }
    if ( !v43 )
      sub_2213CDC(v41, v40);
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)v43,
      _9__4_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    v54 = this->fields.listCache;
    v55 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v43,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    if ( !v54 )
      sub_2213CDC(v55, v56);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v54,
      key,
      &v55->obj,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    monitor = (int32_t)v43[1].monitor;
    v58 = HIDWORD(v43[1].monitor) + 1;
    LODWORD(v43[1].monitor) = 0;
    HIDWORD(v43[1].monitor) = v58;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v43[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v61,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
  return 1;
}


void ServantTreasureDvcMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597135D & 1) == 0 )
  {
    sub_2213A60(&ServantTreasureDvcMaster___c_TypeInfo);
    byte_597135D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantTreasureDvcMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantTreasureDvcMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDvcMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantTreasureDvcMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantTreasureDvcMaster___c___ctor(ServantTreasureDvcMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantTreasureDvcMaster___c___preProcess_b__4_0(
        ServantTreasureDvcMaster___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.priority - b->fields.priority;
}