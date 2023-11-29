void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FCB0D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__, method);
    byte_40FCB0D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    105,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall ServantVoiceMaster__GetEntity(
        ServantVoiceMaster_o *this,
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x1

  if ( (byte_40FCB0B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v9);
    byte_40FCB0B = 1;
  }
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_o *__fastcall ServantVoiceMaster__GetSvtEquipVoiceEntity(
        ServantVoiceMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantVoiceMaster___c__DisplayClass27_0_o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20

  if ( (byte_40FCB17 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___, v7);
    sub_B16FFC(&Method_System_Func_ServantVoiceEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_ServantVoiceEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__, v10);
    sub_B16FFC(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo, v11);
    byte_40FCB17 = 1;
  }
  v12 = (ServantVoiceMaster___c__DisplayClass27_0_o *)sub_B170CC(
                                                        ServantVoiceMaster___c__DisplayClass27_0_TypeInfo,
                                                        *(_QWORD *)&svtId,
                                                        method,
                                                        v3,
                                                        v4);
  ServantVoiceMaster___c__DisplayClass27_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.svtId = svtId;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ServantVoiceEntity__bool__TypeInfo,
                                                                             v14,
                                                                             v15,
                                                                             v16,
                                                                             v17);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ServantVoiceEntity__bool___ctor__);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   v13,
                                   (System_Func_TSource__bool__o *)v18,
                                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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
  __int64 v11; // x1
  System_String_o *PK; // x2

  if ( (byte_40FCB0C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__, entity);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v11);
    byte_40FCB0C = 1;
  }
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_30036932((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_30036348((ServantVoiceEntity_o *)result, 2, 23, costumeId, 0LL, -1, v7);
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x2
  System_String_array *v17; // x21
  System_String_o *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x22
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x20
  System_String_o *v49; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v52; // x19
  unsigned __int64 v53; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x11
  int32_t v58; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v59; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FCB0F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&string___TypeInfo, v12);
    sub_B16FFC(&StringLiteral_1223, v13);
    byte_40FCB0F = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v59 = 0LL;
  v58 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL
    || (ServantLimitAddMaster__getVoiceIndex(
          MasterData_WarQuestSelectionMaster,
          &voiceId,
          &voicePrefix,
          svtId,
          limitCount,
          0LL),
        v17 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v16),
        v18 = System_Int32__ToString((int32_t)&voiceId, 0LL),
        !v17) )
  {
LABEL_41:
    sub_B170D4();
  }
  v26 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B170BC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_42;
  }
  if ( !v17->max_length )
    goto LABEL_40;
  v17->m_Items[0] = (System_String_o *)v26;
  sub_B16F98((BattleServantConfConponent_o *)v17->m_Items, v26, v20, v21, v22, v23, v24, v25);
  v18 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v18 = (System_String_o *)sub_B170BC(StringLiteral_1223, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_42;
    v19 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_40;
  v17->m_Items[1] = (System_String_o *)v19;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[1], v19, v20, v27, v28, v29, v30, v31);
  v18 = System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v37 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B170BC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_42;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_40;
  v17->m_Items[2] = (System_String_o *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[2], v37, v20, v32, v33, v34, v35, v36);
  v18 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v18 = (System_String_o *)sub_B170BC(StringLiteral_1223, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_42;
    v19 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_40;
  v17->m_Items[3] = (System_String_o *)v19;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[3], v19, v20, v38, v39, v40, v41, v42);
  v58 = voceType;
  v18 = System_Int32__ToString((int32_t)&v58, 0LL);
  v48 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B170BC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_42:
      sub_B170F4(v18);
      sub_B170A0();
    }
  }
  if ( v17->max_length <= 4 )
  {
LABEL_40:
    sub_B17100(v18, v19, v20);
    sub_B170A0();
  }
  v17->m_Items[4] = (System_String_o *)v48;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[4], v48, v20, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_43823856(v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_41;
  klass = lookup->klass;
  v52 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v53;
      p_offset += 2;
      if ( v53 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_30:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))p_method)(
          v52,
          v49,
          &v59,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  if ( !v59 )
    return 0LL;
  v56 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v56 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v59->klass->_2.typeHierarchy[v56 - 1] == ServantVoiceEntity_TypeInfo )
    return v59;
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x2
  System_String_array *v17; // x21
  System_String_o *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x22
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x20
  System_String_o *v49; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v52; // x19
  unsigned __int64 v53; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x11
  int32_t v58; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v59; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FCB11 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&string___TypeInfo, v12);
    sub_B16FFC(&StringLiteral_1223, v13);
    byte_40FCB11 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v59 = 0LL;
  v58 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  ServantLimitAddMaster__getVoiceIndex(
    MasterData_WarQuestSelectionMaster,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  if ( !voiceId )
    voiceId = svtId;
  v17 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v16);
  v18 = System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v17 )
