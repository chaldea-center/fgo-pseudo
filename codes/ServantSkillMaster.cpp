void __fastcall ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FBC4D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo, v7);
    byte_40FBC4D = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    12,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
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

  if ( (byte_40FBC4B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_40FBC4B = 1;
  }
  PK = ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
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

  if ( (byte_40FBC4C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__, entity);
    byte_40FBC4C = 1;
  }
  PK = ServantSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall ServantSkillMaster__getEntityFromSkillId(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  ServantSkillEntity_o *result; // x0
  __int64 v17; // x10

  if ( (byte_40FBC50 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&ServantSkillEntity_TypeInfo, v10);
    byte_40FBC50 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v15 )
        break;
      result = (ServantSkillEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         v15,
                                         v14,
                                         (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v17 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (ServantSkillEntity_c *)result->klass->_2.typeHierarchy[v17 - 1] == ServantSkillEntity_TypeInfo
          && result->fields.svtId == svtId
          && result->fields.num == num
          && result->fields.skillId == skillId )
        {
          return result;
        }
      }
      if ( ++v14 >= v13 )
        return 0LL;
    }
LABEL_16:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getEntityListFromIdNum(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantSkillMaster_o *v6; // x20
  System_String_o *PriorityKey; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_40FBC53 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_B16FFC(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId);
    byte_40FBC53 = 1;
  }
  value = 0LL;
  PriorityKey = ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w24
  int32_t v18; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v21; // x10

  if ( (byte_40FBC51 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v12);
    sub_B16FFC(&ServantSkillEntity_TypeInfo, v13);
    byte_40FBC51 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&num,
                                                                                                  *(_QWORD *)&skillId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v19,
                                                                      v18,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (ServantSkillEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == ServantSkillEntity_TypeInfo
          && Item->fields.missionTargetId == svtId
          && Item->fields.missionConditionDetailId == num
          && Item->fields.eventId == skillId )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
        }
      }
      if ( ++v18 >= v17 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v14;
    }
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_ServantSkillEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall ServantSkillMaster__getLowPriorityEntity(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantSkillMaster_o *v6; // x20
  System_String_o *PriorityKey; // x0
  _BOOL8 isEnable; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct System_Xml_Serialization_XmlSerializerNamespaces_o *namespaces; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_40FBC54 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_B16FFC(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId);
    byte_40FBC54 = 1;
  }
  value = 0LL;
  PriorityKey = ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_14;
  isEnable = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
               (System_Xml_XmlQualifiedName_o *)PriorityKey,
               &value,
               (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( isEnable )
  {
    if ( !value )
      goto LABEL_14;
    if ( !LODWORD(value->fields.sourceUri) )
      goto LABEL_15;
    namespaces = value->fields.namespaces;
    if ( !namespaces )
LABEL_14:
      sub_B170D4();
    isEnable = ServantSkillEntity__isEnable((ServantSkillEntity_o *)namespaces, 0, v10);
    if ( isEnable )
    {
      if ( value )
      {
        if ( LODWORD(value->fields.sourceUri) )
          return (ServantSkillEntity_o *)value->fields.namespaces;
LABEL_15:
        sub_B17100(isEnable, v9, v10);
        sub_B170A0();
      }
      goto LABEL_14;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_40FBC4E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1223/*":"*/, *(_QWORD *)&svtId);
    byte_40FBC4E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43746016(v4, (System_String_o *)StringLiteral_1223/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getServantSkillList(
        ServantSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  int32_t v18; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v21; // x10

  if ( (byte_40FBC52 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v9);
    sub_B16FFC(&ServantSkillEntity_TypeInfo, v10);
    byte_40FBC52 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantSkillEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v19,
                                                                      v18,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (ServantSkillEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == ServantSkillEntity_TypeInfo
          && Item->fields.missionTargetId == svtId )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
        }
      }
      if ( ++v18 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v17 )
    goto LABEL_16;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
  const MethodInfo *v17; // x2
  __int64 v18; // x8
  ServantSkillEntity_array *v19; // x24
  unsigned int v20; // w19
  ServantSkillEntity_o **v21; // x20
  ServantSkillEntity_o *v22; // x28
  const MethodInfo *v24; // [xsp+0h] [xbp-60h]

  EntityListFromIdNum = ServantSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( !EntityListFromIdNum )
    return 0LL;
  v18 = *(_QWORD *)&EntityListFromIdNum->max_length;
  v19 = EntityListFromIdNum;
  v20 = v18 - 1;
  if ( (int)v18 - 1 < 0 )
    return 0LL;
  if ( v20 >= (unsigned int)v18 )
  {
LABEL_10:
    sub_B17100(EntityListFromIdNum, v16, v17);
    sub_B170A0();
  }
  v21 = &EntityListFromIdNum->m_Items[v20];
  while ( 1 )
  {
    v22 = *v21;
    if ( !*v21 )
      sub_B170D4();
    EntityListFromIdNum = (ServantSkillEntity_array *)ServantSkillEntity__isEnable(*v21, finishEvent, v17);
    if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
    {
      EntityListFromIdNum = (ServantSkillEntity_array *)ServantSkillEntity__isUse(
                                                          v22,
                                                          userId,
                                                          svtLv,
                                                          limitCount,
                                                          dispLimitCount,
                                                          beforeClearQuestId,
                                                          specificLimitCount,
                                                          userSvtId,
                                                          v24);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v22;
    }
    if ( (--v20 & 0x80000000) != 0 )
      return 0LL;
    --v21;
    if ( v20 >= v19->max_length )
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
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  ServantSkillEntity_array *v16; // x27
  signed __int64 v17; // x19
  BattleServantConfConponent_o *i; // x21
  signed __int64 v19; // x19
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x20
  unsigned __int64 v29; // x19
  BalanceConfig_c *v30; // x0
  const MethodInfo *v32; // [xsp+18h] [xbp-68h]

  if ( (byte_40FBC55 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&ServantSkillEntity___TypeInfo, v14);
    byte_40FBC55 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantSkillEntity_array *)sub_B17014(
                                      ServantSkillEntity___TypeInfo,
                                      (unsigned int)v15->static_fields->SvtEquipSkillListMax,
                                      userId);
  v17 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v16->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v30 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    if ( v17 >= v30->static_fields->SvtEquipSkillListMax )
      break;
    v19 = v17 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  this,
                  svtId,
                  v19,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  beforeClearQuestId,
                  -1,
                  userSvtId,
                  0,
                  v32);
    if ( !v16 )
      sub_B170D4();
    v28 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_B170BC(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    v29 = v19 - 1;
    if ( v29 >= v16->max_length )
    {
      sub_B17100(UseEntity, v21, v22);
      sub_B170A0();
    }
    i->klass = (BattleServantConfConponent_c *)v28;
    sub_B16F98(i, v28, v22, v23, v24, v25, v26, v27);
    v17 = v29 + 1;
  }
  return v16;
}


bool __fastcall ServantSkillMaster__preProcess(ServantSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *listCache; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v35; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  const MethodInfo *v47; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x22
  __int64 v49; // x9
  System_String_o *PriorityKey; // x0
  System_Xml_XmlQualifiedName_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x24
  System_Xml_Schema_XmlSchemaObject_o *v57; // x2
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  ServantSkillMaster___c_c *v66; // x0
  Il2CppObject *v67; // x21
  Il2CppObject *key; // x22
  struct ServantSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v71; // x24
  struct ServantSkillMaster___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *v79; // x23
  System_Xml_Schema_XmlSchemaObject_o *v80; // x0
  int v81; // w21
  ServantSkillMaster_o *v83; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v84; // [xsp+18h] [xbp-B8h] BYREF
  int v85[2]; // [xsp+40h] [xbp-90h]
  int v86; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v87; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_40FBC4F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Comparison_ServantSkillEntity___ctor__, v3);
    sub_B16FFC(&System_Comparison_ServantSkillEntity__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__,
      v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__,
      v15);
    sub_B16FFC(&System_IDisposable_TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v25);
    sub_B16FFC(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v26);
    sub_B16FFC(&ServantSkillEntity_TypeInfo, v27);
    sub_B16FFC(&Method_ServantSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B16FFC(&ServantSkillMaster___c_TypeInfo, v29);
    byte_40FBC4F = 1;
  }
  value = 0LL;
  memset(&v87, 0, sizeof(v87));
  v86 = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)listCache,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v35 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo,
                                                                                        v31,
                                                                                        v32,
                                                                                        v33,
                                                                                        v34);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v35,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v83 = this;
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_17:
      v45 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)v46;
    if ( !v46 )
      sub_B170D4();
    v49 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 300LL) < (unsigned int)v49
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v49 - 8) != ServantSkillEntity_TypeInfo )
    {
      sub_B173C8(v46);
LABEL_52:
      sub_B170D4();
    }
    PriorityKey = ServantSkillMaster__getPriorityKey(
                    (ServantSkillMaster_o *)v46,
                    *(_DWORD *)(v46 + 16),
                    *(_DWORD *)(v46 + 20),
                    v47);
    if ( !v35 )
      sub_B170D4();
    v51 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v35,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v52, v53, v54, v55);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v56,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v56;
      v57 = (System_Xml_Schema_XmlSchemaObject_o *)v56;
      this = v83;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v35,
        v51,
        v57,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v48,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
  }
  v85[0] = 117;
  v86 = 1;
  v58 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_31:
    v61 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(Enumerator, *(_QWORD *)(v61 + 8));
  v86 = 0;
  if ( !v35 )
