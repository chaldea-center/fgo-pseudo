void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389CD2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
    byte_4389CD2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    350,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity(
        UserEventSpotMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4389CD0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
    byte_4389CD0 = 1;
  }
  PK = UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
}


UserEventSpotEntity_array *__fastcall UserEventSpotMaster__GetEntityList(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x1
  int64_t list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x24
  __int64 v11; // x10
  __int64 v12; // x28

  if ( (byte_4389CD4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UserEventSpotEntity_TypeInfo);
    byte_4389CD4 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
           (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = list;
    v9 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v9,
                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v11 = *(&UserEventSpotEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(UserEventSpotEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == UserEventSpotEntity_TypeInfo )
        {
          v12 = *(_QWORD *)(list + 16);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          list = NetworkManager__get_UserId(0LL);
          if ( v12 == list && v10->fields.targetId == eventId )
          {
            if ( !v5 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              v10,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserEventSpotEntity__Add__);
          }
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B7769C(list, v6);
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_20;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_23016864(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_String_array *v5; // x20
  System_Int32_array **lookup; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x21
  System_String_o *v43; // x20
  System_Int32_array *v44; // x8
  System_Int32_array **v45; // x19
  unsigned __int64 v46; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v47; // x11
  __int64 v48; // x0
  __int64 v49; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventSpotEntity_o *v54; // [xsp+10h] [xbp-30h] BYREF
  int32_t v55; // [xsp+18h] [xbp-28h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-24h] BYREF

  v55 = spotId;
  v56 = eventId;
  if ( (byte_4389CD3 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&UserEventSpotEntity_TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_4389CD3 = 1;
  }
  UserId = 0LL;
  v54 = 0LL;
  v5 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (System_Int32_array **)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v5 )
LABEL_43:
    sub_B7769C(lookup, v7);
  v14 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B77684(lookup, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( !v5->max_length )
    goto LABEL_41;
  v5->m_Items[0] = (System_String_o *)v14;
  sub_B77560((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
  lookup = (System_Int32_array **)StringLiteral_1252/*":"*/;
  if ( StringLiteral_1252/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B77684(StringLiteral_1252/*":"*/, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v21 = (System_Int32_array **)StringLiteral_1252/*":"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_41;
  v5->m_Items[1] = (System_String_o *)v21;
  sub_B77560((BattleServantConfConponent_o *)&v5->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v56, 0LL);
  v28 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B77684(lookup, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_41;
  v5->m_Items[2] = (System_String_o *)v28;
  sub_B77560((BattleServantConfConponent_o *)&v5->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  lookup = (System_Int32_array **)StringLiteral_1252/*":"*/;
  if ( StringLiteral_1252/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B77684(StringLiteral_1252/*":"*/, v5->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v35 = (System_Int32_array **)StringLiteral_1252/*":"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_41;
  v5->m_Items[3] = (System_String_o *)v35;
  sub_B77560((BattleServantConfConponent_o *)&v5->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v55, 0LL);
  v42 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B77684(lookup, v5->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_42:
      v52 = sub_B776BC();
      sub_B77668(v52, 0LL);
    }
  }
  if ( v5->max_length <= 4 )
  {
LABEL_41:
    v51 = sub_B776C8(lookup);
    sub_B77668(v51, 0LL);
  }
  v5->m_Items[4] = (System_String_o *)v42;
  sub_B77560((BattleServantConfConponent_o *)&v5->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
  v43 = System_String__Concat_44982964(v5, 0LL);
  lookup = (System_Int32_array **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  v44 = *lookup;
  v45 = lookup;
  if ( HIWORD((*lookup)->m_Items[67]) )
  {
    v46 = 0LL;
    v47 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)&v44->m_Items[37]
                                                                                      + 8LL);
    while ( *(v47 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v46;
      v47 += 2;
      if ( v46 >= HIWORD((*lookup)->m_Items[67]) )
        goto LABEL_31;
    }
    v48 = (__int64)&(&v44->bounds)[2 * *(_DWORD *)v47 + 39];
  }
  else
  {
LABEL_31:
    v48 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Int32_array **, System_String_o *, UserEventSpotEntity_o **, _QWORD))v48)(
          v45,
          v43,
          &v54,
          *(_QWORD *)(v48 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v54 )
    return 0LL;
  v49 = *(&UserEventSpotEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v54->klass->_2.bitflags2 + 1) < (unsigned int)v49 )
    return 0LL;
  if ( (UserEventSpotEntity_c *)v54->klass->_2.typeHierarchy[v49 - 1] == UserEventSpotEntity_TypeInfo )
    return v54;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventSpotMaster__TryGetEntity(
        UserEventSpotMaster_o *this,
        UserEventSpotEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4389CD1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
    byte_4389CD1 = 1;
  }
  PK = UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}