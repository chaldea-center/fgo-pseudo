void __fastcall ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4185F30 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo, v4);
    byte_4185F30 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    12,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
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

  if ( (byte_4185F2E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_4185F2E = 1;
  }
  PK = ServantSkillEntity__CreatePK(svtId, num, priority, 0LL);
  return (ServantSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
}


bool __fastcall ServantSkillMaster__TryGetEntity(
        ServantSkillMaster_o *this,
        ServantSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4185F2F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__, entity);
    byte_4185F2F = 1;
  }
  PK = ServantSkillEntity__CreatePK(svtId, num, priority, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
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
  ServantSkillEntity_o *result; // x0
  __int64 v16; // x10

  if ( (byte_4185F33 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&ServantSkillEntity_TypeInfo, v10);
    byte_4185F33 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (ServantSkillEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v14,
                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v16 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (ServantSkillEntity_c *)result->klass->_2.typeHierarchy[v16 - 1] == ServantSkillEntity_TypeInfo
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
    sub_B2C434(list, *(_QWORD *)&svtId);
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
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4185F36 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_B2C35C(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId);
    byte_4185F36 = 1;
  }
  value = 0LL;
  PriorityKey = ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B2C434(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w24
  int32_t v19; // w25
  __int64 v20; // x10

  if ( (byte_4185F34 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v12);
    sub_B2C35C(&ServantSkillEntity_TypeInfo, v13);
    byte_4185F34 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v19,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = list;
        v20 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == num
          && HIDWORD(list->fields._syncRoot) == skillId )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
        }
      }
      if ( ++v19 >= v18 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v14;
    }
LABEL_17:
    sub_B2C434(list, v15);
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
  ServantSkillEntity_o *result; // x0
  __int64 v8; // x1
  bool isEnable; // w8
  __int64 v10; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4185F37 & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_B2C35C(
                                     &Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__,
                                     *(_QWORD *)&svtId);
    byte_4185F37 = 1;
  }
  value = 0LL;
  result = (ServantSkillEntity_o *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_14;
  result = (ServantSkillEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
                                     (System_Xml_XmlQualifiedName_o *)result,
                                     &value,
                                     (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)result & 1) == 0 )
    return 0LL;
  if ( !value )
    goto LABEL_14;
  if ( !LODWORD(value->fields.sourceUri) )
    goto LABEL_15;
  result = (ServantSkillEntity_o *)value->fields.namespaces;
  if ( !result )
