void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB66C1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__, method);
    byte_4AB66C1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    107,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
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

  if ( (byte_4AB66BF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4AB66BF = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31640E8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
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

  if ( (byte_4AB66CB & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___, *(_QWORD *)&svtId);
    sub_1BAB41C(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___, v5);
    sub_1BAB41C(&System_Func_ServantVoiceEntity__bool__TypeInfo, v6);
    sub_1BAB41C(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__, v7);
    sub_1BAB41C(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo, v8);
    byte_4AB66CB = 1;
  }
  v9 = sub_1BAB668(ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BAB678(v10, v11);
  *(_DWORD *)(v9 + 16) = svtId;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2EED82C *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v13 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    0LL);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49186032(
                                   v12,
                                   (System_Func_TSource__bool__o *)v13,
                                   (const MethodInfo_2EE84F0 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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

  if ( (byte_4AB66C0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__, entity);
    byte_4AB66C0 = 1;
  }
  PK = (Il2CppObject *)ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_40248720((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_40247992((ServantVoiceEntity_o *)result, 2, 23, costumeId, 0LL, -1, v7);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x20
  DataManager_c *klass; // x8
  DataManager_o *v31; // x19
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v34; // x0
  __int64 methodPtr_low; // x11
  int32_t v37; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v38; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4AB66C3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_1BAB41C(&ServantVoiceEntity_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&string___TypeInfo, v12);
    sub_1BAB41C(&StringLiteral_1541/*":"*/, v13);
    byte_4AB66C3 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v38 = 0LL;
  v37 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_26;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  v16 = sub_1BAB4C4(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v16 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_25;
  *(_QWORD *)(v16 + 32) = Instance;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)Instance, v17, v18);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_25;
  v21 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_1541/*":"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 40), v21, v19, v20);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v16 + 24) <= 2u
    || (*(_QWORD *)(v16 + 48) = Instance,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 48), (int32_t)Instance, v22, v23),
        *(_DWORD *)(v16 + 24) <= 3u)
    || (v26 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v16 + 56) = StringLiteral_1541/*":"*/,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 56), v26, v24, v25),
        v37 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v37, 0LL),
        *(_DWORD *)(v16 + 24) <= 4u) )
  {
LABEL_25:
    sub_1BAB680(Instance, v15);
  }
  *(_QWORD *)(v16 + 64) = Instance;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 64), (int32_t)Instance, v27, v28);
  v29 = System_String__Concat_62061656((System_String_array *)v16, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
LABEL_26:
    sub_1BAB678(Instance, v15);
  klass = Instance->klass;
  v31 = Instance;
  v32 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v32;
      p_offset += 2;
      if ( !v32 )
        goto LABEL_16;
    }
    v34 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v34 = sub_1BFD3FC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v34)(
          v31,
          v29,
          &v38,
          *(_QWORD *)(v34 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v38 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v38->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v38->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
    return v38;
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x20
  DataManager_c *klass; // x8
  DataManager_o *v31; // x19
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v34; // x0
  __int64 methodPtr_low; // x11
  int32_t v37; // [xsp+4h] [xbp-4Ch] BYREF
  ServantVoiceEntity_o *v38; // [xsp+8h] [xbp-48h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4AB66C5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_1BAB41C(&ServantVoiceEntity_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&string___TypeInfo, v12);
    sub_1BAB41C(&StringLiteral_1541/*":"*/, v13);
    byte_4AB66C5 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v38 = 0LL;
  v37 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v16 = sub_1BAB4C4(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
  if ( !v16 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v16 + 32) = Instance;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)Instance, v17, v18);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_27;
  v21 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_1541/*":"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 40), v21, v19, v20);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)voicePrefix, 0LL);
  if ( *(_DWORD *)(v16 + 24) <= 2u
    || (*(_QWORD *)(v16 + 48) = Instance,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 48), (int32_t)Instance, v22, v23),
        *(_DWORD *)(v16 + 24) <= 3u)
    || (v26 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v16 + 56) = StringLiteral_1541/*":"*/,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 56), v26, v24, v25),
        v37 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v37, 0LL),
        *(_DWORD *)(v16 + 24) <= 4u) )
  {
LABEL_27:
    sub_1BAB680(Instance, v15);
  }
  *(_QWORD *)(v16 + 64) = Instance;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 64), (int32_t)Instance, v27, v28);
  v29 = System_String__Concat_62061656((System_String_array *)v16, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
LABEL_28:
    sub_1BAB678(Instance, v15);
  klass = Instance->klass;
  v31 = Instance;
  v32 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v32;
      p_offset += 2;
      if ( !v32 )
        goto LABEL_18;
    }
    v34 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v34 = sub_1BFD3FC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v34)(
          v31,
          v29,
          &v38,
          *(_QWORD *)(v34 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v38 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v38->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v38->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
    return v38;
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x0
  const MethodInfo *v31; // x5
  bool EntityFromId_object; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *result; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4AB66C8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BAB41C(&Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BAB41C(&string___TypeInfo, v13);
    sub_1BAB41C(&StringLiteral_1541/*":"*/, v14);
    byte_4AB66C8 = 1;
  }
  result = 0LL;
  voicePrefix = 0LL;
  v34 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v17 = sub_1BAB4C4(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v17 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v17 + 32) = Instance;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)Instance, v18, v19);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_17;
  v22 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_1541/*":"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 40), v22, v20, v21);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v17 + 24) <= 2u
    || (*(_QWORD *)(v17 + 48) = Instance,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)Instance, v23, v24),
        *(_DWORD *)(v17 + 24) <= 3u)
    || (v27 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v17 + 56) = StringLiteral_1541/*":"*/,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 56), v27, v25, v26),
        v34 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v34, 0LL),
        *(_DWORD *)(v17 + 24) <= 4u) )
  {
LABEL_17:
    sub_1BAB680(Instance, v16);
  }
  *(_QWORD *)(v17 + 64) = Instance;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 64), (int32_t)Instance, v28, v29);
  v30 = System_String__Concat_62061656((System_String_array *)v17, 0LL);
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          v30,
                          (const MethodInfo_2EC5A68 *)Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
  v33 = 0LL;
  if ( EntityFromId_object )
  {
    Instance = (DataManager_o *)result;
    if ( result )
      return ServantVoiceEntity__getVoiceList_40248720((ServantVoiceEntity_o *)result, voceType, labelName, 0LL, 1, v31);
LABEL_18:
    sub_1BAB678(Instance, v16);
  }
  return v33;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_40263904(
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
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  ServantVoiceEntity_c *v32; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4AB66C4 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&voiceType);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v7);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo, v12);
    sub_1BAB41C(&ServantVoiceEntity_TypeInfo, v13);
    byte_4AB66C4 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v17);
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
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v26 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v31 = v27;
    if ( !v27 )
      goto LABEL_36;
    v32 = ServantVoiceEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != ServantVoiceEntity_TypeInfo )
    {
      sub_1BAB938(v27);
LABEL_36:
      sub_1BAB678(v27, v28);
    }
    if ( *(_DWORD *)(v27 + 24) == voiceType && *(_DWORD *)(v27 + 16) == svtId )
    {
      if ( !v14 )
        sub_1BAB678(v27, ServantVoiceEntity_TypeInfo);
      items = v14->fields._items;
      v35 = Method_System_Collections_Generic_List_ServantVoiceEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BAB678(v27, v32);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v27,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v31;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v37 + 4), v31, v29, v30);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_32;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_32:
    v41 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_40265556(
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x21
  __int64 v30; // x8
  __int64 v31; // x22
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x10
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x21
  __int64 v38; // x22
  ServantVoiceEntity_c *v39; // x8
  __int64 methodPtr_low; // x10
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  bool v43; // nf
  __int64 v45; // x0
  int v46; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v47; // [xsp+8h] [xbp-58h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4AB66C6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_1BAB41C(&ServantVoiceEntity___TypeInfo, v8);
    sub_1BAB41C(&ServantVoiceEntity_TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BAB41C(&string___TypeInfo, v11);
    sub_1BAB41C(&StringLiteral_1541/*":"*/, v12);
    byte_4AB66C6 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  v47 = 0LL;
  v46 = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_36:
    sub_1BAB678(Instance, v14);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voicePrefix[1],
    voicePrefix,
    svtId,
    limitCount,
    0LL);
  v15 = (ServantVoiceEntity_array *)sub_1BAB4C4(ServantVoiceEntity___TypeInfo, 25LL);
  v46 = 1;
  do
  {
    v16 = sub_1BAB4C4(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix[1], 0LL);
    if ( !v16 )
      goto LABEL_36;
    if ( !*(_DWORD *)(v16 + 24) )
      goto LABEL_35;
    *(_QWORD *)(v16 + 32) = Instance;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 32), Instance, v17, v18);
    if ( *(_DWORD *)(v16 + 24) <= 1u )
      goto LABEL_35;
    v21 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v16 + 40) = StringLiteral_1541/*":"*/;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 40), v21, v19, v20);
    Instance = (__int64)System_Int32__ToString((int32_t)voicePrefix, 0LL);
    if ( *(_DWORD *)(v16 + 24) <= 2u )
      goto LABEL_35;
    *(_QWORD *)(v16 + 48) = Instance;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 48), Instance, v22, v23);
    if ( *(_DWORD *)(v16 + 24) <= 3u )
      goto LABEL_35;
    v26 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v16 + 56) = StringLiteral_1541/*":"*/;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 56), v26, v24, v25);
    Instance = (__int64)System_Int32__ToString((int32_t)&v46, 0LL);
    if ( *(_DWORD *)(v16 + 24) <= 4u )
      goto LABEL_35;
    *(_QWORD *)(v16 + 64) = Instance;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v16 + 64), Instance, v27, v28);
    v29 = System_String__Concat_62061656((System_String_array *)v16, 0LL);
    Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_36;
    v30 = *(_QWORD *)Instance;
    v31 = Instance;
    v32 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
    if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
    {
      v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 2;
        if ( !v32 )
          goto LABEL_17;
      }
      v34 = v30 + 16LL * (*(_DWORD *)v33 + 1) + 312;
    }
    else
    {
LABEL_17:
      v34 = sub_1BFD3FC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, __int64 *, _QWORD))v34)(
                 v31,
                 v29,
                 &v47,
                 *(_QWORD *)(v34 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_36;
      v37 = v47;
      v38 = v46;
      if ( !v47 )
        goto LABEL_27;
      v39 = ServantVoiceEntity_TypeInfo;
      methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v47 + 304LL) >= (unsigned int)methodPtr_low
        && *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * methodPtr_low - 8) == ServantVoiceEntity_TypeInfo )
      {
        Instance = sub_1BAB558(v47, v15->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v45 = sub_1BAB69C(0LL);
          sub_1BAB544(v45, 0LL);
        }
        v39 = ServantVoiceEntity_TypeInfo;
      }
      v41 = LOBYTE(v39->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) >= (unsigned int)v41 )
      {
        if ( *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v41 - 8) == v39 )
          v14 = v37;
        else
          v14 = 0LL;
      }
      else
      {
LABEL_27:
        v14 = 0LL;
      }
      if ( (unsigned int)v38 >= v15->max_length )
