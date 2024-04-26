void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4354462 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
    byte_4354462 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    106,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
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

  if ( (byte_4354460 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
    byte_4354460 = 1;
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_21C0890 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
}


ServantVoiceEntity_o *__fastcall ServantVoiceMaster__GetSvtEquipVoiceEntity(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantVoiceMaster___c__DisplayClass27_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_435446C & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
    sub_B70694(&Method_System_Func_ServantVoiceEntity__bool___ctor__);
    sub_B70694(&System_Func_ServantVoiceEntity__bool__TypeInfo);
    sub_B70694(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__);
    sub_B70694(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
    byte_435446C = 1;
  }
  v5 = (ServantVoiceMaster___c__DisplayClass27_0_o *)sub_B70764(ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
  ServantVoiceMaster___c__DisplayClass27_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.svtId = svtId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_ServantVoiceEntity__bool___ctor__);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   v8,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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

  if ( (byte_4354461 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
    byte_4354461 = 1;
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_29798688((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_29798104((ServantVoiceEntity_o *)result, 2, 23, costumeId, 0LL, -1, v7);
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
  System_String_array *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x22
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
  System_Int32_array **v46; // x20
  System_String_o *v47; // x20
  DataManager_c *klass; // x8
  DataManager_o *v49; // x19
  unsigned __int64 v50; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v52; // x0
  __int64 v53; // x11
  __int64 v55; // x0
  __int64 v56; // x0
  int32_t v57; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v58; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4354464 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&ServantVoiceEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_4354464 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v58 = 0LL;
  v57 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL
    || (ServantLimitAddMaster__getVoiceIndex(
          (ServantLimitAddMaster_o *)Instance,
          &voiceId,
          &voicePrefix,
          svtId,
          limitCount,
          0LL),
        v11 = (System_String_array *)sub_B706AC(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL),
        !v11) )
  {
LABEL_41:
    sub_B7076C(Instance, v10);
  }
  v18 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
  }
  if ( !v11->max_length )
    goto LABEL_40;
  v11->m_Items[0] = (System_String_o *)v18;
  sub_B70630((BattleServantConfConponent_o *)v11->m_Items, v18, v12, v13, v14, v15, v16, v17);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
    v25 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_40;
  v11->m_Items[1] = (System_String_o *)v25;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v32 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_40;
  v11->m_Items[2] = (System_String_o *)v32;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
    v39 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v11->max_length <= 3 )
    goto LABEL_40;
  v11->m_Items[3] = (System_String_o *)v39;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v57 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v57, 0LL);
  v46 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_42:
      v56 = sub_B7078C(Instance);
      sub_B70738(v56, 0LL);
    }
  }
  if ( v11->max_length <= 4 )
  {
LABEL_40:
    v55 = sub_B70798(Instance);
    sub_B70738(v55, 0LL);
  }
  v11->m_Items[4] = (System_String_o *)v46;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v47 = System_String__Concat_44838292(v11, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_41;
  klass = Instance->klass;
  v49 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v50;
      p_offset += 2;
      if ( v50 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v52 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_30:
    v52 = sub_B08590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v52)(
          v49,
          v47,
          &v58,
          *(_QWORD *)(v52 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v58 )
    return 0LL;
  v53 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v58->klass->_2.bitflags2 + 1) < (unsigned int)v53 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v58->klass->_2.typeHierarchy[v53 - 1] == ServantVoiceEntity_TypeInfo )
    return v58;
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
  System_String_array *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x22
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
  System_Int32_array **v46; // x20
  System_String_o *v47; // x20
  DataManager_c *klass; // x8
  DataManager_o *v49; // x19
  unsigned __int64 v50; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v52; // x0
  __int64 v53; // x11
  __int64 v55; // x0
  __int64 v56; // x0
  int32_t v57; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v58; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4354466 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&ServantVoiceEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_4354466 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v58 = 0LL;
  v57 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v11 = (System_String_array *)sub_B706AC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v11 )
