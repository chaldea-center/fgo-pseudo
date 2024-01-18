void __fastcall ServantCommentAddMaster___ctor(ServantCommentAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189EDB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__, method);
    byte_4189EDB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    180,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommentAddMaster__GetConditionString(
        ServantCommentAddMaster_o *this,
        System_String_o *textType,
        System_String_o *textType2,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *v16; // x22
  ServantCommentAddEntity_o *EntitiyList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x8
  ServantCommentAddEntity_o *v21; // x23
  int v22; // w19
  int v23; // w20
  __int64 v24; // x21
  int v25; // w28
  int32_t *p_condType; // x19
  __int64 v27; // x24
  const MethodInfo *v28; // x5
  int32_t v29; // w19
  int32_t v30; // w26
  int32_t v31; // w27
  System_Int32_array *v32; // x25
  int32_t v33; // w24
  int v34; // w23
  System_String_o *v35; // x28
  System_String_o *ConditionText; // x24
  System_String_o *v37; // x0
  __int64 v39; // x0
  int32_t *v40; // [xsp+0h] [xbp-70h]
  ServantCommentAddEntity_o *v41; // [xsp+8h] [xbp-68h]

  if ( (byte_4189EDE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, textType);
    sub_B2C35C(&ServantCommentEntity_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_3292/*"COND_TYPE_AND_FLAVOR2"*/, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_4189EDE = 1;
  }
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddMaster__GetEntitiyList(
                                               this,
                                               svtId,
                                               id,
                                               priority,
                                               *(const MethodInfo **)&id);
  if ( !EntitiyList )
LABEL_32:
    sub_B2C434(EntitiyList, v18);
  v20 = *(_QWORD *)&EntitiyList->fields.priority;
  v21 = EntitiyList;
  if ( (int)v20 >= 1 )
  {
    v22 = 0;
    v23 = 0;
    while ( v22 < (unsigned int)v20 )
    {
      EntitiyList = (ServantCommentAddEntity_o *)*((_QWORD *)&v21->fields.condType + v22);
      if ( !EntitiyList )
        goto LABEL_32;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(EntitiyList, oldFriendShipRank, v19);
      v20 = *(_QWORD *)&v21->fields.priority;
      ++v22;
      v23 += ((unsigned __int8)EntitiyList & 1) == 0;
      if ( v22 >= (int)v20 )
        goto LABEL_11;
    }
LABEL_31:
    v39 = sub_B2C460(EntitiyList);
    sub_B2C400(v39, 0LL);
  }
  v23 = 0;
LABEL_11:
  if ( (int)v20 >= 1 )
  {
    v24 = 0LL;
    v25 = 0;
    p_condType = &v21->fields.condType;
    v40 = &v21->fields.condType;
    v41 = v21;
    while ( (unsigned int)v24 < (unsigned int)v20 )
    {
      v27 = *(_QWORD *)&p_condType[2 * v24];
      if ( !v27 )
        goto LABEL_32;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(
                                                   *(ServantCommentAddEntity_o **)&p_condType[2 * v24],
                                                   oldFriendShipRank,
                                                   v19);
      if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      {
        v29 = oldFriendShipRank;
        v31 = *(_DWORD *)(v27 + 32);
        v30 = *(_DWORD *)(v27 + 36);
        v32 = *(System_Int32_array **)(v27 + 40);
        v33 = *(_DWORD *)(v27 + 48);
        v34 = v25 + 1;
        if ( v25 + 1 == v23 )
          v35 = textType;
        else
          v35 = textType2;
        if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
        }
        ConditionText = ServantCommentEntity__GetConditionText(v35, v31, v30, v32, v33, v28);
        if ( System_String__IsNullOrEmpty(v16, 0LL) )
        {
          oldFriendShipRank = v29;
          v25 = v34;
        }
        else
        {
          oldFriendShipRank = v29;
          v25 = v34;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3292/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
          v16 = System_String__Concat_44305532(v16, v37, 0LL);
        }
        p_condType = v40;
        v21 = v41;
        EntitiyList = (ServantCommentAddEntity_o *)System_String__Concat_44305532(v16, ConditionText, 0LL);
        v16 = (System_String_o *)EntitiyList;
      }
      LODWORD(v20) = v21->fields.priority;
      if ( (int)++v24 >= (int)v20 )
        return v16;
    }
    goto LABEL_31;
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
ServantCommentAddEntity_array *__fastcall ServantCommentAddMaster__GetEntitiyList(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  int32_t v7; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x24
  int32_t v18; // w25
  __int64 v19; // x10

  v7 = svtId;
  if ( (byte_4189EDC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo, v13);
    sub_B2C35C(&ServantCommentAddEntity_TypeInfo, v14);
    byte_4189EDC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v18,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        v19 = *(&ServantCommentAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (ServantCommentAddEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] == ServantCommentAddEntity_TypeInfo
          && LODWORD(list->fields.items) == v7
          && HIDWORD(list->fields.items) == id
          && LODWORD(list->fields._syncRoot) == priority )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__);
        }
      }
      if ( ++v18 >= Count )
        goto LABEL_16;
    }
