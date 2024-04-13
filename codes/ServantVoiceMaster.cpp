void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBF69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBF69 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    106,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
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

  if ( (byte_42EBF67 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__,
      id,
      voicePrefix,
      *(_QWORD *)&type);
    byte_42EBF67 = 1;
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
}


ServantVoiceEntity_o *__fastcall ServantVoiceMaster__GetSvtEquipVoiceEntity(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  ServantVoiceMaster___c__DisplayClass27_0_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20

  if ( (byte_42EBF73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_ServantVoiceEntity__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_ServantVoiceEntity__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__, v15, v16, v17);
    sub_B5D5C4(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo, v18, v19, v20);
    byte_42EBF73 = 1;
  }
  v21 = (ServantVoiceMaster___c__DisplayClass27_0_o *)sub_B5D694(ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
  ServantVoiceMaster___c__DisplayClass27_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.svtId = svtId;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ServantVoiceEntity__bool___ctor__);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   v24,
                                   (System_Func_TSource__bool__o *)v25,
                                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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

  if ( (byte_42EBF68 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&voicePrefix);
    byte_42EBF68 = 1;
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_31475968((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_31475384((ServantVoiceEntity_o *)result, 2, 23, costumeId, 0LL, -1, v7);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  System_String_array *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x20
  System_String_o *v62; // x20
  __int64 v63; // x3
  DataManager_c *klass; // x8
  DataManager_o *v65; // x19
  unsigned __int64 v66; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v68; // x0
  __int64 v69; // x11
  __int64 v71; // x0
  __int64 v72; // x0
  int32_t v73; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v74; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42EBF6B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, voceType, svtId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantVoiceEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&string___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v21, v22, v23);
    byte_42EBF6B = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v74 = 0LL;
  v73 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL
    || (ServantLimitAddMaster__getVoiceIndex(
          (ServantLimitAddMaster_o *)Instance,
          &voiceId,
          &voicePrefix,
          svtId,
          limitCount,
          0LL),
        v26 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL),
        !v26) )
  {
LABEL_41:
    sub_B5D69C(Instance, v25);
  }
  v33 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v26->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
  }
  if ( !v26->max_length )
    goto LABEL_40;
  v26->m_Items[0] = (System_String_o *)v33;
  sub_B5D560((BattleServantConfConponent_o *)v26->m_Items, v33, v27, v28, v29, v30, v31, v32);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v26->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
    v40 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_40;
  v26->m_Items[1] = (System_String_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[1], v40, v34, v35, v36, v37, v38, v39);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v47 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v26->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_40;
  v26->m_Items[2] = (System_String_o *)v47;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[2], v47, v41, v42, v43, v44, v45, v46);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v26->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
    v54 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_40;
  v26->m_Items[3] = (System_String_o *)v54;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[3], v54, v48, v49, v50, v51, v52, v53);
  v73 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v73, 0LL);
  v61 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v26->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_42:
      v72 = sub_B5D6BC(Instance);
      sub_B5D668(v72, 0LL);
    }
  }
  if ( v26->max_length <= 4 )
  {
LABEL_40:
    v71 = sub_B5D6C8(Instance);
    sub_B5D668(v71, 0LL);
  }
  v26->m_Items[4] = (System_String_o *)v61;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[4], v61, v55, v56, v57, v58, v59, v60);
  v62 = System_String__Concat_44657912(v26, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_41;
  klass = Instance->klass;
  v65 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v66;
      p_offset += 2;
      if ( v66 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v68 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_30:
    v68 = sub_AF54C0(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            1LL,
            v63);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v68)(
          v65,
          v62,
          &v74,
          *(_QWORD *)(v68 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v74 )
    return 0LL;
  v69 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v74->klass->_2.bitflags2 + 1) < (unsigned int)v69 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v74->klass->_2.typeHierarchy[v69 - 1] == ServantVoiceEntity_TypeInfo )
    return v74;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  System_String_array *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x20
  System_String_o *v62; // x20
  __int64 v63; // x3
  DataManager_c *klass; // x8
  DataManager_o *v65; // x19
  unsigned __int64 v66; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v68; // x0
  __int64 v69; // x11
  __int64 v71; // x0
  __int64 v72; // x0
  int32_t v73; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v74; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42EBF6D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, voceType, svtId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantVoiceEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&string___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v21, v22, v23);
    byte_42EBF6D = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v74 = 0LL;
  v73 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v26 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v26 )
