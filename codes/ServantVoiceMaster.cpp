void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B9E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
    byte_4A5B9E3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    107,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
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

  if ( (byte_4A5B9E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
    byte_4A5B9E1 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
}


ServantVoiceEntity_o *__fastcall ServantVoiceMaster__GetSvtEquipVoiceEntity(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4A5B9ED & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
    sub_1B885B0(&System_Func_ServantVoiceEntity__bool__TypeInfo);
    sub_1B885B0(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__);
    sub_1B885B0(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
    byte_4A5B9ED = 1;
  }
  v5 = sub_1B887FC(ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    0LL);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                   v8,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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

  if ( (byte_4A5B9E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
    byte_4A5B9E2 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_39770596((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_39769868((ServantVoiceEntity_o *)result, 2, 23, costumeId, 0LL, -1, v7);
  return result;
}


ServantVoiceEntity_o *__fastcall ServantVoiceMaster__getEntity(
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x20
  DataManager_c *klass; // x8
  DataManager_o *v26; // x19
  __int64 v27; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v29; // x0
  __int64 methodPtr_low; // x11
  int32_t v32; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5B9E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&ServantVoiceEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B9E5 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v33 = 0LL;
  v32 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_26;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  v11 = sub_1B88658(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v11 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v11 + 32) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)Instance, v12, v13);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_25;
  v16 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 40), v16, v14, v15);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v11 + 24) <= 2u
    || (*(_QWORD *)(v11 + 48) = Instance,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 48), (int32_t)Instance, v17, v18),
        *(_DWORD *)(v11 + 24) <= 3u)
    || (v21 = StringLiteral_1544/*":"*/,
        *(_QWORD *)(v11 + 56) = StringLiteral_1544/*":"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 56), v21, v19, v20),
        v32 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v32, 0LL),
        *(_DWORD *)(v11 + 24) <= 4u) )
  {
LABEL_25:
    sub_1B88814(Instance, v10);
  }
  *(_QWORD *)(v11 + 64) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 64), (int32_t)Instance, v22, v23);
  v24 = System_String__Concat_61720560((System_String_array *)v11, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
LABEL_26:
    sub_1B8880C(Instance, v10);
  klass = Instance->klass;
  v26 = Instance;
  v27 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v27;
      p_offset += 2;
      if ( !v27 )
        goto LABEL_16;
    }
    v29 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v29 = sub_1BDA590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v29)(
          v26,
          v24,
          &v33,
          *(_QWORD *)(v29 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v33 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v33->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
    return v33;
  return 0LL;
}


ServantVoiceEntity_o *__fastcall ServantVoiceMaster__getEntityEventReward(
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x20
  DataManager_c *klass; // x8
  DataManager_o *v26; // x19
  __int64 v27; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v29; // x0
  __int64 methodPtr_low; // x11
  int32_t v32; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5B9E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&ServantVoiceEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B9E7 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v33 = 0LL;
  v32 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v11 = sub_1B88658(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v11 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v11 + 32) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)Instance, v12, v13);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_27;
  v16 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 40), v16, v14, v15);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v11 + 24) <= 2u
    || (*(_QWORD *)(v11 + 48) = Instance,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 48), (int32_t)Instance, v17, v18),
        *(_DWORD *)(v11 + 24) <= 3u)
    || (v21 = StringLiteral_1544/*":"*/,
        *(_QWORD *)(v11 + 56) = StringLiteral_1544/*":"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 56), v21, v19, v20),
        v32 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v32, 0LL),
        *(_DWORD *)(v11 + 24) <= 4u) )
  {
LABEL_27:
    sub_1B88814(Instance, v10);
  }
  *(_QWORD *)(v11 + 64) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 64), (int32_t)Instance, v22, v23);
  v24 = System_String__Concat_61720560((System_String_array *)v11, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
LABEL_28:
    sub_1B8880C(Instance, v10);
  klass = Instance->klass;
  v26 = Instance;
  v27 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v27;
      p_offset += 2;
      if ( !v27 )
        goto LABEL_18;
    }
    v29 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v29 = sub_1BDA590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v29)(
          v26,
          v24,
          &v33,
          *(_QWORD *)(v29 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v33 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v33->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
    return v33;
  return 0LL;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntityShopCombine(
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x0
  const MethodInfo *v27; // x5
  bool EntityFromId_object; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *result; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5B9EA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B9EA = 1;
  }
  result = 0LL;
  voicePrefix = 0LL;
  v30 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v13 = sub_1B88658(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v13 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v13 + 32) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)Instance, v14, v15);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_17;
  v18 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 40), v18, v16, v17);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v13 + 24) <= 2u
    || (*(_QWORD *)(v13 + 48) = Instance,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 48), (int32_t)Instance, v19, v20),
        *(_DWORD *)(v13 + 24) <= 3u)
    || (v23 = StringLiteral_1544/*":"*/,
        *(_QWORD *)(v13 + 56) = StringLiteral_1544/*":"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 56), v23, v21, v22),
        v30 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v30, 0LL),
        *(_DWORD *)(v13 + 24) <= 4u) )
  {
LABEL_17:
    sub_1B88814(Instance, v12);
  }
  *(_QWORD *)(v13 + 64) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 64), (int32_t)Instance, v24, v25);
  v26 = System_String__Concat_61720560((System_String_array *)v13, 0LL);
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          v26,
                          (const MethodInfo_2E7FDA8 *)Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
  v29 = 0LL;
  if ( EntityFromId_object )
  {
    Instance = (DataManager_o *)result;
    if ( result )
      return ServantVoiceEntity__getVoiceList_39770596((ServantVoiceEntity_o *)result, voceType, labelName, 0LL, 1, v27);
LABEL_18:
    sub_1B8880C(Instance, v12);
  }
  return v29;
}


System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_39785780(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  ServantVoiceEntity_c *v25; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5B9E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
    sub_1B885B0(&ServantVoiceEntity_TypeInfo);
    byte_4A5B9E6 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      goto LABEL_36;
    v25 = ServantVoiceEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != ServantVoiceEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_36:
      sub_1B8880C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 24) == voiceType && *(_DWORD *)(v20 + 16) == svtId )
    {
      if ( !v7 )
        sub_1B8880C(v20, ServantVoiceEntity_TypeInfo);
      items = v7->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantVoiceEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v25);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), v24, v22, v23);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v7;
}


ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_39787432(
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x21
  __int64 v24; // x8
  __int64 v25; // x22
  __int64 v26; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v27; // x10
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x21
  __int64 v32; // x22
  ServantVoiceEntity_c *v33; // x8
  __int64 methodPtr_low; // x10
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  bool v37; // nf
  __int64 v39; // x0
  int v40; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v41; // [xsp+8h] [xbp-58h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5B9E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&ServantVoiceEntity___TypeInfo);
    sub_1B885B0(&ServantVoiceEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B9E8 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v41 = 0LL;
  v40 = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_36:
    sub_1B8880C(Instance, v8);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  v9 = (ServantVoiceEntity_array *)sub_1B88658(ServantVoiceEntity___TypeInfo, 25LL);
  v40 = 1;
  do
  {
    v10 = sub_1B88658(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
    if ( !v10 )
      goto LABEL_36;
    if ( !*(_DWORD *)(v10 + 24) )
      goto LABEL_35;
    *(_QWORD *)(v10 + 32) = Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), Instance, v11, v12);
    if ( *(_DWORD *)(v10 + 24) <= 1u )
      goto LABEL_35;
    v15 = StringLiteral_1544/*":"*/;
    *(_QWORD *)(v10 + 40) = StringLiteral_1544/*":"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), v15, v13, v14);
    Instance = (__int64)System_Int32__ToString((int32_t)voicePrefix, 0LL);
    if ( *(_DWORD *)(v10 + 24) <= 2u )
      goto LABEL_35;
    *(_QWORD *)(v10 + 48) = Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 48), Instance, v16, v17);
    if ( *(_DWORD *)(v10 + 24) <= 3u )
      goto LABEL_35;
    v20 = StringLiteral_1544/*":"*/;
    *(_QWORD *)(v10 + 56) = StringLiteral_1544/*":"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 56), v20, v18, v19);
    Instance = (__int64)System_Int32__ToString((int32_t)&v40, 0LL);
    if ( *(_DWORD *)(v10 + 24) <= 4u )
      goto LABEL_35;
    *(_QWORD *)(v10 + 64) = Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 64), Instance, v21, v22);
    v23 = System_String__Concat_61720560((System_String_array *)v10, 0LL);
    Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_36;
    v24 = *(_QWORD *)Instance;
    v25 = Instance;
    v26 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
    if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
    {
      v27 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *(v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v26;
        v27 += 2;
        if ( !v26 )
          goto LABEL_17;
      }
      v28 = v24 + 16LL * (*(_DWORD *)v27 + 1) + 312;
    }
    else
    {
LABEL_17:
      v28 = sub_1BDA590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, __int64 *, _QWORD))v28)(
                 v25,
                 v23,
                 &v41,
                 *(_QWORD *)(v28 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_36;
      v31 = v41;
      v32 = v40;
      if ( !v41 )
        goto LABEL_27;
      v33 = ServantVoiceEntity_TypeInfo;
      methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) >= (unsigned int)methodPtr_low
        && *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) == ServantVoiceEntity_TypeInfo )
      {
        Instance = sub_1B886EC(v41, v9->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v39 = sub_1B88830(0LL);
          sub_1B886D8(v39, 0LL);
        }
        v33 = ServantVoiceEntity_TypeInfo;
      }
      v35 = LOBYTE(v33->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) >= (unsigned int)v35 )
      {
        if ( *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v35 - 8) == v33 )
          v8 = v31;
        else
          v8 = 0LL;
      }
      else
      {
LABEL_27:
        v8 = 0LL;
      }
      if ( (unsigned int)v32 >= v9->max_length )
LABEL_35:
        sub_1B88814(Instance, v8);
      v36 = &v9->obj.klass + v32;
      v36[4] = (Il2CppClass *)v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), v8, v29, v30);
    }
    v37 = v40 - 24 < 0;
    ++v40;
  }
  while ( v37 != __OFSUB__(v40, 25) );
  return v9;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_39788288(
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x22
  DataManager_c *klass; // x8
  DataManager_o *v28; // x21
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v31; // x0
  const MethodInfo *v32; // x5
  __int64 methodPtr_low; // x10
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF
  ServantVoiceEntity_o *v36; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5B9E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&ServantVoiceEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B9E9 = 1;
  }
  v36 = 0LL;
  voicePrefix = 0LL;
  v35 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    svtId,
    limitCount,
    0LL);
  v13 = sub_1B88658(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v13 )
    goto LABEL_25;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_24;
  *(_QWORD *)(v13 + 32) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)Instance, v14, v15);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_24;
  v18 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v13 + 40) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 40), v18, v16, v17);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v13 + 24) <= 2u
    || (*(_QWORD *)(v13 + 48) = Instance,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 48), (int32_t)Instance, v19, v20),
        *(_DWORD *)(v13 + 24) <= 3u)
    || (v23 = StringLiteral_1544/*":"*/,
        *(_QWORD *)(v13 + 56) = StringLiteral_1544/*":"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 56), v23, v21, v22),
        v35 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v35, 0LL),
        *(_DWORD *)(v13 + 24) <= 4u) )
  {
LABEL_24:
    sub_1B88814(Instance, v12);
  }
  *(_QWORD *)(v13 + 64) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 64), (int32_t)Instance, v24, v25);
  v26 = System_String__Concat_61720560((System_String_array *)v13, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_25;
  klass = Instance->klass;
  v28 = Instance;
  v29 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v29;
      p_offset += 2;
      if ( !v29 )
        goto LABEL_16;
    }
    v31 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v31 = sub_1BDA590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v31)(
          v28,
          v26,
          &v36,
          *(_QWORD *)(v31 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)v36;
    if ( v36 )
    {
      methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v36->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantVoiceEntity_c *)v36->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
      {
        return ServantVoiceEntity__getVoiceList_39770596(v36, voceType, labelName, 0LL, 1, v32);
      }
    }
LABEL_25:
    sub_1B8880C(Instance, v12);
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
    return ServantVoiceEntity__getVoiceList_39770596((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_39770596((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
  return result;
}


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

  if ( (byte_4A5B9EC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4A5B9EC = 1;
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
    return ServantVoiceEntity__getVoiceList_39770596((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_39770596((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_39769868((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
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
    return ServantVoiceEntity__getVoiceList_39769868((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_39790328(
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
    return ServantVoiceEntity__getVoiceList_39769868((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ServantChangeEntity_o *v5; // x0

  if ( (byte_4A5B9E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  v5 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, svtId, 0LL);
  if ( v5 )
    return v5->fields.svtVoiceId;
  return svtId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceMaster__isOpenByServantFriendShip(
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
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_39769868; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B9EB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9EB = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_1B8880C(Instance, v9);
  }
  Entity = UserServantCollectionMaster__GetEntity(
             (UserServantCollectionMaster_o *)Instance,
             SelfUserGame->fields.userId,
             svtId,
             0LL);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0LL);
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
        VoiceList_39769868 = ServantVoiceEntity__getVoiceList_39769868(v13, 1, 3, v16, 0LL, -1, v15);
        if ( VoiceList_39769868 )
        {
          if ( VoiceList_39769868->fields._size > 0 )
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
    sub_1B8880C(this, 0LL);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}