LABEL_43:
    sub_B170D4();
  v26 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B170BC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_44;
  }
  if ( !v17->max_length )
    goto LABEL_42;
  v17->m_Items[0] = (System_String_o *)v26;
  sub_B16F98((BattleServantConfConponent_o *)v17->m_Items, v26, v20, v21, v22, v23, v24, v25);
  v18 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v18 = (System_String_o *)sub_B170BC(StringLiteral_1223, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_44;
    v19 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_42;
  v17->m_Items[1] = (System_String_o *)v19;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[1], v19, v20, v27, v28, v29, v30, v31);
  v18 = System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v37 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B170BC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_44;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_42;
  v17->m_Items[2] = (System_String_o *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[2], v37, v20, v32, v33, v34, v35, v36);
  v18 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v18 = (System_String_o *)sub_B170BC(StringLiteral_1223, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_44;
    v19 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_42;
  v17->m_Items[3] = (System_String_o *)v19;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[3], v19, v20, v38, v39, v40, v41, v42);
  v58 = voceType;
  v18 = System_Int32__ToString((int32_t)&v58, 0LL);
  v48 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = (System_String_o *)sub_B170BC(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_44:
      sub_B170F4(v18);
      sub_B170A0();
    }
  }
  if ( v17->max_length <= 4 )
  {
LABEL_42:
    sub_B17100(v18, v19, v20);
    sub_B170A0();
  }
  v17->m_Items[4] = (System_String_o *)v48;
  sub_B16F98((BattleServantConfConponent_o *)&v17->m_Items[4], v48, v20, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_43823856(v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_43;
  klass = lookup->klass;
  v52 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v53;
      p_offset += 2;
      if ( v53 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_32:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))p_method)(
          v52,
          v49,
          &v59,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  if ( !v59 )
    return 0LL;
  v56 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v56 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v59->klass->_2.typeHierarchy[v56 - 1] == ServantVoiceEntity_TypeInfo )
    return v59;
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x2
  System_String_array *v18; // x22
  System_String_o *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x23
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x23
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x23
  System_String_o *v50; // x0
  const MethodInfo *v51; // x5
  bool EntityFromId_ServantVoiceEntity; // w8
  System_Collections_Generic_List_ServantVoiceData____o *v53; // x0
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF
  ServantVoiceEntity_o *result; // [xsp+10h] [xbp-40h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-38h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FCB14 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_B16FFC(&Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&string___TypeInfo, v13);
    sub_B16FFC(&StringLiteral_1223, v14);
    byte_40FCB14 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  result = 0LL;
  v54 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  ServantLimitAddMaster__getVoiceIndex(
    MasterData_WarQuestSelectionMaster,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  if ( !voiceId )
    voiceId = svtId;
  v18 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v17);
  v19 = System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v18 )
    goto LABEL_33;
  v27 = (System_Int32_array **)v19;
  if ( v19 )
  {
    v19 = (System_String_o *)sub_B170BC(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_32;
  }
  if ( !v18->max_length )
    goto LABEL_31;
  v18->m_Items[0] = (System_String_o *)v27;
  sub_B16F98((BattleServantConfConponent_o *)v18->m_Items, v27, v21, v22, v23, v24, v25, v26);
  v19 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v19 = (System_String_o *)sub_B170BC(StringLiteral_1223, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_32;
    v20 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_31;
  v18->m_Items[1] = (System_String_o *)v20;
  sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[1], v20, v21, v28, v29, v30, v31, v32);
  v19 = System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v38 = (System_Int32_array **)v19;
  if ( v19 )
  {
    v19 = (System_String_o *)sub_B170BC(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_32;
  }
  if ( v18->max_length <= 2 )
    goto LABEL_31;
  v18->m_Items[2] = (System_String_o *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[2], v38, v21, v33, v34, v35, v36, v37);
  v19 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v19 = (System_String_o *)sub_B170BC(StringLiteral_1223, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_32;
    v20 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v18->max_length <= 3 )
    goto LABEL_31;
  v18->m_Items[3] = (System_String_o *)v20;
  sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[3], v20, v21, v39, v40, v41, v42, v43);
  v54 = voceType;
  v19 = System_Int32__ToString((int32_t)&v54, 0LL);
  v49 = (System_Int32_array **)v19;
  if ( v19 )
  {
    v19 = (System_String_o *)sub_B170BC(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
    {
LABEL_32:
      sub_B170F4(v19);
      sub_B170A0();
    }
  }
  if ( v18->max_length <= 4 )
  {
LABEL_31:
    sub_B17100(v19, v20, v21);
    sub_B170A0();
  }
  v18->m_Items[4] = (System_String_o *)v49;
  sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[4], v49, v21, v44, v45, v46, v47, v48);
  v50 = System_String__Concat_43823856(v18, 0LL);
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      v50,
                                      (const MethodInfo_18C375C *)Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
  v53 = 0LL;
  if ( !EntityFromId_ServantVoiceEntity )
    return v53;
  if ( !result )
LABEL_33:
    sub_B170D4();
  return ServantVoiceEntity__getVoiceList_30036932(result, voceType, labelName, 0LL, 1, v51);
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_30014400(
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x2
  System_String_array **v16; // x2
  ServantVoiceEntity_array *v17; // x20
  System_String_array *v18; // x21
  __int64 v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x22
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x22
  System_String_o *v49; // x21
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v52; // x22
  unsigned __int64 v53; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x21
  __int64 v62; // x22
  ServantVoiceEntity_c *v63; // x8
  __int64 v64; // x10
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  bool v67; // nf
  int v69; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v70; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-48h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_40FCB12 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&ServantVoiceEntity___TypeInfo, v8);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&string___TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1223, v12);
    byte_40FCB12 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v70 = 0LL;
  v69 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
