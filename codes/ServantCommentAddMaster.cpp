void __fastcall ServantCommentAddMaster___ctor(ServantCommentAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C75E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
    byte_438C75E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    181,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
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
  System_String_o *v13; // x22
  ServantCommentAddEntity_o *EntitiyList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  ServantCommentAddEntity_o *v18; // x23
  int v19; // w19
  int v20; // w20
  __int64 v21; // x21
  int v22; // w28
  int32_t *p_condType; // x19
  __int64 v24; // x24
  const MethodInfo *v25; // x5
  int32_t v26; // w19
  int32_t v27; // w26
  int32_t v28; // w27
  System_Int32_array *v29; // x25
  int32_t v30; // w24
  int v31; // w23
  System_String_o *v32; // x28
  System_String_o *ConditionText; // x24
  System_String_o *v34; // x0
  __int64 v36; // x0
  int32_t *v37; // [xsp+0h] [xbp-70h]
  ServantCommentAddEntity_o *v38; // [xsp+8h] [xbp-68h]

  if ( (byte_438C761 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ServantCommentEntity_TypeInfo);
    sub_B775C4(&StringLiteral_3418/*"COND_TYPE_AND_FLAVOR2"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C761 = 1;
  }
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddMaster__GetEntitiyList(
                                               this,
                                               svtId,
                                               id,
                                               priority,
                                               *(const MethodInfo **)&id);
  if ( !EntitiyList )
LABEL_32:
    sub_B7769C(EntitiyList, v15);
  v17 = *(_QWORD *)&EntitiyList->fields.priority;
  v18 = EntitiyList;
  if ( (int)v17 >= 1 )
  {
    v19 = 0;
    v20 = 0;
    while ( v19 < (unsigned int)v17 )
    {
      EntitiyList = (ServantCommentAddEntity_o *)*((_QWORD *)&v18->fields.condType + v19);
      if ( !EntitiyList )
        goto LABEL_32;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(EntitiyList, oldFriendShipRank, v16);
      v17 = *(_QWORD *)&v18->fields.priority;
      ++v19;
      v20 += ((unsigned __int8)EntitiyList & 1) == 0;
      if ( v19 >= (int)v17 )
        goto LABEL_11;
    }
LABEL_31:
    v36 = sub_B776C8(EntitiyList);
    sub_B77668(v36, 0LL);
  }
  v20 = 0;
LABEL_11:
  if ( (int)v17 >= 1 )
  {
    v21 = 0LL;
    v22 = 0;
    p_condType = &v18->fields.condType;
    v37 = &v18->fields.condType;
    v38 = v18;
    while ( (unsigned int)v21 < (unsigned int)v17 )
    {
      v24 = *(_QWORD *)&p_condType[2 * v21];
      if ( !v24 )
        goto LABEL_32;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(
                                                   *(ServantCommentAddEntity_o **)&p_condType[2 * v21],
                                                   oldFriendShipRank,
                                                   v16);
      if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      {
        v26 = oldFriendShipRank;
        v28 = *(_DWORD *)(v24 + 32);
        v27 = *(_DWORD *)(v24 + 36);
        v29 = *(System_Int32_array **)(v24 + 40);
        v30 = *(_DWORD *)(v24 + 48);
        v31 = v22 + 1;
        if ( v22 + 1 == v20 )
          v32 = textType;
        else
          v32 = textType2;
        if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
        }
        ConditionText = ServantCommentEntity__GetConditionText(v32, v28, v27, v29, v30, v25);
        if ( System_String__IsNullOrEmpty(v13, 0LL) )
        {
          oldFriendShipRank = v26;
          v22 = v31;
        }
        else
        {
          oldFriendShipRank = v26;
          v22 = v31;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3418/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
          v13 = System_String__Concat_44901936(v13, v34, 0LL);
        }
        p_condType = v37;
        v18 = v38;
        EntitiyList = (ServantCommentAddEntity_o *)System_String__Concat_44901936(v13, ConditionText, 0LL);
        v13 = (System_String_o *)EntitiyList;
      }
      LODWORD(v17) = v18->fields.priority;
      if ( (int)++v21 >= (int)v17 )
        return v13;
    }
    goto LABEL_31;
  }
  return v13;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x24
  int32_t v12; // w25
  __int64 v13; // x10

  v7 = svtId;
  if ( (byte_438C75F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo);
    sub_B775C4(&ServantCommentAddEntity_TypeInfo);
    byte_438C75F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        v13 = *(&ServantCommentAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (ServantCommentAddEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == ServantCommentAddEntity_TypeInfo
          && LODWORD(list->fields.items) == v7
          && HIDWORD(list->fields.items) == id
          && LODWORD(list->fields._syncRoot) == priority )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__);
        }
      }
      if ( ++v12 >= Count )
        goto LABEL_16;
    }
LABEL_18:
    sub_B7769C(list, *(_QWORD *)&svtId);
  }
LABEL_16:
  if ( !v11 )
    goto LABEL_18;
  return (ServantCommentAddEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                            (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
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

  if ( (byte_438C75C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
    byte_438C75C = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&idx);
  return (ServantCommentAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10

  if ( (byte_438C760 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&ServantCommentAddEntity_TypeInfo);
    byte_438C760 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B7769C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v14,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = *(&ServantCommentAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (ServantCommentAddEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == ServantCommentAddEntity_TypeInfo
        && LODWORD(Item[1].klass) == svtId
        && HIDWORD(Item[1].klass) == id
        && LODWORD(Item[1].monitor) == priority
        && LODWORD(Item[2].klass) == condType )
      {
        return 1;
      }
    }
    if ( ++v14 >= v13 )
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
    sub_B7769C(EntitiyList, v12);
  max_length = EntitiyList->max_length;
  v15 = EntitiyList;
  if ( max_length < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
    {
      v18 = sub_B776C8(EntitiyList);
      sub_B77668(v18, 0LL);
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
    sub_B7769C(EntitiyList, v8);
  max_length = EntitiyList->max_length;
  v11 = EntitiyList;
  if ( max_length < 1 )
    return 1;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      v14 = sub_B776C8(EntitiyList);
      sub_B77668(v14, 0LL);
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

  if ( (byte_438C75D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
    byte_438C75D = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
}