LABEL_57:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v84,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v35,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v87 = v84;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v87,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__) )
  {
    v66 = ServantSkillMaster___c_TypeInfo;
    key = v87.fields.current.fields.key;
    v67 = v87.fields.current.fields.value;
    if ( (BYTE3(ServantSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo);
      v66 = ServantSkillMaster___c_TypeInfo;
    }
    static_fields = v66->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      }
      v71 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_ServantSkillEntity__TypeInfo,
                                                                            v62,
                                                                            v63,
                                                                            v64,
                                                                            v65);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v71,
        Method_ServantSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantSkillEntity___ctor__);
      v72 = ServantSkillMaster___c_TypeInfo->static_fields;
      v72->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v72->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      this = v83;
    }
    if ( !v67 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v67,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v79 = this->fields.listCache;
    v80 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v67,
                                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v79 )
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v79,
      (System_Xml_XmlQualifiedName_o *)key,
      v80,
      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v67,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantSkillEntity__Clear__);
  }
  v85[0] = 240;
  v81 = ++v86;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v87,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  if ( v81 && v85[v81 - 1] == 240 )
    v86 = v81 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v35,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F765B & 1) == 0 )
  {
    sub_B16FFC(&ServantSkillMaster___c_TypeInfo, v1);
    byte_40F765B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantSkillMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantSkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}