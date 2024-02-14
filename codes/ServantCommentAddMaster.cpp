void __fastcall ServantCommentAddMaster___ctor(ServantCommentAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215EFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__, method);
    byte_4215EFE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    180,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
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
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  ServantCommentAddEntity_o *v20; // x23
  int v21; // w19
  int v22; // w20
  __int64 v23; // x21
  int v24; // w28
  int32_t *p_condType; // x19
  __int64 v26; // x24
  const MethodInfo *v27; // x5
  int32_t v28; // w19
  int32_t v29; // w26
  int32_t v30; // w27
  System_Int32_array *v31; // x25
  int32_t v32; // w24
  int v33; // w23
  System_String_o *v34; // x28
  System_String_o *ConditionText; // x24
  System_String_o *v36; // x0
  __int64 v38; // x0
  int32_t *v39; // [xsp+0h] [xbp-70h]
  ServantCommentAddEntity_o *v40; // [xsp+8h] [xbp-68h]

  if ( (byte_4215F01 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, textType);
    sub_B0D8A4(&ServantCommentEntity_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_3305/*"COND_TYPE_AND_FLAVOR2"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_4215F01 = 1;
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
    sub_B0D97C(EntitiyList);
  v19 = *(_QWORD *)&EntitiyList->fields.priority;
  v20 = EntitiyList;
  if ( (int)v19 >= 1 )
  {
    v21 = 0;
    v22 = 0;
    while ( v21 < (unsigned int)v19 )
    {
      EntitiyList = (ServantCommentAddEntity_o *)*((_QWORD *)&v20->fields.condType + v21);
      if ( !EntitiyList )
        goto LABEL_32;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(EntitiyList, oldFriendShipRank, v18);
      v19 = *(_QWORD *)&v20->fields.priority;
      ++v21;
      v22 += ((unsigned __int8)EntitiyList & 1) == 0;
      if ( v21 >= (int)v19 )
        goto LABEL_11;
    }
LABEL_31:
    v38 = sub_B0D9A8(EntitiyList);
    sub_B0D948(v38, 0LL);
  }
  v22 = 0;
LABEL_11:
  if ( (int)v19 >= 1 )
  {
    v23 = 0LL;
    v24 = 0;
    p_condType = &v20->fields.condType;
    v39 = &v20->fields.condType;
    v40 = v20;
    while ( (unsigned int)v23 < (unsigned int)v19 )
    {
      v26 = *(_QWORD *)&p_condType[2 * v23];
      if ( !v26 )
        goto LABEL_32;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(
                                                   *(ServantCommentAddEntity_o **)&p_condType[2 * v23],
                                                   oldFriendShipRank,
                                                   v18);
      if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      {
        v28 = oldFriendShipRank;
        v30 = *(_DWORD *)(v26 + 32);
        v29 = *(_DWORD *)(v26 + 36);
        v31 = *(System_Int32_array **)(v26 + 40);
        v32 = *(_DWORD *)(v26 + 48);
        v33 = v24 + 1;
        if ( v24 + 1 == v22 )
          v34 = textType;
        else
          v34 = textType2;
        if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
        }
        ConditionText = ServantCommentEntity__GetConditionText(v34, v30, v29, v31, v32, v27);
        if ( System_String__IsNullOrEmpty(v16, 0LL) )
        {
          oldFriendShipRank = v28;
          v24 = v33;
        }
        else
        {
          oldFriendShipRank = v28;
          v24 = v33;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3305/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
          v16 = System_String__Concat_43849904(v16, v36, 0LL);
        }
        p_condType = v39;
        v20 = v40;
        EntitiyList = (ServantCommentAddEntity_o *)System_String__Concat_43849904(v16, ConditionText, 0LL);
        v16 = (System_String_o *)EntitiyList;
      }
      LODWORD(v19) = v20->fields.priority;
      if ( (int)++v23 >= (int)v19 )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x24
  int32_t v20; // w25
  __int64 v21; // x10

  if ( (byte_4215EFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo, v13);
    sub_B0D8A4(&ServantCommentAddEntity_TypeInfo, v14);
    byte_4215EFF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v20,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = *(&ServantCommentAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (ServantCommentAddEntity_c *)list->klass->_2.typeHierarchy[v21 - 1] == ServantCommentAddEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId
          && HIDWORD(list->fields.items) == id
          && LODWORD(list->fields._syncRoot) == priority )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__);
        }
      }
      if ( ++v20 >= Count )
        goto LABEL_16;
    }
LABEL_18:
    sub_B0D97C(list);
  }
LABEL_16:
  if ( !v19 )
    goto LABEL_18;
  return (ServantCommentAddEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
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

  if ( (byte_4215EFC & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4215EFC = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&idx);
  return (ServantCommentAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266A024 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
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

  if ( (byte_4215F00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B0D8A4(&ServantCommentAddEntity_TypeInfo, v12);
    byte_4215F00 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
  const MethodInfo *v12; // x3
  int max_length; // w8
  ServantCommentAddEntity_array *v14; // x22
  unsigned int v15; // w23
  __int64 v17; // x0

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(this, svtId, id, priority, *(const MethodInfo **)&kind);
  if ( !EntitiyList )
LABEL_12:
    sub_B0D97C(EntitiyList);
  max_length = EntitiyList->max_length;
  v14 = EntitiyList;
  if ( max_length < 1 )
    return 0;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= max_length )
    {
      v17 = sub_B0D9A8(EntitiyList);
      sub_B0D948(v17, 0LL);
    }
    EntitiyList = (ServantCommentAddEntity_array *)v14->m_Items[v15];
    if ( !EntitiyList )
      goto LABEL_12;
    if ( LODWORD(EntitiyList->m_Items[0]) == kind )
    {
      EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOnlyOpenQuestCond(
                                                       (ServantCommentAddEntity_o *)EntitiyList,
                                                       questId,
                                                       questPhase,
                                                       v12);
      if ( ((unsigned __int8)EntitiyList & 1) != 0 )
        return 1;
    }
    max_length = v14->max_length;
    if ( (int)++v15 >= max_length )
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
  const MethodInfo *v8; // x2
  int max_length; // w8
  ServantCommentAddEntity_array *v10; // x20
  unsigned int v11; // w21
  __int64 v13; // x0

  EntitiyList = ServantCommentAddMaster__GetEntitiyList(
                  this,
                  svtId,
                  id,
                  priority,
                  *(const MethodInfo **)&oldFriendShipRank);
  if ( !EntitiyList )
LABEL_11:
    sub_B0D97C(EntitiyList);
  max_length = EntitiyList->max_length;
  v10 = EntitiyList;
  if ( max_length < 1 )
    return 1;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
    {
      v13 = sub_B0D9A8(EntitiyList);
      sub_B0D948(v13, 0LL);
    }
    EntitiyList = (ServantCommentAddEntity_array *)v10->m_Items[v11];
    if ( !EntitiyList )
      goto LABEL_11;
    EntitiyList = (ServantCommentAddEntity_array *)ServantCommentAddEntity__IsOpen(
                                                     (ServantCommentAddEntity_o *)EntitiyList,
                                                     oldFriendShipRank,
                                                     v8);
    if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      return 0;
    max_length = v10->max_length;
    if ( (int)++v11 >= max_length )
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

  if ( (byte_4215EFD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__, entity);
    byte_4215EFD = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
}