LABEL_43:
    sub_B5D69C(Instance, v25);
  v33 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v26->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
  }
  if ( !v26->max_length )
    goto LABEL_42;
  v26->m_Items[0] = (System_String_o *)v33;
  sub_B5D560((BattleServantConfConponent_o *)v26->m_Items, v33, v27, v28, v29, v30, v31, v32);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v26->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
    v40 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_42;
  v26->m_Items[1] = (System_String_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[1], v40, v34, v35, v36, v37, v38, v39);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v47 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v26->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_42;
  v26->m_Items[2] = (System_String_o *)v47;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[2], v47, v41, v42, v43, v44, v45, v46);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v26->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
    v54 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_42;
  v26->m_Items[3] = (System_String_o *)v54;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[3], v54, v48, v49, v50, v51, v52, v53);
  v73 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v73, 0LL);
  v61 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v26->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_44:
      v72 = sub_B5D6BC(Instance);
      sub_B5D668(v72, 0LL);
    }
  }
  if ( v26->max_length <= 4 )
  {
LABEL_42:
    v71 = sub_B5D6C8(Instance);
    sub_B5D668(v71, 0LL);
  }
  v26->m_Items[4] = (System_String_o *)v61;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[4], v61, v55, v56, v57, v58, v59, v60);
  v62 = System_String__Concat_44657912(v26, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_43;
  klass = Instance->klass;
  v65 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v66;
      p_offset += 2;
      if ( v66 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v68 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_32:
    v68 = sub_AF54C0(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            1LL,
            v63);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v68)(
          v65,
          v62,
          &v74,
          *(_QWORD *)(v68 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v74 )
    return 0LL;
  v69 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v74->klass->_2.bitflags2 + 1) < (unsigned int)v69 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v74->klass->_2.typeHierarchy[v69 - 1] == ServantVoiceEntity_TypeInfo )
    return v74;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  System_String_array *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x23
  System_String_o *v61; // x0
  const MethodInfo *v62; // x5
  bool EntityFromId_ServantVoiceEntity; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v64; // x0
  __int64 v65; // x0
  __int64 v66; // x0
  int32_t v67; // [xsp+Ch] [xbp-44h] BYREF
  ServantVoiceEntity_o *result; // [xsp+10h] [xbp-40h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-38h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42EBF70 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, voceType, svtId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&string___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v20, v21, v22);
    byte_42EBF70 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  result = 0LL;
  v67 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v25 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v25 )
    goto LABEL_33;
  v32 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v25->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
  }
  if ( !v25->max_length )
    goto LABEL_31;
  v25->m_Items[0] = (System_String_o *)v32;
  sub_B5D560((BattleServantConfConponent_o *)v25->m_Items, v32, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v25->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
    v39 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_31;
  v25->m_Items[1] = (System_String_o *)v39;
  sub_B5D560((BattleServantConfConponent_o *)&v25->m_Items[1], v39, v33, v34, v35, v36, v37, v38);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v46 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v25->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_31;
  v25->m_Items[2] = (System_String_o *)v46;
  sub_B5D560((BattleServantConfConponent_o *)&v25->m_Items[2], v46, v40, v41, v42, v43, v44, v45);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v25->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
    v53 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_31;
  v25->m_Items[3] = (System_String_o *)v53;
  sub_B5D560((BattleServantConfConponent_o *)&v25->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v67 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v67, 0LL);
  v60 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v25->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_32:
      v66 = sub_B5D6BC(Instance);
      sub_B5D668(v66, 0LL);
    }
  }
  if ( v25->max_length <= 4 )
  {
LABEL_31:
    v65 = sub_B5D6C8(Instance);
    sub_B5D668(v65, 0LL);
  }
  v25->m_Items[4] = (System_String_o *)v60;
  sub_B5D560((BattleServantConfConponent_o *)&v25->m_Items[4], v60, v54, v55, v56, v57, v58, v59);
  v61 = System_String__Concat_44657912(v25, 0LL);
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      v61,
                                      (const MethodInfo_1AE4724 *)Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
  v64 = 0LL;
  if ( !EntityFromId_ServantVoiceEntity )
    return v64;
  Instance = (DataManager_o *)result;
  if ( !result )