LABEL_51:
    sub_B170D4();
  }
  ServantLimitAddMaster__getVoiceIndex(
    MasterData_WarQuestSelectionMaster,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v69 = 1;
  v17 = (ServantVoiceEntity_array *)sub_B17014(ServantVoiceEntity___TypeInfo, 24LL, v15);
  do
  {
    v18 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v16);
    v19 = (__int64)System_Int32__ToString((int32_t)&voiceId, 0LL);
    if ( !v18 )
      goto LABEL_51;
    v26 = (System_Int32_array **)v19;
    if ( v19 )
    {
      v19 = sub_B170BC(v19, v18->obj.klass->_1.element_class);
      if ( !v19 )
      {
LABEL_50:
        sub_B170F4(v19);
        sub_B170A0();
      }
    }
    if ( !v18->max_length )
      goto LABEL_49;
    v18->m_Items[0] = (System_String_o *)v26;
    sub_B16F98((BattleServantConfConponent_o *)v18->m_Items, v26, v16, v21, v22, v23, v24, v25);
    v19 = StringLiteral_1223;
    if ( StringLiteral_1223 )
    {
      v19 = sub_B170BC(StringLiteral_1223, v18->obj.klass->_1.element_class);
      if ( !v19 )
        goto LABEL_50;
      v20 = (System_Int32_array **)StringLiteral_1223;
    }
    else
    {
      v20 = 0LL;
    }
    if ( v18->max_length <= 1 )
      goto LABEL_49;
    v18->m_Items[1] = (System_String_o *)v20;
    sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[1], v20, v16, v27, v28, v29, v30, v31);
    v19 = (__int64)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
    v37 = (System_Int32_array **)v19;
    if ( v19 )
    {
      v19 = sub_B170BC(v19, v18->obj.klass->_1.element_class);
      if ( !v19 )
        goto LABEL_50;
    }
    if ( v18->max_length <= 2 )
      goto LABEL_49;
    v18->m_Items[2] = (System_String_o *)v37;
    sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[2], v37, v16, v32, v33, v34, v35, v36);
    v19 = StringLiteral_1223;
    if ( StringLiteral_1223 )
    {
      v19 = sub_B170BC(StringLiteral_1223, v18->obj.klass->_1.element_class);
      if ( !v19 )
        goto LABEL_50;
      v20 = (System_Int32_array **)StringLiteral_1223;
    }
    else
    {
      v20 = 0LL;
    }
    if ( v18->max_length <= 3 )
    {
LABEL_49:
      sub_B17100(v19, v20, v16);
      sub_B170A0();
    }
    v18->m_Items[3] = (System_String_o *)v20;
    sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[3], v20, v16, v38, v39, v40, v41, v42);
    v19 = (__int64)System_Int32__ToString((int32_t)&v69, 0LL);
    v48 = (System_Int32_array **)v19;
    if ( v19 )
    {
      v19 = sub_B170BC(v19, v18->obj.klass->_1.element_class);
      if ( !v19 )
        goto LABEL_50;
    }
    if ( v18->max_length <= 4 )
      goto LABEL_49;
    v18->m_Items[4] = (System_String_o *)v48;
    sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[4], v48, v16, v43, v44, v45, v46, v47);
    v49 = System_String__Concat_43823856(v18, 0LL);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_51;
    klass = lookup->klass;
    v52 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v53;
        p_offset += 2;
        if ( v53 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_31:
      p_method = sub_AAFEF8(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   1LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
            v52,
            v49,
            &v70,
            *(_QWORD *)(p_method + 8));
    if ( (v19 & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_51;
      v61 = v70;
      v62 = v69;
      if ( !v70 )
        goto LABEL_41;
      v63 = ServantVoiceEntity_TypeInfo;
      v64 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v70 + 300LL) >= (unsigned int)v64
        && *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v70 + 200LL) + 8 * v64 - 8) == ServantVoiceEntity_TypeInfo )
      {
        v19 = sub_B170BC(v70, v17->obj.klass->_1.element_class);
        if ( !v19 )
          goto LABEL_50;
        v63 = ServantVoiceEntity_TypeInfo;
      }
      v65 = *(&v63->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v61 + 300LL) >= (unsigned int)v65 )
      {
        if ( *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v61 + 200LL) + 8 * v65 - 8) == v63 )
          v20 = (System_Int32_array **)v61;
        else
          v20 = 0LL;
      }
      else
      {
LABEL_41:
        v20 = 0LL;
      }
      if ( (unsigned int)v62 >= v17->max_length )
        goto LABEL_49;
      v66 = &v17->obj.klass + v62;
      v66[4] = (Il2CppClass *)v20;
      sub_B16F98((BattleServantConfConponent_o *)(v66 + 4), v20, v16, v56, v57, v58, v59, v60);
    }
    v67 = v69 - 23 < 0;
    ++v69;
  }
  while ( v67 != __OFSUB__(v69, 24) );
  return v17;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_30052428(
        ServantVoiceMaster_o *this,
        int32_t voiceType,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  __int64 v27; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_40FCB10 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&voiceType);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo, v13);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v14);
    byte_40FCB10 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceEntity__TypeInfo,
                                                                                                  *(_QWORD *)&voiceType,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_33;
    v27 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (ServantVoiceEntity_c *)v26->klass->_2.typeHierarchy[v27 - 1] != ServantVoiceEntity_TypeInfo )
    {
      sub_B173C8(v26);
LABEL_33:
      sub_B170D4();
    }
    if ( v26->fields.targetId == voiceType && v26->fields.missionTargetId == svtId )
    {
      if ( !v15 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        v26,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_30054132(
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x2
  System_String_array *v19; // x22
  System_String_o *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x23
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x23
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x23
  System_String_o *v51; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v54; // x21
  unsigned __int64 v55; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v58; // x5
  __int64 v59; // x10
  int32_t v61; // [xsp+Ch] [xbp-44h] BYREF
  ServantVoiceEntity_o *v62; // [xsp+10h] [xbp-40h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-38h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FCB13 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&voceType);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&string___TypeInfo, v14);
    sub_B16FFC(&StringLiteral_1223, v15);
    byte_40FCB13 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v62 = 0LL;
  v61 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_39;
  ServantLimitAddMaster__getVoiceIndex(
    MasterData_WarQuestSelectionMaster,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v19 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v18);
  v20 = System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v19 )
    goto LABEL_39;
  v28 = (System_Int32_array **)v20;
  if ( v20 )
  {
    v20 = (System_String_o *)sub_B170BC(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_41;
  }
  if ( !v19->max_length )
    goto LABEL_40;
  v19->m_Items[0] = (System_String_o *)v28;
  sub_B16F98((BattleServantConfConponent_o *)v19->m_Items, v28, v22, v23, v24, v25, v26, v27);
  v20 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v20 = (System_String_o *)sub_B170BC(StringLiteral_1223, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_41;
    v21 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_40;
  v19->m_Items[1] = (System_String_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[1], v21, v22, v29, v30, v31, v32, v33);
  v20 = System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v39 = (System_Int32_array **)v20;
  if ( v20 )
  {
    v20 = (System_String_o *)sub_B170BC(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_41;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_40;
  v19->m_Items[2] = (System_String_o *)v39;
  sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[2], v39, v22, v34, v35, v36, v37, v38);
  v20 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v20 = (System_String_o *)sub_B170BC(StringLiteral_1223, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_41;
    v21 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_40;
  v19->m_Items[3] = (System_String_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[3], v21, v22, v40, v41, v42, v43, v44);
  v61 = voceType;
  v20 = System_Int32__ToString((int32_t)&v61, 0LL);
  v50 = (System_Int32_array **)v20;
  if ( v20 )
  {
    v20 = (System_String_o *)sub_B170BC(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
    {
LABEL_41:
      sub_B170F4(v20);
      sub_B170A0();
    }
  }
  if ( v19->max_length <= 4 )
  {
LABEL_40:
    sub_B17100(v20, v21, v22);
    sub_B170A0();
  }
  v19->m_Items[4] = (System_String_o *)v50;
  sub_B16F98((BattleServantConfConponent_o *)&v19->m_Items[4], v50, v22, v45, v46, v47, v48, v49);
  v51 = System_String__Concat_43823856(v19, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_39;
  klass = lookup->klass;
  v54 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v55;
      p_offset += 2;
      if ( v55 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_30:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))p_method)(
          v54,
          v51,
          &v62,
          *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    if ( v62 )
    {
      v59 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v62->klass->_2.bitflags2 + 1) >= (unsigned int)v59
        && (ServantVoiceEntity_c *)v62->klass->_2.typeHierarchy[v59 - 1] == ServantVoiceEntity_TypeInfo )
      {
        return ServantVoiceEntity__getVoiceList_30036932(v62, voceType, labelName, 0LL, 1, v58);
      }
    }
LABEL_39:
    sub_B170D4();
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
    return ServantVoiceEntity__getVoiceList_30036932((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_30036932((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
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

  if ( (byte_40FCB16 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    byte_40FCB16 = 1;
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
    return ServantVoiceEntity__getVoiceList_30036932((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_30036932((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_30036348((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
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
    return ServantVoiceEntity__getVoiceList_30036348((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_30056592(
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
    return ServantVoiceEntity__getVoiceList_30036348((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ServantChangeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantChangeEntity_o *v6; // x0

  if ( (byte_40FCB0E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FCB0E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantChangeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v6 = ServantChangeMaster__GetEnableEntity(MasterData_WarQuestSelectionMaster, svtId, 0LL);
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserGameEntity_o *SelfUserGame; // x22
  WebViewManager_o *v15; // x0
  ServantVoiceMaster_o *v16; // x0
  const MethodInfo *v17; // x4
  UserServantCollectionEntity_o *Entity; // x0
  ServantVoiceEntity_o *v19; // x21
  WebViewManager_o *v20; // x0
  UserServantCollectionMaster_o *v21; // x0
  int32_t FriendShipRank; // w0
  const MethodInfo *v23; // x6
  int32_t v24; // w19
  int32_t v25; // w20
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_30036348; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCB15 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&limitCnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FCB15 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  ServantLimitAddMaster__getVoiceIndex(
    MasterData_WarQuestSelectionMaster,
    &voicePrefix[1],
    voicePrefix,
    SvtVoiceId,
    limitCnt,
    0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_20;
  v16 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v15,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !v16 )
    goto LABEL_20;
  Entity = (UserServantCollectionEntity_o *)ServantVoiceMaster__GetEntity(v16, voicePrefix[1], voicePrefix[0], 1, v17);
  if ( !Entity )
    return (char)Entity;
  v19 = (ServantVoiceEntity_o *)Entity;
  v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v20
    || (v21 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v20,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !v21 )
  {
LABEL_20:
    sub_B170D4();
  }
  Entity = UserServantCollectionMaster__GetEntity(v21, SelfUserGame->fields.userId, svtId, 0LL);
  if ( Entity )
  {
    FriendShipRank = UserServantCollectionEntity__getFriendShipRank(Entity, 0LL);
    v24 = oldFriendShipRank + 1;
    if ( v24 > FriendShipRank )
    {
LABEL_17:
      LOBYTE(Entity) = 0;
    }
    else
    {
      v25 = FriendShipRank;
      while ( 1 )
      {
        VoiceList_30036348 = ServantVoiceEntity__getVoiceList_30036348(v19, 1, 3, v24, 0LL, -1, v23);
        if ( VoiceList_30036348 )
        {
          if ( VoiceList_30036348->fields._size > 0 )
            break;
        }
        if ( ++v24 > v25 )
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
    sub_B170D4();
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}