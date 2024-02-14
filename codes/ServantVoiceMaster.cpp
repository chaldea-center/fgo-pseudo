void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42177A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__, method);
    byte_42177A9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    105,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall ServantVoiceMaster__GetEntity(
        ServantVoiceMaster_o *this,
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42177A7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_42177A7 = 1;
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266A024 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
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
  __int64 v9; // x1
  ServantVoiceMaster___c__DisplayClass27_0_o *v10; // x21
  __int64 v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_42177B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___, v5);
    sub_B0D8A4(&Method_System_Func_ServantVoiceEntity__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_ServantVoiceEntity__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__, v8);
    sub_B0D8A4(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo, v9);
    byte_42177B3 = 1;
  }
  v10 = (ServantVoiceMaster___c__DisplayClass27_0_o *)sub_B0D974(
                                                        ServantVoiceMaster___c__DisplayClass27_0_TypeInfo,
                                                        *(_QWORD *)&svtId,
                                                        method);
  ServantVoiceMaster___c__DisplayClass27_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.svtId = svtId;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_ServantVoiceEntity__bool__TypeInfo,
                                                                             v13,
                                                                             v14);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_ServantVoiceEntity__bool___ctor__);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   v12,
                                   (System_Func_TSource__bool__o *)v15,
                                   (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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
  System_String_o *PK; // x2

  if ( (byte_42177A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__, entity);
    byte_42177A8 = 1;
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_29945472((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_29944888((ServantVoiceEntity_o *)result, 2, 23, costumeId, 0LL, -1, v7);
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
  System_String_array *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x20
  System_String_o *v51; // x20
  DataManager_c *klass; // x8
  DataManager_o *v53; // x19
  unsigned __int64 v54; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v56; // x0
  __int64 v57; // x11
  __int64 v59; // x0
  __int64 v60; // x0
  int32_t v61; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v62; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42177AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&ServantVoiceEntity_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&string___TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v13);
    byte_42177AB = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v62 = 0LL;
  v61 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL
    || (ServantLimitAddMaster__getVoiceIndex(
          (ServantLimitAddMaster_o *)Instance,
          &voiceId,
          &voicePrefix,
          svtId,
          limitCount,
          0LL),
        v15 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL),
        !v15) )
  {
LABEL_41:
    sub_B0D97C(Instance);
  }
  v22 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
  }
  if ( !v15->max_length )
    goto LABEL_40;
  v15->m_Items[0] = (System_String_o *)v22;
  sub_B0D840((BattleServantConfConponent_o *)v15->m_Items, v22, v16, v17, v18, v19, v20, v21);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
    v29 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_40;
  v15->m_Items[1] = (System_String_o *)v29;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v36 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_40;
  v15->m_Items[2] = (System_String_o *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
    v43 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_40;
  v15->m_Items[3] = (System_String_o *)v43;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
  v61 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v61, 0LL);
  v50 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v15->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_42:
      v60 = sub_B0D99C(Instance);
      sub_B0D948(v60, 0LL);
    }
  }
  if ( v15->max_length <= 4 )
  {
LABEL_40:
    v59 = sub_B0D9A8(Instance);
    sub_B0D948(v59, 0LL);
  }
  v15->m_Items[4] = (System_String_o *)v50;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[4], v50, v44, v45, v46, v47, v48, v49);
  v51 = System_String__Concat_43930028(v15, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_41;
  klass = Instance->klass;
  v53 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v54;
      p_offset += 2;
      if ( v54 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v56 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_30:
    v56 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v56)(
          v53,
          v51,
          &v62,
          *(_QWORD *)(v56 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v62 )
    return 0LL;
  v57 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v62->klass->_2.bitflags2 + 1) < (unsigned int)v57 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v62->klass->_2.typeHierarchy[v57 - 1] == ServantVoiceEntity_TypeInfo )
    return v62;
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
  System_String_array *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x20
  System_String_o *v51; // x20
  DataManager_c *klass; // x8
  DataManager_o *v53; // x19
  unsigned __int64 v54; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v56; // x0
  __int64 v57; // x11
  __int64 v59; // x0
  __int64 v60; // x0
  int32_t v61; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v62; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42177AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&ServantVoiceEntity_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&string___TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v13);
    byte_42177AD = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v62 = 0LL;
  v61 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_43;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  if ( !voiceId )
    voiceId = svtId;
  v15 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v15 )
