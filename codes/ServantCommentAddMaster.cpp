void __fastcall ServantCommentAddMaster___ctor(ServantCommentAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FCE74 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__, method);
    byte_40FCE74 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    180,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
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
  System_String_o *EntitiyList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_String_c *klass; // x8
  System_String_o *v21; // x23
  int v22; // w19
  int v23; // w20
  ServantCommentAddEntity_o *v24; // x0
  __int64 v25; // x21
  int v26; // w28
  void **p_monitor; // x19
  void *v28; // x24
  const MethodInfo *v29; // x5
  int32_t v30; // w19
  int32_t v31; // w26
  int32_t v32; // w27
  System_Int32_array *v33; // x25
  int32_t v34; // w24
  int v35; // w23
  System_String_o *v36; // x28
  System_String_o *ConditionText; // x24
  System_String_o *v38; // x0
  void **v40; // [xsp+0h] [xbp-70h]
  System_String_o *v41; // [xsp+8h] [xbp-68h]

  if ( (byte_40FCE77 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, textType);
    sub_B16FFC(&ServantCommentEntity_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_3283/*"COND_TYPE_AND_FLAVOR2"*/, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40FCE77 = 1;
  }
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  EntitiyList = (System_String_o *)ServantCommentAddMaster__GetEntitiyList(
                                     this,
                                     svtId,
                                     id,
                                     priority,
                                     *(const MethodInfo **)&id);
  if ( !EntitiyList )
LABEL_32:
    sub_B170D4();
  klass = EntitiyList[1].klass;
  v21 = EntitiyList;
  if ( (int)klass >= 1 )
  {
    v22 = 0;
    v23 = 0;
    while ( v22 < (unsigned int)klass )
    {
      v24 = (ServantCommentAddEntity_o *)*((_QWORD *)&v21[1].monitor + v22);
      if ( !v24 )
        goto LABEL_32;
      EntitiyList = (System_String_o *)ServantCommentAddEntity__IsOpen(v24, oldFriendShipRank, v19);
      klass = v21[1].klass;
      ++v22;
      v23 += ((unsigned __int8)EntitiyList & 1) == 0;
      if ( v22 >= (int)klass )
        goto LABEL_11;
    }
LABEL_31:
    sub_B17100(EntitiyList, v18, v19);
    sub_B170A0();
  }
  v23 = 0;
LABEL_11:
  if ( (int)klass >= 1 )
  {
    v25 = 0LL;
    v26 = 0;
    p_monitor = &v21[1].monitor;
    v40 = &v21[1].monitor;
    v41 = v21;
    while ( (unsigned int)v25 < (unsigned int)klass )
    {
      v28 = p_monitor[v25];
      if ( !v28 )
        goto LABEL_32;
      EntitiyList = (System_String_o *)ServantCommentAddEntity__IsOpen(
                                         (ServantCommentAddEntity_o *)p_monitor[v25],
                                         oldFriendShipRank,
                                         v19);
      if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      {
        v30 = oldFriendShipRank;
        v32 = *((_DWORD *)v28 + 8);
        v31 = *((_DWORD *)v28 + 9);
        v33 = (System_Int32_array *)*((_QWORD *)v28 + 5);
        v34 = *((_DWORD *)v28 + 12);
        v35 = v26 + 1;
        if ( v26 + 1 == v23 )
          v36 = textType;
        else
          v36 = textType2;
        if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
        }
        ConditionText = ServantCommentEntity__GetConditionText(v36, v32, v31, v33, v34, v29);
        if ( System_String__IsNullOrEmpty(v16, 0LL) )
        {
          oldFriendShipRank = v30;
          v26 = v35;
        }
        else
        {
          oldFriendShipRank = v30;
          v26 = v35;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3283/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
          v16 = System_String__Concat_43743732(v16, v38, 0LL);
        }
        p_monitor = v40;
        v21 = v41;
        EntitiyList = System_String__Concat_43743732(v16, ConditionText, 0LL);
        v16 = EntitiyList;
      }
      LODWORD(klass) = v21[1].klass;
      if ( (int)++v25 >= (int)klass )
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x24
  int32_t v22; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v25; // x10

  if ( (byte_40FCE75 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo, v13);
    sub_B16FFC(&ServantCommentAddEntity_TypeInfo, v14);
    byte_40FCE75 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v23 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v23,
                                                                      v22,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = *(&ServantCommentAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (ServantCommentAddEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] == ServantCommentAddEntity_TypeInfo
          && Item->fields.missionTargetId == svtId
          && Item->fields.missionConditionDetailId == id
          && Item->fields.targetId == priority )
        {
          if ( !v21 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v21,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__);
        }
      }
      if ( ++v22 >= Count )
        goto LABEL_16;
    }
LABEL_18:
    sub_B170D4();
  }
LABEL_16:
  if ( !v21 )
    goto LABEL_18;
  return (ServantCommentAddEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
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

  if ( (byte_40FCE72 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FCE72 = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&idx);
  return (ServantCommentAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v19; // x10

  if ( (byte_40FCE76 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B16FFC(&ServantCommentAddEntity_TypeInfo, v12);
    byte_40FCE76 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v17 )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v17,
             v16,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = *(&ServantCommentAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (ServantCommentAddEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == ServantCommentAddEntity_TypeInfo
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
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  int max_length; // w8
  ServantCommentAddEntity_array *v16; // x22
  unsigned int v17; // w23

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(this, svtId, id, priority, *(const MethodInfo **)&kind);
  if ( !EntitiyList )
LABEL_12:
    sub_B170D4();
  max_length = EntitiyList->max_length;
  v16 = EntitiyList;
  if ( max_length < 1 )
    return 0;
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= max_length )
    {
      sub_B17100(EntitiyList, v12, v13);
      sub_B170A0();
    }
    EntitiyList = (ServantCommentAddEntity_array *)v16->m_Items[v17];
    if ( !EntitiyList )
      goto LABEL_12;
    if ( LODWORD(EntitiyList->m_Items[0]) == kind )
    {
      EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOnlyOpenQuestCond(
                                                       (ServantCommentAddEntity_o *)EntitiyList,
                                                       questId,
                                                       questPhase,
                                                       v14);
      if ( ((unsigned __int8)EntitiyList & 1) != 0 )
        return 1;
    }
    max_length = v16->max_length;
    if ( (int)++v17 >= max_length )
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
  ServantCommentAddEntity_o *v13; // x0

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(
                  this,
                  svtId,
                  id,
                  priority,
                  *(const MethodInfo **)&oldFriendShipRank);
  if ( !EntitiyList )
LABEL_11:
    sub_B170D4();
  max_length = EntitiyList->max_length;
  v11 = EntitiyList;
  if ( max_length < 1 )
    return 1;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      sub_B17100(EntitiyList, v8, v9);
      sub_B170A0();
    }
    v13 = v11->m_Items[v12];
    if ( !v13 )
      goto LABEL_11;
    EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOpen(v13, oldFriendShipRank, v9);
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

  if ( (byte_40FCE73 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__, entity);
    byte_40FCE73 = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
}