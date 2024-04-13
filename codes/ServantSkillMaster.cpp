void __fastcall ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E6D96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo, v8, v9, v10);
    byte_42E6D96 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v11,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    12,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall ServantSkillMaster__GetEntity(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E6D94 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__,
      svtId,
      num,
      *(_QWORD *)&priority);
    byte_42E6D94 = 1;
  }
  PK = ServantSkillEntity__CreatePK(svtId, num, priority, 0LL);
  return (ServantSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillMaster__TryGetEntity(
        ServantSkillMaster_o *this,
        ServantSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E6D95 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42E6D95 = 1;
  }
  PK = ServantSkillEntity__CreatePK(svtId, num, priority, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall ServantSkillMaster__getEntityFromSkillId(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  ServantSkillEntity_o *result; // x0
  __int64 v20; // x10

  if ( (byte_42E6D99 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      svtId,
      num,
      *(_QWORD *)&skillId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&ServantSkillEntity_TypeInfo, v12, v13, v14);
    byte_42E6D99 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (ServantSkillEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v18,
                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v20 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (ServantSkillEntity_c *)result->klass->_2.typeHierarchy[v20 - 1] == ServantSkillEntity_TypeInfo
          && result->fields.svtId == svtId
          && result->fields.num == num
          && result->fields.skillId == skillId )
        {
          return result;
        }
      }
      if ( ++v18 >= v17 )
        return 0LL;
    }
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


ServantSkillEntity_array *__fastcall ServantSkillMaster__getEntityListFromIdNum(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantSkillMaster_o *v6; // x20
  System_String_o *PriorityKey; // x0
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_42E6D9C & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     svtId,
                                     num,
                                     method);
    byte_42E6D9C = 1;
  }
  value = 0LL;
  PriorityKey = ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B5D69C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
  {
    return (ServantSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantSkillEntity__o *__fastcall ServantSkillMaster__getEntityListFromSkillId(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v28; // w24
  int32_t v29; // w25
  __int64 v30; // x10

  if ( (byte_42E6D9A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      svtId,
      num,
      *(_QWORD *)&skillId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantSkillEntity_TypeInfo, v21, v22, v23);
    byte_42E6D9A = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v28 = Count;
    v29 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v29,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = list;
        v30 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v30
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[v30 - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == num
          && HIDWORD(list->fields._syncRoot) == skillId )
        {
          if ( !v24 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
        }
      }
      if ( ++v29 >= v28 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v24;
    }
LABEL_17:
    sub_B5D69C(list, v25);
  }
  return (System_Collections_Generic_List_ServantSkillEntity__o *)v24;
}


ServantSkillEntity_o *__fastcall ServantSkillMaster__getLowPriorityEntity(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantSkillMaster_o *v6; // x20
  ServantSkillEntity_o *result; // x0
  __int64 v8; // x1
  bool isEnable; // w8
  __int64 v10; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_42E6D9D & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     svtId,
                                     num,
                                     method);
    byte_42E6D9D = 1;
  }
  value = 0LL;
  result = (ServantSkillEntity_o *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_14;
  result = (ServantSkillEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
                                     (System_Xml_XmlQualifiedName_o *)result,
                                     &value,
                                     (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)result & 1) == 0 )
    return 0LL;
  if ( !value )
    goto LABEL_14;
  if ( !LODWORD(value->fields.sourceUri) )
    goto LABEL_15;
  result = (ServantSkillEntity_o *)value->fields.namespaces;
  if ( !result )
LABEL_14:
    sub_B5D69C(result, v8);
  isEnable = ServantSkillEntity__isEnable(result, 0, 0LL);
  result = 0LL;
  if ( isEnable )
  {
    if ( value )
    {
      if ( LODWORD(value->fields.sourceUri) )
        return (ServantSkillEntity_o *)value->fields.namespaces;
LABEL_15:
      v10 = sub_B5D6C8(result);
      sub_B5D668(v10, 0LL);
    }
    goto LABEL_14;
  }
  return result;
}


System_String_o *__fastcall ServantSkillMaster__getPriorityKey(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-8h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = svtId;
  v7 = num;
  if ( (byte_42E6D97 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1245/*":"*/, svtId, num, method);
    byte_42E6D97 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44580072(v4, (System_String_o *)StringLiteral_1245/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getServantSkillList(
        ServantSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  __int64 v28; // x10

  v4 = svtId;
  if ( (byte_42E6D9B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantSkillEntity_TypeInfo, v21, v22, v23);
    byte_42E6D9B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        v28 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v4 )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
LABEL_14:
  if ( !v26 )
    goto LABEL_16;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
}


ServantSkillEntity_o *__fastcall ServantSkillMaster__getUseEntity(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t specificLimitCount,
        int64_t userSvtId,
        bool finishEvent,
        const MethodInfo *method)
{
  ServantSkillEntity_array *EntityListFromIdNum; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  ServantSkillEntity_array *v18; // x24
  unsigned int v19; // w19
  ServantSkillEntity_o **v20; // x20
  ServantSkillEntity_o *v21; // x28
  __int64 v22; // x0

  EntityListFromIdNum = ServantSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( !EntityListFromIdNum )
    return 0LL;
  v17 = *(_QWORD *)&EntityListFromIdNum->max_length;
  v18 = EntityListFromIdNum;
  v19 = v17 - 1;
  if ( (int)v17 - 1 < 0 )
    return 0LL;
  if ( v19 >= (unsigned int)v17 )
  {
LABEL_10:
    v22 = sub_B5D6C8(EntityListFromIdNum);
    sub_B5D668(v22, 0LL);
  }
  v20 = &EntityListFromIdNum->m_Items[v19];
  while ( 1 )
  {
    v21 = *v20;
    if ( !*v20 )
      sub_B5D69C(EntityListFromIdNum, v16);
    EntityListFromIdNum = (ServantSkillEntity_array *)ServantSkillEntity__isEnable(*v20, finishEvent, 0LL);
    if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
    {
      EntityListFromIdNum = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                          v21,
                                                          userId,
                                                          svtLv,
                                                          limitCount,
                                                          dispLimitCount,
                                                          beforeClearQuestId,
                                                          specificLimitCount,
                                                          userSvtId,
                                                          0LL);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v21;
    }
    if ( (--v19 & 0x80000000) != 0 )
      return 0LL;
    --v20;
    if ( v19 >= v18->max_length )
      goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getUseEntityList(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BalanceConfig_c *v17; // x0
  ServantSkillEntity_array *v18; // x27
  signed __int64 v19; // x19
  BattleServantConfConponent_o *i; // x21
  signed __int64 v21; // x19
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x20
  unsigned __int64 v31; // x19
  BalanceConfig_c *v32; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  const MethodInfo *v36; // [xsp+18h] [xbp-68h]

  if ( (byte_42E6D9E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, userId, *(_QWORD *)&svtLv);
    sub_B5D5C4(&ServantSkillEntity___TypeInfo, v14, v15, v16);
    byte_42E6D9E = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (ServantSkillEntity_array *)sub_B5D5DC(
                                      ServantSkillEntity___TypeInfo,
                                      (unsigned int)v17->static_fields->SvtEquipSkillListMax);
  v19 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v18->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v32 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    if ( v19 >= v32->static_fields->SvtEquipSkillListMax )
      break;
    v21 = v19 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  this,
                  svtId,
                  v21,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  beforeClearQuestId,
                  -1,
                  userSvtId,
                  0,
                  v36);
    if ( !v18 )
      sub_B5D69C(UseEntity, v23);
    v30 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_B5D684(UseEntity, v18->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v35 = sub_B5D6BC();
        sub_B5D668(v35, 0LL);
      }
    }
    v31 = v21 - 1;
    if ( v31 >= v18->max_length )
    {
      v34 = sub_B5D6C8(UseEntity);
      sub_B5D668(v34, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v30;
    sub_B5D560(i, v30, v24, v25, v26, v27, v28, v29);
    v19 = v31 + 1;
  }
  return v18;
}


bool __fastcall ServantSkillMaster__preProcess(ServantSkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v87; // x20
  __int64 v88; // x1
  __int64 v89; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v92; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v95; // x3
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  unsigned __int64 v97; // x10
  int32_t *v98; // x11
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  const MethodInfo *v102; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v103; // x22
  __int64 v104; // x9
  System_String_o *PriorityKey; // x0
  __int64 v106; // x1
  System_Xml_XmlQualifiedName_o *v107; // x23
  __int64 v108; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // x24
  System_Xml_Schema_XmlSchemaObject_o *v110; // x2
  System_Collections_Generic_IEnumerator_T__c *v111; // x8
  unsigned __int64 v112; // x10
  int32_t *v113; // x11
  __int64 v114; // x0
  __int64 v115; // x1
  ServantSkillMaster___c_c *v116; // x0
  Il2CppObject *v117; // x21
  Il2CppObject *key; // x22
  struct ServantSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v121; // x24
  struct ServantSkillMaster___c_StaticFields *v122; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *v129; // x23
  System_Xml_Schema_XmlSchemaObject_o *v130; // x0
  __int64 v131; // x1
  int v132; // w21
  ServantSkillMaster_o *v134; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v135; // [xsp+18h] [xbp-B8h] BYREF
  int v136[2]; // [xsp+40h] [xbp-90h]
  int v137; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v138; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42E6D98 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Comparison_ServantSkillEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_ServantSkillEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__, v23, v24, v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo, v32, v33, v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v50, v51, v52);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__,
      v53,
      v54,
      v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__,
      v56,
      v57,
      v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&ServantSkillEntity_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_ServantSkillMaster___c__preProcess_b__5_0__, v80, v81, v82);
    sub_B5D5C4(&ServantSkillMaster___c_TypeInfo, v83, v84, v85);
    byte_42E6D98 = 1;
  }
  value = 0LL;
  memset(&v138, 0, sizeof(v138));
  v137 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v87 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v87,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v134 = this;
  if ( !Enumerator )
    sub_B5D69C(0LL, v88);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v92;
        p_offset += 4;
        if ( v92 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v89);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v96 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v97 = 0LL;
      v98 = &v96->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v98 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v99 = (__int64)&v96->vtable[*v98].method;
    }
    else
    {
LABEL_17:
      v99 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v95);
    }
    v100 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
             Enumerator,
             *(_QWORD *)(v99 + 8));
    v103 = (EventMissionProgressRequest_Argument_ProgressData_o *)v100;
    if ( !v100 )
      sub_B5D69C(0LL, v101);
    v104 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v100 + 300LL) < (unsigned int)v104
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v100 + 200LL) + 8 * v104 - 8) != ServantSkillEntity_TypeInfo )
    {
      v116 = (ServantSkillMaster___c_c *)sub_B5D990(v100);
LABEL_52:
      sub_B5D69C(v116, v115);
    }
    PriorityKey = ServantSkillMaster__getPriorityKey(
                    (ServantSkillMaster_o *)v100,
                    *(_DWORD *)(v100 + 16),
                    *(_DWORD *)(v100 + 20),
                    v102);
    if ( !v87 )
      sub_B5D69C(PriorityKey, v106);
    v107 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v87,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v109,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v109;
      v110 = (System_Xml_Schema_XmlSchemaObject_o *)v109;
      this = v134;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v87,
        v107,
        v110,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B5D69C(0LL, v108);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v103,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
  }
  v136[0] = 117;
  v137 = 1;
  v111 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v112 = 0LL;
    v113 = &v111->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
    {
      ++v112;
      v113 += 4;
      if ( v112 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v114 = (__int64)&v111->vtable[*v113].method;
  }
  else
  {
LABEL_31:
    v114 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v95);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v114)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v114 + 8));
  v137 = 0;
  if ( !v87 )
