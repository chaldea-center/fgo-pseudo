void UserEventMapMaster___ctor(UserEventMapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59716D0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
    byte_59716D0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    358,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMapEntity_o *UserEventMapMaster__GetEntity(
        UserEventMapMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59716CE & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
    byte_59716CE = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&mapId);
  return (UserEventMapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3F157EC *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__GetEntity__);
}


UserEventMapEntity_o *UserEventMapMaster__GetEntity_50062080(
        UserEventMapMaster_o *this,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x20
  NetworkManager_c *v7; // x0
  __int64 *lookup; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x20
  __int64 v43; // x8
  void *v44; // x19
  __int64 v45; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__c **v46; // x10
  __int64 v47; // x0
  int64_t userIdNumber; // [xsp+0h] [xbp-40h] BYREF
  UserEventMapEntity_o *v50; // [xsp+8h] [xbp-38h] BYREF
  int32_t v51; // [xsp+18h] [xbp-28h] BYREF
  int32_t v52; // [xsp+1Ch] [xbp-24h] BYREF

  v52 = eventId;
  v51 = mapId;
  if ( (byte_59716D1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_59716D1 = 1;
  }
  userIdNumber = 0;
  v50 = 0;
  v6 = sub_2213B20(string___TypeInfo, 5);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    v7 = NetworkManager_TypeInfo;
  }
  userIdNumber = v7->static_fields->userIdNumber;
  lookup = (__int64 *)System_Int64__ToString((int64_t)&userIdNumber, 0);
  if ( !v6 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v6 + 32) = lookup;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)lookup, v10, v11, v12, v13, v14, v15);
  if ( (*(_DWORD *)(v6 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_25;
  v22 = StringLiteral_1533/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1533/*":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), v22, v16, v17, v18, v19, v20, v21);
  lookup = (__int64 *)System_Int32__ToString((int32_t)&v52, 0);
  if ( *(_DWORD *)(v6 + 24) <= 2u
    || (*(_QWORD *)(v6 + 48) = lookup,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 48), (int32_t)lookup, v23, v24, v25, v26, v27, v28),
        (*(_DWORD *)(v6 + 24) & 0xFFFFFFFC) == 0)
    || (v35 = StringLiteral_1533/*":"*/,
        *(_QWORD *)(v6 + 56) = StringLiteral_1533/*":"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 56), v35, v29, v30, v31, v32, v33, v34),
        lookup = (__int64 *)System_Int32__ToString((int32_t)&v51, 0),
        *(_DWORD *)(v6 + 24) <= 4u) )
  {
LABEL_25:
    sub_2213CE4(lookup);
  }
  *(_QWORD *)(v6 + 64) = lookup;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 64), (int32_t)lookup, v36, v37, v38, v39, v40, v41);
  v42 = System_String__Concat_75697120((System_String_array *)v6, 0);
  lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                        (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_2213CDC(lookup, v9);
  v43 = *lookup;
  v44 = lookup;
  v45 = *(unsigned __int16 *)(*lookup + 302);
  if ( *(_WORD *)(*lookup + 302) )
  {
    v46 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__c **)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *(v46 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo )
    {
      --v45;
      v46 += 2;
      if ( !v45 )
        goto LABEL_20;
    }
    v47 = v43 + 16LL * (*(_DWORD *)v46 + 1) + 312;
  }
  else
  {
LABEL_20:
    v47 = sub_224BC3C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventMapEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, UserEventMapEntity_o **, _QWORD))v47)(
          v44,
          v42,
          &v50,
          *(_QWORD *)(v47 + 8))
      & 1) != 0 )
    return v50;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool UserEventMapMaster__TryGetEntity(
        UserEventMapMaster_o *this,
        UserEventMapEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59716CF & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
    byte_59716CF = 1;
  }
  PK = (Il2CppObject *)UserEventMapEntity__CreatePK(userId, eventId, mapId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserEventMapMaster__UserEventMapEntity__string__TryGetEntity__);
}