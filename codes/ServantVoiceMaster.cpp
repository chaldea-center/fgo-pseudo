void ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E781A2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
    byte_4E781A2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    111,
    (const MethodInfo_3538564 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
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

  if ( (byte_4E781A0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
    byte_4E781A0 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_353AADC *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
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

  if ( (byte_4E781AC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
    sub_1D0F0B4(&System_Func_ServantVoiceEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_ServantVoiceMaster___c__DisplayClass25_0__GetSvtEquipVoiceEntity_b__0__);
    sub_1D0F0B4(&ServantVoiceMaster___c__DisplayClass25_0_TypeInfo);
    byte_4E781AC = 1;
  }
  v5 = sub_1D0F300(ServantVoiceMaster___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_327EA84 *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v9 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ServantVoiceMaster___c__DisplayClass25_0__GetSvtEquipVoiceEntity_b__0__,
    0);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52923832(
                                   v8,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_3278DB8 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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

  if ( (byte_4E781A1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
    byte_4E781A1 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_353AB28 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantVoiceMaster__TryGetSyncServantId(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t *syncSvtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  ServantVoiceEntity_o *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  bool SyncServantId; // w22
  int v22; // w24
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4E781AD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    byte_4E781AD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1D0F30C(0, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v8);
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
      v13 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo, 0);
    }
    v18 = (ServantVoiceEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                    Enumerator,
                                    *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1D0F30C(0, v19);
    if ( v18->fields.id == svtId )
    {
      SyncServantId = ServantVoiceEntity__TryGetSyncServantId(v18, syncSvtId, 0, v20);
      v22 = 4;
      goto LABEL_22;
    }
  }
  SyncServantId = 0;
  v22 = 5;
LABEL_22:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_26;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_26:
    v26 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( v22 == 5 )
  {
    SyncServantId = 0;
    *syncSvtId = 0;
  }
  return SyncServantId;
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
    return ServantVoiceEntity__getVoiceList_44177296((ServantVoiceEntity_o *)result, 6, labelName, 0, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_44176580(
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
  const MethodInfo *v11; // x5
  __int64 v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_String_o *v45; // x20
  DataManager_c *klass; // x8
  DataManager_o *v47; // x19
  __int64 v48; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v50; // x0
  int32_t v52; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E781A4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1D0F0B4(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_1453/*":"*/);
    byte_4E781A4 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v53 = 0;
  v52 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_22;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    v11);
  v12 = sub_1D0F15C(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v12 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v12 + 32) = Instance;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 32), (int32_t)Instance, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_21;
  v25 = StringLiteral_1453/*":"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_1453/*":"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 40), v25, v19, v20, v21, v22, v23, v24);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v12 + 24) <= 2u
    || (*(_QWORD *)(v12 + 48) = Instance,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 48), (int32_t)Instance, v26, v27, v28, v29, v30, v31),
        *(_DWORD *)(v12 + 24) <= 3u)
    || (v38 = StringLiteral_1453/*":"*/,
        *(_QWORD *)(v12 + 56) = StringLiteral_1453/*":"*/,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 56), v38, v32, v33, v34, v35, v36, v37),
        v52 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v52, 0),
        *(_DWORD *)(v12 + 24) <= 4u) )
  {
LABEL_21:
    sub_1D0F314(Instance);
  }
  *(_QWORD *)(v12 + 64) = Instance;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 64), (int32_t)Instance, v39, v40, v41, v42, v43, v44);
  v45 = System_String__Concat_65603304((System_String_array *)v12, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_353867C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_22:
    sub_1D0F30C(Instance, v10);
  klass = Instance->klass;
  v47 = Instance;
  v48 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v48;
      p_offset += 2;
      if ( !v48 )
        goto LABEL_16;
    }
    v50 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v50 = sub_1CE5430(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v50)(
          v47,
          v45,
          &v53,
          *(_QWORD *)(v50 + 8))
      & 1) != 0 )
    return v53;
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
  const MethodInfo *v11; // x5
  __int64 v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_String_o *v45; // x20
  DataManager_c *klass; // x8
  DataManager_o *v47; // x19
  __int64 v48; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v50; // x0
  int32_t v52; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E781A6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1D0F0B4(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_1453/*":"*/);
    byte_4E781A6 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v53 = 0;
  v52 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_24;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    v11);
  if ( !voicePrefix[1] )
    voicePrefix[1] = svtId;
  v12 = sub_1D0F15C(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v12 )
    goto LABEL_24;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_23;
  *(_QWORD *)(v12 + 32) = Instance;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 32), (int32_t)Instance, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_23;
  v25 = StringLiteral_1453/*":"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_1453/*":"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 40), v25, v19, v20, v21, v22, v23, v24);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v12 + 24) <= 2u
    || (*(_QWORD *)(v12 + 48) = Instance,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 48), (int32_t)Instance, v26, v27, v28, v29, v30, v31),
        *(_DWORD *)(v12 + 24) <= 3u)
    || (v38 = StringLiteral_1453/*":"*/,
        *(_QWORD *)(v12 + 56) = StringLiteral_1453/*":"*/,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 56), v38, v32, v33, v34, v35, v36, v37),
        v52 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v52, 0),
        *(_DWORD *)(v12 + 24) <= 4u) )
  {
LABEL_23:
    sub_1D0F314(Instance);
  }
  *(_QWORD *)(v12 + 64) = Instance;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 64), (int32_t)Instance, v39, v40, v41, v42, v43, v44);
  v45 = System_String__Concat_65603304((System_String_array *)v12, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_353867C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_24:
    sub_1D0F30C(Instance, v10);
  klass = Instance->klass;
  v47 = Instance;
  v48 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v48;
      p_offset += 2;
      if ( !v48 )
        goto LABEL_18;
    }
    v50 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v50 = sub_1CE5430(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v50)(
          v47,
          v45,
          &v53,
          *(_QWORD *)(v50 + 8))
      & 1) != 0 )
    return v53;
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
  const MethodInfo *v13; // x5
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_String_o *v47; // x0
  const MethodInfo *v48; // x5
  bool EntityFromId; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v50; // x0
  int32_t v51; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *result; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4E781A9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_1453/*":"*/);
    byte_4E781A9 = 1;
  }
  result = 0;
  *(_QWORD *)voicePrefix = 0;
  v51 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    v13);
  if ( !voicePrefix[1] )
    voicePrefix[1] = svtId;
  v14 = sub_1D0F15C(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v14 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v14 + 32) = Instance;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 32), (int32_t)Instance, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_17;
  v27 = StringLiteral_1453/*":"*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_1453/*":"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 40), v27, v21, v22, v23, v24, v25, v26);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v14 + 24) <= 2u
    || (*(_QWORD *)(v14 + 48) = Instance,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 48), (int32_t)Instance, v28, v29, v30, v31, v32, v33),
        *(_DWORD *)(v14 + 24) <= 3u)
    || (v40 = StringLiteral_1453/*":"*/,
        *(_QWORD *)(v14 + 56) = StringLiteral_1453/*":"*/,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 56), v40, v34, v35, v36, v37, v38, v39),
        v51 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v51, 0),
        *(_DWORD *)(v14 + 24) <= 4u) )
  {
LABEL_17:
    sub_1D0F314(Instance);
  }
  *(_QWORD *)(v14 + 64) = Instance;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 64), (int32_t)Instance, v41, v42, v43, v44, v45, v46);
  v47 = System_String__Concat_65603304((System_String_array *)v14, 0);
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   v47,
                   (const MethodInfo_353A18C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__);
  v50 = 0;
  if ( EntityFromId )
  {
    Instance = (DataManager_o *)result;
    if ( result )
      return ServantVoiceEntity__getVoiceList_44177296((ServantVoiceEntity_o *)result, voceType, labelName, 0, 1, v48);
LABEL_18:
    sub_1D0F30C(Instance, v12);
  }
  return v50;
}