LABEL_33:
    sub_B5D69C(Instance, v24);
  return ServantVoiceEntity__getVoiceList_31475968(result, voceType, labelName, 0LL, 1, v62);
}


ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_31451972(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 Instance; // x0
  __int64 v26; // x1
  ServantVoiceEntity_array *v27; // x20
  System_String_array *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x22
  System_String_o *v64; // x21
  __int64 v65; // x3
  __int64 v66; // x8
  __int64 v67; // x22
  unsigned __int64 v68; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v69; // x11
  __int64 v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x21
  __int64 v78; // x22
  ServantVoiceEntity_c *v79; // x8
  __int64 v80; // x10
  __int64 v81; // x10
  System_Int32_array **v82; // x1
  Il2CppClass **v83; // x0
  bool v84; // nf
  __int64 v86; // x0
  __int64 v87; // x0
  int v88; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v89; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-48h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42EBF6E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, svtId, limitCount, method);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ServantVoiceEntity___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantVoiceEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&string___TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v22, v23, v24);
    byte_42EBF6E = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v89 = 0LL;
  v88 = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_51:
    sub_B5D69C(Instance, v26);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v88 = 1;
  v27 = (ServantVoiceEntity_array *)sub_B5D5DC(ServantVoiceEntity___TypeInfo, 24LL);
  do
  {
    v28 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&voiceId, 0LL);
    if ( !v28 )
      goto LABEL_51;
    v35 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B5D684(Instance, v28->obj.klass->_1.element_class);
      if ( !Instance )
      {
LABEL_50:
        v87 = sub_B5D6BC(Instance);
        sub_B5D668(v87, 0LL);
      }
    }
    if ( !v28->max_length )
      goto LABEL_49;
    v28->m_Items[0] = (System_String_o *)v35;
    sub_B5D560((BattleServantConfConponent_o *)v28->m_Items, v35, v29, v30, v31, v32, v33, v34);
    Instance = StringLiteral_1245/*":"*/;
    if ( StringLiteral_1245/*":"*/ )
    {
      Instance = sub_B5D684(StringLiteral_1245/*":"*/, v28->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
      v42 = (System_Int32_array **)StringLiteral_1245/*":"*/;
    }
    else
    {
      v42 = 0LL;
    }
    if ( v28->max_length <= 1 )
      goto LABEL_49;
    v28->m_Items[1] = (System_String_o *)v42;
    sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
    v49 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B5D684(Instance, v28->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
    }
    if ( v28->max_length <= 2 )
      goto LABEL_49;
    v28->m_Items[2] = (System_String_o *)v49;
    sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
    Instance = StringLiteral_1245/*":"*/;
    if ( StringLiteral_1245/*":"*/ )
    {
      Instance = sub_B5D684(StringLiteral_1245/*":"*/, v28->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
      v56 = (System_Int32_array **)StringLiteral_1245/*":"*/;
    }
    else
    {
      v56 = 0LL;
    }
    if ( v28->max_length <= 3 )
    {
LABEL_49:
      v86 = sub_B5D6C8(Instance);
      sub_B5D668(v86, 0LL);
    }
    v28->m_Items[3] = (System_String_o *)v56;
    sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[3], v56, v50, v51, v52, v53, v54, v55);
    Instance = (__int64)System_Int32__ToString((int32_t)&v88, 0LL);
    v63 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B5D684(Instance, v28->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
    }
    if ( v28->max_length <= 4 )
      goto LABEL_49;
    v28->m_Items[4] = (System_String_o *)v63;
    sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[4], v63, v57, v58, v59, v60, v61, v62);
    v64 = System_String__Concat_44657912(v28, 0LL);
    Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_51;
    v66 = *(_QWORD *)Instance;
    v67 = Instance;
    if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
    {
      v68 = 0LL;
      v69 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *(v69 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v68;
        v69 += 2;
        if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
          goto LABEL_31;
      }
      v70 = v66 + 16LL * (*(_DWORD *)v69 + 1) + 312;
    }
    else
    {
LABEL_31:
      v70 = sub_AF54C0(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v65);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, __int64 *, _QWORD))v70)(
                 v67,
                 v64,
                 &v89,
                 *(_QWORD *)(v70 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v27 )
        goto LABEL_51;
      v77 = v89;
      v78 = v88;
      if ( !v89 )
        goto LABEL_41;
      v79 = ServantVoiceEntity_TypeInfo;
      v80 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v89 + 300LL) >= (unsigned int)v80
        && *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v89 + 200LL) + 8 * v80 - 8) == ServantVoiceEntity_TypeInfo )
      {
        Instance = sub_B5D684(v89, v27->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_50;
        v79 = ServantVoiceEntity_TypeInfo;
      }
      v81 = *(&v79->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v77 + 300LL) >= (unsigned int)v81 )
      {
        if ( *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v77 + 200LL) + 8 * v81 - 8) == v79 )
          v82 = (System_Int32_array **)v77;
        else
          v82 = 0LL;
      }
      else
      {
LABEL_41:
        v82 = 0LL;
      }
      if ( (unsigned int)v78 >= v27->max_length )
        goto LABEL_49;
      v83 = &v27->obj.klass + v78;
      v83[4] = (Il2CppClass *)v82;
      sub_B5D560((BattleServantConfConponent_o *)(v83 + 4), v82, v71, v72, v73, v74, v75, v76);
    }
    v84 = v88 - 23 < 0;
    ++v88;
  }
  while ( v84 != __OFSUB__(v88, 24) );
  return v27;
}


