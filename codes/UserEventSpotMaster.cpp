void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186F8E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__, method);
    byte_4186F8E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    349,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_4186F8C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__, userId);
    byte_4186F8C = 1;
  }
  PK = UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_array *__fastcall UserEventSpotMaster__GetEntityList(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  __int64 v13; // x1
  int64_t list; // x0
  int32_t v15; // w22
  int32_t v16; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x24
  __int64 v18; // x10
  __int64 v19; // x28

  if ( (byte_4186F90 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&UserEventSpotEntity_TypeInfo, v11);
    byte_4186F90 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = list;
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v16,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v18 = *(&UserEventSpotEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v18
          && *(UserEventSpotEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v18 - 8) == UserEventSpotEntity_TypeInfo )
        {
          v19 = *(_QWORD *)(list + 16);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          list = NetworkManager__get_UserId(0LL);
          if ( v19 == list && v17->fields.targetId == eventId )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              v17,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventSpotEntity__Add__);
          }
        }
      }
      if ( ++v16 >= v15 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(list, v13);
  }
LABEL_18:
  if ( !v12 )
    goto LABEL_20;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_23957512(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array *v9; // x20
  System_Int32_array **lookup; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  System_String_o *v47; // x20
  __int64 v48; // x3
  System_Int32_array *v49; // x8
  System_Int32_array **v50; // x19
  unsigned __int64 v51; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v52; // x11
  __int64 v53; // x0
  __int64 v54; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventSpotEntity_o *v59; // [xsp+10h] [xbp-30h] BYREF
  int32_t v60; // [xsp+18h] [xbp-28h] BYREF
  int32_t v61; // [xsp+1Ch] [xbp-24h] BYREF

  v60 = spotId;
  v61 = eventId;
  if ( (byte_4186F8F & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&string___TypeInfo, v6);
    sub_B2C35C(&UserEventSpotEntity_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v8);
    byte_4186F8F = 1;
  }
  UserId = 0LL;
  v59 = 0LL;
  v9 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (System_Int32_array **)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v9 )
LABEL_43:
    sub_B2C434(lookup, v11);
  v18 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B2C41C(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( !v9->max_length )
    goto LABEL_41;
  v9->m_Items[0] = (System_String_o *)v18;
  sub_B2C2F8((BattleServantConfConponent_o *)v9->m_Items, v18, v12, v13, v14, v15, v16, v17);
  lookup = (System_Int32_array **)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B2C41C(StringLiteral_1225/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v25 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_41;
  v9->m_Items[1] = (System_String_o *)v25;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v61, 0LL);
  v32 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B2C41C(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_41;
  v9->m_Items[2] = (System_String_o *)v32;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  lookup = (System_Int32_array **)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B2C41C(StringLiteral_1225/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v39 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_41;
  v9->m_Items[3] = (System_String_o *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v60, 0LL);
  v46 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B2C41C(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_42:
      v57 = sub_B2C454();
      sub_B2C400(v57, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_41:
    v56 = sub_B2C460(lookup);
    sub_B2C400(v56, 0LL);
  }
  v9->m_Items[4] = (System_String_o *)v46;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v47 = System_String__Concat_44385656(v9, 0LL);
  lookup = (System_Int32_array **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  v49 = *lookup;
  v50 = lookup;
  if ( HIWORD((*lookup)->m_Items[67]) )
  {
    v51 = 0LL;
    v52 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)&v49->m_Items[37]
                                                                                      + 8LL);
    while ( *(v52 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v51;
      v52 += 2;
      if ( v51 >= HIWORD((*lookup)->m_Items[67]) )
        goto LABEL_31;
    }
    v53 = (__int64)&(&v49->bounds)[2 * *(_DWORD *)v52 + 39];
  }
  else
  {
LABEL_31:
    v53 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v48);
  }
  if ( ((*(__int64 (__fastcall **)(System_Int32_array **, System_String_o *, UserEventSpotEntity_o **, _QWORD))v53)(
          v50,
          v47,
          &v59,
          *(_QWORD *)(v53 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v59 )
    return 0LL;
  v54 = *(&UserEventSpotEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v54 )
    return 0LL;
  if ( (UserEventSpotEntity_c *)v59->klass->_2.typeHierarchy[v54 - 1] == UserEventSpotEntity_TypeInfo )
    return v59;
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

  if ( (byte_4186F8D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__, entity);
    byte_4186F8D = 1;
  }
  PK = UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}