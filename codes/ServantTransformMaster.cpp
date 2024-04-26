void __fastcall ServantTransformMaster___ctor(ServantTransformMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4354410 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
    byte_4354410 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    487,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTransformEntity_o *__fastcall ServantTransformMaster__GetBeforeTransformEntity(
        ServantTransformMaster_o *this,
        int32_t aftSvtId,
        int32_t aftDispLimitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  ServantTransformEntity_o *result; // x0
  __int64 v10; // x10

  if ( (byte_435440F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&ServantTransformEntity_TypeInfo);
    byte_435440F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B7076C(list, *(_QWORD *)&aftSvtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    result = (ServantTransformEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                           list,
                                           v8,
                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      v10 = *(&ServantTransformEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v10
        && (ServantTransformEntity_c *)result->klass->_2.typeHierarchy[v10 - 1] == ServantTransformEntity_TypeInfo
        && result->fields.aftSvtId == aftSvtId
        && result->fields.aftDispLimitCount == aftDispLimitCount )
      {
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_13;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantTransformEntity_o *__fastcall ServantTransformMaster__GetEntity(
        ServantTransformMaster_o *this,
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4354411 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
    byte_4354411 = 1;
  }
  PK = ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, *(const MethodInfo **)&befDispLimitCount);
  return (ServantTransformEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_21C0890 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *__fastcall ServantTransformMaster__GetTransformServantIds(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x20
  const MethodInfo *v8; // x4
  _BOOL8 i; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435440D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_435440D = 1;
  }
  entity = 0LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = ServantTransformMaster__TryGetEntity(this, &entity, baseSvtId, baseDispLimitCount, v8);
        i;
        i = ServantTransformMaster__TryGetEntity(
              this,
              &entity,
              entity->fields.aftSvtId,
              entity->fields.aftDispLimitCount,
              v11) )
  {
    if ( entity )
    {
      if ( v7 )
      {
        System_Collections_Generic_List_int___Add(
          v7,
          entity->fields.aftSvtId,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( entity )
          continue;
      }
    }
    sub_B7076C(i, v10);
  }
  return v7;
}


System_Collections_Generic_List_TransformServantInfo__o *__fastcall ServantTransformMaster__GetTransformServantInfo(
        ServantTransformMaster_o *this,
        int32_t baseSvtId,
        int32_t baseDispLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  const MethodInfo *v8; // x4
  TransformServantInfo_o *TransformServantInfo; // x0
  __int64 v10; // x1
  int32_t befSvtId; // w22
  int32_t befDispLimitCount; // w23
  System_String_o *befTitle; // x24
  TransformServantInfo_o *v14; // x21
  int32_t aftSvtId; // w21
  int32_t aftDispLimitCount; // w22
  System_String_o *aftTitle; // x23
  TransformServantInfo_o *v18; // x24
  const MethodInfo *v19; // x4
  ServantTransformEntity_o *v20; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  int32_t v28; // w21
  int32_t v29; // w22
  System_String_o *v30; // x23
  TransformServantInfo_o *v31; // x24
  TransformServantInfo_o *v32; // x19
  ServantTransformEntity_o *v34; // [xsp+8h] [xbp-58h] BYREF
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_435440E & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    sub_B70694(&Method_System_Collections_Generic_List_TransformServantInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_TransformServantInfo__TypeInfo);
    sub_B70694(&TransformServantInfo_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435440E = 1;
  }
  entity = 0LL;
  v34 = 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_TransformServantInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_TransformServantInfo___ctor__);
  TransformServantInfo = (TransformServantInfo_o *)ServantTransformMaster__TryGetEntity(
                                                     this,
                                                     &entity,
                                                     baseSvtId,
                                                     baseDispLimitCount,
                                                     v8);
  if ( ((unsigned __int8)TransformServantInfo & 1) == 0 )
  {
    v32 = (TransformServantInfo_o *)sub_B70764(TransformServantInfo_TypeInfo);
    TransformServantInfo___ctor_28982848(v32, baseSvtId, baseDispLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v7 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_TransformServantInfo__Add__);
      return (System_Collections_Generic_List_TransformServantInfo__o *)v7;
    }
LABEL_17:
    sub_B7076C(TransformServantInfo, v10);
  }
  if ( !entity )
    goto LABEL_17;
  befSvtId = entity->fields.befSvtId;
  befDispLimitCount = entity->fields.befDispLimitCount;
  befTitle = entity->fields.befTitle;
  v14 = (TransformServantInfo_o *)sub_B70764(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_28982848(v14, befSvtId, befDispLimitCount, befTitle, 0LL);
  if ( !v7 )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v7,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_TransformServantInfo__Add__);
  if ( !entity )
    goto LABEL_17;
  aftSvtId = entity->fields.aftSvtId;
  aftDispLimitCount = entity->fields.aftDispLimitCount;
  aftTitle = entity->fields.aftTitle;
  v18 = (TransformServantInfo_o *)sub_B70764(TransformServantInfo_TypeInfo);
  TransformServantInfo___ctor_28982848(v18, aftSvtId, aftDispLimitCount, aftTitle, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v7,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_TransformServantInfo__Add__);
  v20 = entity;
  if ( !entity )
    goto LABEL_17;
  while ( ServantTransformMaster__TryGetEntity(this, &v34, v20->fields.aftSvtId, v20->fields.aftDispLimitCount, v19) )
  {
    TransformServantInfo = System_Linq_Enumerable__Last_TransformServantInfo_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                             (const MethodInfo_1CBDD60 *)Method_System_Linq_Enumerable_Last_TransformServantInfo___);
    if ( v34 )
    {
      if ( TransformServantInfo )
      {
        v27 = (System_Int32_array **)v34->fields.befTitle;
        TransformServantInfo->fields.titleText = (struct System_String_o *)v27;
        sub_B70630(
          (BattleServantConfConponent_o *)&TransformServantInfo->fields.titleText,
          v27,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        if ( v34 )
        {
          v28 = v34->fields.aftSvtId;
          v29 = v34->fields.aftDispLimitCount;
          v30 = v34->fields.aftTitle;
          v31 = (TransformServantInfo_o *)sub_B70764(TransformServantInfo_TypeInfo);
          TransformServantInfo___ctor_28982848(v31, v28, v29, v30, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_TransformServantInfo__Add__);
          v20 = v34;
          if ( v34 )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  return (System_Collections_Generic_List_TransformServantInfo__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTransformMaster__TryGetEntity(
        ServantTransformMaster_o *this,
        ServantTransformEntity_o **entity,
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4354412 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
    byte_4354412 = 1;
  }
  PK = ServantTransformEntity__CreatePK(befSvtId, befDispLimitCount, *(const MethodInfo **)&befSvtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_ServantTransformMaster__ServantTransformEntity__string__TryGetEntity__);
}