LABEL_57:
    sub_B5D69C(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v135,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v87,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v138 = v135;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v138,
            (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__) )
  {
    v116 = ServantSkillMaster___c_TypeInfo;
    key = v138.fields.current.fields.key;
    v117 = v138.fields.current.fields.value;
    if ( (BYTE3(ServantSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo);
      v116 = ServantSkillMaster___c_TypeInfo;
    }
    static_fields = v116->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v116);
        static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      }
      v121 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v121,
        Method_ServantSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantSkillEntity___ctor__);
      v122 = ServantSkillMaster___c_TypeInfo->static_fields;
      v122->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v122->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      this = v134;
    }
    if ( !v117 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v117,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v129 = this->fields.listCache;
    v130 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v117,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v129 )
      sub_B5D69C(v130, v131);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v129,
      (System_Xml_XmlQualifiedName_o *)key,
      v130,
      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v117,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantSkillEntity__Clear__);
  }
  v136[0] = 240;
  v132 = ++v137;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v138,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  if ( v132 && v136[v132 - 1] == 240 )
    v137 = v132 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v87,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantSkillMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D90 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSkillMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D90 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantSkillMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantSkillMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantSkillMaster___c___ctor(ServantSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantSkillMaster___c___preProcess_b__5_0(
        ServantSkillMaster___c_o *this,
        ServantSkillEntity_o *a,
        ServantSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}