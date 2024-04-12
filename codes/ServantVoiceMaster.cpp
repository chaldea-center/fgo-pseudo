void __fastcall ServantVoiceMaster___ctor(ServantVoiceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3347 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
    byte_42B3347 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    106,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string___ctor__);
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

  if ( (byte_42B3345 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
    byte_42B3345 = 1;
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&type);
  return (ServantVoiceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__GetEntity__);
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

  if ( (byte_42B3351 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
    sub_B52984(&Method_System_Func_ServantVoiceEntity__bool___ctor__);
    sub_B52984(&System_Func_ServantVoiceEntity__bool__TypeInfo);
    sub_B52984(&Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__);
    sub_B52984(&ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
    byte_42B3351 = 1;
  }
  v5 = (ServantVoiceMaster___c__DisplayClass27_0_o *)sub_B52A54(ServantVoiceMaster___c__DisplayClass27_0_TypeInfo);
  ServantVoiceMaster___c__DisplayClass27_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.svtId = svtId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_ServantVoiceEntity___);
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ServantVoiceEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ServantVoiceMaster___c__DisplayClass27_0__GetSvtEquipVoiceEntity_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_ServantVoiceEntity__bool___ctor__);
  return (ServantVoiceEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   v8,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoiceEntity___);
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

  if ( (byte_42B3346 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
    byte_42B3346 = 1;
  }
  PK = ServantVoiceEntity__CreatePK(id, voicePrefix, type, *(const MethodInfo **)&voicePrefix);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantVoiceMaster__ServantVoiceEntity__string__TryGetEntity__);
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
    return ServantVoiceEntity__getVoiceList_30976504((ServantVoiceEntity_o *)result, 6, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_30975920((ServantVoiceEntity_o *)result, 2, 23, costumeId, 0LL, -1, v7);
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
  __int64 v48; // x3
  DataManager_c *klass; // x8
  DataManager_o *v50; // x19
  unsigned __int64 v51; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v53; // x0
  __int64 v54; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  int32_t v58; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v59; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B3349 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&ServantVoiceEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B3349 = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v59 = 0LL;
  v58 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL
    || (ServantLimitAddMaster__getVoiceIndex(
          (ServantLimitAddMaster_o *)Instance,
          &voiceId,
          &voicePrefix,
          svtId,
          limitCount,
          0LL),
        v11 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL),
        !v11) )
  {
LABEL_41:
    sub_B52A5C(Instance, v10);
  }
  v18 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
  }
  if ( !v11->max_length )
    goto LABEL_40;
  v11->m_Items[0] = (System_String_o *)v18;
  sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v18, v12, v13, v14, v15, v16, v17);
  Instance = (DataManager_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
    v25 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_40;
  v11->m_Items[1] = (System_String_o *)v25;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v32 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_40;
  v11->m_Items[2] = (System_String_o *)v32;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_42;
    v39 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v11->max_length <= 3 )
    goto LABEL_40;
  v11->m_Items[3] = (System_String_o *)v39;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v58 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v58, 0LL);
  v46 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_42:
      v57 = sub_B52A7C(Instance);
      sub_B52A28(v57, 0LL);
    }
  }
  if ( v11->max_length <= 4 )
  {
LABEL_40:
    v56 = sub_B52A88(Instance);
    sub_B52A28(v56, 0LL);
  }
  v11->m_Items[4] = (System_String_o *)v46;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v47 = System_String__Concat_44648440(v11, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_41;
  klass = Instance->klass;
  v50 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v51;
      p_offset += 2;
      if ( v51 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v53 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_30:
    v53 = sub_AEB880(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            1LL,
            v48);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v53)(
          v50,
          v47,
          &v59,
          *(_QWORD *)(v53 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v59 )
    return 0LL;
  v54 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v54 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v59->klass->_2.typeHierarchy[v54 - 1] == ServantVoiceEntity_TypeInfo )
    return v59;
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
  __int64 v48; // x3
  DataManager_c *klass; // x8
  DataManager_o *v50; // x19
  unsigned __int64 v51; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v53; // x0
  __int64 v54; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  int32_t v58; // [xsp+4h] [xbp-3Ch] BYREF
  ServantVoiceEntity_o *v59; // [xsp+8h] [xbp-38h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-28h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B334B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&ServantVoiceEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B334B = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v59 = 0LL;
  v58 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v11 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v11 )
