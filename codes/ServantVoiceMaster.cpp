void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__, method, v2);
    byte_4B16B70 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    107,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall ServantVoiceMaster__GetEntity(
        ServantVoiceMaster_o *this,
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16B6E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&voicePrefix);
    byte_4B16B6E = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall ServantVoiceMaster__GetSvtEquipVoiceEntity(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Func_object__bool__o *v21; // x20

  if ( (byte_4B16B7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___, v6, v7);
    sub_1BCA7E0(&System_Func_ServantVoiceEntity__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__, v10, v11);
    sub_1BCA7E0(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo, v12, v13);
    byte_4B16B7A = 1;
  }
  v14 = sub_1BCAA2C(ServantVoiceMaster___c__DisplayClass27_0_TypeInfo, *(_QWORD *)&svtId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_DWORD *)(v14 + 16) = svtId;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v21 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ServantVoiceEntity__bool__TypeInfo, v18, v19, v20);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    0LL);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                   v17,
                                   (System_Func_TSource__bool__o *)v21,
                                   (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceMaster__TryGetEntity(
        ServantVoiceMaster_o *this,
        ServantVoiceEntity_o **entity,
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16B6F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B16B6F = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getBattleVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x5

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      6,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getVoiceList_40584836((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getCntStopVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t displayType,
        bool isPlayVoice,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v9; // x6

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      (const MethodInfo *)isPlayVoice);
  if ( result )
    return ServantVoiceEntity__getMaxLimitVoiceList(
             (ServantVoiceEntity_o *)result,
             2,
             displayType,
             isPlayVoice,
             -1,
             0LL,
             v9);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getCostumeGetVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x6

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      costumeId,
                                                                      v4);
  if ( result )
    return ServantVoiceEntity__getVoiceList_40584108((ServantVoiceEntity_o *)result, 2, 23, costumeId, 0LL, -1, v7);
  return result;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall ServantVoiceMaster__getEntity(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *v54; // x20
  DataManager_c *klass; // x8
  DataManager_o *v56; // x19
  __int64 v57; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v59; // x0
  __int64 methodPtr_low; // x11
  int32_t v62; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v63; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B16B72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType, *(_QWORD *)&svtId);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantVoiceEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v17, v18);
    byte_4B16B72 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v63 = 0LL;
  v62 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_26;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  v21 = sub_1BCA888(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v21 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v21 + 32) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)Instance, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v21 + 24) <= 1u )
    goto LABEL_25;
  v34 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v21 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), v34, v28, v29, v30, v31, v32, v33);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v21 + 24) <= 2u
    || (*(_QWORD *)(v21 + 48) = Instance,
        sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 48), (int64_t)Instance, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v21 + 24) <= 3u)
    || (v47 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v21 + 56) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 56), v47, v41, v42, v43, v44, v45, v46),
        v62 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v62, 0LL),
        *(_DWORD *)(v21 + 24) <= 4u) )
  {
LABEL_25:
    sub_1BCAA44(Instance, v20);
  }
  *(_QWORD *)(v21 + 64) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 64), (int64_t)Instance, v48, v49, v50, v51, v52, v53);
  v54 = System_String__Concat_62414748((System_String_array *)v21, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
LABEL_26:
    sub_1BCAA3C(Instance, v20);
  klass = Instance->klass;
  v56 = Instance;
  v57 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v57;
      p_offset += 2;
      if ( !v57 )
        goto LABEL_16;
    }
    v59 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v59 = sub_1C1C7C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v59)(
          v56,
          v54,
          &v63,
          *(_QWORD *)(v59 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v63 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v63->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v63->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
    return v63;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall ServantVoiceMaster__getEntityEventReward(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *v54; // x20
  DataManager_c *klass; // x8
  DataManager_o *v56; // x19
  __int64 v57; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v59; // x0
  __int64 methodPtr_low; // x11
  int32_t v62; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v63; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B16B74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType, *(_QWORD *)&svtId);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantVoiceEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v17, v18);
    byte_4B16B74 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v63 = 0LL;
  v62 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_28;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  if ( !voicePrefix[1] )
    voicePrefix[1] = svtId;
  v21 = sub_1BCA888(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v21 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v21 + 32) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)Instance, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v21 + 24) <= 1u )
    goto LABEL_27;
  v34 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v21 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), v34, v28, v29, v30, v31, v32, v33);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v21 + 24) <= 2u
    || (*(_QWORD *)(v21 + 48) = Instance,
        sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 48), (int64_t)Instance, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v21 + 24) <= 3u)
    || (v47 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v21 + 56) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 56), v47, v41, v42, v43, v44, v45, v46),
        v62 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v62, 0LL),
        *(_DWORD *)(v21 + 24) <= 4u) )
  {
LABEL_27:
    sub_1BCAA44(Instance, v20);
  }
  *(_QWORD *)(v21 + 64) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 64), (int64_t)Instance, v48, v49, v50, v51, v52, v53);
  v54 = System_String__Concat_62414748((System_String_array *)v21, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
LABEL_28:
    sub_1BCAA3C(Instance, v20);
  klass = Instance->klass;
  v56 = Instance;
  v57 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v57;
      p_offset += 2;
      if ( !v57 )
        goto LABEL_18;
    }
    v59 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v59 = sub_1C1C7C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v59)(
          v56,
          v54,
          &v63,
          *(_QWORD *)(v59 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v63 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v63->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v63->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
    return v63;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntityShopCombine(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *v54; // x0
  const MethodInfo *v55; // x5
  bool EntityFromId_object; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v57; // x0
  int32_t v58; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *result; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B16B77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v17, v18);
    byte_4B16B77 = 1;
  }
  result = 0LL;
  voicePrefix = 0LL;
  v58 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    svtId,
    limitCount,
    0LL);
  if ( !HIDWORD(voicePrefix) )
    HIDWORD(voicePrefix) = svtId;
  v21 = sub_1BCA888(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v21 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v21 + 32) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)Instance, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v21 + 24) <= 1u )
    goto LABEL_17;
  v34 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v21 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), v34, v28, v29, v30, v31, v32, v33);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v21 + 24) <= 2u
    || (*(_QWORD *)(v21 + 48) = Instance,
        sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 48), (int64_t)Instance, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v21 + 24) <= 3u)
    || (v47 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v21 + 56) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 56), v47, v41, v42, v43, v44, v45, v46),
        v58 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v58, 0LL),
        *(_DWORD *)(v21 + 24) <= 4u) )
  {
LABEL_17:
    sub_1BCAA44(Instance, v20);
  }
  *(_QWORD *)(v21 + 64) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 64), (int64_t)Instance, v48, v49, v50, v51, v52, v53);
  v54 = System_String__Concat_62414748((System_String_array *)v21, 0LL);
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          v54,
                          (const MethodInfo_2F13130 *)Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
  v57 = 0LL;
  if ( EntityFromId_object )
  {
    Instance = (DataManager_o *)result;
    if ( result )
      return ServantVoiceEntity__getVoiceList_40584836((ServantVoiceEntity_o *)result, voceType, labelName, 0LL, 1, v55);
LABEL_18:
    sub_1BCAA3C(Instance, v20);
  }
  return v57;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_40600020(
        ServantVoiceMaster_o *this,
        int32_t voiceType,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x8
  ServantVoiceEntity_c *v43; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B16B73 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&voiceType,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantVoiceEntity_TypeInfo, v19, v20);
    byte_4B16B73 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceEntity__TypeInfo,
                                                       *(_QWORD *)&voiceType,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
            Enumerator,
            *(_QWORD *)(v33 + 8));
    v42 = v34;
    if ( !v34 )
      goto LABEL_36;
    v43 = ServantVoiceEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * methodPtr_low - 8) != ServantVoiceEntity_TypeInfo )
    {
      sub_1BCACFC(v34);
LABEL_36:
      sub_1BCAA3C(v34, v35);
    }
    if ( *(_DWORD *)(v34 + 24) == voiceType && *(_DWORD *)(v34 + 16) == svtId )
    {
      if ( !v21 )
        sub_1BCAA3C(v34, ServantVoiceEntity_TypeInfo);
      items = v21->fields._items;
      v46 = Method_System_Collections_Generic_List_ServantVoiceEntity__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(v34, v43);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)v34,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v42;
        sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v42, v36, v37, v38, v39, v40, v41);
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_32;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_32:
    v52 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_40601672(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t Instance; // x0
  int64_t v20; // x1
  ServantVoiceEntity_array *v21; // x20
  __int64 v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_String_o *v55; // x21
  __int64 v56; // x8
  int64_t v57; // x22
  __int64 v58; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v59; // x10
  __int64 v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x21
  __int64 v68; // x22
  ServantVoiceEntity_c *v69; // x8
  __int64 methodPtr_low; // x10
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  bool v73; // nf
  __int64 v75; // x0
  int v76; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v77; // [xsp+8h] [xbp-58h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B16B75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantVoiceEntity___TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantVoiceEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v17, v18);
    byte_4B16B75 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v77 = 0LL;
  v76 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_36:
    sub_1BCAA3C(Instance, v20);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  v21 = (ServantVoiceEntity_array *)sub_1BCA888(ServantVoiceEntity___TypeInfo, 25LL);
  v76 = 1;
  do
  {
    v22 = sub_1BCA888(string___TypeInfo, 5LL);
    Instance = (int64_t)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
    if ( !v22 )
      goto LABEL_36;
    if ( !*(_DWORD *)(v22 + 24) )
      goto LABEL_35;
    *(_QWORD *)(v22 + 32) = Instance;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 32), Instance, v23, v24, v25, v26, v27, v28);
    if ( *(_DWORD *)(v22 + 24) <= 1u )
      goto LABEL_35;
    v35 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v22 + 40) = StringLiteral_1541/*":"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 40), v35, v29, v30, v31, v32, v33, v34);
    Instance = (int64_t)System_Int32__ToString((int32_t)voicePrefix, 0LL);
    if ( *(_DWORD *)(v22 + 24) <= 2u )
      goto LABEL_35;
    *(_QWORD *)(v22 + 48) = Instance;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 48), Instance, v36, v37, v38, v39, v40, v41);
    if ( *(_DWORD *)(v22 + 24) <= 3u )
      goto LABEL_35;
    v48 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v22 + 56) = StringLiteral_1541/*":"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 56), v48, v42, v43, v44, v45, v46, v47);
    Instance = (int64_t)System_Int32__ToString((int32_t)&v76, 0LL);
    if ( *(_DWORD *)(v22 + 24) <= 4u )
      goto LABEL_35;
    *(_QWORD *)(v22 + 64) = Instance;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 64), Instance, v49, v50, v51, v52, v53, v54);
    v55 = System_String__Concat_62414748((System_String_array *)v22, 0LL);
    Instance = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_36;
    v56 = *(_QWORD *)Instance;
    v57 = Instance;
    v58 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
    if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
    {
      v59 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *(v59 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v58;
        v59 += 2;
        if ( !v58 )
          goto LABEL_17;
      }
      v60 = v56 + 16LL * (*(_DWORD *)v59 + 1) + 312;
    }
    else
    {
LABEL_17:
      v60 = sub_1C1C7C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    Instance = (*(__int64 (__fastcall **)(int64_t, System_String_o *, __int64 *, _QWORD))v60)(
                 v57,
                 v55,
                 &v77,
                 *(_QWORD *)(v60 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_36;
      v67 = v77;
      v68 = v76;
      if ( !v77 )
        goto LABEL_27;
      v69 = ServantVoiceEntity_TypeInfo;
      methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v77 + 304LL) >= (unsigned int)methodPtr_low
        && *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v77 + 200LL) + 8 * methodPtr_low - 8) == ServantVoiceEntity_TypeInfo )
      {
        Instance = sub_1BCA91C(v77, v21->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v75 = sub_1BCAA60(0LL);
          sub_1BCA908(v75, 0LL);
        }
        v69 = ServantVoiceEntity_TypeInfo;
      }
      v71 = LOBYTE(v69->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) >= (unsigned int)v71 )
      {
        if ( *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL) + 8 * v71 - 8) == v69 )
          v20 = v67;
        else
          v20 = 0LL;
      }
      else
      {
LABEL_27:
        v20 = 0LL;
      }
      if ( (unsigned int)v68 >= v21->max_length )
LABEL_35:
        sub_1BCAA44(Instance, v20);
      v72 = &v21->obj.klass + v68;
      v72[4] = (Il2CppClass *)v20;
      sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 4), v20, v61, v62, v63, v64, v65, v66);
    }
    v73 = v76 - 24 < 0;
    ++v76;
  }
  while ( v73 != __OFSUB__(v76, 25) );
  return v21;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_40602528(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_o *v56; // x22
  DataManager_c *klass; // x8
  DataManager_o *v58; // x21
  __int64 v59; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v61; // x0
  const MethodInfo *v62; // x5
  __int64 methodPtr_low; // x10
  int32_t v65; // [xsp+Ch] [xbp-54h] BYREF
  ServantVoiceEntity_o *v66; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B16B76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType, *(_QWORD *)&svtId);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantVoiceEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&string___TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v19, v20);
    byte_4B16B76 = 1;
  }
  v66 = 0LL;
  voicePrefix = 0LL;
  v65 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    svtId,
    limitCount,
    0LL);
  v23 = sub_1BCA888(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v23 )
    goto LABEL_25;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_24;
  *(_QWORD *)(v23 + 32) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)Instance, v24, v25, v26, v27, v28, v29);
  if ( *(_DWORD *)(v23 + 24) <= 1u )
    goto LABEL_24;
  v36 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 40), v36, v30, v31, v32, v33, v34, v35);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v23 + 24) <= 2u
    || (*(_QWORD *)(v23 + 48) = Instance,
        sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 48), (int64_t)Instance, v37, v38, v39, v40, v41, v42),
        *(_DWORD *)(v23 + 24) <= 3u)
    || (v49 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v23 + 56) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 56), v49, v43, v44, v45, v46, v47, v48),
        v65 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v65, 0LL),
        *(_DWORD *)(v23 + 24) <= 4u) )
  {
LABEL_24:
    sub_1BCAA44(Instance, v22);
  }
  *(_QWORD *)(v23 + 64) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 64), (int64_t)Instance, v50, v51, v52, v53, v54, v55);
  v56 = System_String__Concat_62414748((System_String_array *)v23, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_25;
  klass = Instance->klass;
  v58 = Instance;
  v59 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v59;
      p_offset += 2;
      if ( !v59 )
        goto LABEL_16;
    }
    v61 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v61 = sub_1C1C7C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v61)(
          v58,
          v56,
          &v66,
          *(_QWORD *)(v61 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)v66;
    if ( v66 )
    {
      methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v66->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantVoiceEntity_c *)v66->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
      {
        return ServantVoiceEntity__getVoiceList_40584836(v66, voceType, labelName, 0LL, 1, v62);
      }
    }
LABEL_25:
    sub_1BCAA3C(Instance, v22);
  }
  return 0LL;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEventJoinVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v6; // x2

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      4,
                                                                      svtId,
                                                                      limitCount,
                                                                      v4);
  if ( result )
    return ServantVoiceEntity__getVoiceList((ServantVoiceEntity_o *)result, 4, v6);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEventRewardVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x5

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      5,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getVoiceList_40584836((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEventShopVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x5

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      9,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getVoiceList_40584836((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getFirstGetVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v10; // x2
  ServantVoiceEntity_o *v11; // x21
  const MethodInfo *v12; // x3

  if ( (byte_4B16B79 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantVoiceData____get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    byte_4B16B79 = 1;
  }
  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      3,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
  {
    v11 = (ServantVoiceEntity_o *)result;
    result = ServantVoiceEntity__GetFirstGetVoiceList((ServantVoiceEntity_o *)result, labelName, v10);
    if ( !result || result->fields._size <= 0 )
      return ServantVoiceEntity__getCondClearVoiceList(v11, 3, svtId, v12);
  }
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getHomeVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x2

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      1,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getHomeVoiceList((ServantVoiceEntity_o *)result, labelName, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getLevelUpVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x2

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getLevelUpVoiceList((ServantVoiceEntity_o *)result, labelName, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getLimitCntUpVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v6; // x5

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      v4);
  if ( result )
    return ServantVoiceEntity__getVoiceListByGender((ServantVoiceEntity_o *)result, 2, 10, -1, 0LL, v6);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getLimitCntVoiceListByLabel(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x2

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getLimitCntVoiceListByLabel((ServantVoiceEntity_o *)result, labelName, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getMasterMissionVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x5

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      8,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getVoiceList_40584836((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getNpVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x5

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      7,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getVoiceList_40584836((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getRankUpFriendShip(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x6

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      1,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getVoiceList_40584108((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x6

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      v4);
  if ( result )
    return ServantVoiceEntity__getVoiceList_40584108((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_40604568(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCount2,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v7; // x6

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getVoiceList_40584108((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ServantChangeEntity_o *v8; // x0

  if ( (byte_4B16B71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16B71 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  v8 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, svtId, 0LL);
  if ( v8 )
    return v8->fields.svtVoiceId;
  return svtId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceMaster__isOpenByServantFriendShip(
        int32_t svtId,
        int32_t limitCnt,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t SvtVoiceId; // w22
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v19; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v21; // x21
  int32_t FriendShipRank; // w0
  const MethodInfo *v23; // x6
  int32_t v24; // w19
  int32_t v25; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_40584108; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16B78 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantLimitAddMaster___,
      *(_QWORD *)&limitCnt,
      *(_QWORD *)&oldFriendShipRank);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B16B78 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_20;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    SvtVoiceId,
    limitCnt,
    0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_20;
  Entity = (UserServantCollectionEntity_o *)ServantVoiceMaster__GetEntity(
                                              (ServantVoiceMaster_o *)Instance,
                                              voicePrefix[1],
                                              voicePrefix[0],
                                              1,
                                              v19);
  if ( !Entity )
    return (char)Entity;
  v21 = (ServantVoiceEntity_o *)Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_1BCAA3C(Instance, v17);
  }
  Entity = UserServantCollectionMaster__GetEntity(
             (UserServantCollectionMaster_o *)Instance,
             SelfUserGame->fields.userId,
             svtId,
             0LL);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0LL);
    v24 = oldFriendShipRank + 1;
    if ( v24 > FriendShipRank )
    {
LABEL_17:
      LOBYTE(Entity) = 0;
    }
    else
    {
      v25 = FriendShipRank;
      while ( 1 )
      {
        VoiceList_40584108 = ServantVoiceEntity__getVoiceList_40584108(v21, 1, 3, v24, 0LL, -1, v23);
        if ( VoiceList_40584108 )
        {
          if ( VoiceList_40584108->fields._size > 0 )
            break;
        }
        if ( ++v24 > v25 )
          goto LABEL_17;
      }
      LOBYTE(Entity) = 1;
    }
  }
  return (char)Entity;
}


void __fastcall ServantVoiceMaster___c__DisplayClass27_0___ctor(
        ServantVoiceMaster___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantVoiceMaster___c__DisplayClass27_0___GetSvtEquipVoiceEntity_b__0(
        ServantVoiceMaster___c__DisplayClass27_0_o *this,
        ServantVoiceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}