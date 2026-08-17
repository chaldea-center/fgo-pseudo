void ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597137E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
    byte_597137E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    112,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
}


ServantVoiceEntity_o *ServantVoiceMaster__GetEntity(
        ServantVoiceMaster_o *this,
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_597137C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
    byte_597137C = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, 0);
  return (ServantVoiceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
}


ServantVoiceEntity_o *ServantVoiceMaster__GetSvtEquipVoiceEntity(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_IEnumerable_o *list; // x0
  const MethodInfo_388851C *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_5971388 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
    sub_2213A60(&System_Func_ServantVoiceEntity__bool__TypeInfo);
    sub_2213A60(&Method_ServantVoiceMaster___c__DisplayClass25_0__GetSvtEquipVoiceEntity_b__0__);
    sub_2213A60(&ServantVoiceMaster___c__DisplayClass25_0_TypeInfo);
    byte_5971388 = 1;
  }
  v5 = sub_2213CCC(ServantVoiceMaster___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v9 = (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___;
  *(_DWORD *)(v5 + 16) = svtId;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(list, v9);
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ServantVoiceMaster___c__DisplayClass25_0__GetSvtEquipVoiceEntity_b__0__,
    0);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                   v10,
                                   (System_Func_TSource__bool__o *)v11,
                                   (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
}


bool ServantVoiceMaster__TryGetEntity(
        ServantVoiceMaster_o *this,
        ServantVoiceEntity_o **entity,
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_597137D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
    byte_597137D = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantVoiceMaster__TryGetSyncServantId(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t *syncSvtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  ServantVoiceEntity_o *Enumerator; // x0
  __int64 v9; // x1
  ServantVoiceEntity_c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  ServantVoiceEntity_c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  bool SyncServantId; // w21
  int v19; // w24
  ServantVoiceEntity_c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  ServantVoiceEntity_o *v25; // [xsp+18h] [xbp-38h]

  if ( (byte_5971389 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5971389 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  Enumerator = (ServantVoiceEntity_o *)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                                         list,
                                         (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
  v25 = Enumerator;
  while ( 1 )
  {
    if ( !v25 )
      sub_2213CDC(Enumerator, v9);
    klass = v25->klass;
    v11 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_10:
      v13 = sub_224BC3C(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(ServantVoiceEntity_o *, _QWORD))v13)(v25, *(_QWORD *)(v13 + 8)) & 1) == 0 )
      break;
    v14 = v25->klass;
    v15 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantVoiceEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable + 16 * *v16;
    }
    else
    {
LABEL_17:
      v17 = sub_224BC3C(v25, System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo, 0);
    }
    Enumerator = (ServantVoiceEntity_o *)(*(__int64 (__fastcall **)(ServantVoiceEntity_o *, _QWORD))v17)(
                                           v25,
                                           *(_QWORD *)(v17 + 8));
    if ( !Enumerator )
      sub_2213CDC(0, v9);
    if ( Enumerator->fields.id == svtId )
    {
      SyncServantId = ServantVoiceEntity__TryGetSyncServantId(Enumerator, syncSvtId, 0, 0);
      v19 = 4;
      goto LABEL_23;
    }
  }
  SyncServantId = 0;
  v19 = 5;
LABEL_23:
  v20 = v25->klass;
  v21 = *(unsigned __int16 *)&v25->klass->_2.rank;
  if ( *(_WORD *)&v25->klass->_2.rank )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_27;
    }
    v23 = (__int64)&v20->vtable + 16 * *v22;
  }
  else
  {
LABEL_27:
    v23 = sub_224BC3C(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(ServantVoiceEntity_o *, _QWORD))v23)(v25, *(_QWORD *)(v23 + 8));
  if ( v19 == 5 )
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      6,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getBattleVoiceList((ServantVoiceEntity_o *)result, labelName, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      (const MethodInfo *)isPlayVoice);
  if ( result )
    return ServantVoiceEntity__getCntStopVoiceList((ServantVoiceEntity_o *)result, displayType, isPlayVoice, -1, 0, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      costumeId,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getCostumeGetVoiceList((ServantVoiceEntity_o *)result, costumeId, playVoiceLabel, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x20
  DataManager_c *klass; // x8
  DataManager_o *v46; // x19
  __int64 v47; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v49; // x0
  int32_t v51; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5971380 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971380 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v52 = 0;
  v51 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_22;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  v11 = sub_2213B20(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v11 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v11 + 32) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)Instance, v12, v13, v14, v15, v16, v17);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_21;
  v24 = StringLiteral_1533/*":"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_1533/*":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v24, v18, v19, v20, v21, v22, v23);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v11 + 24) <= 2u
    || (*(_QWORD *)(v11 + 48) = Instance,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)Instance, v25, v26, v27, v28, v29, v30),
        (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0)
    || (v37 = StringLiteral_1533/*":"*/,
        *(_QWORD *)(v11 + 56) = StringLiteral_1533/*":"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), v37, v31, v32, v33, v34, v35, v36),
        v51 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v51, 0),
        *(_DWORD *)(v11 + 24) <= 4u) )
  {
LABEL_21:
    sub_2213CE4(Instance);
  }
  *(_QWORD *)(v11 + 64) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 64), (int32_t)Instance, v38, v39, v40, v41, v42, v43);
  v44 = System_String__Concat_75697120((System_String_array *)v11, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_22:
    sub_2213CDC(Instance, v10);
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
    v49 = sub_224BC3C(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x20
  DataManager_c *klass; // x8
  DataManager_o *v46; // x19
  __int64 v47; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v49; // x0
  int32_t v51; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5971382 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971382 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v52 = 0;
  v51 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v11 = sub_2213B20(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v11 )
    goto LABEL_24;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_23;
  *(_QWORD *)(v11 + 32) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)Instance, v12, v13, v14, v15, v16, v17);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_23;
  v24 = StringLiteral_1533/*":"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_1533/*":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v24, v18, v19, v20, v21, v22, v23);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v11 + 24) <= 2u
    || (*(_QWORD *)(v11 + 48) = Instance,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)Instance, v25, v26, v27, v28, v29, v30),
        (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0)
    || (v37 = StringLiteral_1533/*":"*/,
        *(_QWORD *)(v11 + 56) = StringLiteral_1533/*":"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), v37, v31, v32, v33, v34, v35, v36),
        v51 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v51, 0),
        *(_DWORD *)(v11 + 24) <= 4u) )
  {
LABEL_23:
    sub_2213CE4(Instance);
  }
  *(_QWORD *)(v11 + 64) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 64), (int32_t)Instance, v38, v39, v40, v41, v42, v43);
  v44 = System_String__Concat_75697120((System_String_array *)v11, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
  if ( !Instance )
LABEL_24:
    sub_2213CDC(Instance, v10);
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
    v49 = sub_224BC3C(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x0
  bool EntityFromId; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v48; // x0
  int32_t v49; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *result; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971385 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971385 = 1;
  }
  result = 0;
  *(_QWORD *)voicePrefix = 0;
  v49 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v13 = sub_2213B20(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v13 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v13 + 32) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)Instance, v14, v15, v16, v17, v18, v19);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_17;
  v26 = StringLiteral_1533/*":"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_1533/*":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), v26, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v13 + 24) <= 2u
    || (*(_QWORD *)(v13 + 48) = Instance,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 48), (int32_t)Instance, v27, v28, v29, v30, v31, v32),
        (*(_DWORD *)(v13 + 24) & 0xFFFFFFFC) == 0)
    || (v39 = StringLiteral_1533/*":"*/,
        *(_QWORD *)(v13 + 56) = StringLiteral_1533/*":"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 56), v39, v33, v34, v35, v36, v37, v38),
        v49 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v49, 0),
        *(_DWORD *)(v13 + 24) <= 4u) )
  {
LABEL_17:
    sub_2213CE4(Instance);
  }
  *(_QWORD *)(v13 + 64) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 64), (int32_t)Instance, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_75697120((System_String_array *)v13, 0);
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   v46,
                   (const MethodInfo_3F14F9C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntityFromId__);
  v48 = 0;
  if ( EntityFromId )
  {
    Instance = (DataManager_o *)result;
    if ( result )
      return ServantVoiceEntity__getVoiceList_49822176((ServantVoiceEntity_o *)result, voceType, labelName, 0, 1, 0);
LABEL_18:
    sub_2213CDC(Instance, v12);
  }
  return v48;
}


System_Collections_Generic_List_ServantVoiceEntity__o *ServantVoiceMaster__getEntity_49836388(
        ServantVoiceMaster_o *this,
        int32_t voiceType,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__o *v40; // [xsp+18h] [xbp-48h]

  if ( (byte_5971381 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
    byte_5971381 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantVoiceEntity__GetEnumerator__);
  v40 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v11);
  for ( i = Enumerator; ; i = v40 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v40 )
      sub_2213CDC(v17, v18);
    v19 = v40->klass;
    v20 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantVoiceEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_224BC3C(v40, System_Collections_Generic_IEnumerator_ServantVoiceEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v40,
            *(_QWORD *)(v22 + 8));
    v30 = v23;
    if ( !v23 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v23 + 24) == voiceType && *(_DWORD *)(v23 + 16) == svtId )
    {
      if ( !v7
        || (items = v7->fields._items,
            v32 = Method_System_Collections_Generic_List_ServantVoiceEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_2213CDC(v23, v23);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v23,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  if ( v40 )
  {
    v35 = v40->klass;
    v36 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_35;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_35:
      v38 = sub_224BC3C(v40, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v40, *(_QWORD *)(v38 + 8));
  }
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v7;
}


ServantVoiceEntity_array *ServantVoiceMaster__getEntity_49837844(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  ServantVoiceEntity_array *v9; // x20
  __int64 v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t v36; // w1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x21
  __int64 v44; // x8
  __int64 v45; // x22
  __int64 v46; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **v47; // x10
  __int64 v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  ServantVoiceEntity_o *v55; // x21
  __int64 v56; // x22
  __int64 v57; // x1
  bool v58; // nf
  __int64 v60; // x0
  ServantVoiceEntity_o *v61; // [xsp+8h] [xbp-68h] BYREF
  int v62; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5971383 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_2213A60(&ServantVoiceEntity___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971383 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  v62 = 0;
  v61 = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_28:
    sub_2213CDC(Instance, v8);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  v9 = (ServantVoiceEntity_array *)sub_2213B20(ServantVoiceEntity___TypeInfo, 25);
  v62 = 1;
  do
  {
    v10 = sub_2213B20(string___TypeInfo, 5);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
    if ( !v10 )
      goto LABEL_28;
    if ( !*(_DWORD *)(v10 + 24) )
      goto LABEL_27;
    *(_QWORD *)(v10 + 32) = Instance;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), Instance, v11, v12, v13, v14, v15, v16);
    if ( (*(_DWORD *)(v10 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_27;
    v23 = StringLiteral_1533/*":"*/;
    *(_QWORD *)(v10 + 40) = StringLiteral_1533/*":"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 40), v23, v17, v18, v19, v20, v21, v22);
    Instance = (__int64)System_Int32__ToString((int32_t)voicePrefix, 0);
    if ( *(_DWORD *)(v10 + 24) <= 2u )
      goto LABEL_27;
    *(_QWORD *)(v10 + 48) = Instance;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 48), Instance, v24, v25, v26, v27, v28, v29);
    if ( (*(_DWORD *)(v10 + 24) & 0xFFFFFFFC) == 0 )
      goto LABEL_27;
    v36 = StringLiteral_1533/*":"*/;
    *(_QWORD *)(v10 + 56) = StringLiteral_1533/*":"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 56), v36, v30, v31, v32, v33, v34, v35);
    Instance = (__int64)System_Int32__ToString((int32_t)&v62, 0);
    if ( *(_DWORD *)(v10 + 24) <= 4u )
      goto LABEL_27;
    *(_QWORD *)(v10 + 64) = Instance;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 64), Instance, v37, v38, v39, v40, v41, v42);
    v43 = System_String__Concat_75697120((System_String_array *)v10, 0);
    Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
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
      v48 = sub_224BC3C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo,
              1);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, ServantVoiceEntity_o **, _QWORD))v48)(
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
        Instance = sub_2213BB4(v61, v9->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v60 = sub_2213D00(0, v57);
          sub_2213BA0(v60, 0);
        }
      }
      if ( (unsigned int)v56 >= LODWORD(v9->max_length) )
LABEL_27:
        sub_2213CE4(Instance);
      v9->m_Items[v56] = v55;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->m_Items[v56], (int32_t)v55, v49, v50, v51, v52, v53, v54);
    }
    v58 = v62 - 24 < 0;
    ++v62;
  }
  while ( v58 != __OFSUB__(v62, 25) );
  return v9;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceMaster__getEntity_49838616(
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x22
  DataManager_c *klass; // x8
  DataManager_o *v48; // x21
  __int64 v49; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__c **p_offset; // x10
  __int64 v51; // x0
  int32_t v53; // [xsp+Ch] [xbp-54h] BYREF
  ServantVoiceEntity_o *v54; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971384 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971384 = 1;
  }
  v54 = 0;
  *(_QWORD *)voicePrefix = 0;
  v53 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_23;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0);
  v13 = sub_2213B20(string___TypeInfo, 5);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0);
  if ( !v13 )
    goto LABEL_23;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_22;
  *(_QWORD *)(v13 + 32) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)Instance, v14, v15, v16, v17, v18, v19);
  if ( (*(_DWORD *)(v13 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_22;
  v26 = StringLiteral_1533/*":"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_1533/*":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), v26, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0);
  if ( *(_DWORD *)(v13 + 24) <= 2u
    || (*(_QWORD *)(v13 + 48) = Instance,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 48), (int32_t)Instance, v27, v28, v29, v30, v31, v32),
        (*(_DWORD *)(v13 + 24) & 0xFFFFFFFC) == 0)
    || (v39 = StringLiteral_1533/*":"*/,
        *(_QWORD *)(v13 + 56) = StringLiteral_1533/*":"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 56), v39, v33, v34, v35, v36, v37, v38),
        v53 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v53, 0),
        *(_DWORD *)(v13 + 24) <= 4u) )
  {
LABEL_22:
    sub_2213CE4(Instance);
  }
  *(_QWORD *)(v13 + 64) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 64), (int32_t)Instance, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_75697120((System_String_array *)v13, 0);
  Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                (const MethodInfo_3F134B8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__get_lookup__);
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
    v51 = sub_224BC3C(Instance, System_Collections_Generic_IReadOnlyDictionary_string__ServantVoiceEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v51)(
          v48,
          v46,
          &v54,
          *(_QWORD *)(v51 + 8))
      & 1) != 0 )
  {
    Instance = (DataManager_o *)v54;
    if ( v54 )
      return ServantVoiceEntity__getVoiceList_49822176(v54, voceType, labelName, 0, 1, 0);
LABEL_23:
    sub_2213CDC(Instance, v12);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      4,
                                                                      svtId,
                                                                      limitCount,
                                                                      v4);
  if ( result )
    return ServantVoiceEntity__getEventJoinVoiceList((ServantVoiceEntity_o *)result, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      5,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getEventRewardVoiceList_49832292((ServantVoiceEntity_o *)result, labelName, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      9,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getEventShopVoiceList_49834632((ServantVoiceEntity_o *)result, labelName, 0);
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
  ServantVoiceEntity_o *v10; // x21

  if ( (byte_5971387 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_5971387 = 1;
  }
  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      3,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
  {
    v10 = (ServantVoiceEntity_o *)result;
    result = ServantVoiceEntity__GetFirstGetVoiceList((ServantVoiceEntity_o *)result, labelName, 0);
    if ( !result || result->fields._size <= 0 )
      return ServantVoiceEntity__getFirstGetVoiceList(v10, svtId, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      1,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getHomeVoiceList((ServantVoiceEntity_o *)result, labelName, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getLevelUpVoiceList((ServantVoiceEntity_o *)result, labelName, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      v4);
  if ( result )
    return ServantVoiceEntity__getLimitCntUpVoiceList((ServantVoiceEntity_o *)result, -1, 0, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getLimitCntVoiceListByLabel((ServantVoiceEntity_o *)result, labelName, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      8,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getMasterMissionVoiceList_49832360((ServantVoiceEntity_o *)result, labelName, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      7,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getNpVoiceList((ServantVoiceEntity_o *)result, labelName, 0);
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

  result = (System_Collections_Generic_List_ServantVoiceData____o *)ServantVoiceMaster__getEntity(
                                                                      this,
                                                                      2,
                                                                      svtId,
                                                                      limitCount,
                                                                      method);
  if ( result )
    return ServantVoiceEntity__getSpecificLimitCntUpVoiceList((ServantVoiceEntity_o *)result, limitCount2, 0, -1, 0);
  return result;
}


int32_t ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ServantChangeEntity_o *v5; // x0

  if ( (byte_597137F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597137F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
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
  int32_t v15; // w19
  int32_t v16; // w20
  System_Collections_Generic_List_ServantVoiceData____o *RankUpFriendShip; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971386 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971386 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_2213CDC(Instance, v9);
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
        RankUpFriendShip = ServantVoiceEntity__getRankUpFriendShip(v13, v15, 0);
        if ( RankUpFriendShip )
        {
          if ( RankUpFriendShip->fields._size > 0 )
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
    sub_2213CDC(this, 0);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}