System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_31490264(
        ServantVoiceMaster_o *this,
        int32_t voiceType,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  __int64 v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x10
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_42EBF6C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      voiceType,
      svtId,
      method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ServantVoiceEntity_TypeInfo, v25, v26, v27);
    byte_42EBF6C = 1;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v29);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_16:
      v42 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v38);
    }
    v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v42 + 8));
    if ( !v43 )
      goto LABEL_33;
    v45 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v45
      || (ServantVoiceEntity_c *)v43->klass->_2.typeHierarchy[v45 - 1] != ServantVoiceEntity_TypeInfo )
    {
      sub_B5D990(v43);
LABEL_33:
      sub_B5D69C(v43, v44);
    }
    if ( v43->fields.targetId == voiceType && v43->fields.missionTargetId == svtId )
    {
      if ( !v28 )
        sub_B5D69C(v43, ServantVoiceEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        v43,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_29:
    v49 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v38);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v28;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_31491968(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  System_String_array *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x23
  System_String_o *v64; // x22
  __int64 v65; // x3
  DataManager_c *klass; // x8
  DataManager_o *v67; // x21
  unsigned __int64 v68; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v70; // x0
  const MethodInfo *v71; // x5
  __int64 v72; // x10
  __int64 v74; // x0
  __int64 v75; // x0
  int32_t v76; // [xsp+Ch] [xbp-44h] BYREF
  ServantVoiceEntity_o *v77; // [xsp+10h] [xbp-40h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-38h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42EBF6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, voceType, svtId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ServantVoiceEntity_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&string___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v23, v24, v25);
    byte_42EBF6F = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v77 = 0LL;
  v76 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_39;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v28 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v28 )
    goto LABEL_39;
  v35 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v28->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
  }
  if ( !v28->max_length )
    goto LABEL_40;
  v28->m_Items[0] = (System_String_o *)v35;
  sub_B5D560((BattleServantConfConponent_o *)v28->m_Items, v35, v29, v30, v31, v32, v33, v34);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v28->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
    v42 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_40;
  v28->m_Items[1] = (System_String_o *)v42;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v49 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v28->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_40;
  v28->m_Items[2] = (System_String_o *)v49;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v28->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
    v56 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_40;
  v28->m_Items[3] = (System_String_o *)v56;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[3], v56, v50, v51, v52, v53, v54, v55);
  v76 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v76, 0LL);
  v63 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v28->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_41:
      v75 = sub_B5D6BC(Instance);
      sub_B5D668(v75, 0LL);
    }
  }
  if ( v28->max_length <= 4 )
  {
LABEL_40:
    v74 = sub_B5D6C8(Instance);
    sub_B5D668(v74, 0LL);
  }
  v28->m_Items[4] = (System_String_o *)v63;
  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[4], v63, v57, v58, v59, v60, v61, v62);
  v64 = System_String__Concat_44657912(v28, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_39;
  klass = Instance->klass;
  v67 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v68 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v68;
      p_offset += 2;
      if ( v68 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v70 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_30:
    v70 = sub_AF54C0(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            1LL,
            v65);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v70)(
          v67,
          v64,
          &v77,
          *(_QWORD *)(v70 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)v77;
    if ( v77 )
    {
      v72 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v77->klass->_2.bitflags2 + 1) >= (unsigned int)v72
        && (ServantVoiceEntity_c *)v77->klass->_2.typeHierarchy[v72 - 1] == ServantVoiceEntity_TypeInfo )
      {
        return ServantVoiceEntity__getVoiceList_31475968(v77, voceType, labelName, 0LL, 1, v71);
      }
    }