LABEL_43:
    sub_B52A5C(Instance, v10);
  v18 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
  }
  if ( !v11->max_length )
    goto LABEL_42;
  v11->m_Items[0] = (System_String_o *)v18;
  sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v18, v12, v13, v14, v15, v16, v17);
  Instance = (DataManager_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
    v25 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_42;
  v11->m_Items[1] = (System_String_o *)v25;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v32 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_42;
  v11->m_Items[2] = (System_String_o *)v32;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v11->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_44;
    v39 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v11->max_length <= 3 )
    goto LABEL_42;
  v11->m_Items[3] = (System_String_o *)v39;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v58 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v58, 0LL);
  v46 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v11->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_44:
      v57 = sub_B52A7C(Instance);
      sub_B52A28(v57, 0LL);
    }
  }
  if ( v11->max_length <= 4 )
  {
LABEL_42:
    v56 = sub_B52A88(Instance);
    sub_B52A28(v56, 0LL);
  }
  v11->m_Items[4] = (System_String_o *)v46;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  v47 = System_String__Concat_44648440(v11, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_43;
  klass = Instance->klass;
  v50 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v51;
      p_offset += 2;
      if ( v51 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v53 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_32:
    v53 = sub_AEB880(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            1LL,
            v48);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v53)(
          v50,
          v47,
          &v59,
          *(_QWORD *)(v53 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v59 )
    return 0LL;
  v54 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v54 )
    return 0LL;
  if ( (ServantVoiceEntity_c *)v59->klass->_2.typeHierarchy[v54 - 1] == ServantVoiceEntity_TypeInfo )
    return v59;
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

  if ( (byte_42B334E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B334E = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  result = 0LL;
  v55 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  v13 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v13 )
    goto LABEL_33;
  v20 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
  }
  if ( !v13->max_length )
    goto LABEL_31;
  v13->m_Items[0] = (System_String_o *)v20;
  sub_B52920((BattleServantConfConponent_o *)v13->m_Items, v20, v14, v15, v16, v17, v18, v19);
  Instance = (DataManager_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
    v27 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_31;
  v13->m_Items[1] = (System_String_o *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v34 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_31;
  v13->m_Items[2] = (System_String_o *)v34;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
  Instance = (DataManager_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_32;
    v41 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_31;
  v13->m_Items[3] = (System_String_o *)v41;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  v55 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v55, 0LL);
  v48 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_32:
      v54 = sub_B52A7C(Instance);
      sub_B52A28(v54, 0LL);
    }
  }
  if ( v13->max_length <= 4 )
  {
LABEL_31:
    v53 = sub_B52A88(Instance);
    sub_B52A28(v53, 0LL);
  }
  v13->m_Items[4] = (System_String_o *)v48;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[4], v48, v42, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_44648440(v13, 0LL);
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      v49,
                                      (const MethodInfo_1A4F65C *)Method_DataMasterBase_TryGetEntityFromId_ServantVoiceEntity___);
  v52 = 0LL;
  if ( !EntityFromId_ServantVoiceEntity )
    return v52;
  Instance = (DataManager_o *)result;
  if ( !result )
LABEL_33:
    sub_B52A5C(Instance, v12);
  return ServantVoiceEntity__getVoiceList_30976504(result, voceType, labelName, 0LL, 1, v50);
}