LABEL_43:
    sub_B7076C(Instance, v10);
  v18 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
  }
  if ( !v11->max_length )
    goto LABEL_42;
  v11->m_Items[0] = (System_String_o *)v18;
  sub_B70630((BattleServantConfConponent_o *)v11->m_Items, v18, v12, v13, v14, v15, v16, v17);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
    v25 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_42;
  v11->m_Items[1] = (System_String_o *)v25;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v32 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_42;
  v11->m_Items[2] = (System_String_o *)v32;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
    v39 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v11->max_length <= 3 )
    goto LABEL_42;
  v11->m_Items[3] = (System_String_o *)v39;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v57 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v57, 0LL);
  v46 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_44:
      v56 = sub_B7078C(Instance);
      sub_B70738(v56, 0LL);
    }
  }
  if ( v11->max_length <= 4 )
  {
LABEL_42:
    v55 = sub_B70798(Instance);
    sub_B70738(v55, 0LL);
  }
  v11->m_Items[4] = (System_String_o *)v46;
  sub_B70630((BattleServantConfConponent_o *)&v11->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v47 = System_String__Concat_44838292(v11, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_43;
  klass = Instance->klass;
  v49 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v50;
      p_offset += 2;
      if ( v50 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v52 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_32:
    v52 = sub_B08590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v52)(
          v49,
          v47,
          &v58,
          *(_QWORD *)(v52 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v58 )
    return 0LL;
  v53 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v58->klass->_2.bitflags2 + 1) < (unsigned int)v53 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v58->klass->_2.typeHierarchy[v53 - 1] == ServantVoiceEntity_TypeInfo )
    return v58;
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
  System_String_array *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x23
  System_String_o *v49; // x0
  const MethodInfo *v50; // x5
  bool EntityFromId_ServantVoiceEntity; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF
  ServantVoiceEntity_o *result; // [xsp+10h] [xbp-40h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-38h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4354469 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_4354469 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  result = 0LL;
  v55 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v13 = (System_String_array *)sub_B706AC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v13 )
    goto LABEL_33;
  v20 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
  }
  if ( !v13->max_length )
    goto LABEL_31;
  v13->m_Items[0] = (System_String_o *)v20;
  sub_B70630((BattleServantConfConponent_o *)v13->m_Items, v20, v14, v15, v16, v17, v18, v19);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
    v27 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_31;
  v13->m_Items[1] = (System_String_o *)v27;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v34 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_31;
  v13->m_Items[2] = (System_String_o *)v34;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
    v41 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_31;
  v13->m_Items[3] = (System_String_o *)v41;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  v55 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v55, 0LL);
  v48 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_32:
      v54 = sub_B7078C(Instance);
      sub_B70738(v54, 0LL);
    }
  }
  if ( v13->max_length <= 4 )
  {
LABEL_31:
    v53 = sub_B70798(Instance);
    sub_B70738(v53, 0LL);
  }
  v13->m_Items[4] = (System_String_o *)v48;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[4], v48, v42, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_44838292(v13, 0LL);
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      v49,
                                      (const MethodInfo_1CA3A78 *)Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
  v52 = 0LL;
  if ( !EntityFromId_ServantVoiceEntity )
    return v52;
  Instance = (DataManager_o *)result;
  if ( !result )