LABEL_43:
    sub_B0D97C(Instance);
  v22 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
  }
  if ( !v15->max_length )
    goto LABEL_42;
  v15->m_Items[0] = (System_String_o *)v22;
  sub_B0D840((BattleServantConfConponent_o *)v15->m_Items, v22, v16, v17, v18, v19, v20, v21);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
    v29 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_42;
  v15->m_Items[1] = (System_String_o *)v29;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v36 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_42;
  v15->m_Items[2] = (System_String_o *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
    v43 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_42;
  v15->m_Items[3] = (System_String_o *)v43;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
  v61 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v61, 0LL);
  v50 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v15->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_44:
      v60 = sub_B0D99C(Instance);
      sub_B0D948(v60, 0LL);
    }
  }
  if ( v15->max_length <= 4 )
  {
LABEL_42:
    v59 = sub_B0D9A8(Instance);
    sub_B0D948(v59, 0LL);
  }
  v15->m_Items[4] = (System_String_o *)v50;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[4], v50, v44, v45, v46, v47, v48, v49);
  v51 = System_String__Concat_43930028(v15, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_43;
  klass = Instance->klass;
  v53 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v54;
      p_offset += 2;
      if ( v54 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v56 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_32:
    v56 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v56)(
          v53,
          v51,
          &v62,
          *(_QWORD *)(v56 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v62 )
    return 0LL;
  v57 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v62->klass->_2.bitflags2 + 1) < (unsigned int)v57 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v62->klass->_2.typeHierarchy[v57 - 1] == ServantVoiceEntity_TypeInfo )
    return v62;
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
  System_String_array *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x23
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x23
  System_String_o *v52; // x0
  const MethodInfo *v53; // x5
  bool EntityFromId_ServantVoiceEntity; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v55; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF
  ServantVoiceEntity_o *result; // [xsp+10h] [xbp-40h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-38h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42177B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_B0D8A4(&Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&string___TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v14);
    byte_42177B0 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  result = 0LL;
  v58 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_33;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  if ( !voiceId )
    voiceId = svtId;
  v16 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v16 )
    goto LABEL_33;
  v23 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v16->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
  }
  if ( !v16->max_length )
    goto LABEL_31;
  v16->m_Items[0] = (System_String_o *)v23;
  sub_B0D840((BattleServantConfConponent_o *)v16->m_Items, v23, v17, v18, v19, v20, v21, v22);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v16->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
    v30 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_31;
  v16->m_Items[1] = (System_String_o *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v37 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v16->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_31;
  v16->m_Items[2] = (System_String_o *)v37;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v16->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
    v44 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( v16->max_length <= 3 )
    goto LABEL_31;
  v16->m_Items[3] = (System_String_o *)v44;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
  v58 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v58, 0LL);
  v51 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v16->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_32:
      v57 = sub_B0D99C(Instance);
      sub_B0D948(v57, 0LL);
    }
  }
  if ( v16->max_length <= 4 )
  {
LABEL_31:
    v56 = sub_B0D9A8(Instance);
    sub_B0D948(v56, 0LL);
  }
  v16->m_Items[4] = (System_String_o *)v51;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
  v52 = System_String__Concat_43930028(v16, 0LL);
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      v52,
                                      (const MethodInfo_1714A80 *)Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
  v55 = 0LL;
  if ( !EntityFromId_ServantVoiceEntity )
    return v55;
  Instance = (DataManager_o *)result;
  if ( !result )