ServantVoiceEntity_array *__fastcall ServantVoiceMaster__getEntity_30952508(
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
  __int64 v47; // x3
  __int64 v48; // x8
  __int64 v49; // x22
  unsigned __int64 v50; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v51; // x11
  __int64 v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x21
  __int64 v60; // x22
  ServantVoiceEntity_c *v61; // x8
  __int64 v62; // x10
  __int64 v63; // x10
  System_Int32_array **v64; // x1
  Il2CppClass **v65; // x0
  bool v66; // nf
  __int64 v68; // x0
  __int64 v69; // x0
  int v70; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v71; // [xsp+10h] [xbp-50h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-48h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42B334C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&ServantVoiceEntity___TypeInfo);
    sub_B52984(&ServantVoiceEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B334C = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v71 = 0LL;
  v70 = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_51:
    sub_B52A5C(Instance, v8);
  }
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v70 = 1;
  v9 = (ServantVoiceEntity_array *)sub_B5299C(ServantVoiceEntity___TypeInfo, 24LL);
  do
  {
    v10 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&voiceId, 0LL);
    if ( !v10 )
      goto LABEL_51;
    v17 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B52A44(Instance, v10->obj.klass->_1.element_class);
      if ( !Instance )
      {
LABEL_50:
        v69 = sub_B52A7C(Instance);
        sub_B52A28(v69, 0LL);
      }
    }
    if ( !v10->max_length )
      goto LABEL_49;
    v10->m_Items[0] = (System_String_o *)v17;
    sub_B52920((BattleServantConfConponent_o *)v10->m_Items, v17, v11, v12, v13, v14, v15, v16);
    Instance = StringLiteral_1240/*":"*/;
    if ( StringLiteral_1240/*":"*/ )
    {
      Instance = sub_B52A44(StringLiteral_1240/*":"*/, v10->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
      v24 = (System_Int32_array **)StringLiteral_1240/*":"*/;
    }
    else
    {
      v24 = 0LL;
    }
    if ( v10->max_length <= 1 )
      goto LABEL_49;
    v10->m_Items[1] = (System_String_o *)v24;
    sub_B52920((BattleServantConfConponent_o *)&v10->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
    Instance = (__int64)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
    v31 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B52A44(Instance, v10->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
    }
    if ( v10->max_length <= 2 )
      goto LABEL_49;
    v10->m_Items[2] = (System_String_o *)v31;
    sub_B52920((BattleServantConfConponent_o *)&v10->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
    Instance = StringLiteral_1240/*":"*/;
    if ( StringLiteral_1240/*":"*/ )
    {
      Instance = sub_B52A44(StringLiteral_1240/*":"*/, v10->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
      v38 = (System_Int32_array **)StringLiteral_1240/*":"*/;
    }
    else
    {
      v38 = 0LL;
    }
    if ( v10->max_length <= 3 )
    {
LABEL_49:
      v68 = sub_B52A88(Instance);
      sub_B52A28(v68, 0LL);
    }
    v10->m_Items[3] = (System_String_o *)v38;
    sub_B52920((BattleServantConfConponent_o *)&v10->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
    Instance = (__int64)System_Int32__ToString((int32_t)&v70, 0LL);
    v45 = (System_Int32_array **)Instance;
    if ( Instance )
    {
      Instance = sub_B52A44(Instance, v10->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_50;
    }
    if ( v10->max_length <= 4 )
      goto LABEL_49;
    v10->m_Items[4] = (System_String_o *)v45;
    sub_B52920((BattleServantConfConponent_o *)&v10->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
    v46 = System_String__Concat_44648440(v10, 0LL);
    Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_51;
    v48 = *(_QWORD *)Instance;
    v49 = Instance;
    if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
    {
      v50 = 0LL;
      v51 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *(v51 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v50;
        v51 += 2;
        if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
          goto LABEL_31;
      }
      v52 = v48 + 16LL * (*(_DWORD *)v51 + 1) + 312;
    }
    else
    {
LABEL_31:
      v52 = sub_AEB880(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v47);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, __int64 *, _QWORD))v52)(
                 v49,
                 v46,
                 &v71,
                 *(_QWORD *)(v52 + 8));
    if ( (Instance & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_51;
      v59 = v71;
      v60 = v70;
      if ( !v71 )
        goto LABEL_41;
      v61 = ServantVoiceEntity_TypeInfo;
      v62 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v71 + 300LL) >= (unsigned int)v62
        && *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v71 + 200LL) + 8 * v62 - 8) == ServantVoiceEntity_TypeInfo )
      {
        Instance = sub_B52A44(v71, v9->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_50;
        v61 = ServantVoiceEntity_TypeInfo;
      }
      v63 = *(&v61->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v59 + 300LL) >= (unsigned int)v63 )
      {
        if ( *(ServantVoiceEntity_c **)(*(_QWORD *)(*(_QWORD *)v59 + 200LL) + 8 * v63 - 8) == v61 )
          v64 = (System_Int32_array **)v59;
        else
          v64 = 0LL;
      }
      else
      {
LABEL_41:
        v64 = 0LL;
      }
      if ( (unsigned int)v60 >= v9->max_length )
        goto LABEL_49;
      v65 = &v9->obj.klass + v60;
      v65[4] = (Il2CppClass *)v64;
      sub_B52920((BattleServantConfConponent_o *)(v65 + 4), v64, v53, v54, v55, v56, v57, v58);
    }
    v66 = v70 - 23 < 0;
    ++v70;
  }
  while ( v66 != __OFSUB__(v70, 24) );
  return v9;
}


