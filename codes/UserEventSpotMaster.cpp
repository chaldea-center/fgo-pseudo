void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42136CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__, method);
    byte_42136CF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    349,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_42136CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__, userId);
    byte_42136CD = 1;
  }
  PK = UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266A024 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
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
  int64_t list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x24
  __int64 v17; // x10
  __int64 v18; // x28

  if ( (byte_42136D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&UserEventSpotEntity_TypeInfo, v11);
    byte_42136D1 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserEventSpotEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
           (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v15,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v17 = *(&UserEventSpotEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v17
          && *(UserEventSpotEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) == UserEventSpotEntity_TypeInfo )
        {
          v18 = *(_QWORD *)(list + 16);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          list = NetworkManager__get_UserId(0LL);
          if ( v18 == list && v16->fields.targetId == eventId )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              v16,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserEventSpotEntity__Add__);
          }
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B0D97C(list);
  }
LABEL_18:
  if ( !v12 )
    goto LABEL_20;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_22563348(
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  System_String_o *v46; // x20
  System_Int32_array *v47; // x8
  System_Int32_array **v48; // x19
  unsigned __int64 v49; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v50; // x11
  __int64 v51; // x0
  __int64 v52; // x11
  __int64 v54; // x0
  __int64 v55; // x0
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventSpotEntity_o *v57; // [xsp+10h] [xbp-30h] BYREF
  int32_t v58; // [xsp+18h] [xbp-28h] BYREF
  int32_t v59; // [xsp+1Ch] [xbp-24h] BYREF

  v58 = spotId;
  v59 = eventId;
  if ( (byte_42136D0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&string___TypeInfo, v6);
    sub_B0D8A4(&UserEventSpotEntity_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v8);
    byte_42136D0 = 1;
  }
  UserId = 0LL;
  v57 = 0LL;
  v9 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (System_Int32_array **)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v9 )
LABEL_43:
    sub_B0D97C(lookup);
  v17 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B0D964(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( !v9->max_length )
    goto LABEL_41;
  v9->m_Items[0] = (System_String_o *)v17;
  sub_B0D840((BattleServantConfConponent_o *)v9->m_Items, v17, v11, v12, v13, v14, v15, v16);
  lookup = (System_Int32_array **)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B0D964(StringLiteral_1232/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v24 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_41;
  v9->m_Items[1] = (System_String_o *)v24;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v59, 0LL);
  v31 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B0D964(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_41;
  v9->m_Items[2] = (System_String_o *)v31;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  lookup = (System_Int32_array **)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B0D964(StringLiteral_1232/*":"*/, v9->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v38 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_41;
  v9->m_Items[3] = (System_String_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v58, 0LL);
  v45 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B0D964(lookup, v9->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_42:
      v55 = sub_B0D99C();
      sub_B0D948(v55, 0LL);
    }
  }
  if ( v9->max_length <= 4 )
  {
LABEL_41:
    v54 = sub_B0D9A8(lookup);
    sub_B0D948(v54, 0LL);
  }
  v9->m_Items[4] = (System_String_o *)v45;
  sub_B0D840((BattleServantConfConponent_o *)&v9->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v46 = System_String__Concat_43930028(v9, 0LL);
  lookup = (System_Int32_array **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  v47 = *lookup;
  v48 = lookup;
  if ( HIWORD((*lookup)->m_Items[67]) )
  {
    v49 = 0LL;
    v50 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)&v47->m_Items[37]
                                                                                      + 8LL);
    while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v49;
      v50 += 2;
      if ( v49 >= HIWORD((*lookup)->m_Items[67]) )
        goto LABEL_31;
    }
    v51 = (__int64)&(&v47->bounds)[2 * *(_DWORD *)v50 + 39];
  }
  else
  {
LABEL_31:
    v51 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Int32_array **, System_String_o *, UserEventSpotEntity_o **, _QWORD))v51)(
          v48,
          v46,
          &v57,
          *(_QWORD *)(v51 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v57 )
    return 0LL;
  v52 = *(&UserEventSpotEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v57->klass->_2.bitflags2 + 1) < (unsigned int)v52 )
    return 0LL;
  if ( (UserEventSpotEntity_c *)v57->klass->_2.typeHierarchy[v52 - 1] == UserEventSpotEntity_TypeInfo )
    return v57;
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

  if ( (byte_42136CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__, entity);
    byte_42136CE = 1;
  }
  PK = UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}