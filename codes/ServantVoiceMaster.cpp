void ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D314B7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
    byte_4D314B7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    111,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *ServantVoiceMaster__GetEntity(
        ServantVoiceMaster_o *this,
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D314B5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
    byte_4D314B5 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_34681D4 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
}


ServantVoiceEntity_o *ServantVoiceMaster__GetSvtEquipVoiceEntity(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D314C1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
    sub_1C93AD4(&System_Func_ServantVoiceEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_ServantVoiceMaster___c__DisplayClass25_0__GetSvtEquipVoiceEntity_b__0__);
    sub_1C93AD4(&ServantVoiceMaster___c__DisplayClass25_0_TypeInfo);
    byte_4D314C1 = 1;
  }
  v5 = sub_1C93D20(ServantVoiceMaster___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_31D3358 *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ServantVoiceMaster___c__DisplayClass25_0__GetSvtEquipVoiceEntity_b__0__,
    0);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                   v8,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool ServantVoiceMaster__TryGetEntity(
        ServantVoiceMaster_o *this,
        ServantVoiceEntity_o **entity,
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D314B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
    byte_4D314B6 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getBattleVoiceList(
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
    return ServantVoiceEntity__getVoiceList_43513092((ServantVoiceEntity_o *)result, 6, labelName, 0, 1, v7);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getCntStopVoiceList(
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
             0,
             v9);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getCostumeGetVoiceList(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v8; // x6

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      costumeId,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getVoiceList_43512376(
             (ServantVoiceEntity_o *)result,
             2,
             23,
             costumeId,
             playVoiceLabel,
             -1,
             v8);
  return result;
}


ServantVoiceEntity_o *ServantVoiceMaster__getEntity(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_String_o *v44; // x20
  DataManager_c *klass; // x8
  DataManager_o *v46; // x19
  __int64 v47; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v49; // x0
  int32_t v51; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D314B9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D314B9 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v52 = 0;
  v51 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_22;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  v11 = sub_1C93B7C(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v11 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v11 + 32) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)Instance, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_21;
  v24 = StringLiteral_1451/*":"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_1451/*":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), v24, v18, v19, v20, v21, v22, v23);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v11 + 24) <= 2u
    || (*(_QWORD *)(v11 + 48) = Instance,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)Instance, v25, v26, v27, v28, v29, v30),
        *(_DWORD *)(v11 + 24) <= 3u)
    || (v37 = StringLiteral_1451/*":"*/,
        *(_QWORD *)(v11 + 56) = StringLiteral_1451/*":"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 56), v37, v31, v32, v33, v34, v35, v36),
        v51 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v51, 0),
        *(_DWORD *)(v11 + 24) <= 4u) )
  {
LABEL_21:
    sub_1C93D34(Instance);
  }
  *(_QWORD *)(v11 + 64) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 64), (int32_t)Instance, v38, v39, v40, v41, v42, v43);
  v44 = System_String__Concat_64466256((System_String_array *)v11, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_3465D74 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_22:
    sub_1C93D2C(Instance, v10);
  klass = Instance->klass;
  v46 = Instance;
  v47 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v47;
      p_offset += 2;
      if ( !v47 )
        goto LABEL_16;
    }
    v49 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v49 = sub_1C69E5C(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v49)(
          v46,
          v44,
          &v52,
          *(_QWORD *)(v49 + 8))
      & 1) != 0 )
    return v52;
  else
    return 0;
}


ServantVoiceEntity_o *ServantVoiceMaster__getEntityEventReward(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_String_o *v44; // x20
  DataManager_c *klass; // x8
  DataManager_o *v46; // x19
  __int64 v47; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v49; // x0
  int32_t v51; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D314BB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D314BB = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v52 = 0;
  v51 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_24;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  if ( !voicePrefix[1] )
    voicePrefix[1] = svtId;
  v11 = sub_1C93B7C(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v11 )
    goto LABEL_24;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_23;
  *(_QWORD *)(v11 + 32) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)Instance, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_23;
  v24 = StringLiteral_1451/*":"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_1451/*":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), v24, v18, v19, v20, v21, v22, v23);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v11 + 24) <= 2u
    || (*(_QWORD *)(v11 + 48) = Instance,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)Instance, v25, v26, v27, v28, v29, v30),
        *(_DWORD *)(v11 + 24) <= 3u)
    || (v37 = StringLiteral_1451/*":"*/,
        *(_QWORD *)(v11 + 56) = StringLiteral_1451/*":"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 56), v37, v31, v32, v33, v34, v35, v36),
        v51 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v51, 0),
        *(_DWORD *)(v11 + 24) <= 4u) )
  {
LABEL_23:
    sub_1C93D34(Instance);
  }
  *(_QWORD *)(v11 + 64) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 64), (int32_t)Instance, v38, v39, v40, v41, v42, v43);
  v44 = System_String__Concat_64466256((System_String_array *)v11, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_3465D74 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_24:
    sub_1C93D2C(Instance, v10);
  klass = Instance->klass;
  v46 = Instance;
  v47 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v47;
      p_offset += 2;
      if ( !v47 )
        goto LABEL_18;
    }
    v49 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v49 = sub_1C69E5C(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v49)(
          v46,
          v44,
          &v52,
          *(_QWORD *)(v49 + 8))
      & 1) != 0 )
    return v52;
  else
    return 0;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getEntityShopCombine(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_String_o *v46; // x0
  const MethodInfo *v47; // x5
  bool EntityFromId; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v49; // x0
  int32_t v50; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *result; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D314BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D314BE = 1;
  }
  result = 0;
  voicePrefix = 0;
  v50 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    svtId,
    limitCount,
    0);
  if ( !HIDWORD(voicePrefix) )
    HIDWORD(voicePrefix) = svtId;
  v13 = sub_1C93B7C(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0);
  if ( !v13 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v13 + 32) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)Instance, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_17;
  v26 = StringLiteral_1451/*":"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_1451/*":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 40), v26, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0);
  if ( *(_DWORD *)(v13 + 24) <= 2u
    || (*(_QWORD *)(v13 + 48) = Instance,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 48), (int32_t)Instance, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v13 + 24) <= 3u)
    || (v39 = StringLiteral_1451/*":"*/,
        *(_QWORD *)(v13 + 56) = StringLiteral_1451/*":"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 56), v39, v33, v34, v35, v36, v37, v38),
        v50 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v50, 0),
        *(_DWORD *)(v13 + 24) <= 4u) )
  {
LABEL_17:
    sub_1C93D34(Instance);
  }
  *(_QWORD *)(v13 + 64) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 64), (int32_t)Instance, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_64466256((System_String_array *)v13, 0);
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   v46,
                   (const MethodInfo_3467884 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__);
  v49 = 0;
  if ( EntityFromId )
  {
    Instance = (DataManager_o *)result;
    if ( result )
      return ServantVoiceEntity__getVoiceList_43513092((ServantVoiceEntity_o *)result, voceType, labelName, 0, 1, v47);
LABEL_18:
    sub_1C93D2C(Instance, v12);
  }
  return v49;
}


System_Collections_Generic_List_ServantVoiceEntity__o *ServantVoiceMaster__getEntity_43526976(
        ServantVoiceMaster_o *this,
        int32_t voiceType,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4D314BA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
    byte_4D314BA = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantVoiceEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1C93D2C(0, v21);
    if ( *(_DWORD *)(v20 + 24) == voiceType && *(_DWORD *)(v20 + 16) == svtId )
    {
      if ( !v7 )
        sub_1C93D2C(v20, v21);
      items = v7->fields._items;
      v30 = Method_System_Collections_Generic_List_ServantVoiceEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C93D2C(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_30:
    v36 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v7;
}


ServantVoiceEntity_array *ServantVoiceMaster__getEntity_43528496(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  ServantVoiceEntity_array *v9; // x20
  __int64 v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_String_o *v43; // x21
  __int64 v44; // x8
  __int64 v45; // x22
  __int64 v46; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **v47; // x10
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  Il2CppClass *v55; // x21
  __int64 v56; // x22
  Il2CppClass **v57; // x0
  bool v58; // nf
  __int64 v60; // x0
  Il2CppClass *v61; // [xsp+0h] [xbp-60h] BYREF
  int v62; // [xsp+Ch] [xbp-54h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D314BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1C93AD4(&ServantVoiceEntity___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D314BC = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v62 = 0;
  v61 = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_28:
    sub_1C93D2C(Instance, v8);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  v9 = (ServantVoiceEntity_array *)sub_1C93B7C(ServantVoiceEntity___TypeInfo, 25);
  v62 = 1;
  do
  {
    v10 = sub_1C93B7C(string___TypeInfo, 5);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
    if ( !v10 )
      goto LABEL_28;
    if ( !*(_DWORD *)(v10 + 24) )
      goto LABEL_27;
    *(_QWORD *)(v10 + 32) = Instance;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 32), Instance, v11, v12, v13, v14, v15, v16);
    if ( *(_DWORD *)(v10 + 24) <= 1u )
      goto LABEL_27;
    v23 = StringLiteral_1451/*":"*/;
    *(_QWORD *)(v10 + 40) = StringLiteral_1451/*":"*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 40), v23, v17, v18, v19, v20, v21, v22);
    Instance = (__int64)System_Int32__ToString((int32_t)voicePrefix, 0);
    if ( *(_DWORD *)(v10 + 24) <= 2u )
      goto LABEL_27;
    *(_QWORD *)(v10 + 48) = Instance;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 48), Instance, v24, v25, v26, v27, v28, v29);
    if ( *(_DWORD *)(v10 + 24) <= 3u )
      goto LABEL_27;
    v36 = StringLiteral_1451/*":"*/;
    *(_QWORD *)(v10 + 56) = StringLiteral_1451/*":"*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 56), v36, v30, v31, v32, v33, v34, v35);
    Instance = (__int64)System_Int32__ToString((int32_t)&v62, 0);
    if ( *(_DWORD *)(v10 + 24) <= 4u )
      goto LABEL_27;
    *(_QWORD *)(v10 + 64) = Instance;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 64), Instance, v37, v38, v39, v40, v41, v42);
    v43 = System_String__Concat_64466256((System_String_array *)v10, 0);
    Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3465D74 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_28;
    v44 = *(_QWORD *)Instance;
    v45 = Instance;
    v46 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
    if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
    {
      v47 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)(*(_QWORD *)(v44 + 176)
                                                                                            + 8LL);
      while ( *(v47 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
      {
        --v46;
        v47 += 2;
        if ( !v46 )
          goto LABEL_17;
      }
      v48 = v44 + 16LL * (*(_DWORD *)v47 + 1) + 312;
    }
    else
    {
LABEL_17:
      v48 = sub_1C69E5C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo,
              1);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppClass **, _QWORD))v48)(
                 v45,
                 v43,
                 &v61,
                 *(_QWORD *)(v48 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_28;
      v55 = v61;
      v56 = v62;
      if ( v61 )
      {
        Instance = sub_1C93C10(v61, v9->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v60 = sub_1C93D50(0);
          sub_1C93BFC(v60, 0);
        }
      }
      if ( (unsigned int)v56 >= LODWORD(v9->max_length) )
LABEL_27:
        sub_1C93D34(Instance);
      v57 = &v9->obj.klass + v56;
      v57[4] = v55;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v57 + 4), (int32_t)v55, v49, v50, v51, v52, v53, v54);
    }
    v58 = v62 - 24 < 0;
    ++v62;
  }
  while ( v58 != __OFSUB__(v62, 25) );
  return v9;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getEntity_43529260(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_String_o *v46; // x22
  DataManager_c *klass; // x8
  DataManager_o *v48; // x21
  __int64 v49; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v51; // x0
  const MethodInfo *v52; // x5
  int32_t v54; // [xsp+Ch] [xbp-54h] BYREF
  ServantVoiceEntity_o *v55; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D314BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D314BD = 1;
  }
  v55 = 0;
  voicePrefix = 0;
  v54 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_23;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    svtId,
    limitCount,
    0);
  v13 = sub_1C93B7C(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0);
  if ( !v13 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_22;
  *(_QWORD *)(v13 + 32) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)Instance, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_22;
  v26 = StringLiteral_1451/*":"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_1451/*":"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 40), v26, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0);
  if ( *(_DWORD *)(v13 + 24) <= 2u
    || (*(_QWORD *)(v13 + 48) = Instance,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 48), (int32_t)Instance, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v13 + 24) <= 3u)
    || (v39 = StringLiteral_1451/*":"*/,
        *(_QWORD *)(v13 + 56) = StringLiteral_1451/*":"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 56), v39, v33, v34, v35, v36, v37, v38),
        v54 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v54, 0),
        *(_DWORD *)(v13 + 24) <= 4u) )
  {
LABEL_22:
    sub_1C93D34(Instance);
  }
  *(_QWORD *)(v13 + 64) = Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 64), (int32_t)Instance, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_64466256((System_String_array *)v13, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_3465D74 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
    goto LABEL_23;
  klass = Instance->klass;
  v48 = Instance;
  v49 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v49;
      p_offset += 2;
      if ( !v49 )
        goto LABEL_16;
    }
    v51 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v51 = sub_1C69E5C(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v51)(
          v48,
          v46,
          &v55,
          *(_QWORD *)(v51 + 8))
      & 1) != 0 )
  {
    Instance = (DataManager_o *)v55;
    if ( v55 )
      return ServantVoiceEntity__getVoiceList_43513092(v55, voceType, labelName, 0, 1, v52);
LABEL_23:
    sub_1C93D2C(Instance, v12);
  }
  return 0;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getEventJoinVoiceList(
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getEventRewardVoiceList(
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
    return ServantVoiceEntity__getVoiceList_43513092((ServantVoiceEntity_o *)result, 5, labelName, 0, 1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getEventShopVoiceList(
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
    return ServantVoiceEntity__getVoiceList_43513092((ServantVoiceEntity_o *)result, 9, labelName, 0, 1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getFirstGetVoiceList(
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

  if ( (byte_4D314C0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4D314C0 = 1;
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getHomeVoiceList(
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getLevelUpVoiceList(
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getLimitCntUpVoiceList(
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
    return ServantVoiceEntity__getVoiceListByGender((ServantVoiceEntity_o *)result, 2, 10, -1, 0, v6);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getLimitCntVoiceListByLabel(
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getMasterMissionVoiceList(
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
    return ServantVoiceEntity__getVoiceList_43513092((ServantVoiceEntity_o *)result, 8, labelName, 0, 1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getNpVoiceList(
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
    return ServantVoiceEntity__getVoiceList_43513092((ServantVoiceEntity_o *)result, 7, labelName, 0, 1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getSpecificLimitCntUpVoiceList(
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
    return ServantVoiceEntity__getVoiceList_43512376((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0, -1, v7);
  return result;
}


int32_t ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ServantChangeEntity_o *v5; // x0

  if ( (byte_4D314B8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D314B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  v5 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, svtId, 0);
  if ( v5 )
    return v5->fields.svtVoiceId;
  return svtId;
}


// local variable allocation has failed, the output may be wrong!
bool ServantVoiceMaster__isOpenByServantFriendShip(
        int32_t svtId,
        int32_t limitCnt,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  int32_t SvtVoiceId; // w22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v11; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v13; // x21
  int32_t FriendShipRank; // w0
  const MethodInfo *v15; // x6
  int32_t v16; // w19
  int32_t v17; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_43512376; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D314BF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D314BF = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_20;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    SvtVoiceId,
    limitCnt,
    0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_20;
  Entity = (UserServantCollectionEntity_o *)ServantVoiceMaster__GetEntity(
                                              (ServantVoiceMaster_o *)Instance,
                                              voicePrefix[1],
                                              voicePrefix[0],
                                              1,
                                              v11);
  if ( !Entity )
    return (char)Entity;
  v13 = (ServantVoiceEntity_o *)Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_1C93D2C(Instance, v9);
  }
  Entity = UserServantCollectionMaster__GetEntity(
             (UserServantCollectionMaster_o *)Instance,
             SelfUserGame->fields.userId,
             svtId,
             0);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0);
    v16 = oldFriendShipRank + 1;
    if ( v16 > FriendShipRank )
    {
LABEL_17:
      LOBYTE(Entity) = 0;
    }
    else
    {
      v17 = FriendShipRank;
      while ( 1 )
      {
        VoiceList_43512376 = ServantVoiceEntity__getVoiceList_43512376(v13, 1, 3, v16, 0, -1, v15);
        if ( VoiceList_43512376 )
        {
          if ( VoiceList_43512376->fields._size > 0 )
            break;
        }
        if ( ++v16 > v17 )
          goto LABEL_17;
      }
      LOBYTE(Entity) = 1;
    }
  }
  return (char)Entity;
}


void ServantVoiceMaster___c__DisplayClass25_0___ctor(
        ServantVoiceMaster___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantVoiceMaster___c__DisplayClass25_0___GetSvtEquipVoiceEntity_b__0(
        ServantVoiceMaster___c__DisplayClass25_0_o *this,
        ServantVoiceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}