System_Collections_Generic_List_ServantVoiceEntity__o *__fastcall ServantVoiceMaster__getEntity_30990800(
        ServantVoiceMaster_o *this,
        int32_t voiceType,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0

  if ( (byte_42B334A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
    sub_B52984(&ServantVoiceEntity_TypeInfo);
    byte_42B334A = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_33;
    v24 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (ServantVoiceEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != ServantVoiceEntity_TypeInfo )
    {
      sub_B52D50(v22);
LABEL_33:
      sub_B52A5C(v22, v23);
    }
    if ( v22->fields.targetId == voiceType && v22->fields.missionTargetId == svtId )
    {
      if ( !v7 )
        sub_B52A5C(v22, ServantVoiceEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v22,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceEntity__Add__);
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return (System_Collections_Generic_List_ServantVoiceEntity__o *)v7;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getEntity_30992504(
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
  __int64 v50; // x3
  DataManager_c *klass; // x8
  DataManager_o *v52; // x21
  unsigned __int64 v53; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v55; // x0
  const MethodInfo *v56; // x5
  __int64 v57; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  int32_t v61; // [xsp+Ch] [xbp-44h] BYREF
  ServantVoiceEntity_o *v62; // [xsp+10h] [xbp-40h] BYREF
  int32_t voicePrefix; // [xsp+18h] [xbp-38h] BYREF
  int32_t voiceId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B334D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&ServantVoiceEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B334D = 1;
  }
  voiceId = 0;
  voicePrefix = 0;
  v62 = 0LL;
  v61 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_39;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)Instance,
    &voiceId,
    &voicePrefix,
    svtId,
    limitCount,
    0LL);
  v13 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voiceId, 0LL);
  if ( !v13 )
    goto LABEL_39;
  v20 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
  }
  if ( !v13->max_length )
    goto LABEL_40;
  v13->m_Items[0] = (System_String_o *)v20;
  sub_B52920((BattleServantConfConponent_o *)v13->m_Items, v20, v14, v15, v16, v17, v18, v19);
  Instance = (DataManager_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
    v27 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_40;
  v13->m_Items[1] = (System_String_o *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&voicePrefix, 0LL);
  v34 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_40;
  v13->m_Items[2] = (System_String_o *)v34;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
  Instance = (DataManager_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v13->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_41;
    v41 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_40;
  v13->m_Items[3] = (System_String_o *)v41;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  v61 = voceType;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v61, 0LL);
  v48 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B52A44(Instance, v13->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_41:
      v60 = sub_B52A7C(Instance);
      sub_B52A28(v60, 0LL);
    }
  }
  if ( v13->max_length <= 4 )
  {
LABEL_40:
    v59 = sub_B52A88(Instance);
    sub_B52A28(v59, 0LL);
  }
  v13->m_Items[4] = (System_String_o *)v48;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[4], v48, v42, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_44648440(v13, 0LL);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_39;
  klass = Instance->klass;
  v52 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v53;
      p_offset += 2;
      if ( v53 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v55 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_30:
    v55 = sub_AEB880(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            1LL,
            v50);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, ServantVoiceEntity_o **, _QWORD))v55)(
          v52,
          v49,
          &v62,
          *(_QWORD *)(v55 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)v62;
    if ( v62 )
    {
      v57 = *(&ServantVoiceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v62->klass->_2.bitflags2 + 1) >= (unsigned int)v57
        && (ServantVoiceEntity_c *)v62->klass->_2.typeHierarchy[v57 - 1] == ServantVoiceEntity_TypeInfo )
      {
        return ServantVoiceEntity__getVoiceList_30976504(v62, voceType, labelName, 0LL, 1, v56);
      }
    }
LABEL_39:
    sub_B52A5C(Instance, v12);
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
    return ServantVoiceEntity__getVoiceList_30976504((ServantVoiceEntity_o *)result, 5, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_30976504((ServantVoiceEntity_o *)result, 9, labelName, 0LL, 1, v7);
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

  if ( (byte_42B3350 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_42B3350 = 1;
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
    return ServantVoiceEntity__getVoiceList_30976504((ServantVoiceEntity_o *)result, 8, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_30976504((ServantVoiceEntity_o *)result, 7, labelName, 0LL, 1, v7);
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
    return ServantVoiceEntity__getVoiceList_30975920((ServantVoiceEntity_o *)result, 1, 3, friendShipRank, 0LL, -1, v7);
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
    return ServantVoiceEntity__getVoiceList_30975920((ServantVoiceEntity_o *)result, 2, 9, limitCount, 0LL, -1, v7);
  return result;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceMaster__getSpecificLimitCntUpVoiceList_30994964(
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
    return ServantVoiceEntity__getVoiceList_30975920((ServantVoiceEntity_o *)result, 2, 9, limitCount2, 0LL, -1, v7);
  return result;
}


int32_t __fastcall ServantVoiceMaster__getSvtVoiceId(int32_t svtId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ServantChangeEntity_o *v5; // x0

  if ( (byte_42B3348 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3348 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
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
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_30975920; // x0
  int32_t voicePrefix[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B334F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B334F = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, *(const MethodInfo **)&limitCnt);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        !SelfUserGame)
    || !Instance )
  {
LABEL_20:
    sub_B52A5C(Instance, v9);
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
        VoiceList_30975920 = ServantVoiceEntity__getVoiceList_30975920(v13, 1, 3, v16, 0LL, -1, v15);
        if ( VoiceList_30975920 )
        {
          if ( VoiceList_30975920->fields._size > 0 )
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
    sub_B52A5C(this, 0LL);
  return x->fields.type == 3 && x->fields.id == this->fields.svtId;
}