LABEL_33:
    sub_B0D97C(Instance);
  return ServantVoiceEntity__getVoiceList_29945472(result, voceType, labelName, 0LL, 1, v53);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_29921476(
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
  ServantVoiceEntity_array *v14; // x20
  System_String_array *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x22
  System_String_o *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x22
  unsigned __int64 v54; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v55; // x11
  __int64 v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x21
  __int64 v64; // x22
  ServantVoiceEntity_c *v65; // x8
  __int64 v66; // x10
  __int64 v67; // x10
  System_Int32_array **v68; // x1
  Il2CppClass **v69; // x0
  bool v70; // nf
  __int64 v72; // x0
  __int64 v73; // x0
  int v74; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v75; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-48h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42177AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_B0D8A4(&ServantVoiceEntity___TypeInfo, v8);
    sub_B0D8A4(&ServantVoiceEntity_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&string___TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v12);
    byte_42177AE = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v75 = 0LL;
  v74 = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_51:
    sub_B0D97C(Instance);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v74 = 1;
  v14 = (ServantVoiceEntity_array *)sub_B0D8BC(ServantVoiceEntity___TypeInfo, 24LL);
  do
  {
    v15 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&voiceId, 0LL);
    if ( !v15 )
      goto LABEL_51;
    v22 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B0D964(Instance, v15->obj.klass->_1.element_class);
      if ( !Instance )
      {
LABEL_50:
        v73 = sub_B0D99C(Instance);
        sub_B0D948(v73, 0LL);
      }
    }
    if ( !v15->max_length )
      goto LABEL_49;
    v15->m_Items[0] = (System_String_o *)v22;
    sub_B0D840((BattleServantConfConponent_o *)v15->m_Items, v22, v16, v17, v18, v19, v20, v21);
    Instance = StringLiteral_1232/*":"*/;
    if ( StringLiteral_1232/*":"*/ )
    {
      Instance = sub_B0D964(StringLiteral_1232/*":"*/, v15->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
      v29 = (System_Int32_array **)StringLiteral_1232/*":"*/;
    }
    else
    {
      v29 = 0LL;
    }
    if ( v15->max_length <= 1 )
      goto LABEL_49;
    v15->m_Items[1] = (System_String_o *)v29;
    sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
    v36 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B0D964(Instance, v15->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
    }
    if ( v15->max_length <= 2 )
      goto LABEL_49;
    v15->m_Items[2] = (System_String_o *)v36;
    sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
    Instance = StringLiteral_1232/*":"*/;
    if ( StringLiteral_1232/*":"*/ )
    {
      Instance = sub_B0D964(StringLiteral_1232/*":"*/, v15->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
      v43 = (System_Int32_array **)StringLiteral_1232/*":"*/;
    }
    else
    {
      v43 = 0LL;
    }
    if ( v15->max_length <= 3 )
    {
LABEL_49:
      v72 = sub_B0D9A8(Instance);
      sub_B0D948(v72, 0LL);
    }
    v15->m_Items[3] = (System_String_o *)v43;
    sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
    Instance = (__int64)System_Int32__ToString((int32_t)&v74, 0LL);
    v50 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B0D964(Instance, v15->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
    }
    if ( v15->max_length <= 4 )
      goto LABEL_49;
    v15->m_Items[4] = (System_String_o *)v50;
    sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[4], v50, v44, v45, v46, v47, v48, v49);
    v51 = System_String__Concat_43930028(v15, 0LL);
    Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_51;
    v52 = *(_QWORD *)Instance;
    v53 = Instance;
    if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
    {
      v54 = 0LL;
      v55 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *(v55 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v54;
        v55 += 2;
        if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
          goto LABEL_31;
      }
      v56 = v52 + 16LL * (*(_DWORD *)v55 + 1) + 312;
    }
    else
    {
LABEL_31:
      v56 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, __int64 *, _QWORD))v56)(
                 v53,
                 v51,
                 &v75,
                 *(_QWORD *)(v56 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_51;
      v63 = v75;
      v64 = v74;
      if ( !v75 )
        goto LABEL_41;
      v65 = ServantVoiceEntity_TypeInfo;
      v66 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v75 + 300LL) >= (unsigned int)v66
        && *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v75 + 200LL) + 8 * v66 - 8) == ServantVoiceEntity_TypeInfo )
      {
        Instance = sub_B0D964(v75, v14->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_50;
        v65 = ServantVoiceEntity_TypeInfo;
      }
      v67 = *(&v65->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v63 + 300LL) >= (unsigned int)v67 )
      {
        if ( *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v63 + 200LL) + 8 * v67 - 8) == v65 )
          v68 = (System_Int32_array **)v63;
        else
          v68 = 0LL;
      }
      else
      {
LABEL_41:
        v68 = 0LL;
      }
      if ( (unsigned int)v64 >= v14->max_length )
        goto LABEL_49;
      v69 = &v14->obj.klass + v64;
      v69[4] = (Il2CppClass *)v68;
      sub_B0D840((BattleServantConfConponent_o *)(v69 + 4), v68, v57, v58, v59, v60, v61, v62);
    }
    v70 = v74 - 23 < 0;
    ++v74;
  }
  while ( v70 != __OFSUB__(v74, 24) );
  return v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_29959768(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x0
  __int64 v26; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0

  if ( (byte_42177AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&voiceType);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo, v12);
    sub_B0D8A4(&ServantVoiceEntity_TypeInfo, v13);
    byte_42177AC = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceEntity__TypeInfo,
                                                                                                  *(_QWORD *)&voiceType,
                                                                                                  *(_QWORD *)&svtId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_33;
    v26 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (ServantVoiceEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] != ServantVoiceEntity_TypeInfo )
    {
      sub_B0DC70(v25);
LABEL_33:
      sub_B0D97C(v25);
    }
    if ( v25->fields.targetId == voiceType && v25->fields.missionTargetId == svtId )
    {
      if ( !v14 )
        sub_B0D97C(v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v25,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    }
  }
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_29:
    v30 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_29961472(
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
  System_String_array *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x23
  System_String_o *v53; // x22
  DataManager_c *klass; // x8
  DataManager_o *v55; // x21
  unsigned __int64 v56; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v58; // x0
  const MethodInfo *v59; // x5
  __int64 v60; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  int32_t v64; // [xsp+Ch] [xbp-44h] BYREF
  ServantVoiceEntity_o *v65; // [xsp+10h] [xbp-40h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-38h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42177AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11);
    sub_B0D8A4(&ServantVoiceEntity_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&string___TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v15);
    byte_42177AF = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v65 = 0LL;
  v64 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_39;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v17 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v17 )
    goto LABEL_39;
  v24 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v17->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
  }
  if ( !v17->max_length )
    goto LABEL_40;
  v17->m_Items[0] = (System_String_o *)v24;
  sub_B0D840((BattleServantConfConponent_o *)v17->m_Items, v24, v18, v19, v20, v21, v22, v23);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v17->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
    v31 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_40;
  v17->m_Items[1] = (System_String_o *)v31;
  sub_B0D840((BattleServantConfConponent_o *)&v17->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v38 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v17->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_40;
  v17->m_Items[2] = (System_String_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v17->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v17->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
    v45 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_40;
  v17->m_Items[3] = (System_String_o *)v45;
  sub_B0D840((BattleServantConfConponent_o *)&v17->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  v64 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v64, 0LL);
  v52 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v17->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_41:
      v63 = sub_B0D99C(Instance);
      sub_B0D948(v63, 0LL);
    }
  }
  if ( v17->max_length <= 4 )
  {
LABEL_40:
    v62 = sub_B0D9A8(Instance);
    sub_B0D948(v62, 0LL);
  }
  v17->m_Items[4] = (System_String_o *)v52;
  sub_B0D840((BattleServantConfConponent_o *)&v17->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
  v53 = System_String__Concat_43930028(v17, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_39;
  klass = Instance->klass;
  v55 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v56;
      p_offset += 2;
      if ( v56 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v58 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_30:
    v58 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v58)(
          v55,
          v53,
          &v65,
          *(_QWORD *)(v58 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)v65;
    if ( v65 )
    {
      v60 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v65->klass->_2.bitflags2 + 1) >= (unsigned int)v60
        && (ServantVoiceEntity_c *)v65->klass->_2.typeHierarchy[v60 - 1] == ServantVoiceEntity_TypeInfo )
      {
        return ServantVoiceEntity__getVoiceList_29945472(v65, voceType, labelName, 0LL, 1, v59);
      }
    }
LABEL_39:
    sub_B0D97C(Instance);
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
    return ServantVoiceEntity__getVoiceList_29945472((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_29945472((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
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

  if ( (byte_42177B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    byte_42177B2 = 1;
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
    return ServantVoiceEntity__getVoiceList_29945472((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_29945472((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_29944888((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
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
    return ServantVoiceEntity__getVoiceList_29944888((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_29963932(
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
    return ServantVoiceEntity__getVoiceList_29944888((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  ServantChangeEntity_o *v5; // x0

  if ( (byte_42177AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_42177AA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t SvtVoiceId; // w22
  DataManager_o *Instance; // x0
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v14; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v16; // x21
  int32_t FriendShipRank; // w0
  const MethodInfo *v18; // x6
  int32_t v19; // w19
  int32_t v20; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_29944888; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42177B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&limitCnt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_42177B1 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_20;
  Entity = (UserServantCollectionEntity_o *)ServantVoiceMaster__GetEntity(
                                              (ServantVoiceMaster_o *)Instance,
                                              voicePrefix[1],
                                              voicePrefix[0],
                                              1,
                                              v14);
  if ( !Entity )
    return (char)Entity;
  v16 = (ServantVoiceEntity_o *)Entity;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_B0D97C(Instance);
  }
  Entity = UserServantCollectionMaster__GetEntity(
             (UserServantCollectionMaster_o *)Instance,
             SelfUserGame->fields.userId,
             svtId,
             0LL);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0LL);
    v19 = oldFriendShipRank + 1;
    if ( v19 > FriendShipRank )
    {
LABEL_17:
      LOBYTE(Entity) = 0;
    }
    else
    {
      v20 = FriendShipRank;
      while ( 1 )
      {
        VoiceList_29944888 = ServantVoiceEntity__getVoiceList_29944888(v16, 1, 3, v19, 0LL, -1, v18);
        if ( VoiceList_29944888 )
        {
          if ( VoiceList_29944888->fields._size > 0 )
            break;
        }
        if ( ++v19 > v20 )
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
    sub_B0D97C(this);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}