void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67560 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__, method);
    byte_4B67560 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    111,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
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

  if ( (byte_4B6755E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B6755E = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31FDB1C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall ServantVoiceMaster__GetSvtEquipVoiceEntity(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4B6756A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___, v5);
    sub_1BE4ACC(&System_Func_ServantVoiceEntity__bool__TypeInfo, v6);
    sub_1BE4ACC(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__, v7);
    sub_1BE4ACC(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo, v8);
    byte_4B6756A = 1;
  }
  v9 = sub_1BE4D18(ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BE4D28(v10, v11);
  *(_DWORD *)(v9 + 16) = svtId;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v13 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    0LL);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49793520(
                                   v12,
                                   (System_Func_TSource__bool__o *)v13,
                                   (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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

  if ( (byte_4B6755F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__, entity);
    byte_4B6755F = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_40807608((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_40806880((ServantVoiceEntity_o *)result, 2, 23, costumeId, 0LL, -1, v7);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x5
  __int64 v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_o *v50; // x20
  DataManager_c *klass; // x8
  DataManager_o *v52; // x19
  __int64 v53; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v55; // x0
  __int64 methodPtr_low; // x11
  int32_t v58; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v59; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B67562 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&ServantVoiceEntity_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&string___TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v13);
    byte_4B67562 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v59 = 0LL;
  v58 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_26;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    v16);
  v17 = sub_1BE4B74(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v17 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v17 + 32) = Instance;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)Instance, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_25;
  v30 = StringLiteral_1542/*":"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_1542/*":"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 40), v30, v24, v25, v26, v27, v28, v29);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v17 + 24) <= 2u
    || (*(_QWORD *)(v17 + 48) = Instance,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)Instance, v31, v32, v33, v34, v35, v36),
        *(_DWORD *)(v17 + 24) <= 3u)
    || (v43 = StringLiteral_1542/*":"*/,
        *(_QWORD *)(v17 + 56) = StringLiteral_1542/*":"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 56), v43, v37, v38, v39, v40, v41, v42),
        v58 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v58, 0LL),
        *(_DWORD *)(v17 + 24) <= 4u) )
  {
LABEL_25:
    sub_1BE4D30(Instance, v15);
  }
  *(_QWORD *)(v17 + 64) = Instance;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 64), (int64_t)Instance, v44, v45, v46, v47, v48, v49);
  v50 = System_String__Concat_62712336((System_String_array *)v17, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
LABEL_26:
    sub_1BE4D28(Instance, v15);
  klass = Instance->klass;
  v52 = Instance;
  v53 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v53;
      p_offset += 2;
      if ( !v53 )
        goto LABEL_16;
    }
    v55 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v55 = sub_1C36AAC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v55)(
          v52,
          v50,
          &v59,
          *(_QWORD *)(v55 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v59 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v59->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v59->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
    return v59;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x5
  __int64 v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_o *v50; // x20
  DataManager_c *klass; // x8
  DataManager_o *v52; // x19
  __int64 v53; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v55; // x0
  __int64 methodPtr_low; // x11
  int32_t v58; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v59; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B67564 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&ServantVoiceEntity_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&string___TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v13);
    byte_4B67564 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v59 = 0LL;
  v58 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_28;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    v16);
  if ( !voicePrefix[1] )
    voicePrefix[1] = svtId;
  v17 = sub_1BE4B74(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v17 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v17 + 32) = Instance;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)Instance, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_27;
  v30 = StringLiteral_1542/*":"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_1542/*":"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 40), v30, v24, v25, v26, v27, v28, v29);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v17 + 24) <= 2u
    || (*(_QWORD *)(v17 + 48) = Instance,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)Instance, v31, v32, v33, v34, v35, v36),
        *(_DWORD *)(v17 + 24) <= 3u)
    || (v43 = StringLiteral_1542/*":"*/,
        *(_QWORD *)(v17 + 56) = StringLiteral_1542/*":"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 56), v43, v37, v38, v39, v40, v41, v42),
        v58 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v58, 0LL),
        *(_DWORD *)(v17 + 24) <= 4u) )
  {
LABEL_27:
    sub_1BE4D30(Instance, v15);
  }
  *(_QWORD *)(v17 + 64) = Instance;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 64), (int64_t)Instance, v44, v45, v46, v47, v48, v49);
  v50 = System_String__Concat_62712336((System_String_array *)v17, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
LABEL_28:
    sub_1BE4D28(Instance, v15);
  klass = Instance->klass;
  v52 = Instance;
  v53 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v53;
      p_offset += 2;
      if ( !v53 )
        goto LABEL_18;
    }
    v55 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v55 = sub_1C36AAC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v55)(
          v52,
          v50,
          &v59,
          *(_QWORD *)(v55 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v59 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v59->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v59->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
    return v59;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  __int64 v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_String_o *v51; // x0
  const MethodInfo *v52; // x5
  bool EntityFromId_object; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v54; // x0
  int32_t v55; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *result; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B67567 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BE4ACC(&Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BE4ACC(&string___TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v14);
    byte_4B67567 = 1;
  }
  result = 0LL;
  voicePrefix = 0LL;
  v55 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    svtId,
    limitCount,
    v17);
  if ( !HIDWORD(voicePrefix) )
    HIDWORD(voicePrefix) = svtId;
  v18 = sub_1BE4B74(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v18 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v18 + 32) = Instance;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)Instance, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_17;
  v31 = StringLiteral_1542/*":"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_1542/*":"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 40), v31, v25, v26, v27, v28, v29, v30);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 2u
    || (*(_QWORD *)(v18 + 48) = Instance,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 48), (int64_t)Instance, v32, v33, v34, v35, v36, v37),
        *(_DWORD *)(v18 + 24) <= 3u)
    || (v44 = StringLiteral_1542/*":"*/,
        *(_QWORD *)(v18 + 56) = StringLiteral_1542/*":"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 56), v44, v38, v39, v40, v41, v42, v43),
        v55 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v55, 0LL),
        *(_DWORD *)(v18 + 24) <= 4u) )
  {
LABEL_17:
    sub_1BE4D30(Instance, v16);
  }
  *(_QWORD *)(v18 + 64) = Instance;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 64), (int64_t)Instance, v45, v46, v47, v48, v49, v50);
  v51 = System_String__Concat_62712336((System_String_array *)v18, 0LL);
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          v51,
                          (const MethodInfo_2F595B0 *)Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
  v54 = 0LL;
  if ( EntityFromId_object )
  {
    Instance = (DataManager_o *)result;
    if ( result )
      return ServantVoiceEntity__getVoiceList_40807608((ServantVoiceEntity_o *)result, voceType, labelName, 0LL, 1, v52);
LABEL_18:
    sub_1BE4D28(Instance, v16);
  }
  return v54;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_40822840(
        ServantVoiceMaster_o *this,
        int32_t voiceType,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x8
  ServantVoiceEntity_c *v36; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4B67563 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&voiceType);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo, v12);
    sub_1BE4ACC(&ServantVoiceEntity_TypeInfo, v13);
    byte_4B67563 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v35 = v27;
    if ( !v27 )
      goto LABEL_36;
    v36 = ServantVoiceEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != ServantVoiceEntity_TypeInfo )
    {
      sub_1BE4FE8(v27);
LABEL_36:
      sub_1BE4D28(v27, v28);
    }
    if ( *(_DWORD *)(v27 + 24) == voiceType && *(_DWORD *)(v27 + 16) == svtId )
    {
      if ( !v14 )
        sub_1BE4D28(v27, ServantVoiceEntity_TypeInfo);
      items = v14->fields._items;
      v39 = Method_System_Collections_Generic_List_ServantVoiceEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BE4D28(v27, v36);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v27,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v35;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v41 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_32;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_32:
    v45 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_40824488(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t Instance; // x0
  int64_t v14; // x1
  const MethodInfo *v15; // x5
  ServantVoiceEntity_array *v16; // x20
  __int64 v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_o *v50; // x21
  __int64 v51; // x8
  int64_t v52; // x22
  __int64 v53; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v54; // x10
  __int64 v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x21
  __int64 v63; // x22
  ServantVoiceEntity_c *v64; // x8
  __int64 methodPtr_low; // x10
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  bool v68; // nf
  __int64 v70; // x0
  int v71; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v72; // [xsp+8h] [xbp-58h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B67565 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_1BE4ACC(&ServantVoiceEntity___TypeInfo, v8);
    sub_1BE4ACC(&ServantVoiceEntity_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BE4ACC(&string___TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v12);
    byte_4B67565 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v72 = 0LL;
  v71 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_36:
    sub_1BE4D28(Instance, v14);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    v15);
  v16 = (ServantVoiceEntity_array *)sub_1BE4B74(ServantVoiceEntity___TypeInfo, 25LL);
  v71 = 1;
  do
  {
    v17 = sub_1BE4B74(string___TypeInfo, 5LL);
    Instance = (int64_t)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
    if ( !v17 )
      goto LABEL_36;
    if ( !*(_DWORD *)(v17 + 24) )
      goto LABEL_35;
    *(_QWORD *)(v17 + 32) = Instance;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 32), Instance, v18, v19, v20, v21, v22, v23);
    if ( *(_DWORD *)(v17 + 24) <= 1u )
      goto LABEL_35;
    v30 = StringLiteral_1542/*":"*/;
    *(_QWORD *)(v17 + 40) = StringLiteral_1542/*":"*/;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 40), v30, v24, v25, v26, v27, v28, v29);
    Instance = (int64_t)System_Int32__ToString((int32_t)voicePrefix, 0LL);
    if ( *(_DWORD *)(v17 + 24) <= 2u )
      goto LABEL_35;
    *(_QWORD *)(v17 + 48) = Instance;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 48), Instance, v31, v32, v33, v34, v35, v36);
    if ( *(_DWORD *)(v17 + 24) <= 3u )
      goto LABEL_35;
    v43 = StringLiteral_1542/*":"*/;
    *(_QWORD *)(v17 + 56) = StringLiteral_1542/*":"*/;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 56), v43, v37, v38, v39, v40, v41, v42);
    Instance = (int64_t)System_Int32__ToString((int32_t)&v71, 0LL);
    if ( *(_DWORD *)(v17 + 24) <= 4u )
      goto LABEL_35;
    *(_QWORD *)(v17 + 64) = Instance;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 64), Instance, v44, v45, v46, v47, v48, v49);
    v50 = System_String__Concat_62712336((System_String_array *)v17, 0LL);
    Instance = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_36;
    v51 = *(_QWORD *)Instance;
    v52 = Instance;
    v53 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
    if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
    {
      v54 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *(v54 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v53;
        v54 += 2;
        if ( !v53 )
          goto LABEL_17;
      }
      v55 = v51 + 16LL * (*(_DWORD *)v54 + 1) + 312;
    }
    else
    {
LABEL_17:
      v55 = sub_1C36AAC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    Instance = (*(__int64 (__fastcall **)(int64_t, System_String_o *, __int64 *, _QWORD))v55)(
                 v52,
                 v50,
                 &v72,
                 *(_QWORD *)(v55 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_36;
      v62 = v72;
      v63 = v71;
      if ( !v72 )
        goto LABEL_27;
      v64 = ServantVoiceEntity_TypeInfo;
      methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v72 + 304LL) >= (unsigned int)methodPtr_low
        && *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v72 + 200LL) + 8 * methodPtr_low - 8) == ServantVoiceEntity_TypeInfo )
      {
        Instance = sub_1BE4C08(v72, v16->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v70 = sub_1BE4D4C(0LL);
          sub_1BE4BF4(v70, 0LL);
        }
        v64 = ServantVoiceEntity_TypeInfo;
      }
      v66 = LOBYTE(v64->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v62 + 304LL) >= (unsigned int)v66 )
      {
        if ( *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v62 + 200LL) + 8 * v66 - 8) == v64 )
          v14 = v62;
        else
          v14 = 0LL;
      }
      else
      {
LABEL_27:
        v14 = 0LL;
      }
      if ( (unsigned int)v63 >= v16->max_length )
