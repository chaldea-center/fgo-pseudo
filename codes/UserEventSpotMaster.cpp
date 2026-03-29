void UserEventSpotMaster___ctor(UserEventSpotMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3183C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
    byte_4D3183C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    357,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventSpotEntity_o *UserEventSpotMaster__GetEntity(
        UserEventSpotMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D3183A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
    byte_4D3183A = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&spotId);
  return (UserEventSpotEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_34681D4 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__GetEntity__);
}


UserEventSpotEntity_o *UserEventSpotMaster__GetEntity_43768248(
        UserEventSpotMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  NetworkManager_c *v6; // x0
  __int64 *lookup; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_String_o *v41; // x20
  __int64 v42; // x8
  void *v43; // x19
  __int64 v44; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **v45; // x10
  __int64 v46; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventSpotEntity_o *v49; // [xsp+8h] [xbp-38h] BYREF
  int32_t v50; // [xsp+18h] [xbp-28h] BYREF
  int32_t v51; // [xsp+1Ch] [xbp-24h] BYREF

  v50 = spotId;
  v51 = eventId;
  if ( (byte_4D3183D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D3183D = 1;
  }
  v49 = 0;
  v5 = sub_1C93B7C(string___TypeInfo, 5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  lookup = (__int64 *)System_Int64__ToString((int64_t)&userIdNumber, 0);
  if ( !v5 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v5 + 32) = lookup;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)lookup, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_25;
  v21 = StringLiteral_1451/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1451/*":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), v21, v15, v16, v17, v18, v19, v20);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v51, 0);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = lookup,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)lookup, v22, v23, v24, v25, v26, v27),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v34 = StringLiteral_1451/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1451/*":"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 56), v34, v28, v29, v30, v31, v32, v33),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v50, 0),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_25:
    sub_1C93D34(lookup);
  }
  *(_QWORD *)(v5 + 64) = lookup;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 64), (int32_t)lookup, v35, v36, v37, v38, v39, v40);
  v41 = System_String__Concat_64466256((System_String_array *)v5, 0);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_3465D74 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C93D2C(lookup, v8);
  v42 = *lookup;
  v43 = lookup;
  v44 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v45 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__c **)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *(v45 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo )
    {
      --v44;
      v45 += 2;
      if ( !v44 )
        goto LABEL_20;
    }
    v46 = v42 + 16LL * (*(_DWORD *)v45 + 1) + 312;
  }
  else
  {
LABEL_20:
    v46 = sub_1C69E5C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventSpotEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventSpotEntity_o **, _QWORD))v46)(
          v43,
          v41,
          &v49,
          *(_QWORD *)(v46 + 8))
      & 1) != 0 )
    return v49;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool UserEventSpotMaster__TryGetEntity(
        UserEventSpotMaster_o *this,
        UserEventSpotEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D3183B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
    byte_4D3183B = 1;
  }
  PK = (Il2CppObject *)UserEventSpotEntity__CreatePK(userId, eventId, spotId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_UserEventSpotMaster__UserEventSpotEntity__string__TryGetEntity__);
}