LABEL_39:
    sub_B5D69C(Instance, v27);
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
    return ServantVoiceEntity__getVoiceList_31475968((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_31475968((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
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

  if ( (byte_42EBF72 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, svtId, limitCount, labelName);
    byte_42EBF72 = 1;
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
    return ServantVoiceEntity__getVoiceList_31475968((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_31475968((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_31475384((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
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
    return ServantVoiceEntity__getVoiceList_31475384((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_31494428(
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
    return ServantVoiceEntity__getVoiceList_31475384((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  ServantChangeEntity_o *v10; // x0

  if ( (byte_42EBF6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EBF6A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  v10 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, svtId, 0LL);
  if ( v10 )
    return v10->fields.svtVoiceId;
  return svtId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceMaster__isOpenByServantFriendShip(
        int32_t svtId,
        int32_t limitCnt,
        int32_t oldFriendShipRank,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int32_t SvtVoiceId; // w22
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v23; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v25; // x21
  int32_t FriendShipRank; // w0
  const MethodInfo *v27; // x6
  int32_t v28; // w19
  int32_t v29; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_31475384; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EBF71 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, limitCnt, oldFriendShipRank, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EBF71 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !Instance )
    goto LABEL_20;
  Entity = (UserServantCollectionEntity_o *)ServantVoiceMaster__GetEntity(
                                              (ServantVoiceMaster_o *)Instance,
                                              voicePrefix[1],
                                              voicePrefix[0],
                                              1,
                                              v23);
  if ( !Entity )
    return (char)Entity;
  v25 = (ServantVoiceEntity_o *)Entity;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_B5D69C(Instance, v21);
  }
  Entity = UserServantCollectionMaster__GetEntity(
             (UserServantCollectionMaster_o *)Instance,
             SelfUserGame->fields.userId,
             svtId,
             0LL);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0LL);
    v28 = oldFriendShipRank + 1;
    if ( v28 > FriendShipRank )
    {
LABEL_17:
      LOBYTE(Entity) = 0;
    }
    else
    {
      v29 = FriendShipRank;
      while ( 1 )
      {
        VoiceList_31475384 = ServantVoiceEntity__getVoiceList_31475384(v25, 1, 3, v28, 0LL, -1, v27);
        if ( VoiceList_31475384 )
        {
          if ( VoiceList_31475384->fields._size > 0 )
            break;
        }
        if ( ++v28 > v29 )
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
    sub_B5D69C(this, 0LL);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}