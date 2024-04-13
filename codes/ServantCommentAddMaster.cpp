void __fastcall ServantCommentAddMaster___ctor(ServantCommentAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9CEF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9CEF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    181,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string___ctor__);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_String_o *v22; // x22
  ServantCommentAddEntity_o *EntitiyList; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  __int64 v26; // x8
  ServantCommentAddEntity_o *v27; // x23
  int v28; // w19
  int v29; // w20
  __int64 v30; // x21
  int v31; // w28
  int32_t *p_condType; // x19
  __int64 v33; // x24
  const MethodInfo *v34; // x5
  int32_t v35; // w19
  int32_t v36; // w26
  int32_t v37; // w27
  System_Int32_array *v38; // x25
  int32_t v39; // w24
  int v40; // w23
  System_String_o *v41; // x28
  System_String_o *ConditionText; // x24
  System_String_o *v43; // x0
  __int64 v45; // x0
  int32_t *v46; // [xsp+0h] [xbp-70h]
  ServantCommentAddEntity_o *v47; // [xsp+8h] [xbp-68h]

  if ( (byte_42E9CF2 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)textType, (_DWORD)textType2, *(_QWORD *)&svtId);
    sub_B5D5C4(&ServantCommentEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_3358/*"COND_TYPE_AND_FLAVOR2"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E9CF2 = 1;
  }
  v22 = (System_String_o *)StringLiteral_1/*""*/;
  EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddMaster__GetEntitiyList(
                                               this,
                                               svtId,
                                               id,
                                               priority,
                                               *(const MethodInfo **)&id);
  if ( !EntitiyList )
LABEL_32:
    sub_B5D69C(EntitiyList, v24);
  v26 = *(_QWORD *)&EntitiyList->fields.priority;
  v27 = EntitiyList;
  if ( (int)v26 >= 1 )
  {
    v28 = 0;
    v29 = 0;
    while ( v28 < (unsigned int)v26 )
    {
      EntitiyList = (ServantCommentAddEntity_o *)*((_QWORD *)&v27->fields.condType + v28);
      if ( !EntitiyList )
        goto LABEL_32;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(EntitiyList, oldFriendShipRank, v25);
      v26 = *(_QWORD *)&v27->fields.priority;
      ++v28;
      v29 += ((unsigned __int8)EntitiyList & 1) == 0;
      if ( v28 >= (int)v26 )
        goto LABEL_11;
    }
LABEL_31:
    v45 = sub_B5D6C8(EntitiyList);
    sub_B5D668(v45, 0LL);
  }
  v29 = 0;
LABEL_11:
  if ( (int)v26 >= 1 )
  {
    v30 = 0LL;
    v31 = 0;
    p_condType = &v27->fields.condType;
    v46 = &v27->fields.condType;
    v47 = v27;
    while ( (unsigned int)v30 < (unsigned int)v26 )
    {
      v33 = *(_QWORD *)&p_condType[2 * v30];
      if ( !v33 )
        goto LABEL_32;
      EntitiyList = (ServantCommentAddEntity_o *)ServantCommentAddEntity__IsOpen(
                                                   *(ServantCommentAddEntity_o **)&p_condType[2 * v30],
                                                   oldFriendShipRank,
                                                   v25);
      if ( ((unsigned __int8)EntitiyList & 1) == 0 )
      {
        v35 = oldFriendShipRank;
        v37 = *(_DWORD *)(v33 + 32);
        v36 = *(_DWORD *)(v33 + 36);
        v38 = *(System_Int32_array **)(v33 + 40);
        v39 = *(_DWORD *)(v33 + 48);
        v40 = v31 + 1;
        if ( v31 + 1 == v29 )
          v41 = textType;
        else
          v41 = textType2;
        if ( (BYTE3(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantCommentEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
        }
        ConditionText = ServantCommentEntity__GetConditionText(v41, v37, v36, v38, v39, v34);
        if ( System_String__IsNullOrEmpty(v22, 0LL) )
        {
          oldFriendShipRank = v35;
          v31 = v40;
        }
        else
        {
          oldFriendShipRank = v35;
          v31 = v40;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
          v22 = System_String__Concat_44577788(v22, v43, 0LL);
        }
        p_condType = v46;
        v27 = v47;
        EntitiyList = (ServantCommentAddEntity_o *)System_String__Concat_44577788(v22, ConditionText, 0LL);
        v22 = (System_String_o *)EntitiyList;
      }
      LODWORD(v26) = v27->fields.priority;
      if ( (int)++v30 >= (int)v26 )
        return v22;
    }
    goto LABEL_31;
  }
  return v22;
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x24
  int32_t v30; // w25
  __int64 v31; // x10

  v7 = svtId;
  if ( (byte_42E9CF0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      svtId,
      id,
      *(_QWORD *)&priority);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantCommentAddEntity_TypeInfo, v24, v25, v26);
    byte_42E9CF0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCommentAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCommentAddEntity___ctor__);
  if ( Count >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v30,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        v31 = *(&ServantCommentAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v31
          && (ServantCommentAddEntity_c *)list->klass->_2.typeHierarchy[v31 - 1] == ServantCommentAddEntity_TypeInfo
          && LODWORD(list->fields.items) == v7
          && HIDWORD(list->fields.items) == id
          && LODWORD(list->fields._syncRoot) == priority )
        {
          if ( !v29 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCommentAddEntity__Add__);
        }
      }
      if ( ++v30 >= Count )
        goto LABEL_16;
    }
LABEL_18:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
LABEL_16:
  if ( !v29 )
    goto LABEL_18;
  return (ServantCommentAddEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCommentAddEntity__ToArray__);
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

  if ( (byte_42E9CED & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__,
      svtId,
      id,
      *(_QWORD *)&priority);
    byte_42E9CED = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&idx);
  return (ServantCommentAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__GetEntity__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w24
  int32_t v20; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x10

  if ( (byte_42E9CF1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      svtId,
      id,
      *(_QWORD *)&priority);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&ServantCommentAddEntity_TypeInfo, v14, v15, v16);
    byte_42E9CF1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v19 = Count;
  v20 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v20,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v22 = *(&ServantCommentAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (ServantCommentAddEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == ServantCommentAddEntity_TypeInfo
        && LODWORD(Item[1].klass) == svtId
        && HIDWORD(Item[1].klass) == id
        && LODWORD(Item[1].monitor) == priority
        && LODWORD(Item[2].klass) == condType )
      {
        return 1;
      }
    }
    if ( ++v20 >= v19 )
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
    sub_B5D69C(EntitiyList, v12);
  max_length = EntitiyList->max_length;
  v15 = EntitiyList;
  if ( max_length < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
    {
      v18 = sub_B5D6C8(EntitiyList);
      sub_B5D668(v18, 0LL);
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
    sub_B5D69C(EntitiyList, v8);
  max_length = EntitiyList->max_length;
  v11 = EntitiyList;
  if ( max_length < 1 )
    return 1;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      v14 = sub_B5D6C8(EntitiyList);
      sub_B5D668(v14, 0LL);
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

  if ( (byte_42E9CEE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&id);
    byte_42E9CEE = 1;
  }
  PK = ServantCommentAddEntity__CreatePK(svtId, id, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantCommentAddMaster__ServantCommentAddEntity__string__TryGetEntity__);
}