LABEL_35:
        sub_1BAB680(Instance, v14);
      v42 = &v15->obj.klass + v38;
      v42[4] = (Il2CppClass *)v14;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v42 + 4), v14, v35, v36);
    }
    v43 = v46 - 24 < 0;
    ++v46;
  }
  while ( v43 != __OFSUB__(v46, 25) );
  return v15;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_40266412(
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x22
  DataManager_c *klass; // x8
  DataManager_o *v33; // x21
  __int64 v34; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 v36; // x0
  const MethodInfo *v37; // x5
  __int64 methodPtr_low; // x10
  int32_t v40; // [xsp+Ch] [xbp-54h] BYREF
  ServantVoiceEntity_o *v41; // [xsp+10h] [xbp-50h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4AB66C7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11);
    sub_1BAB41C(&ServantVoiceEntity_TypeInfo, v12);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BAB41C(&string___TypeInfo, v14);
    sub_1BAB41C(&StringLiteral_1541/*":"*/, v15);
    byte_4AB66C7 = 1;
  }
  v41 = 0LL;
  voicePrefix = 0LL;
  v40 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    svtId,
    limitCount,
    0LL);
  v18 = sub_1BAB4C4(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix + 4, 0LL);
  if ( !v18 )
    goto LABEL_25;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_24;
  *(_QWORD *)(v18 + 32) = Instance;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)Instance, v19, v20);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_24;
  v23 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_1541/*":"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v18 + 40), v23, v21, v22);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  if ( *(_DWORD *)(v18 + 24) <= 2u
    || (*(_QWORD *)(v18 + 48) = Instance,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v18 + 48), (int32_t)Instance, v24, v25),
        *(_DWORD *)(v18 + 24) <= 3u)
    || (v28 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v18 + 56) = StringLiteral_1541/*":"*/,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v18 + 56), v28, v26, v27),
        v40 = voceType,
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v40, 0LL),
        *(_DWORD *)(v18 + 24) <= 4u) )
  {
LABEL_24:
    sub_1BAB680(Instance, v17);
  }
  *(_QWORD *)(v18 + 64) = Instance;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v18 + 64), (int32_t)Instance, v29, v30);
  v31 = System_String__Concat_62061656((System_String_array *)v18, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_25;
  klass = Instance->klass;
  v33 = Instance;
  v34 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v34;
      p_offset += 2;
      if ( !v34 )
        goto LABEL_16;
    }
    v36 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v36 = sub_1BFD3FC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v36)(
          v33,
          v31,
          &v41,
          *(_QWORD *)(v36 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)v41;
    if ( v41 )
    {
      methodPtr_low = LOBYTE(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v41->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantVoiceEntity_c *)v41->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantVoiceEntity_TypeInfo )
      {
        return ServantVoiceEntity__getVoiceList_40248720(v41, voceType, labelName, 0LL, 1, v37);
      }
    }
LABEL_25:
    sub_1BAB678(Instance, v17);
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
    return ServantVoiceEntity__getVoiceList_40248720((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_40248720((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
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

  if ( (byte_4AB66CA & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    byte_4AB66CA = 1;
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
    return ServantVoiceEntity__getVoiceList_40248720((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_40248720((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_40247992((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
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
    return ServantVoiceEntity__getVoiceList_40247992((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_40268452(
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
    return ServantVoiceEntity__getVoiceList_40247992((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantChangeEntity_o *v6; // x0

  if ( (byte_4AB66C2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4AB66C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_1BAB678(Instance, v5);
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
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_40247992; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB66C9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&limitCnt);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v7);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4AB66C9 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_1BAB678(Instance, v13);
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
        VoiceList_40247992 = ServantVoiceEntity__getVoiceList_40247992(v17, 1, 3, v20, 0LL, -1, v19);
        if ( VoiceList_40247992 )
        {
          if ( VoiceList_40247992->fields._size > 0 )
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
    sub_1BAB678(this, 0LL);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}