LABEL_35:
        sub_1BE4D30(Instance, v14);
      v67 = &v16->obj.klass + v63;
      v67[4] = (Il2CppClass *)v14;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v67 + 4), v14, v56, v57, v58, v59, v60, v61);
    }
    v68 = v71 - 24 < 0;
    ++v71;
  }
  while ( v68 != __OFSUB__(v71, 25) );
  return v16;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_40825340(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x5
  __int64 v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_String_o *v52; // x22
  DataManager_c *klass; // x8
  DataManager_o *v54; // x21
  __int64 v55; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v57; // x0
  const MethodInfo *v58; // x5
  __int64 methodPtr_low; // x10
  int32_t v61; // [xsp+Ch] [xbp-54h] BYREF
  ServantVoiceEntity_o *v62; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B67566 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11);
    sub_1BE4ACC(&ServantVoiceEntity_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&string___TypeInfo, v14);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v15);
    byte_4B67566 = 1;
  }
  v62 = 0LL;
  voicePrefix = 0LL;
  v61 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    svtId,
    limitCount,
    v18);
  v19 = sub_1BE4B74(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v19 )
    goto LABEL_25;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_24;
  *(_QWORD *)(v19 + 32) = Instance;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)Instance, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_24;
  v32 = StringLiteral_1542/*":"*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_1542/*":"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 40), v32, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (*(_QWORD *)(v19 + 48) = Instance,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 48), (int64_t)Instance, v33, v34, v35, v36, v37, v38),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v45 = StringLiteral_1542/*":"*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_1542/*":"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 56), v45, v39, v40, v41, v42, v43, v44),
        v61 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v61, 0LL),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_24:
    sub_1BE4D30(Instance, v17);
  }
  *(_QWORD *)(v19 + 64) = Instance;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 64), (int64_t)Instance, v46, v47, v48, v49, v50, v51);
  v52 = System_String__Concat_62712336((System_String_array *)v19, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_25;
  klass = Instance->klass;
  v54 = Instance;
  v55 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v55;
      p_offset += 2;
      if ( !v55 )
        goto LABEL_16;
    }
    v57 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v57 = sub_1C36AAC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v57)(
          v54,
          v52,
          &v62,
          *(_QWORD *)(v57 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)v62;
    if ( v62 )
    {
      methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v62->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantVoiceEntity_c *)v62->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
      {
        return ServantVoiceEntity__getVoiceList_40807608(v62, voceType, labelName, 0LL, 1, v58);
      }
    }
LABEL_25:
    sub_1BE4D28(Instance, v17);
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
    return ServantVoiceEntity__getVoiceList_40807608((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_40807608((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
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

  if ( (byte_4B67569 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    byte_4B67569 = 1;
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
    return ServantVoiceEntity__getVoiceList_40807608((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_40807608((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_40806880((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
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
    return ServantVoiceEntity__getVoiceList_40806880((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_40827368(
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
    return ServantVoiceEntity__getVoiceList_40806880((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantChangeEntity_o *v6; // x0

  if ( (byte_4B67561 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B67561 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v5);
  }
  v6 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, svtId, 0LL);
  if ( v6 )
    return v6->fields.svtVoiceId;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t SvtVoiceId; // w22
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x5
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v16; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v18; // x21
  int32_t FriendShipRank; // w0
  const MethodInfo *v20; // x6
  int32_t v21; // w19
  int32_t v22; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_40806880; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B67568 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&limitCnt);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B67568 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_20;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    SvtVoiceId,
    limitCnt,
    v14);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_20;
  Entity = (UserServantCollectionEntity_o *)ServantVoiceMaster__GetEntity(
                                              (ServantVoiceMaster_o *)Instance,
                                              voicePrefix[1],
                                              voicePrefix[0],
                                              1,
                                              v16);
  if ( !Entity )
    return (char)Entity;
  v18 = (ServantVoiceEntity_o *)Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_1BE4D28(Instance, v13);
  }
  Entity = UserServantCollectionMaster__GetEntity(
             (UserServantCollectionMaster_o *)Instance,
             SelfUserGame->fields.userId,
             svtId,
             0LL);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0LL);
    v21 = oldFriendShipRank + 1;
    if ( v21 > FriendShipRank )
    {
LABEL_17:
      LOBYTE(Entity) = 0;
    }
    else
    {
      v22 = FriendShipRank;
      while ( 1 )
      {
        VoiceList_40806880 = ServantVoiceEntity__getVoiceList_40806880(v18, 1, 3, v21, 0LL, -1, v20);
        if ( VoiceList_40806880 )
        {
          if ( VoiceList_40806880->fields._size > 0 )
            break;
        }
        if ( ++v21 > v22 )
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
    sub_1BE4D28(this, 0LL);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}