LABEL_18:
    sub_B2C434(list, *(_QWORD *)&svtId);
  }
LABEL_16:
  if ( !v17 )
    goto LABEL_18;
  return (ServantCommentAddEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentAddEntity_o *__fastcall ServantCommentAddMaster__GetEntity(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189ED9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4189ED9 = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&idx);
  return (ServantCommentAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddMaster__IsEntityListCondContain(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w24
  int32_t v16; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_4189EDD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B2C35C(&ServantCommentAddEntity_TypeInfo, v12);
    byte_4189EDD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B2C434(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v16,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&ServantCommentAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (ServantCommentAddEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == ServantCommentAddEntity_TypeInfo
        && LODWORD(Item[1].klass) == svtId
        && HIDWORD(Item[1].klass) == id
        && LODWORD(Item[1].monitor) == priority
        && LODWORD(Item[2].klass) == condType )
      {
        return 1;
      }
    }
    if ( ++v16 >= v15 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddMaster__IsOnlyOpenQuestCond(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t kind,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  ServantCommentAddEntity_array *EntitiyList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int max_length; // w8
  ServantCommentAddEntity_array *v15; // x22
  unsigned int v16; // w23
  __int64 v18; // x0

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(this, svtId, id, priority, *(const MethodInfo **)&kind);
  if ( !EntitiyList )
LABEL_12:
    sub_B2C434(EntitiyList, v12);
  max_length = EntitiyList->max_length;
  v15 = EntitiyList;
  if ( max_length < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
    {
      v18 = sub_B2C460(EntitiyList);
      sub_B2C400(v18, 0LL);
    }
    EntitiyList = (ServantCommentAddEntity_array *)v15->m_Items[v16];
    if ( !EntitiyList )
      goto LABEL_12;
    if ( LODWORD(EntitiyList->m_Items[0]) == kind )
    {
      EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOnlyOpenQuestCond(
                                                       (ServantCommentAddEntity_o *)EntitiyList,
                                                       questId,
                                                       questPhase,
                                                       v13);
      if ( ((unsigned __int8)EntitiyList & 1) != 0 )
        return 1;
    }
    max_length = v15->max_length;
    if ( (int)++v16 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddMaster__IsOpen(
        ServantCommentAddMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  ServantCommentAddEntity_array *EntitiyList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int max_length; // w8
  ServantCommentAddEntity_array *v11; // x20
  unsigned int v12; // w21
  __int64 v14; // x0

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(
                  this,
                  svtId,
                  id,
                  priority,
                  *(const MethodInfo **)&oldFriendShipRank);
  if ( !EntitiyList )
LABEL_11:
    sub_B2C434(EntitiyList, v8);
  max_length = EntitiyList->max_length;
  v11 = EntitiyList;
  if ( max_length < 1 )
    return 1;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      v14 = sub_B2C460(EntitiyList);
      sub_B2C400(v14, 0LL);
    }
    EntitiyList = (ServantCommentAddEntity_array *)v11->m_Items[v12];
    if ( !EntitiyList )
      goto LABEL_11;
    EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOpen(
                                                     (ServantCommentAddEntity_o *)EntitiyList,
                                                     oldFriendShipRank,
                                                     v9);
    if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      return 0;
    max_length = v11->max_length;
    if ( (int)++v12 >= max_length )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentAddMaster__TryGetEntity(
        ServantCommentAddMaster_o *this,
        ServantCommentAddEntity_o **entity,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4189EDA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__, entity);
    byte_4189EDA = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
}