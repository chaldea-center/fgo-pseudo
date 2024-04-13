void __fastcall UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E70E3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    350,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
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

  if ( (byte_42E70E1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&spotId);
    byte_42E70E1 = 1;
  }
  PK = UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
}


UserEventSpotEntity_array *__fastcall UserEventSpotMaster__GetEntityList(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  __int64 v28; // x1
  int64_t list; // x0
  int32_t v30; // w22
  int32_t v31; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x24
  __int64 v33; // x10
  __int64 v34; // x28

  if ( (byte_42E70E5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventSpotEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventSpotEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UserEventSpotEntity_TypeInfo, v24, v25, v26);
    byte_42E70E5 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventSpotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventSpotEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v30 = list;
    v31 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v31,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v33 = *(&UserEventSpotEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v33
          && *(UserEventSpotEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v33 - 8) == UserEventSpotEntity_TypeInfo )
        {
          v34 = *(_QWORD *)(list + 16);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          list = NetworkManager__get_UserId(0LL);
          if ( v34 == list && v32->fields.targetId == eventId )
          {
            if ( !v27 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              v32,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventSpotEntity__Add__);
          }
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(list, v28);
  }
LABEL_18:
  if ( !v27 )
    goto LABEL_20;
  return (UserEventSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserEventSpotEntity__ToArray__);
}


UserEventSpotEntity_o *__fastcall UserEventSpotMaster__GetEntity_22479928(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_array *v17; // x20
  System_Int32_array **lookup; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x21
  System_String_o *v55; // x20
  __int64 v56; // x3
  System_Int32_array *v57; // x8
  System_Int32_array **v58; // x19
  unsigned __int64 v59; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v60; // x11
  __int64 v61; // x0
  __int64 v62; // x11
  __int64 v64; // x0
  __int64 v65; // x0
  int64_t UserId; // [xsp+8h] [xbp-38h] BYREF
  UserEventSpotEntity_o *v67; // [xsp+10h] [xbp-30h] BYREF
  int32_t v68; // [xsp+18h] [xbp-28h] BYREF
  int32_t v69; // [xsp+1Ch] [xbp-24h] BYREF

  v68 = spotId;
  v69 = eventId;
  if ( (byte_42E70E4 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      eventId,
      spotId,
      method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserEventSpotEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v14, v15, v16);
    byte_42E70E4 = 1;
  }
  UserId = 0LL;
  v67 = 0LL;
  v17 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  lookup = (System_Int32_array **)System_Int64__ToString((int64_t)&UserId, 0LL);
  if ( !v17 )
LABEL_43:
    sub_B5D69C(lookup, v19);
  v26 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B5D684(lookup, v17->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( !v17->max_length )
    goto LABEL_41;
  v17->m_Items[0] = (System_String_o *)v26;
  sub_B5D560((BattleServantConfConponent_o *)v17->m_Items, v26, v20, v21, v22, v23, v24, v25);
  lookup = (System_Int32_array **)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B5D684(StringLiteral_1245/*":"*/, v17->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v33 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_41;
  v17->m_Items[1] = (System_String_o *)v33;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v69, 0LL);
  v40 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B5D684(lookup, v17->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_41;
  v17->m_Items[2] = (System_String_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  lookup = (System_Int32_array **)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    lookup = (System_Int32_array **)sub_B5D684(StringLiteral_1245/*":"*/, v17->obj.klass->_1.element_class);
    if ( !lookup )
      goto LABEL_42;
    v47 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_41;
  v17->m_Items[3] = (System_String_o *)v47;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  lookup = (System_Int32_array **)System_Int32__ToString((int32_t)&v68, 0LL);
  v54 = lookup;
  if ( lookup )
  {
    lookup = (System_Int32_array **)sub_B5D684(lookup, v17->obj.klass->_1.element_class);
    if ( !lookup )
    {
LABEL_42:
      v65 = sub_B5D6BC();
      sub_B5D668(v65, 0LL);
    }
  }
  if ( v17->max_length <= 4 )
  {
LABEL_41:
    v64 = sub_B5D6C8(lookup);
    sub_B5D668(v64, 0LL);
  }
  v17->m_Items[4] = (System_String_o *)v54;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  v55 = System_String__Concat_44657912(v17, 0LL);
  lookup = (System_Int32_array **)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  v57 = *lookup;
  v58 = lookup;
  if ( HIWORD((*lookup)->m_Items[67]) )
  {
    v59 = 0LL;
    v60 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)&v57->m_Items[37]
                                                                                      + 8LL);
    while ( *(v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v59;
      v60 += 2;
      if ( v59 >= HIWORD((*lookup)->m_Items[67]) )
        goto LABEL_31;
    }
    v61 = (__int64)&(&v57->bounds)[2 * *(_DWORD *)v60 + 39];
  }
  else
  {
LABEL_31:
    v61 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v56);
  }
  if ( ((*(__int64 (__fastcall **)(System_Int32_array **, System_String_o *, UserEventSpotEntity_o **, _QWORD))v61)(
          v58,
          v55,
          &v67,
          *(_QWORD *)(v61 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v67 )
    return 0LL;
  v62 = *(&UserEventSpotEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v67->klass->_2.bitflags2 + 1) < (unsigned int)v62 )
    return 0LL;
  if ( (UserEventSpotEntity_c *)v67->klass->_2.typeHierarchy[v62 - 1] == UserEventSpotEntity_TypeInfo )
    return v67;
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

  if ( (byte_42E70E2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42E70E2 = 1;
  }
  PK = UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}