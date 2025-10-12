void ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38488 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
    byte_4C38488 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    111,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
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

  if ( (byte_4C38486 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
    byte_4C38486 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_339B2F0 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
}


ServantVoiceEntity_o *ServantVoiceMaster__GetSvtEquipVoiceEntity(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C38492 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
    sub_1C32C20(&System_Func_ServantVoiceEntity__bool__TypeInfo);
    sub_1C32C20(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__);
    sub_1C32C20(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
    byte_4C38492 = 1;
  }
  v5 = sub_1C32E6C(ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = svtId;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    0);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                   v7,
                                   (System_Func_TSource__bool__o *)v8,
                                   (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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

  if ( (byte_4C38487 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
    byte_4C38487 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_42697784((ServantVoiceEntity_o *)result, 6, labelName, 0, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_42697056(
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
  __int64 v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *v23; // x20
  DataManager_c *klass; // x8
  DataManager_o *v25; // x19
  __int64 v26; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v28; // x0
  int32_t v30; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v31; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3848A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C3848A = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v31 = 0;
  v30 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_22;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  v10 = sub_1C32CC8(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v10 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v10 + 32) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)Instance, v11, v12);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_21;
  v15 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_1457/*":"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 40), v15, v13, v14);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (*(_QWORD *)(v10 + 48) = Instance,
        sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 48), (int32_t)Instance, v16, v17),
        *(_DWORD *)(v10 + 24) <= 3u)
    || (v20 = StringLiteral_1457/*":"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_1457/*":"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 56), v20, v18, v19),
        v30 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v30, 0),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_21:
    sub_1C32E84(Instance);
  }
  *(_QWORD *)(v10 + 64) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 64), (int32_t)Instance, v21, v22);
  v23 = System_String__Concat_63559060((System_String_array *)v10, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_22:
    sub_1C32E7C(Instance);
  klass = Instance->klass;
  v25 = Instance;
  v26 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v26;
      p_offset += 2;
      if ( !v26 )
        goto LABEL_16;
    }
    v28 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v28 = sub_1C83438(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v28)(
          v25,
          v23,
          &v31,
          *(_QWORD *)(v28 + 8))
      & 1) != 0 )
    return v31;
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
  __int64 v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *v23; // x20
  DataManager_c *klass; // x8
  DataManager_o *v25; // x19
  __int64 v26; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v28; // x0
  int32_t v30; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v31; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3848C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C3848C = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v31 = 0;
  v30 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v10 = sub_1C32CC8(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v10 )
    goto LABEL_24;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_23;
  *(_QWORD *)(v10 + 32) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)Instance, v11, v12);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_23;
  v15 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_1457/*":"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 40), v15, v13, v14);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (*(_QWORD *)(v10 + 48) = Instance,
        sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 48), (int32_t)Instance, v16, v17),
        *(_DWORD *)(v10 + 24) <= 3u)
    || (v20 = StringLiteral_1457/*":"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_1457/*":"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 56), v20, v18, v19),
        v30 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v30, 0),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_23:
    sub_1C32E84(Instance);
  }
  *(_QWORD *)(v10 + 64) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 64), (int32_t)Instance, v21, v22);
  v23 = System_String__Concat_63559060((System_String_array *)v10, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_24:
    sub_1C32E7C(Instance);
  klass = Instance->klass;
  v25 = Instance;
  v26 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v26;
      p_offset += 2;
      if ( !v26 )
        goto LABEL_18;
    }
    v28 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v28 = sub_1C83438(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v28)(
          v25,
          v23,
          &v31,
          *(_QWORD *)(v28 + 8))
      & 1) != 0 )
    return v31;
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
  __int64 v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *v25; // x0
  const MethodInfo *v26; // x5
  bool EntityFromId; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v28; // x0
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *result; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C3848F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C3848F = 1;
  }
  result = 0;
  *(_QWORD *)voicePrefix = 0;
  v29 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  if ( !voicePrefix[1] )
    voicePrefix[1] = svtId;
  v12 = sub_1C32CC8(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v12 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v12 + 32) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 32), (int32_t)Instance, v13, v14);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_17;
  v17 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_1457/*":"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 40), v17, v15, v16);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v12 + 24) <= 2u
    || (*(_QWORD *)(v12 + 48) = Instance,
        sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 48), (int32_t)Instance, v18, v19),
        *(_DWORD *)(v12 + 24) <= 3u)
    || (v22 = StringLiteral_1457/*":"*/,
        *(_QWORD *)(v12 + 56) = StringLiteral_1457/*":"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 56), v22, v20, v21),
        v29 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v29, 0),
        *(_DWORD *)(v12 + 24) <= 4u) )
  {
LABEL_17:
    sub_1C32E84(Instance);
  }
  *(_QWORD *)(v12 + 64) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 64), (int32_t)Instance, v23, v24);
  v25 = System_String__Concat_63559060((System_String_array *)v12, 0);
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   v25,
                   (const MethodInfo_339A9A0 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__);
  v28 = 0;
  if ( EntityFromId )
  {
    Instance = (DataManager_o *)result;
    if ( result )
      return ServantVoiceEntity__getVoiceList_42697784((ServantVoiceEntity_o *)result, voceType, labelName, 0, 1, v26);
LABEL_18:
    sub_1C32E7C(Instance);
  }
  return v28;
}


System_Collections_Generic_List_ServantVoiceEntity__o *ServantVoiceMaster__getEntity_42713036(
        ServantVoiceMaster_o *this,
        int32_t voiceType,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  struct System_Object_array *items; // x9
  _QWORD *v23; // x10
  __int64 size; // x11
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C3848B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
    byte_4C3848B = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantVoiceEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v21 = v18;
    if ( !v18 )
      sub_1C32E7C(0);
    if ( *(_DWORD *)(v18 + 24) == voiceType && *(_DWORD *)(v18 + 16) == svtId )
    {
      if ( !v7 )
        sub_1C32E7C(v18);
      items = v7->fields._items;
      v23 = Method_System_Collections_Generic_List_ServantVoiceEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C32E7C(v18);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v18,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), v21, v19, v20);
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_30:
    v29 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v7;
}


ServantVoiceEntity_array *ServantVoiceMaster__getEntity_42714556(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  ServantVoiceEntity_array *v8; // x20
  __int64 v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x22
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **v26; // x10
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppClass *v30; // x21
  __int64 v31; // x22
  Il2CppClass **v32; // x0
  bool v33; // nf
  __int64 v35; // x0
  Il2CppClass *v36; // [xsp+0h] [xbp-60h] BYREF
  int v37; // [xsp+Ch] [xbp-54h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C3848D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1C32C20(&ServantVoiceEntity___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C3848D = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v37 = 0;
  v36 = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_28:
    sub_1C32E7C(Instance);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  v8 = (ServantVoiceEntity_array *)sub_1C32CC8(ServantVoiceEntity___TypeInfo, 25);
  v37 = 1;
  do
  {
    v9 = sub_1C32CC8(string___TypeInfo, 5);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
    if ( !v9 )
      goto LABEL_28;
    if ( !*(_DWORD *)(v9 + 24) )
      goto LABEL_27;
    *(_QWORD *)(v9 + 32) = Instance;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), Instance, v10, v11);
    if ( *(_DWORD *)(v9 + 24) <= 1u )
      goto LABEL_27;
    v14 = StringLiteral_1457/*":"*/;
    *(_QWORD *)(v9 + 40) = StringLiteral_1457/*":"*/;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 40), v14, v12, v13);
    Instance = (__int64)System_Int32__ToString((int32_t)voicePrefix, 0);
    if ( *(_DWORD *)(v9 + 24) <= 2u )
      goto LABEL_27;
    *(_QWORD *)(v9 + 48) = Instance;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 48), Instance, v15, v16);
    if ( *(_DWORD *)(v9 + 24) <= 3u )
      goto LABEL_27;
    v19 = StringLiteral_1457/*":"*/;
    *(_QWORD *)(v9 + 56) = StringLiteral_1457/*":"*/;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 56), v19, v17, v18);
    Instance = (__int64)System_Int32__ToString((int32_t)&v37, 0);
    if ( *(_DWORD *)(v9 + 24) <= 4u )
      goto LABEL_27;
    *(_QWORD *)(v9 + 64) = Instance;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 64), Instance, v20, v21);
    v22 = System_String__Concat_63559060((System_String_array *)v9, 0);
    Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_28;
    v23 = *(_QWORD *)Instance;
    v24 = Instance;
    v25 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
    if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
    {
      v26 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)(*(_QWORD *)(v23 + 176)
                                                                                            + 8LL);
      while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
      {
        --v25;
        v26 += 2;
        if ( !v25 )
          goto LABEL_17;
      }
      v27 = v23 + 16LL * (*(_DWORD *)v26 + 1) + 312;
    }
    else
    {
LABEL_17:
      v27 = sub_1C83438(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo,
              1);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppClass **, _QWORD))v27)(
                 v24,
                 v22,
                 &v36,
                 *(_QWORD *)(v27 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_28;
      v30 = v36;
      v31 = v37;
      if ( v36 )
      {
        Instance = sub_1C32D5C(v36, v8->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v35 = sub_1C32EA0(0);
          sub_1C32D48(v35, 0);
        }
      }
      if ( (unsigned int)v31 >= LODWORD(v8->max_length) )
LABEL_27:
        sub_1C32E84(Instance);
      v32 = &v8->obj.klass + v31;
      v32[4] = v30;
      sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v30, v28, v29);
    }
    v33 = v37 - 24 < 0;
    ++v37;
  }
  while ( v33 != __OFSUB__(v37, 25) );
  return v8;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getEntity_42715320(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *v25; // x22
  DataManager_c *klass; // x8
  DataManager_o *v27; // x21
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v30; // x0
  const MethodInfo *v31; // x5
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF
  ServantVoiceEntity_o *v34; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C3848E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C3848E = 1;
  }
  v34 = 0;
  *(_QWORD *)voicePrefix = 0;
  v33 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_23;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  v12 = sub_1C32CC8(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v12 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_22;
  *(_QWORD *)(v12 + 32) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 32), (int32_t)Instance, v13, v14);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_22;
  v17 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_1457/*":"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 40), v17, v15, v16);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v12 + 24) <= 2u
    || (*(_QWORD *)(v12 + 48) = Instance,
        sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 48), (int32_t)Instance, v18, v19),
        *(_DWORD *)(v12 + 24) <= 3u)
    || (v22 = StringLiteral_1457/*":"*/,
        *(_QWORD *)(v12 + 56) = StringLiteral_1457/*":"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 56), v22, v20, v21),
        v33 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v33, 0),
        *(_DWORD *)(v12 + 24) <= 4u) )
  {
LABEL_22:
    sub_1C32E84(Instance);
  }
  *(_QWORD *)(v12 + 64) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 64), (int32_t)Instance, v23, v24);
  v25 = System_String__Concat_63559060((System_String_array *)v12, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
    goto LABEL_23;
  klass = Instance->klass;
  v27 = Instance;
  v28 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v28;
      p_offset += 2;
      if ( !v28 )
        goto LABEL_16;
    }
    v30 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v30 = sub_1C83438(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v30)(
          v27,
          v25,
          &v34,
          *(_QWORD *)(v30 + 8))
      & 1) != 0 )
  {
    Instance = (DataManager_o *)v34;
    if ( v34 )
      return ServantVoiceEntity__getVoiceList_42697784(v34, voceType, labelName, 0, 1, v31);
LABEL_23:
    sub_1C32E7C(Instance);
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
    return ServantVoiceEntity__getVoiceList_42697784((ServantVoiceEntity_o *)result, 5, labelName, 0, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_42697784((ServantVoiceEntity_o *)result, 9, labelName, 0, 1, v7);
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

  if ( (byte_4C38491 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4C38491 = 1;
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
    return ServantVoiceEntity__getVoiceList_42697784((ServantVoiceEntity_o *)result, 8, labelName, 0, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_42697784((ServantVoiceEntity_o *)result, 7, labelName, 0, 1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getRankUpFriendShip(
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
    return ServantVoiceEntity__getVoiceList_42697056((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getSpecificLimitCntUpVoiceList(
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
    return ServantVoiceEntity__getVoiceList_42697056((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getSpecificLimitCntUpVoiceList_42717316(
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
    return ServantVoiceEntity__getVoiceList_42697056((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0, -1, v7);
  return result;
}


int32_t ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  ServantChangeEntity_o *v4; // x0

  if ( (byte_4C38489 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38489 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  v4 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, svtId, 0);
  if ( v4 )
    return v4->fields.svtVoiceId;
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
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v10; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v12; // x21
  int32_t FriendShipRank; // w0
  const MethodInfo *v14; // x6
  int32_t v15; // w19
  int32_t v16; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_42697056; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C38490 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38490 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_20;
  Entity = (UserServantCollectionEntity_o *)ServantVoiceMaster__GetEntity(
                                              (ServantVoiceMaster_o *)Instance,
                                              voicePrefix[1],
                                              voicePrefix[0],
                                              1,
                                              v10);
  if ( !Entity )
    return (char)Entity;
  v12 = (ServantVoiceEntity_o *)Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_1C32E7C(Instance);
  }
  Entity = UserServantCollectionMaster__GetEntity(
             (UserServantCollectionMaster_o *)Instance,
             SelfUserGame->fields.userId,
             svtId,
             0);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0);
    v15 = oldFriendShipRank + 1;
    if ( v15 > FriendShipRank )
    {
LABEL_17:
      LOBYTE(Entity) = 0;
    }
    else
    {
      v16 = FriendShipRank;
      while ( 1 )
      {
        VoiceList_42697056 = ServantVoiceEntity__getVoiceList_42697056(v12, 1, 3, v15, 0, -1, v14);
        if ( VoiceList_42697056 )
        {
          if ( VoiceList_42697056->fields._size > 0 )
            break;
        }
        if ( ++v15 > v16 )
          goto LABEL_17;
      }
      LOBYTE(Entity) = 1;
    }
  }
  return (char)Entity;
}


void ServantVoiceMaster___c__DisplayClass27_0___ctor(
        ServantVoiceMaster___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantVoiceMaster___c__DisplayClass27_0___GetSvtEquipVoiceEntity_b__0(
        ServantVoiceMaster___c__DisplayClass27_0_o *this,
        ServantVoiceEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}