LABEL_33:
    sub_B7076C(Instance, v12);
  return ServantVoiceEntity__getVoiceList_29798688(result, voceType, labelName, 0LL, 1, v50);
}


ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_29774712(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  ServantVoiceEntity_array *v9; // x20
  System_String_array *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  System_String_o *v46; // x21
  __int64 v47; // x8
  __int64 v48; // x22
  unsigned __int64 v49; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v50; // x11
  __int64 v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x21
  __int64 v59; // x22
  ServantVoiceEntity_c *v60; // x8
  __int64 v61; // x10
  __int64 v62; // x10
  System_Int32_array **v63; // x1
  Il2CppClass **v64; // x0
  bool v65; // nf
  __int64 v67; // x0
  __int64 v68; // x0
  int v69; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v70; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-48h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4354467 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&ServantVoiceEntity___TypeInfo);
    sub_B70694(&ServantVoiceEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_4354467 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v70 = 0LL;
  v69 = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_51:
    sub_B7076C(Instance, v8);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v69 = 1;
  v9 = (ServantVoiceEntity_array *)sub_B706AC(ServantVoiceEntity___TypeInfo, 24LL);
  do
  {
    v10 = (System_String_array *)sub_B706AC(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&voiceId, 0LL);
    if ( !v10 )
      goto LABEL_51;
    v17 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B70754(Instance, v10->obj.klass->_1.element_class);
      if ( !Instance )
      {
LABEL_50:
        v68 = sub_B7078C(Instance);
        sub_B70738(v68, 0LL);
      }
    }
    if ( !v10->max_length )
      goto LABEL_49;
    v10->m_Items[0] = (System_String_o *)v17;
    sub_B70630((BattleServantConfConponent_o *)v10->m_Items, v17, v11, v12, v13, v14, v15, v16);
    Instance = StringLiteral_1250/*":"*/;
    if ( StringLiteral_1250/*":"*/ )
    {
      Instance = sub_B70754(StringLiteral_1250/*":"*/, v10->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
      v24 = (System_Int32_array **)StringLiteral_1250/*":"*/;
    }
    else
    {
      v24 = 0LL;
    }
    if ( v10->max_length <= 1 )
      goto LABEL_49;
    v10->m_Items[1] = (System_String_o *)v24;
    sub_B70630((BattleServantConfConponent_o *)&v10->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
    v31 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B70754(Instance, v10->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
    }
    if ( v10->max_length <= 2 )
      goto LABEL_49;
    v10->m_Items[2] = (System_String_o *)v31;
    sub_B70630((BattleServantConfConponent_o *)&v10->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
    Instance = StringLiteral_1250/*":"*/;
    if ( StringLiteral_1250/*":"*/ )
    {
      Instance = sub_B70754(StringLiteral_1250/*":"*/, v10->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
      v38 = (System_Int32_array **)StringLiteral_1250/*":"*/;
    }
    else
    {
      v38 = 0LL;
    }
    if ( v10->max_length <= 3 )
    {
LABEL_49:
      v67 = sub_B70798(Instance);
      sub_B70738(v67, 0LL);
    }
    v10->m_Items[3] = (System_String_o *)v38;
    sub_B70630((BattleServantConfConponent_o *)&v10->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
    Instance = (__int64)System_Int32__ToString((int32_t)&v69, 0LL);
    v45 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B70754(Instance, v10->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
    }
    if ( v10->max_length <= 4 )
      goto LABEL_49;
    v10->m_Items[4] = (System_String_o *)v45;
    sub_B70630((BattleServantConfConponent_o *)&v10->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
    v46 = System_String__Concat_44838292(v10, 0LL);
    Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_51;
    v47 = *(_QWORD *)Instance;
    v48 = Instance;
    if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
    {
      v49 = 0LL;
      v50 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v49;
        v50 += 2;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
          goto LABEL_31;
      }
      v51 = v47 + 16LL * (*(_DWORD *)v50 + 1) + 312;
    }
    else
    {
LABEL_31:
      v51 = sub_B08590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, __int64 *, _QWORD))v51)(
                 v48,
                 v46,
                 &v70,
                 *(_QWORD *)(v51 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_51;
      v58 = v70;
      v59 = v69;
      if ( !v70 )
        goto LABEL_41;
      v60 = ServantVoiceEntity_TypeInfo;
      v61 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v70 + 300LL) >= (unsigned int)v61
        && *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v70 + 200LL) + 8 * v61 - 8) == ServantVoiceEntity_TypeInfo )
      {
        Instance = sub_B70754(v70, v9->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_50;
        v60 = ServantVoiceEntity_TypeInfo;
      }
      v62 = *(&v60->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v58 + 300LL) >= (unsigned int)v62 )
      {
        if ( *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v58 + 200LL) + 8 * v62 - 8) == v60 )
          v63 = (System_Int32_array **)v58;
        else
          v63 = 0LL;
      }
      else
      {
LABEL_41:
        v63 = 0LL;
      }
      if ( (unsigned int)v59 >= v9->max_length )
        goto LABEL_49;
      v64 = &v9->obj.klass + v59;
      v64[4] = (Il2CppClass *)v63;
      sub_B70630((BattleServantConfConponent_o *)(v64 + 4), v63, v52, v53, v54, v55, v56, v57);
    }
    v65 = v69 - 23 < 0;
    ++v69;
  }
  while ( v65 != __OFSUB__(v69, 24) );
  return v9;
}