LABEL_14:
    sub_B2C434(result, v8);
  isEnable = ServantSkillEntity__isEnable(result, 0, 0LL);
  result = 0LL;
  if ( isEnable )
  {
    if ( value )
    {
      if ( LODWORD(value->fields.sourceUri) )
        return (ServantSkillEntity_o *)value->fields.namespaces;
LABEL_15:
      v10 = sub_B2C460(result);
      sub_B2C400(v10, 0LL);
    }
    goto LABEL_14;
  }
  return result;
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
  if ( (byte_4185F31 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1225/*":"*/, *(_QWORD *)&svtId);
    byte_4185F31 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44307816(v4, (System_String_o *)StringLiteral_1225/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getServantSkillList(
        ServantSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  int32_t v14; // w23
  __int64 v15; // x10

  v3 = svtId;
  if ( (byte_4185F35 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v9);
    sub_B2C35C(&ServantSkillEntity_TypeInfo, v10);
    byte_4185F35 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        v15 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
        }
      }
      if ( ++v14 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, *(_QWORD *)&svtId);
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
    v22 = sub_B2C460(EntityListFromIdNum);
    sub_B2C400(v22, 0LL);
  }
  v20 = &EntityListFromIdNum->m_Items[v19];
  while ( 1 )
  {
    v21 = *v20;
    if ( !*v20 )
      sub_B2C434(EntityListFromIdNum, v16);
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
  __int64 v32; // x0
  __int64 v33; // x0
  const MethodInfo *v34; // [xsp+18h] [xbp-68h]

  if ( (byte_4185F38 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&ServantSkillEntity___TypeInfo, v14);
    byte_4185F38 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantSkillEntity_array *)sub_B2C374(
                                      ServantSkillEntity___TypeInfo,
                                      (unsigned int)v15->static_fields->SvtEquipSkillListMax);
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
                  v34);
    if ( !v16 )
      sub_B2C434(UseEntity, v21);
    v28 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_B2C41C(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v33 = sub_B2C454();
        sub_B2C400(v33, 0LL);
      }
    }
    v29 = v19 - 1;
    if ( v29 >= v16->max_length )
    {
      v32 = sub_B2C460(UseEntity);
      sub_B2C400(v32, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v28;
    sub_B2C2F8(i, v28, v22, v23, v24, v25, v26, v27);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x22
  __int64 v48; // x9
  System_String_o *PriorityKey; // x0
  __int64 v50; // x1
  System_Xml_XmlQualifiedName_o *v51; // x23
  __int64 v52; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x24
  System_Xml_Schema_XmlSchemaObject_o *v54; // x2
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x1
  ServantSkillMaster___c_c *v60; // x0
  Il2CppObject *v61; // x21
  Il2CppObject *key; // x22
  struct ServantSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v65; // x24
  struct ServantSkillMaster___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *v73; // x23
  System_Xml_Schema_XmlSchemaObject_o *v74; // x0
  __int64 v75; // x1
  int v76; // w21
  ServantSkillMaster_o *v78; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v79; // [xsp+18h] [xbp-B8h] BYREF
  int v80[2]; // [xsp+40h] [xbp-90h]
  int v81; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v82; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4185F32 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Comparison_ServantSkillEntity___ctor__, v3);
    sub_B2C35C(&System_Comparison_ServantSkillEntity__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__,
      v15);
    sub_B2C35C(&System_IDisposable_TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__, v25);
    sub_B2C35C(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo, v26);
    sub_B2C35C(&ServantSkillEntity_TypeInfo, v27);
    sub_B2C35C(&Method_ServantSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B2C35C(&ServantSkillMaster___c_TypeInfo, v29);
    byte_4185F32 = 1;
  }
  value = 0LL;
  memset(&v82, 0, sizeof(v82));
  v81 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v31 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v31,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v78 = this;
  if ( !Enumerator )
    sub_B2C434(0LL, v32);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v40 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_17:
      v43 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v39);
    }
    v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
            Enumerator,
            *(_QWORD *)(v43 + 8));
    v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v44;
    if ( !v44 )
      sub_B2C434(0LL, v45);
    v48 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 300LL) < (unsigned int)v48
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v48 - 8) != ServantSkillEntity_TypeInfo )
    {
      v60 = (ServantSkillMaster___c_c *)sub_B2C728(v44);
LABEL_52:
      sub_B2C434(v60, v59);
    }
    PriorityKey = ServantSkillMaster__getPriorityKey(
                    (ServantSkillMaster_o *)v44,
                    *(_DWORD *)(v44 + 16),
                    *(_DWORD *)(v44 + 20),
                    v46);
    if ( !v31 )
      sub_B2C434(PriorityKey, v50);
    v51 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v31,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v53,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v53;
      v54 = (System_Xml_Schema_XmlSchemaObject_o *)v53;
      this = v78;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v31,
        v51,
        v54,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B2C434(0LL, v52);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v47,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
  }
  v80[0] = 117;
  v81 = 1;
  v55 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_31:
    v58 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v39);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v58 + 8));
  v81 = 0;
  if ( !v31 )
LABEL_57:
    sub_B2C434(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v79,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v31,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v82 = v79;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v82,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__) )
  {
    v60 = ServantSkillMaster___c_TypeInfo;
    key = v82.fields.current.fields.key;
    v61 = v82.fields.current.fields.value;
    if ( (BYTE3(ServantSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo);
      v60 = ServantSkillMaster___c_TypeInfo;
    }
    static_fields = v60->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v65,
        Method_ServantSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantSkillEntity___ctor__);
      v66 = ServantSkillMaster___c_TypeInfo->static_fields;
      v66->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v66->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      this = v78;
    }
    if ( !v61 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v61,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v73 = this->fields.listCache;
    v74 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v61,
                                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v73 )
      sub_B2C434(v74, v75);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v73,
      (System_Xml_XmlQualifiedName_o *)key,
      v74,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v61,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantSkillEntity__Clear__);
  }
  v80[0] = 240;
  v76 = ++v81;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v82,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  if ( v76 && v80[v76 - 1] == 240 )
    v81 = v76 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v31,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185417 & 1) == 0 )
  {
    sub_B2C35C(&ServantSkillMaster___c_TypeInfo, v1);
    byte_4185417 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantSkillMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}