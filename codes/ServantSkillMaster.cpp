void __fastcall ServantSkillMaster___ctor(ServantSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4389576 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
    byte_4389576 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__ServantSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.listCache, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    12,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string___ctor__);
}


ServantSkillEntity_o *__fastcall ServantSkillMaster__GetEntity(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4389574 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
    byte_4389574 = 1;
  }
  PK = ServantSkillEntity__CreatePK(svtId, num, priority, 0LL);
  return (ServantSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__GetEntity__);
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

  if ( (byte_4389575 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
    byte_4389575 = 1;
  }
  PK = ServantSkillEntity__CreatePK(svtId, num, priority, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ServantSkillMaster__ServantSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall ServantSkillMaster__getEntityFromSkillId(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  ServantSkillEntity_o *result; // x0
  __int64 v14; // x10

  if ( (byte_4389579 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&ServantSkillEntity_TypeInfo);
    byte_4389579 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (ServantSkillEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v12,
                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (ServantSkillEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == ServantSkillEntity_TypeInfo
          && result->fields.svtId == svtId
          && result->fields.num == num
          && result->fields.skillId == skillId )
        {
          return result;
        }
      }
      if ( ++v12 >= v11 )
        return 0LL;
    }
LABEL_16:
    sub_B7769C(list, *(_QWORD *)&svtId);
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
  if ( (byte_438957C & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
    byte_438957C = 1;
  }
  value = 0LL;
  PriorityKey = ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B7769C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__) )
  {
    return (ServantSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


System_Collections_Generic_List_ServantSkillEntity__o *__fastcall ServantSkillMaster__getEntityListFromSkillId(
        ServantSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  __int64 v15; // x10

  if ( (byte_438957A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_B775C4(&ServantSkillEntity_TypeInfo);
    byte_438957A = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = list;
        v15 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == num
          && HIDWORD(list->fields._syncRoot) == skillId )
        {
          if ( !v9 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
        }
      }
      if ( ++v14 >= v13 )
        return (System_Collections_Generic_List_ServantSkillEntity__o *)v9;
    }
LABEL_17:
    sub_B7769C(list, v10);
  }
  return (System_Collections_Generic_List_ServantSkillEntity__o *)v9;
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
  if ( (byte_438957D & 1) == 0 )
  {
    this = (ServantSkillMaster_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
    byte_438957D = 1;
  }
  value = 0LL;
  result = (ServantSkillEntity_o *)ServantSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    goto LABEL_14;
  result = (ServantSkillEntity_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
                                     (System_Xml_XmlQualifiedName_o *)result,
                                     &value,
                                     (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____TryGetValue__);
  if ( ((unsigned __int8)result & 1) == 0 )
    return 0LL;
  if ( !value )
    goto LABEL_14;
  if ( !LODWORD(value->fields.sourceUri) )
    goto LABEL_15;
  result = (ServantSkillEntity_o *)value->fields.namespaces;
  if ( !result )
LABEL_14:
    sub_B7769C(result, v8);
  isEnable = ServantSkillEntity__isEnable(result, 0, 0LL);
  result = 0LL;
  if ( isEnable )
  {
    if ( value )
    {
      if ( LODWORD(value->fields.sourceUri) )
        return (ServantSkillEntity_o *)value->fields.namespaces;
LABEL_15:
      v10 = sub_B776C8(result);
      sub_B77668(v10, 0LL);
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
  if ( (byte_4389577 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_4389577 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44904220(v4, (System_String_o *)StringLiteral_1252/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_array *__fastcall ServantSkillMaster__getServantSkillList(
        ServantSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = svtId;
  if ( (byte_438957B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_B775C4(&ServantSkillEntity_TypeInfo);
    byte_438957B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        v9 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (ServantSkillEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == ServantSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7769C(list, *(_QWORD *)&svtId);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (ServantSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
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
    v22 = sub_B776C8(EntityListFromIdNum);
    sub_B77668(v22, 0LL);
  }
  v20 = &EntityListFromIdNum->m_Items[v19];
  while ( 1 )
  {
    v21 = *v20;
    if ( !*v20 )
      sub_B7769C(EntityListFromIdNum, v16);
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
  BalanceConfig_c *v14; // x0
  ServantSkillEntity_array *v15; // x27
  signed __int64 v16; // x19
  BattleServantConfConponent_o *i; // x21
  signed __int64 v18; // x19
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x20
  unsigned __int64 v28; // x19
  BalanceConfig_c *v29; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  const MethodInfo *v33; // [xsp+18h] [xbp-68h]

  if ( (byte_438957E & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&ServantSkillEntity___TypeInfo);
    byte_438957E = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (ServantSkillEntity_array *)sub_B775DC(
                                      ServantSkillEntity___TypeInfo,
                                      (unsigned int)v14->static_fields->SvtEquipSkillListMax);
  v16 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v15->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v29 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    if ( v16 >= v29->static_fields->SvtEquipSkillListMax )
      break;
    v18 = v16 + 1;
    UseEntity = ServantSkillMaster__getUseEntity(
                  this,
                  svtId,
                  v18,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  beforeClearQuestId,
                  -1,
                  userSvtId,
                  0,
                  v33);
    if ( !v15 )
      sub_B7769C(UseEntity, v20);
    v27 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantSkillEntity_o *)sub_B77684(UseEntity, v15->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v32 = sub_B776BC();
        sub_B77668(v32, 0LL);
      }
    }
    v28 = v18 - 1;
    if ( v28 >= v15->max_length )
    {
      v31 = sub_B776C8(UseEntity);
      sub_B77668(v31, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v27;
    sub_B77560(i, v27, v21, v22, v23, v24, v25, v26);
    v16 = v28 + 1;
  }
  return v15;
}


bool __fastcall ServantSkillMaster__preProcess(ServantSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x22
  __int64 v19; // x9
  System_String_o *PriorityKey; // x0
  __int64 v21; // x1
  System_Xml_XmlQualifiedName_o *v22; // x23
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x24
  System_Xml_Schema_XmlSchemaObject_o *v25; // x2
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x1
  ServantSkillMaster___c_c *v31; // x0
  Il2CppObject *v32; // x21
  Il2CppObject *key; // x22
  struct ServantSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v36; // x24
  struct ServantSkillMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct System_Collections_Generic_Dictionary_string__ServantSkillEntity____o *v44; // x23
  System_Xml_Schema_XmlSchemaObject_o *v45; // x0
  __int64 v46; // x1
  int v47; // w21
  ServantSkillMaster_o *v49; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v50; // [xsp+18h] [xbp-B8h] BYREF
  int v51[2]; // [xsp+40h] [xbp-90h]
  int v52; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v53; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4389578 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Comparison_ServantSkillEntity___ctor__);
    sub_B775C4(&System_Comparison_ServantSkillEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___get_Current__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantSkillEntity___get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
    sub_B775C4(&ServantSkillEntity_TypeInfo);
    sub_B775C4(&Method_ServantSkillMaster___c__preProcess_b__5_0__);
    sub_B775C4(&ServantSkillMaster___c_TypeInfo);
    byte_4389578 = 1;
  }
  value = 0LL;
  memset(&v53, 0, sizeof(v53));
  v52 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v49 = this;
  if ( !Enumerator )
    sub_B7769C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_17:
      v14 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
    if ( !v15 )
      sub_B7769C(0LL, v16);
    v19 = *(&ServantSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 300LL) < (unsigned int)v19
      || *(ServantSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * v19 - 8) != ServantSkillEntity_TypeInfo )
    {
      v31 = (ServantSkillMaster___c_c *)sub_B77990(v15);
LABEL_52:
      sub_B7769C(v31, v30);
    }
    PriorityKey = ServantSkillMaster__getPriorityKey(
                    (ServantSkillMaster_o *)v15,
                    *(_DWORD *)(v15 + 16),
                    *(_DWORD *)(v15 + 20),
                    v17);
    if ( !v4 )
      sub_B7769C(PriorityKey, v21);
    v22 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v4,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___TryGetValue__) )
    {
      v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v24,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v24;
      v25 = (System_Xml_Schema_XmlSchemaObject_o *)v24;
      this = v49;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v4,
        v22,
        v25,
        (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B7769C(0LL, v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v18,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantSkillEntity__Add__);
  }
  v51[0] = 117;
  v52 = 1;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_31:
    v29 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v29 + 8));
  v52 = 0;
  if ( !v4 )
LABEL_57:
    sub_B7769C(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v50,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v4,
    (const MethodInfo_2F7DBD4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___GetEnumerator__);
  v53 = v50;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v53,
            (const MethodInfo_27E37AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___MoveNext__) )
  {
    v31 = ServantSkillMaster___c_TypeInfo;
    key = v53.fields.current.fields.key;
    v32 = v53.fields.current.fields.value;
    if ( (BYTE3(ServantSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillMaster___c_TypeInfo);
      v31 = ServantSkillMaster___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = ServantSkillMaster___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_ServantSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v36,
        Method_ServantSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_ServantSkillEntity___ctor__);
      v37 = ServantSkillMaster___c_TypeInfo->static_fields;
      v37->__9__5_0 = (struct System_Comparison_ServantSkillEntity__o *)_9__5_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v37->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      this = v49;
    }
    if ( !v32 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v32,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_ServantSkillEntity__Sort__);
    v44 = this->fields.listCache;
    v45 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                                   (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantSkillEntity__ToArray__);
    if ( !v44 )
      sub_B7769C(v45, v46);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v44,
      (System_Xml_XmlQualifiedName_o *)key,
      v45,
      (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__ServantSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v32,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ServantSkillEntity__Clear__);
  }
  v51[0] = 240;
  v47 = ++v52;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v53,
    (const MethodInfo_27E3914 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantSkillEntity___Dispose__);
  if ( v47 && v51[v47 - 1] == 240 )
    v52 = v47 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v4,
    (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E40 & 1) == 0 )
  {
    sub_B775C4(&ServantSkillMaster___c_TypeInfo);
    byte_4388E40 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ServantSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantSkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, a);
  return a->fields.priority - b->fields.priority;
}