System_Collections_Generic_List_ServantVoiceEntity__o *ServantVoiceMaster__getEntity_44191544(
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

  if ( (byte_4E781A5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
    byte_4E781A5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1D0F30C(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v10);
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
      v15 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v19 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1D0F30C(0, v21);
    if ( *(_DWORD *)(v20 + 24) == voiceType && *(_DWORD *)(v20 + 16) == svtId )
    {
      if ( !v7 )
        sub_1D0F30C(v20, v21);
      items = v7->fields._items;
      v30 = Method_System_Collections_Generic_List_ServantVoiceEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1D0F30C(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
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
    v36 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v7;
}


ServantVoiceEntity_array *ServantVoiceMaster__getEntity_44193060(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5
  ServantVoiceEntity_array *v10; // x20
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
  System_String_o *v44; // x21
  __int64 v45; // x8
  __int64 v46; // x22
  __int64 v47; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **v48; // x10
  __int64 v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  Il2CppClass *v56; // x21
  __int64 v57; // x22
  Il2CppClass **v58; // x0
  bool v59; // nf
  __int64 v61; // x0
  Il2CppClass *v62; // [xsp+0h] [xbp-60h] BYREF
  int v63; // [xsp+Ch] [xbp-54h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4E781A7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1D0F0B4(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1D0F0B4(&ServantVoiceEntity___TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_1453/*":"*/);
    byte_4E781A7 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v63 = 0;
  v62 = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_28:
    sub_1D0F30C(Instance, v8);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    v9);
  v10 = (ServantVoiceEntity_array *)sub_1D0F15C(ServantVoiceEntity___TypeInfo, 25);
  v63 = 1;
  do
  {
    v11 = sub_1D0F15C(string___TypeInfo, 5);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
    if ( !v11 )
      goto LABEL_28;
    if ( !*(_DWORD *)(v11 + 24) )
      goto LABEL_27;
    *(_QWORD *)(v11 + 32) = Instance;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 32), Instance, v12, v13, v14, v15, v16, v17);
    if ( *(_DWORD *)(v11 + 24) <= 1u )
      goto LABEL_27;
    v24 = StringLiteral_1453/*":"*/;
    *(_QWORD *)(v11 + 40) = StringLiteral_1453/*":"*/;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 40), v24, v18, v19, v20, v21, v22, v23);
    Instance = (__int64)System_Int32__ToString((int32_t)voicePrefix, 0);
    if ( *(_DWORD *)(v11 + 24) <= 2u )
      goto LABEL_27;
    *(_QWORD *)(v11 + 48) = Instance;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 48), Instance, v25, v26, v27, v28, v29, v30);
    if ( *(_DWORD *)(v11 + 24) <= 3u )
      goto LABEL_27;
    v37 = StringLiteral_1453/*":"*/;
    *(_QWORD *)(v11 + 56) = StringLiteral_1453/*":"*/;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 56), v37, v31, v32, v33, v34, v35, v36);
    Instance = (__int64)System_Int32__ToString((int32_t)&v63, 0);
    if ( *(_DWORD *)(v11 + 24) <= 4u )
      goto LABEL_27;
    *(_QWORD *)(v11 + 64) = Instance;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 64), Instance, v38, v39, v40, v41, v42, v43);
    v44 = System_String__Concat_65603304((System_String_array *)v11, 0);
    Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_353867C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_28;
    v45 = *(_QWORD *)Instance;
    v46 = Instance;
    v47 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
    if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
    {
      v48 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)(*(_QWORD *)(v45 + 176)
                                                                                            + 8LL);
      while ( *(v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
      {
        --v47;
        v48 += 2;
        if ( !v47 )
          goto LABEL_17;
      }
      v49 = v45 + 16LL * (*(_DWORD *)v48 + 1) + 312;
    }
    else
    {
LABEL_17:
      v49 = sub_1CE5430(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo,
              1);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppClass **, _QWORD))v49)(
                 v46,
                 v44,
                 &v62,
                 *(_QWORD *)(v49 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_28;
      v56 = v62;
      v57 = v63;
      if ( v62 )
      {
        Instance = sub_1D0F1F0(v62, v10->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v61 = sub_1D0F330(0);
          sub_1D0F1DC(v61, 0);
        }
      }
      if ( (unsigned int)v57 >= LODWORD(v10->max_length) )
LABEL_27:
        sub_1D0F314(Instance);
      v58 = &v10->obj.klass + v57;
      v58[4] = v56;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v56, v50, v51, v52, v53, v54, v55);
    }
    v59 = v63 - 24 < 0;
    ++v63;
  }
  while ( v59 != __OFSUB__(v63, 25) );
  return v10;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getEntity_44193820(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_String_o *v47; // x22
  DataManager_c *klass; // x8
  DataManager_o *v49; // x21
  __int64 v50; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v52; // x0
  const MethodInfo *v53; // x5
  int32_t v55; // [xsp+Ch] [xbp-54h] BYREF
  ServantVoiceEntity_o *v56; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4E781A8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_1D0F0B4(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_1453/*":"*/);
    byte_4E781A8 = 1;
  }
  v56 = 0;
  *(_QWORD *)voicePrefix = 0;
  v55 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_23;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    v13);
  v14 = sub_1D0F15C(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v14 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_22;
  *(_QWORD *)(v14 + 32) = Instance;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 32), (int32_t)Instance, v15, v16, v17, v18, v19, v20);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_22;
  v27 = StringLiteral_1453/*":"*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_1453/*":"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 40), v27, v21, v22, v23, v24, v25, v26);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v14 + 24) <= 2u
    || (*(_QWORD *)(v14 + 48) = Instance,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 48), (int32_t)Instance, v28, v29, v30, v31, v32, v33),
        *(_DWORD *)(v14 + 24) <= 3u)
    || (v40 = StringLiteral_1453/*":"*/,
        *(_QWORD *)(v14 + 56) = StringLiteral_1453/*":"*/,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 56), v40, v34, v35, v36, v37, v38, v39),
        v55 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v55, 0),
        *(_DWORD *)(v14 + 24) <= 4u) )
  {
LABEL_22:
    sub_1D0F314(Instance);
  }
  *(_QWORD *)(v14 + 64) = Instance;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 64), (int32_t)Instance, v41, v42, v43, v44, v45, v46);
  v47 = System_String__Concat_65603304((System_String_array *)v14, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_353867C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
    goto LABEL_23;
  klass = Instance->klass;
  v49 = Instance;
  v50 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo )
    {
      --v50;
      p_offset += 2;
      if ( !v50 )
        goto LABEL_16;
    }
    v52 = (__int64)(&klass->vtable._1_Finalize + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v52 = sub_1CE5430(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v52)(
          v49,
          v47,
          &v56,
          *(_QWORD *)(v52 + 8))
      & 1) != 0 )
  {
    Instance = (DataManager_o *)v56;
    if ( v56 )
      return ServantVoiceEntity__getVoiceList_44177296(v56, voceType, labelName, 0, 1, v53);
LABEL_23:
    sub_1D0F30C(Instance, v12);
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
    return ServantVoiceEntity__getVoiceList_44177296((ServantVoiceEntity_o *)result, 5, labelName, 0, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_44177296((ServantVoiceEntity_o *)result, 9, labelName, 0, 1, v7);
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

  if ( (byte_4E781AB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4E781AB = 1;
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
    return ServantVoiceEntity__getVoiceList_44177296((ServantVoiceEntity_o *)result, 8, labelName, 0, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_44177296((ServantVoiceEntity_o *)result, 7, labelName, 0, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_44176580((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0, -1, v7);
  return result;
}


int32_t ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ServantChangeEntity_o *v5; // x0

  if ( (byte_4E781A3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E781A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_1D0F30C(Instance, v4);
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
  const MethodInfo *v10; // x5
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v12; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v14; // x21
  int32_t FriendShipRank; // w0
  const MethodInfo *v16; // x6
  int32_t v17; // w19
  int32_t v18; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_44176580; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E781AA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E781AA = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_20;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    SvtVoiceId,
    limitCnt,
    v10);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_20;
  Entity = (UserServantCollectionEntity_o *)ServantVoiceMaster__GetEntity(
                                              (ServantVoiceMaster_o *)Instance,
                                              voicePrefix[1],
                                              voicePrefix[0],
                                              1,
                                              v12);
  if ( !Entity )
    return (char)Entity;
  v14 = (ServantVoiceEntity_o *)Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_1D0F30C(Instance, v9);
  }
  Entity = UserServantCollectionMaster__GetEntity(
             (UserServantCollectionMaster_o *)Instance,
             SelfUserGame->fields.userId,
             svtId,
             0);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0);
    v17 = oldFriendShipRank + 1;
    if ( v17 > FriendShipRank )
    {
LABEL_17:
      LOBYTE(Entity) = 0;
    }
    else
    {
      v18 = FriendShipRank;
      while ( 1 )
      {
        VoiceList_44176580 = ServantVoiceEntity__getVoiceList_44176580(v14, 1, 3, v17, 0, -1, v16);
        if ( VoiceList_44176580 )
        {
          if ( VoiceList_44176580->fields._size > 0 )
            break;
        }
        if ( ++v17 > v18 )
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
    sub_1D0F30C(this, 0);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}