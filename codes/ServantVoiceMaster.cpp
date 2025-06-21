void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CF9B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__, method);
    byte_4B1CF9B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    111,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
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

  if ( (byte_4B1CF99 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B1CF99 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
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

  if ( (byte_4B1CFA5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___, v5);
    sub_1BCAFF8(&System_Func_ServantVoiceEntity__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__, v7);
    sub_1BCAFF8(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo, v8);
    byte_4B1CFA5 = 1;
  }
  v9 = sub_1BCB244(ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_DWORD *)(v9 + 16) = svtId;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_3045CA8 *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v13 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    0LL);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                   v12,
                                   (System_Func_TSource__bool__o *)v13,
                                   (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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

  if ( (byte_4B1CF9A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__, entity);
    byte_4B1CF9A = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_41942612((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_41941884(
             (ServantVoiceEntity_o *)result,
             2,
             23,
             costumeId,
             playVoiceLabel,
             -1,
             v8);
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
  __int64 v16; // x21
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  System_String_o *v25; // x20
  DataManager_c *klass; // x8
  DataManager_o *v27; // x19
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v30; // x0
  int32_t v32; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1CF9D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BCAFF8(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__, v9);
    sub_1BCAFF8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BCAFF8(&string___TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v13);
    byte_4B1CF9D = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v33 = 0LL;
  v32 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_22;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  v16 = sub_1BCB0A0(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v16 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v16 + 32) = Instance;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 32), (int32_t)Instance, v17, v18);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_21;
  v20 = StringLiteral_1448/*":"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_1448/*":"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 40), v20, v17, v19);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v16 + 24) <= 2u
    || (*(_QWORD *)(v16 + 48) = Instance,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 48), (int32_t)Instance, v17, v21),
        *(_DWORD *)(v16 + 24) <= 3u)
    || (v23 = StringLiteral_1448/*":"*/,
        *(_QWORD *)(v16 + 56) = StringLiteral_1448/*":"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 56), v23, v17, v22),
        v32 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v32, 0LL),
        *(_DWORD *)(v16 + 24) <= 4u) )
  {
LABEL_21:
    sub_1BCB25C(Instance, v15, v17);
  }
  *(_QWORD *)(v16 + 64) = Instance;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 64), (int32_t)Instance, v17, v24);
  v25 = System_String__Concat_62490940((System_String_array *)v16, 0LL);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_32CA6AC *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_22:
    sub_1BCB254(Instance, v15);
  klass = Instance->klass;
  v27 = Instance;
  v28 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v28;
      p_offset += 2;
      if ( !v28 )
        goto LABEL_16;
    }
    v30 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v30 = sub_1C1B560(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo,
            1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v30)(
          v27,
          v25,
          &v33,
          *(_QWORD *)(v30 + 8)) & 1) != 0 )
    return v33;
  else
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
  __int64 v16; // x21
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  System_String_o *v25; // x20
  DataManager_c *klass; // x8
  DataManager_o *v27; // x19
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v30; // x0
  int32_t v32; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1CF9F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BCAFF8(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__, v9);
    sub_1BCAFF8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BCAFF8(&string___TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v13);
    byte_4B1CF9F = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v33 = 0LL;
  v32 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_24;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  if ( !voicePrefix[1] )
    voicePrefix[1] = svtId;
  v16 = sub_1BCB0A0(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v16 )
    goto LABEL_24;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_23;
  *(_QWORD *)(v16 + 32) = Instance;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 32), (int32_t)Instance, v17, v18);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_23;
  v20 = StringLiteral_1448/*":"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_1448/*":"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 40), v20, v17, v19);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v16 + 24) <= 2u
    || (*(_QWORD *)(v16 + 48) = Instance,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 48), (int32_t)Instance, v17, v21),
        *(_DWORD *)(v16 + 24) <= 3u)
    || (v23 = StringLiteral_1448/*":"*/,
        *(_QWORD *)(v16 + 56) = StringLiteral_1448/*":"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 56), v23, v17, v22),
        v32 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v32, 0LL),
        *(_DWORD *)(v16 + 24) <= 4u) )
  {
LABEL_23:
    sub_1BCB25C(Instance, v15, v17);
  }
  *(_QWORD *)(v16 + 64) = Instance;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 64), (int32_t)Instance, v17, v24);
  v25 = System_String__Concat_62490940((System_String_array *)v16, 0LL);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_32CA6AC *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_24:
    sub_1BCB254(Instance, v15);
  klass = Instance->klass;
  v27 = Instance;
  v28 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v28;
      p_offset += 2;
      if ( !v28 )
        goto LABEL_18;
    }
    v30 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v30 = sub_1C1B560(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo,
            1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v30)(
          v27,
          v25,
          &v33,
          *(_QWORD *)(v30 + 8)) & 1) != 0 )
    return v33;
  else
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
  __int64 v17; // x22
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  const MethodInfo *v25; // x3
  System_String_o *v26; // x0
  const MethodInfo *v27; // x5
  bool EntityFromId; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *result; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1CFA2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BCAFF8(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&string___TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v14);
    byte_4B1CFA2 = 1;
  }
  result = 0LL;
  voicePrefix = 0LL;
  v30 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v17 = sub_1BCB0A0(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v17 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v17 + 32) = Instance;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)Instance, v18, v19);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_17;
  v21 = StringLiteral_1448/*":"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_1448/*":"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 40), v21, v18, v20);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v17 + 24) <= 2u
    || (*(_QWORD *)(v17 + 48) = Instance,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 48), (int32_t)Instance, v18, v22),
        *(_DWORD *)(v17 + 24) <= 3u)
    || (v24 = StringLiteral_1448/*":"*/,
        *(_QWORD *)(v17 + 56) = StringLiteral_1448/*":"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 56), v24, v18, v23),
        v30 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v30, 0LL),
        *(_DWORD *)(v17 + 24) <= 4u) )
  {
LABEL_17:
    sub_1BCB25C(Instance, v16, v18);
  }
  *(_QWORD *)(v17 + 64) = Instance;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 64), (int32_t)Instance, v18, v25);
  v26 = System_String__Concat_62490940((System_String_array *)v17, 0LL);
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   v26,
                   (const MethodInfo_32CBF68 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__);
  v29 = 0LL;
  if ( EntityFromId )
  {
    Instance = (DataManager_o *)result;
    if ( result )
      return ServantVoiceEntity__getVoiceList_41942612((ServantVoiceEntity_o *)result, voceType, labelName, 0LL, 1, v27);
LABEL_18:
    sub_1BCB254(Instance, v16);
  }
  return v29;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_41957792(
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
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4B1CF9E & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__,
      *(_QWORD *)&voiceType);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo, v12);
    byte_4B1CF9E = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantVoiceEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v30 = v26;
    if ( !v26 )
      sub_1BCB254(0LL, v27);
    if ( *(_DWORD *)(v26 + 24) == voiceType && *(_DWORD *)(v26 + 16) == svtId )
    {
      if ( !v13 )
        sub_1BCB254(v26, v27);
      items = v13->fields._items;
      v32 = Method_System_Collections_Generic_List_ServantVoiceEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1BCB254(v26, v27);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 4), v30, v28, v29);
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_30;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_30:
    v38 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_41959312(
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
  __int64 Instance; // x0
  __int64 v14; // x1
  ServantVoiceEntity_array *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  System_String_o *v25; // x21
  __int64 v26; // x8
  __int64 v27; // x22
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **v29; // x10
  __int64 v30; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x21
  __int64 v33; // x22
  Il2CppClass **v34; // x0
  bool v35; // nf
  __int64 v37; // x0
  __int64 v38; // [xsp+0h] [xbp-60h] BYREF
  int v39; // [xsp+Ch] [xbp-54h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1CFA0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__, v7);
    sub_1BCAFF8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, v8);
    sub_1BCAFF8(&ServantVoiceEntity___TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BCAFF8(&string___TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v12);
    byte_4B1CFA0 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v39 = 0;
  v38 = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_28:
    sub_1BCB254(Instance, v14);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  v15 = (ServantVoiceEntity_array *)sub_1BCB0A0(ServantVoiceEntity___TypeInfo, 25LL);
  v39 = 1;
  do
  {
    v16 = sub_1BCB0A0(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
    if ( !v16 )
      goto LABEL_28;
    if ( !*(_DWORD *)(v16 + 24) )
      goto LABEL_27;
    *(_QWORD *)(v16 + 32) = Instance;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 32), Instance, v17, v18);
    if ( *(_DWORD *)(v16 + 24) <= 1u )
      goto LABEL_27;
    v20 = StringLiteral_1448/*":"*/;
    *(_QWORD *)(v16 + 40) = StringLiteral_1448/*":"*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 40), v20, v17, v19);
    Instance = (__int64)System_Int32__ToString((int32_t)voicePrefix, 0LL);
    if ( *(_DWORD *)(v16 + 24) <= 2u )
      goto LABEL_27;
    *(_QWORD *)(v16 + 48) = Instance;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 48), Instance, v17, v21);
    if ( *(_DWORD *)(v16 + 24) <= 3u )
      goto LABEL_27;
    v23 = StringLiteral_1448/*":"*/;
    *(_QWORD *)(v16 + 56) = StringLiteral_1448/*":"*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 56), v23, v17, v22);
    Instance = (__int64)System_Int32__ToString((int32_t)&v39, 0LL);
    if ( *(_DWORD *)(v16 + 24) <= 4u )
      goto LABEL_27;
    *(_QWORD *)(v16 + 64) = Instance;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 64), Instance, v17, v24);
    v25 = System_String__Concat_62490940((System_String_array *)v16, 0LL);
    Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_32CA6AC *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_28;
    v26 = *(_QWORD *)Instance;
    v27 = Instance;
    v28 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
    if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
    {
      v29 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)(*(_QWORD *)(v26 + 176)
                                                                                            + 8LL);
      while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
      {
        --v28;
        v29 += 2;
        if ( !v28 )
          goto LABEL_17;
      }
      v30 = v26 + 16LL * (*(_DWORD *)v29 + 1) + 312;
    }
    else
    {
LABEL_17:
      v30 = sub_1C1B560(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo,
              1LL);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, __int64 *, _QWORD))v30)(
                 v27,
                 v25,
                 &v38,
                 *(_QWORD *)(v30 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_28;
      v32 = v38;
      v33 = v39;
      if ( v38 )
      {
        Instance = sub_1BCB134(v38, v15->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v37 = sub_1BCB278(0LL);
          sub_1BCB120(v37, 0LL);
        }
      }
      if ( (unsigned int)v33 >= v15->max_length )
LABEL_27:
        sub_1BCB25C(Instance, v14, v17);
      v34 = &v15->obj.klass + v33;
      v34[4] = (Il2CppClass *)v32;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 4), v32, v17, v31);
    }
    v35 = v39 - 24 < 0;
    ++v39;
  }
  while ( v35 != __OFSUB__(v39, 25) );
  return v15;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_41960076(
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
  __int64 v18; // x22
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  const MethodInfo *v26; // x3
  System_String_o *v27; // x22
  DataManager_c *klass; // x8
  DataManager_o *v29; // x21
  __int64 v30; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v32; // x0
  const MethodInfo *v33; // x5
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF
  ServantVoiceEntity_o *v36; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1CFA1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BCAFF8(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__, v11);
    sub_1BCAFF8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BCAFF8(&string___TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v15);
    byte_4B1CFA1 = 1;
  }
  v36 = 0LL;
  voicePrefix = 0LL;
  v35 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_23;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    svtId,
    limitCount,
    0LL);
  v18 = sub_1BCB0A0(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v18 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_22;
  *(_QWORD *)(v18 + 32) = Instance;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 32), (int32_t)Instance, v19, v20);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_22;
  v22 = StringLiteral_1448/*":"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_1448/*":"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 40), v22, v19, v21);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 2u
    || (*(_QWORD *)(v18 + 48) = Instance,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 48), (int32_t)Instance, v19, v23),
        *(_DWORD *)(v18 + 24) <= 3u)
    || (v25 = StringLiteral_1448/*":"*/,
        *(_QWORD *)(v18 + 56) = StringLiteral_1448/*":"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 56), v25, v19, v24),
        v35 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v35, 0LL),
        *(_DWORD *)(v18 + 24) <= 4u) )
  {
LABEL_22:
    sub_1BCB25C(Instance, v17, v19);
  }
  *(_QWORD *)(v18 + 64) = Instance;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 64), (int32_t)Instance, v19, v26);
  v27 = System_String__Concat_62490940((System_String_array *)v18, 0LL);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_32CA6AC *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
    goto LABEL_23;
  klass = Instance->klass;
  v29 = Instance;
  v30 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v30;
      p_offset += 2;
      if ( !v30 )
        goto LABEL_16;
    }
    v32 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v32 = sub_1C1B560(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo,
            1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v32)(
          v29,
          v27,
          &v36,
          *(_QWORD *)(v32 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)v36;
    if ( v36 )
      return ServantVoiceEntity__getVoiceList_41942612(v36, voceType, labelName, 0LL, 1, v33);
LABEL_23:
    sub_1BCB254(Instance, v17);
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
    return ServantVoiceEntity__getVoiceList_41942612((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_41942612((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
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

  if ( (byte_4B1CFA4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    byte_4B1CFA4 = 1;
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
    return ServantVoiceEntity__getVoiceList_41942612((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_41942612((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_41941884((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
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
    return ServantVoiceEntity__getVoiceList_41941884((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_41962072(
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
    return ServantVoiceEntity__getVoiceList_41941884((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantChangeEntity_o *v6; // x0

  if ( (byte_4B1CF9C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1CF9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
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
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v15; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v17; // x21
  int32_t FriendShipRank; // w0
  const MethodInfo *v19; // x6
  int32_t v20; // w19
  int32_t v21; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_41941884; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1CFA3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&limitCnt);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1CFA3 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_20;
  Entity = (UserServantCollectionEntity_o *)ServantVoiceMaster__GetEntity(
                                              (ServantVoiceMaster_o *)Instance,
                                              voicePrefix[1],
                                              voicePrefix[0],
                                              1,
                                              v15);
  if ( !Entity )
    return (char)Entity;
  v17 = (ServantVoiceEntity_o *)Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_1BCB254(Instance, v13);
  }
  Entity = UserServantCollectionMaster__GetEntity(
             (UserServantCollectionMaster_o *)Instance,
             SelfUserGame->fields.userId,
             svtId,
             0LL);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0LL);
    v20 = oldFriendShipRank + 1;
    if ( v20 > FriendShipRank )
    {
LABEL_17:
      LOBYTE(Entity) = 0;
    }
    else
    {
      v21 = FriendShipRank;
      while ( 1 )
      {
        VoiceList_41941884 = ServantVoiceEntity__getVoiceList_41941884(v17, 1, 3, v20, 0LL, -1, v19);
        if ( VoiceList_41941884 )
        {
          if ( VoiceList_41941884->fields._size > 0 )
            break;
        }
        if ( ++v20 > v21 )
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
    sub_1BCB254(this, 0LL);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}