System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_29812984(
        ServantVoiceMaster_o *this,
        int32_t voiceType,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_4354465 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
    sub_B70694(&ServantVoiceEntity_TypeInfo);
    byte_4354465 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_33;
    v22 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (ServantVoiceEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != ServantVoiceEntity_TypeInfo )
    {
      sub_B70A60(v20);
LABEL_33:
      sub_B7076C(v20, v21);
    }
    if ( v20->fields.targetId == voiceType && v20->fields.missionTargetId == svtId )
    {
      if ( !v7 )
        sub_B7076C(v20, ServantVoiceEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v20,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v7;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_29814688(
        ServantVoiceMaster_o *this,
        int32_t voceType,
        int32_t svtId,
        int32_t limitCount,
        System_String_o *labelName,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_String_array *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x23
  System_String_o *v49; // x22
  DataManager_c *klass; // x8
  DataManager_o *v51; // x21
  unsigned __int64 v52; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v54; // x0
  const MethodInfo *v55; // x5
  __int64 v56; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  int32_t v60; // [xsp+Ch] [xbp-44h] BYREF
  ServantVoiceEntity_o *v61; // [xsp+10h] [xbp-40h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-38h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4354468 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&ServantVoiceEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_4354468 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v61 = 0LL;
  v60 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_39;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v13 = (System_String_array *)sub_B706AC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v13 )
    goto LABEL_39;
  v20 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
  }
  if ( !v13->max_length )
    goto LABEL_40;
  v13->m_Items[0] = (System_String_o *)v20;
  sub_B70630((BattleServantConfConponent_o *)v13->m_Items, v20, v14, v15, v16, v17, v18, v19);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
    v27 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_40;
  v13->m_Items[1] = (System_String_o *)v27;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v34 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_40;
  v13->m_Items[2] = (System_String_o *)v34;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
    v41 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_40;
  v13->m_Items[3] = (System_String_o *)v41;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  v60 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v60, 0LL);
  v48 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_41:
      v59 = sub_B7078C(Instance);
      sub_B70738(v59, 0LL);
    }
  }
  if ( v13->max_length <= 4 )
  {
LABEL_40:
    v58 = sub_B70798(Instance);
    sub_B70738(v58, 0LL);
  }
  v13->m_Items[4] = (System_String_o *)v48;
  sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[4], v48, v42, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_44838292(v13, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_39;
  klass = Instance->klass;
  v51 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v52;
      p_offset += 2;
      if ( v52 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v54 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_30:
    v54 = sub_B08590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v54)(
          v51,
          v49,
          &v61,
          *(_QWORD *)(v54 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)v61;
    if ( v61 )
    {
      v56 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v61->klass->_2.bitflags2 + 1) >= (unsigned int)v56
        && (ServantVoiceEntity_c *)v61->klass->_2.typeHierarchy[v56 - 1] == ServantVoiceEntity_TypeInfo )
      {
        return ServantVoiceEntity__getVoiceList_29798688(v61, voceType, labelName, 0LL, 1, v55);
      }
    }
LABEL_39:
    sub_B7076C(Instance, v12);
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
    return ServantVoiceEntity__getVoiceList_29798688((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_29798688((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
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

  if ( (byte_435446B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_435446B = 1;
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
    return ServantVoiceEntity__getVoiceList_29798688((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_29798688((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_29798104((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
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
    return ServantVoiceEntity__getVoiceList_29798104((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_29817148(
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
    return ServantVoiceEntity__getVoiceList_29798104((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ServantChangeEntity_o *v5; // x0

  if ( (byte_4354463 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4354463 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v11; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v13; // x21
  int32_t FriendShipRank; // w0
  const MethodInfo *v15; // x6
  int32_t v16; // w19
  int32_t v17; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_29798104; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435446A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435446A = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_B7076C(Instance, v9);
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
        VoiceList_29798104 = ServantVoiceEntity__getVoiceList_29798104(v13, 1, 3, v16, 0LL, -1, v15);
        if ( VoiceList_29798104 )
        {
          if ( VoiceList_29798104->fields._size > 0 )
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
    sub_B7076C(this, 0LL);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}