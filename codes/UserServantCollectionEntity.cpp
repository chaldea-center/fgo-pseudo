void UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31937 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31937 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


void UserServantCollectionEntity___ctor_43829284(
        UserServantCollectionEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Int32_array *tdPlayed; // x1
  struct System_Int32_array *costumeIds; // x1
  GrandQuestFolderBoardItem_o *p_costumeIds; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D31938 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31938 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1C93D2C(v5, v6);
  this->fields.userId = e->fields.userId;
  this->fields.svtId = e->fields.svtId;
  *(_OWORD *)&this->fields.status = *(_OWORD *)&e->fields.status;
  *(_OWORD *)&this->fields.maxLimitCount = *(_OWORD *)&e->fields.maxLimitCount;
  *(_QWORD *)&this->fields.treasureDeviceLv1 = *(_QWORD *)&e->fields.treasureDeviceLv1;
  this->fields.flag = e->fields.flag;
  this->fields.friendship = e->fields.friendship;
  this->fields.friendshipRank = e->fields.friendshipRank;
  *(_OWORD *)&this->fields.voicePlayed = *(_OWORD *)&e->fields.voicePlayed;
  tdPlayed = e->fields.tdPlayed;
  this->fields.tdPlayed = tdPlayed;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tdPlayed, (int32_t)tdPlayed, v7, v8, v9, v10, v11, v12);
  costumeIds = e->fields.costumeIds;
  this->fields.costumeIds = costumeIds;
  p_costumeIds = (GrandQuestFolderBoardItem_o *)&this->fields.costumeIds;
  sub_1C93A78(p_costumeIds, (int32_t)costumeIds, v16, v17, v18, v19, v20, v21);
  p_costumeIds->monitor = (void *)e->fields.createdAt;
}


void UserServantCollectionEntity___ctor_43829492(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int128 v7; // q0

  if ( (byte_4D31939 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31939 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  *(_QWORD *)&v7 = 0x100000001LL;
  *((_QWORD *)&v7 + 1) = 0x100000001LL;
  this->fields.status = 0;
  *(_OWORD *)&this->fields.skillLv1 = v7;
  this->fields.svtCommonFlag = 0;
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
}


bool UserServantCollectionEntity__CheckSvtCommonFlag(int32_t svtCommonFlag, int32_t flagKind, const MethodInfo *method)
{
  return (flagKind & svtCommonFlag) != 0;
}


System_String_o *UserServantCollectionEntity__CreatePK(int64_t userId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4D31936 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4D31936 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_31A2CCC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserServantCollectionEntity__CreatePrimaryKey(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int64_t userId; // x20
  __int64 v4; // x21
  __int64 v5; // x19
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4D31935 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31935 = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v9, 0);
  return UserServantCollectionEntity__CreatePK(userId, v6, v7);
}


void UserServantCollectionEntity__GetAppendPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v14; // x26
  __int64 v15; // x27
  ServantAppendPassiveSkillMaster_o *v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4D31953 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31953 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v19, 0);
  if ( !v16 )
    sub_1C93D2C(v17, v18);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v16,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v17,
    this->fields.userId,
    0,
    0);
}


System_Int32_array *UserServantCollectionEntity__GetCommandCardParam(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)UserServantCollectionEntity__GetUserCommandCardEntity(this, method);
  if ( result )
    return *(System_Int32_array **)&result->m_Items[12];
  return result;
}


int32_t UserServantCollectionEntity__GetLimitCountStage(
        UserServantCollectionEntity_o *this,
        bool hasRewardStage,
        const MethodInfo *method)
{
  int32_t v5; // w20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  Il2CppObject *Entity; // x0
  __int64 v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4D31956 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31956 = 1;
  }
  v5 = LimitCountUtility__ConvertLimitCountToStage(this->fields.maxLimitCount, hasRewardStage, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v13, 0);
  if ( !v9
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v9,
                   (int32_t)Entity,
                   (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C93D2C(Entity, v11);
  }
  return ServantEntity__GetDispLimitCountFromUserServantCollection((ServantEntity_o *)Entity, v5, 0);
}


System_Int32_array *UserServantCollectionEntity__GetLimitCountStageList(
        UserServantCollectionEntity_o *this,
        bool hasRewardStage,
        const MethodInfo *method)
{
  bool v5; // w20
  int32_t v6; // w21
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *CostumeList; // x19
  System_Collections_Generic_IEnumerable_int__o *LimitCountStageList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4D31957 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D31957 = 1;
  }
  v5 = hasRewardStage;
  v6 = LimitCountUtility__ConvertLimitCountToStage(this->fields.maxLimitCount, v5, 0);
  CostumeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantCollectionEntity__getCostumeList(
                                                                       this,
                                                                       v7);
  if ( !CostumeList )
    CostumeList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93B7C(int___TypeInfo, 0);
  LimitCountStageList = LimitCountUtility__GetLimitCountStageList(v6, v5, 0);
  v10 = System_Linq_Enumerable__Concat_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)LimitCountStageList,
          CostumeList,
          (const MethodInfo_31C09E4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v10,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *UserServantCollectionEntity__GetLimitCountStageList_43844072(
        UserServantCollectionEntity_o *this,
        int32_t lv,
        int32_t limitCount,
        bool hasRewardStage,
        const MethodInfo *method)
{
  bool v9; // w21
  int32_t v10; // w23
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *CostumeList_43838708; // x19
  System_Collections_Generic_IEnumerable_int__o *LimitCountStageList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D31958 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D31958 = 1;
  }
  v9 = hasRewardStage;
  v10 = LimitCountUtility__ConvertLimitCountToStage(limitCount, v9, 0);
  CostumeList_43838708 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantCollectionEntity__getCostumeList_43838708(
                                                                                this,
                                                                                lv,
                                                                                limitCount,
                                                                                v11);
  if ( !CostumeList_43838708 )
    CostumeList_43838708 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93B7C(int___TypeInfo, 0);
  LimitCountStageList = LimitCountUtility__GetLimitCountStageList(v10, v9, 0);
  v14 = System_Linq_Enumerable__Concat_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)LimitCountStageList,
          CostumeList_43838708,
          (const MethodInfo_31C09E4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v14,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


ServantOverwriteStatus_o *UserServantCollectionEntity__GetOverwriteStatus(
        UserServantCollectionEntity_o *this,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o *overwriteStatusMap; // x0
  struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o **p_overwriteStatusMap; // x21
  System_Collections_Generic_Dictionary_int__object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  ServantOverwriteStatus_o *v15; // x22

  if ( (byte_4D31954 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo);
    sub_1C93AD4(&ServantOverwriteStatus_TypeInfo);
    byte_4D31954 = 1;
  }
  p_overwriteStatusMap = &this->fields.overwriteStatusMap;
  overwriteStatusMap = this->fields.overwriteStatusMap;
  if ( !overwriteStatusMap )
  {
    v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v7,
      (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus___ctor__);
    *p_overwriteStatusMap = (struct System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__o *)v7;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteStatusMap,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    overwriteStatusMap = *p_overwriteStatusMap;
    if ( !*p_overwriteStatusMap )
      goto LABEL_10;
  }
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)overwriteStatusMap,
          selectedLimitCount,
          (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__ContainsKey__) )
  {
    v15 = (ServantOverwriteStatus_o *)sub_1C93D20(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_34688804(v15, this, selectedLimitCount, 0);
    overwriteStatusMap = this->fields.overwriteStatusMap;
    if ( !overwriteStatusMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)overwriteStatusMap,
      selectedLimitCount,
      (Il2CppObject *)v15,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__set_Item__);
  }
  overwriteStatusMap = *p_overwriteStatusMap;
  if ( !*p_overwriteStatusMap )
LABEL_10:
    sub_1C93D2C(overwriteStatusMap, v14);
  return (ServantOverwriteStatus_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       (System_Collections_Generic_Dictionary_int__object__o *)overwriteStatusMap,
                                       selectedLimitCount,
                                       (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__ServantOverwriteStatus__get_Item__);
}


void UserServantCollectionEntity__GetPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispSvtId,
        int32_t dispLimitCount,
        bool isOwner,
        bool useDatabaseGrandStatus,
        const MethodInfo *method)
{
  int32_t friendshipRank; // w27
  int32_t maxLimitCount; // w22
  __int64 v17; // x1
  bool IsGrandServant; // w28
  long double v19; // q0
  __int64 v20; // x8
  __int64 v21; // x0
  void *MasterData_object; // x0
  bool v23; // w24
  BalanceConfig_c *v24; // x0
  System_Int32_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_String_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_String_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *v46; // x19
  Il2CppObject *v47; // x26
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int v54; // w8
  int v55; // w25
  __int64 v56; // x8
  int32_t v57; // w27
  NetworkManager_c *v58; // x0
  int64_t userIdNumber; // x22
  __int64 v60; // x23
  __int64 v61; // x28
  int32_t v62; // w4
  int32_t v63; // w2
  __int64 v64; // x22
  __int64 v65; // x8
  unsigned __int64 v66; // x23
  System_Int32_array *v67; // x8
  int max_length; // w9
  unsigned int v69; // w10
  __int64 v70; // x28
  char *v71; // x10
  _DWORD *v72; // x10
  int v73; // t1
  System_String_array *v74; // x8
  System_String_array *v75; // x9
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  int *v88; // [xsp+40h] [xbp-90h]
  UserEventServantPointMaster_o *Master_object; // [xsp+50h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4D31943 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string___TypeInfo);
    byte_4D31943 = 1;
  }
  entity = 0;
  if ( isOwner )
    friendshipRank = BasicHelper__DecryptValue_44831460(this->fields.friendshipRank, 0);
  else
    friendshipRank = 0;
  if ( dispLimitCount < 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0);
  }
  IsGrandServant = UserServantCollectionEntity__IsGrandServant(this, (const MethodInfo *)idList);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C69B68(v19);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C69B68(v19);
  MasterData_object = **(void ***)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_object )
    goto LABEL_72;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    (ServantPassiveSkillMaster_o *)MasterData_object,
    idList,
    titleList,
    explanationList,
    dispSvtId,
    this->fields.userId,
    this->fields.maxLv,
    this->fields.maxLimitCount,
    dispLimitCount,
    friendshipRank,
    -1,
    isOwner,
    0,
    IsGrandServant && useDatabaseGrandStatus,
    0);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_object )
    goto LABEL_72;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        dispSvtId,
                        (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !MasterData_object )
    goto LABEL_72;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)MasterData_object, 0) )
    return;
  v23 = *idList == 0;
  if ( !*idList )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    v25 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, (unsigned int)v24->static_fields->SvtPassiveSkillListMax);
    *idList = v25;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)idList, (int32_t)v25, v26, v27, v28, v29, v30, v31);
    v32 = (System_String_array *)sub_1C93B7C(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v32;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v32, v33, v34, v35, v36, v37, v38);
    v39 = (System_String_array *)sub_1C93B7C(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v39;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v46 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v47 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  MasterData_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !MasterData_object
    || (MasterData_object = EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 12, 0, 0, 0)) == 0 )
  {
LABEL_72:
    sub_1C93D2C(MasterData_object, v17);
  }
  v54 = *((_DWORD *)MasterData_object + 6);
  if ( v54 >= 1 )
  {
    v55 = 0;
    v88 = (int *)MasterData_object;
    while ( 1 )
    {
      if ( v55 >= (unsigned int)v54 )
        goto LABEL_71;
      v56 = *((_QWORD *)MasterData_object + v55 + 4);
      if ( !v56 )
        goto LABEL_72;
      v57 = *(_DWORD *)(v56 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      v58 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v58 = NetworkManager_TypeInfo;
      }
      userIdNumber = v58->static_fields->userIdNumber;
      v60 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v93.fields.currentCryptoKey = v60;
      *(_QWORD *)&v93.fields.fakeValue = v61;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v93, 0);
      MasterData_object = Master_object;
      if ( !Master_object )
        goto LABEL_72;
      MasterData_object = (void *)UserEventServantPointMaster__TryGetEntity(
                                    Master_object,
                                    &entity,
                                    userIdNumber,
                                    v57,
                                    v62,
                                    0);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        MasterData_object = entity;
        if ( !entity )
          goto LABEL_72;
        MasterData_object = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0);
        v63 = (int)MasterData_object;
      }
      else
      {
        v63 = 0;
      }
      if ( !v46 )
        goto LABEL_72;
      MasterData_object = EventServantPointRankMaster__GetEnableEntity(
                            (EventServantPointRankMaster_o *)v46,
                            v57,
                            v63,
                            dispSvtId,
                            0);
      if ( MasterData_object )
      {
        v64 = *((_QWORD *)MasterData_object + 4);
        if ( !v64 )
          goto LABEL_72;
        v65 = *(_QWORD *)(v64 + 24);
        if ( (int)v65 >= 1 )
          break;
      }
LABEL_67:
      MasterData_object = v88;
      ++v55;
      v54 = v88[6];
      if ( v55 >= v54 )
        goto LABEL_68;
    }
    v66 = 0;
    while ( v66 < (unsigned int)v65 )
    {
      v67 = *idList;
      if ( !*idList )
        goto LABEL_72;
      max_length = v67->max_length;
      if ( max_length >= 1 )
      {
        v17 = *(unsigned int *)(v64 + 4 * v66 + 32);
        v69 = 0;
        while ( 1 )
        {
          if ( v69 >= max_length )
            goto LABEL_71;
          v70 = (int)v69;
          v71 = (char *)v67 + 4 * (int)v69;
          v73 = *((_DWORD *)v71 + 8);
          v72 = v71 + 32;
          if ( !v73 )
            break;
          v69 = v70 + 1;
          if ( (int)v70 + 1 >= max_length )
            goto LABEL_66;
        }
        *v72 = v17;
        if ( !v47 )
          goto LABEL_72;
        MasterData_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v47,
                              v17,
                              (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v74 = *titleList;
        if ( !*titleList )
          goto LABEL_72;
        v75 = *explanationList;
        if ( !*explanationList || !MasterData_object )
          goto LABEL_72;
        if ( (unsigned int)v70 >= LODWORD(v74->max_length) || (unsigned int)v70 >= LODWORD(v75->max_length) )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)MasterData_object,
          &v74->m_Items[v70],
          &v75->m_Items[v70],
          0,
          0);
        v23 = 0;
      }
LABEL_66:
      LODWORD(v65) = *(_DWORD *)(v64 + 24);
      if ( (__int64)++v66 >= (int)v65 )
        goto LABEL_67;
    }
LABEL_71:
    sub_1C93D34(MasterData_object);
  }
LABEL_68:
  if ( v23 )
  {
    *idList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)idList, 0, v48, v49, v50, v51, v52, v53);
    *titleList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)titleList, 0, v76, v77, v78, v79, v80, v81);
    *explanationList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)explanationList, 0, v82, v83, v84, v85, v86, v87);
  }
}


System_Collections_Generic_List_int__o *UserServantCollectionEntity__GetSkillChangeCostumeList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  System_Collections_Generic_List_int__o *v6; // x21
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v8; // x25
  __int64 v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x0
  System_Func_object__bool__o *v17; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4D31952 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_ServantSkillReleaseEntity___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_1C93AD4(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_UserServantCollectionEntity___c__DisplayClass72_0__GetSkillChangeCostumeList_b__0__);
    sub_1C93AD4(&UserServantCollectionEntity___c__DisplayClass72_0_TypeInfo);
    byte_4D31952 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_18;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_18;
  if ( SLODWORD(costumeIds->max_length) >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_1C93D20(UserServantCollectionEntity___c__DisplayClass72_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0);
      if ( !v9 )
        break;
      *(_QWORD *)(v9 + 24) = this;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
      if ( v8 >= LODWORD(costumeIds->max_length) )
        sub_1C93D34(v16);
      *(_DWORD *)(v9 + 16) = costumeIds->m_Items[v8];
      v17 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v17,
        (Il2CppObject *)v9,
        Method_UserServantCollectionEntity___c__DisplayClass72_0__GetSkillChangeCostumeList_b__0__,
        0);
      Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                   EntryListFromCondType,
                                   (System_Func_T__bool__o *)v17,
                                   (const MethodInfo_318DB78 *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v6 )
          break;
        v4 = *(unsigned int *)(v9 + 16);
        items = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v4,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = v4;
        }
      }
      if ( (__int64)++v8 >= SLODWORD(costumeIds->max_length) )
        return v6;
    }
LABEL_18:
    sub_1C93D2C(Instance, v4);
  }
  return v6;
}


void UserServantCollectionEntity__GetSkillInfo(
        UserServantCollectionEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x25
  __int64 v13; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x24
  Il2CppObject *Entity; // x25
  long double v16; // q0
  __int64 v17; // x8
  __int64 v18; // x0
  ServantSkillMaster_o *v19; // x24
  const MethodInfo *v20; // x1
  System_Int32_array *SkillLevelList; // x26
  int32_t maxLimitCount; // w23
  BalanceConfig_c *v23; // x0
  BalanceConfig_c *v24; // x0
  SkillInfo_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  unsigned __int64 v32; // x28
  __int64 v33; // x21
  int32_t *m_Items; // x23
  __int64 i; // x19
  SkillInfo_o *v36; // x27
  unsigned __int64 v37; // x20
  ServantSkillEntity_o *v38; // x29
  int32_t skillNum; // w8
  unsigned int *v40; // x29
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  __int64 v47; // x0
  bool IsServantEquip; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4D31941 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SkillInfo___TypeInfo);
    sub_1C93AD4(&SkillInfo_TypeInfo);
    byte_4D31941 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v13;
  *(_QWORD *)&v53.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v53, 0);
  if ( !v14 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             Instance,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C69B68(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C69B68(v16);
  Instance = **(_QWORD **)(v18 + 184);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_42;
  v19 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v20);
  if ( dispLimitCount < 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0);
  }
  if ( skillListNum <= 0 )
  {
    v23 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    skillListNum = v23->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    skillListNum = v24->static_fields->SvtEquipSkillListMax;
  }
  v25 = (SkillInfo_array *)sub_1C93B7C(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v25;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  if ( skillListNum >= 1 )
  {
    v32 = 0;
    v33 = (unsigned int)skillListNum;
    m_Items = SkillLevelList->m_Items;
    for ( i = 8; ; i += 2 )
    {
      v36 = (SkillInfo_o *)sub_1C93D20(SkillInfo_TypeInfo);
      SkillInfo___ctor(v36, 0);
      if ( !v19 )
        break;
      v37 = v32 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v19,
                            dispSvtId,
                            (int)v32 + 1,
                            this->fields.userId,
                            this->fields.maxLv,
                            this->fields.maxLimitCount,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            -1,
                            0,
                            0);
      if ( Instance )
      {
        if ( !v36 )
          break;
        v38 = (ServantSkillEntity_o *)Instance;
        v36->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v32 >= LODWORD(SkillLevelList->max_length) )
          goto LABEL_43;
        v36->fields.lv = m_Items[v32];
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v36->fields.charge,
          &v36->fields.title,
          &v36->fields.explanation,
          m_Items[v32],
          IsServantEquip,
          0);
        Instance = ServantSkillEntity__GetStrengthStatus(v38, -1, 0);
        v36->fields.strengthStatus = Instance;
        skillNum = v38->fields.skillNum;
        v36->fields.isUse = 1;
        v36->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v36 )
          break;
        v36->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v19, dispSvtId, v37, 0);
          if ( Instance )
          {
            v36->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v36->fields.title,
              &v36->fields.explanation,
              0);
          }
        }
      }
      v40 = (unsigned int *)*skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1C93C10(v36, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
      if ( !Instance )
      {
        v47 = sub_1C93D50(0);
        sub_1C93BFC(v47, 0);
      }
      if ( v32 >= v40[6] )
LABEL_43:
        sub_1C93D34(Instance);
      *(_QWORD *)&v40[2 * v32 + 8] = v36;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40[i], (int32_t)v36, v41, v42, v43, v44, v45, v46);
      ++v32;
      if ( v33 == v37 )
        return;
    }
LABEL_42:
    sub_1C93D2C(Instance, v10);
  }
}


void UserServantCollectionEntity__GetTransformedPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t svtId,
        int32_t dispLimitCount,
        bool isOwner,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+0h] [xbp-20h]

  UserServantCollectionEntity__GetPassiveSkillInfo(
    this,
    idList,
    titleList,
    explanationList,
    svtId,
    dispLimitCount,
    isOwner,
    1,
    v8);
}


bool UserServantCollectionEntity__GetTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v11; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x24
  __int64 v19; // x25
  int32_t v20; // w24
  int32_t maxLimitCount; // w23
  ServantTreasureDvcMaster_o *Master_object; // x0
  __int64 v23; // x1
  TreasureDvcInfo_o *v24; // x21
  int32_t treasureDeviceLv1; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4D31945 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&TreasureDvcInfo_TypeInfo);
    byte_4D31945 = 1;
  }
  v11 = (TreasureDvcInfo_o *)sub_1C93D20(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v11, 0);
  *tdInfo = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v27, 0);
  if ( dispLimitCount < 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (ServantTreasureDvcMaster_o *)ServantTreasureDvcMaster__getUseEntity(
                                                  Master_object,
                                                  dispSvtId,
                                                  this->fields.userId,
                                                  this->fields.maxLv,
                                                  this->fields.maxLimitCount,
                                                  dispLimitCount,
                                                  v20,
                                                  beforeClearQuestId,
                                                  0);
  if ( Master_object )
  {
    v24 = *tdInfo;
    if ( *tdInfo )
    {
      v24->fields.id = Master_object->fields.revision;
      treasureDeviceLv1 = this->fields.treasureDeviceLv1;
      v24->fields.lv = treasureDeviceLv1;
      Master_object = (ServantTreasureDvcMaster_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                                      (ServantTreasureDvcEntity_o *)Master_object,
                                                      &v24->fields.name,
                                                      &v24->fields.explanation,
                                                      &v24->fields.maxLv,
                                                      &v24->fields.guageCount,
                                                      &v24->fields.cardId,
                                                      &v24->fields.strengthStatus,
                                                      &v24->fields.treasureDeviceNum,
                                                      treasureDeviceLv1,
                                                      0);
      v24->fields.isUse = (unsigned __int8)Master_object & 1;
      if ( *tdInfo )
      {
        LOBYTE(Master_object) = (*tdInfo)->fields.isUse;
        return (char)Master_object;
      }
    }
LABEL_17:
    sub_1C93D2C(Master_object, v23);
  }
  return (char)Master_object;
}


UserServantCommandCardEntity_o *UserServantCollectionEntity__GetUserCommandCardEntity(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  DataManager_o *v6; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x20
  __int64 v9; // x22
  __int64 v10; // x21
  UserServantCommandCardMaster_o *v11; // x19
  const MethodInfo *v12; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D3194F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D3194F = 1;
  }
  entity = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v2);
  v6 = **(DataManager_o ***)(v5 + 184);
  if ( !v6 )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        v6,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (UserServantCommandCardMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  v6 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
  if ( !v11 )
LABEL_12:
    sub_1C93D2C(v6, method);
  UserServantCommandCardMaster__TryGetEntity(v11, &entity, userId, (int)v6, v12);
  return entity;
}


bool UserServantCollectionEntity__HasFlag(UserServantCollectionEntity_o *this, int32_t type, const MethodInfo *method)
{
  return (this->fields.flag & type) != 0;
}


bool UserServantCollectionEntity__IsCollectionState6Servant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 6, v2);
}


bool UserServantCollectionEntity__IsCostumeGet(
        UserServantCollectionEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  int max_length; // w9
  bool v5; // vf
  int v6; // w9
  int v7; // w10
  int32_t v8; // w11
  bool result; // w0

  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  max_length = costumeIds->max_length;
  v5 = __OFSUB__(max_length, 1);
  v6 = max_length - 1;
  if ( v6 < 0 != v5 )
    return 0;
  v7 = 0;
  do
  {
    v8 = costumeIds->m_Items[v7];
    result = v8 == costumeId;
    if ( v8 == costumeId )
      break;
  }
  while ( v6 != v7++ );
  return result;
}


bool UserServantCollectionEntity__IsDataLostStateServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 1, v2);
}


bool UserServantCollectionEntity__IsFinded(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status != 0;
}


bool UserServantCollectionEntity__IsGet(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status == 2;
}


bool UserServantCollectionEntity__IsGrandServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_ICollection_o *Entitys; // x20
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  System_Func_object__bool__o *v8; // x21

  if ( (byte_4D31955 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_UserServantGrandEntity___);
    sub_1C93AD4(&System_Func_UserServantGrandEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_UserServantCollectionEntity__IsGrandServant_b__75_0__);
    byte_4D31955 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v4);
  Entitys = (System_Collections_ICollection_o *)DataMasterBase_object__object__object___getEntitys(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  (const MethodInfo_3467458 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  if ( BasicHelper__IsNullOrEmpty(Entitys, 0) )
    return 0;
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)Entitys,
         (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
  v8 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_UserServantCollectionEntity__IsGrandServant_b__75_0__,
    0);
  return System_Linq_Enumerable__Any_object__52110824(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_UserServantGrandEntity___);
}


bool UserServantCollectionEntity__IsHideStateServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  Il2CppObject *v9; // x19
  long double v10; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4D31950 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31950 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
  if ( !v8 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v8,
               (int32_t)Instance,
               (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v9 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
    return 0;
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C69B68(v10);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C69B68(v10);
  Instance = **(Il2CppObject ***)(v13 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0 )
  {
LABEL_17:
    sub_1C93D2C(Instance, v4);
  }
  return ServantCollectionMaster__GetOverrideDisplayType(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v9[13].klass,
           0) == 2;
}


bool UserServantCollectionEntity__IsLimitCountMax(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return UserServantCollectionEntity__getLimitCountMax(this, method) == this->fields.maxLimitCount;
}


bool UserServantCollectionEntity__IsLinkBadStateServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 4, v2);
}


bool UserServantCollectionEntity__IsLinkCloseStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 5, v2);
}


bool UserServantCollectionEntity__IsLinkLostStateServant(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantCollectionEntity__IsMaterialLostCollectionType(this, 3, v2);
}


bool UserServantCollectionEntity__IsMaterialLostCollectionType(
        UserServantCollectionEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  bool result; // w0
  int32_t OverrideDisplayType; // w8
  bool v13; // zf
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D31951 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31951 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  v9 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
  if ( !v8 )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v8,
          &entity,
          (int32_t)v9,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  v9 = entity;
  if ( !entity )
    goto LABEL_26;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantCollectionMaster___);
  if ( !entity || !v9 )
LABEL_26:
    sub_1C93D2C(v9, v10);
  OverrideDisplayType = ServantCollectionMaster__GetOverrideDisplayType(
                          (ServantCollectionMaster_o *)v9,
                          (int32_t)entity[13].klass,
                          0);
  result = 0;
  switch ( type )
  {
    case 1:
      v13 = OverrideDisplayType == 1;
      goto LABEL_22;
    case 3:
      v13 = OverrideDisplayType == 3;
      goto LABEL_22;
    case 4:
      v13 = OverrideDisplayType == 4;
      goto LABEL_22;
    case 5:
      v13 = OverrideDisplayType == 5;
      goto LABEL_22;
    case 6:
      v13 = OverrideDisplayType == 6;
LABEL_22:
      result = v13;
      break;
    default:
      return result;
  }
  return result;
}


bool UserServantCollectionEntity__IsModifySvtCommonFlag(
        UserServantCollectionEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  return this->fields.svtCommonFlag != value;
}


bool UserServantCollectionEntity__IsNew(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w20
  Il2CppObject *v16; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  ServantCommentMaster_o *v19; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4D3193C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&UserServantCollectionManager_TypeInfo);
    byte_4D3193C = 1;
  }
  idList = 0;
  priorityList = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber != this->fields.userId )
    return 0;
  status = this->fields.status;
  if ( !status )
    return 0;
  if ( status != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
    v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v9;
    *(_QWORD *)&v22.fields.fakeValue = v8;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v22, 0);
    if ( !v10 )
      goto LABEL_31;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v10,
                 (int32_t)Instance,
                 (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_31;
    if ( !SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0) )
      return 0;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v12;
  *(_QWORD *)&v23.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v23, 0);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  if ( !UserServantCollectionManager__IsNew(v13, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v19 = (ServantCommentMaster_o *)v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v24.fields.currentCryptoKey = v18;
      *(_QWORD *)&v24.fields.fakeValue = v17;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v24, 0);
      if ( v19 )
        return ServantCommentMaster__GetNewList(v19, &idList, &priorityList, (int32_t)Instance, 0);
    }
LABEL_31:
    sub_1C93D2C(Instance, v6);
  }
  return 1;
}


bool UserServantCollectionEntity__IsPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v8; // x0
  __int64 v9; // x20
  __int64 v10; // x24
  int64_t userIdNumber; // x23
  __int64 v12; // x1
  _BOOL8 v13; // x0
  unsigned __int64 voicePlayed; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4D31949 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31949 = 1;
  }
  if ( flagNum <= 63 )
  {
    voicePlayed = this->fields.voicePlayed;
    return (voicePlayed >> flagNum) & 1;
  }
  if ( flagNum <= 127 )
  {
    voicePlayed = this->fields.voicePlayed2;
    return (voicePlayed >> flagNum) & 1;
  }
  p_userServantVoicePlayedEntity = &this->fields.userServantVoicePlayedEntity;
  userServantVoicePlayedEntity = this->fields.userServantVoicePlayedEntity;
  if ( !userServantVoicePlayedEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    v8 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager_TypeInfo;
    }
    v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    userIdNumber = v8->static_fields->userIdNumber;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v10;
    *(_QWORD *)&v16.fields.fakeValue = v9;
    userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                       v16,
                                                                       0);
    if ( !Master_object )
      goto LABEL_24;
    if ( !UserServantVoicePlayedMaster__TryGetEntity(
            (UserServantVoicePlayedMaster_o *)Master_object,
            p_userServantVoicePlayedEntity,
            userIdNumber,
            (int32_t)userServantVoicePlayedEntity,
            0) )
    {
      LOBYTE(v13) = 0;
      return v13;
    }
    userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
    if ( !*p_userServantVoicePlayedEntity )
LABEL_24:
      sub_1C93D2C(userServantVoicePlayedEntity, v12);
  }
  LOBYTE(v13) = UserServantVoicePlayedEntity__IsPlayed(userServantVoicePlayedEntity, flagNum, 0);
  return v13;
}


void UserServantCollectionEntity__SetOld(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  __int64 v11; // x19
  __int64 v12; // x20
  int32_t v13; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D3193D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&UserServantCollectionManager_TypeInfo);
    byte_4D3193D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber == this->fields.userId )
  {
    status = this->fields.status;
    if ( status )
    {
      if ( status == 2 )
        goto LABEL_18;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
      v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v14.fields.currentCryptoKey = v9;
      *(_QWORD *)&v14.fields.fakeValue = v8;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
      if ( !v10
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         v10,
                         (int32_t)Instance,
                         (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
      {
LABEL_24:
        sub_1C93D2C(Instance, v6);
      }
      if ( SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0) )
      {
LABEL_18:
        v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = v12;
        *(_QWORD *)&v15.fields.fakeValue = v11;
        v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        UserServantCollectionManager__SetOld(v13, 0);
      }
    }
  }
}


bool UserServantCollectionEntity__SetPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v8; // x0
  __int64 v9; // x20
  __int64 v10; // x24
  int64_t userIdNumber; // x23
  __int64 v12; // x1
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4D3194A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D3194A = 1;
  }
  if ( flagNum <= 63 )
  {
    voicePlayed = this->fields.voicePlayed;
    if ( (voicePlayed & (1LL << flagNum)) != 0 )
      return 0;
    this->fields.voicePlayed = voicePlayed | (1LL << flagNum);
  }
  else
  {
    if ( flagNum > 127 )
    {
      p_userServantVoicePlayedEntity = &this->fields.userServantVoicePlayedEntity;
      userServantVoicePlayedEntity = this->fields.userServantVoicePlayedEntity;
      if ( userServantVoicePlayedEntity )
        return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      v8 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v8 = NetworkManager_TypeInfo;
      }
      v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      userIdNumber = v8->static_fields->userIdNumber;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = v10;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                         v16,
                                                                         0);
      if ( !Master_object )
LABEL_26:
        sub_1C93D2C(userServantVoicePlayedEntity, v12);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             (UserServantVoicePlayedMaster_o *)Master_object,
             p_userServantVoicePlayedEntity,
             userIdNumber,
             (int32_t)userServantVoicePlayedEntity,
             0) )
      {
        userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
        if ( *p_userServantVoicePlayedEntity )
          return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, 0);
        goto LABEL_26;
      }
      return 1;
    }
    voicePlayed2 = this->fields.voicePlayed2;
    if ( (voicePlayed2 & (1LL << flagNum)) != 0 )
      return 0;
    this->fields.voicePlayed2 = voicePlayed2 | (1LL << flagNum);
  }
  return 1;
}


bool UserServantCollectionEntity___IsGrandServant_b__75_0(
        UserServantCollectionEntity_o *this,
        UserServantGrandEntity_o *userServantGrandEntity,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *v4; // x20
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4D31959 & 1) == 0 )
  {
    this = (UserServantCollectionEntity_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31959 = 1;
  }
  if ( !userServantGrandEntity )
    sub_1C93D2C(this, userServantGrandEntity);
  if ( v4->fields.userId != userServantGrandEntity->fields.userId )
    return 0;
  v6 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v8, 0) == userServantGrandEntity->fields.svtId;
}


bool UserServantCollectionEntity__getCollectionStatus(
        UserServantCollectionEntity_o *this,
        int32_t *lv,
        int32_t *hp,
        int32_t *atk,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  ServantEntity_o *v15; // x23
  Il2CppObject *v16; // x0
  __int64 v17; // x25
  __int64 v18; // x26
  ServantLimitMaster_o *v19; // x24
  _DWORD *v20; // x22
  int32_t v21; // w1
  int v22; // w8
  __int64 v23; // x9
  int v24; // w10
  bool result; // w0
  __int64 v26; // x8
  int32_t v27; // w8
  int32_t status; // w28
  Il2CppObject *v29; // x0
  __int64 v30; // x24
  __int64 v31; // x25
  ServantLimitMaster_o *v32; // x22
  _DWORD *v33; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4D3193E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3193E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v13;
  *(_QWORD *)&v34.fields.fakeValue = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v34, 0);
  if ( !v14 )
    goto LABEL_32;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v14,
               (int32_t)Instance,
               (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_32;
  v15 = (ServantEntity_o *)Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v29 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v32 = (ServantLimitMaster_o *)v29;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v36.fields.currentCryptoKey = v31;
      *(_QWORD *)&v36.fields.fakeValue = v30;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v36, 0);
      v10 = (unsigned int)Instance;
      if ( status == 2 )
      {
        if ( v32 )
        {
          Instance = ServantLimitMaster__GetEntity(v32, (int32_t)Instance, v15->fields.limitMax, 0);
          if ( Instance )
          {
            v33 = Instance;
            *lv = ServantEntity__GetLvLimitUpCondMaterial(v15, *((_DWORD *)Instance + 7), 0);
            result = 1;
            *atk = v33[12];
            v27 = v33[10];
            goto LABEL_31;
          }
        }
      }
      else if ( v32 )
      {
        Instance = ServantLimitMaster__GetEntity(v32, (int32_t)Instance, 0, 0);
        *lv = 1;
        if ( Instance )
        {
          *atk = *((_DWORD *)Instance + 11);
          v27 = *((_DWORD *)Instance + 9);
          result = 0;
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_1C93D2C(Instance, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitMaster_o *)v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v18;
  *(_QWORD *)&v35.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v35, 0);
  if ( !v19 )
    goto LABEL_32;
  Instance = ServantLimitMaster__GetEntity(v19, (int32_t)Instance, this->fields.maxLimitCount, 0);
  if ( !Instance )
    goto LABEL_32;
  v20 = Instance;
  v21 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  *lv = ServantEntity__GetLvLimitUpCondMaterial(v15, v21, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, v15->fields.expType, *lv, 0);
  if ( !Instance )
    goto LABEL_32;
  v22 = v20[11];
  v23 = 274877907LL * *((_DWORD *)Instance + 7) * (v20[12] - v22);
  *atk = (v23 >> 38) + ((unsigned __int64)v23 >> 63) + v22;
  LODWORD(v23) = v20[9];
  v24 = *((_DWORD *)Instance + 7);
  result = 1;
  v26 = 274877907LL * v24 * (v20[10] - (int)v23);
  v27 = (v26 >> 38) + ((unsigned __int64)v26 >> 63) + v23;
LABEL_31:
  *hp = v27;
  return result;
}


System_Int32_array *UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x20
  __int64 v7; // x22
  __int64 v8; // x21
  Il2CppObject *v9; // x19
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4D3194D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3194D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v12, 0);
  if ( !v9 )
LABEL_8:
    sub_1C93D2C(Instance, v4);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           (int32_t)Instance,
           v10);
}


System_Int32_array *UserServantCollectionEntity__getCostumeList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  il2cpp_array_size_t max_length; // x22
  void *Instance; // x0
  Il2CppObject *v6; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v8; // x19
  unsigned __int64 v9; // x25
  __int64 v10; // x26
  struct System_Int32_array *v11; // x8
  int32_t v12; // w22
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x20
  Il2CppObject *v26; // x21
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x21
  __int64 v35; // x20
  unsigned __int64 v36; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4D3194B & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__);
    sub_1C93AD4(&UserServantCollectionEntity___c_TypeInfo);
    byte_4D3194B = 1;
  }
  entity = 0;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  max_length = costumeIds->max_length;
  if ( !(_DWORD)max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    v10 = (unsigned int)max_length;
    while ( 1 )
    {
      v11 = this->fields.costumeIds;
      if ( !v11 )
        break;
      if ( v9 >= LODWORD(v11->max_length) )
LABEL_38:
        sub_1C93D34(Instance);
      v12 = v11->m_Items[v9];
      v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v39.fields.currentCryptoKey = v14;
      *(_QWORD *)&v39.fields.fakeValue = v13;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v39, 0);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           (int32_t)Instance,
                           v12,
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v8 )
          break;
        v6 = (Il2CppObject *)entity;
        items = v8->fields._items;
        v22 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v6,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v6;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v6, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v10 == ++v9 )
        goto LABEL_21;
    }
LABEL_37:
    sub_1C93D2C(Instance, v6);
  }
LABEL_21:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v25 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v25 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v25, v26, Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, 0);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Comparison_ServantCostumeEntity__o *)v25;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__55_0, (int32_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !v8 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_59225184(
    v8,
    v25,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v34 = (unsigned int)v8->fields._size;
  v35 = sub_1C93B7C(int___TypeInfo, (unsigned int)v34);
  if ( (int)v34 >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v8,
                   v36,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v35 )
        goto LABEL_37;
      if ( v36 >= *(unsigned int *)(v35 + 24) )
        goto LABEL_38;
      *(_DWORD *)(v35 + 32 + 4 * v36++) = *((_DWORD *)Instance + 5);
      if ( v34 == v36 )
        return (System_Int32_array *)v35;
    }
  }
  return (System_Int32_array *)v35;
}


System_Int32_array *UserServantCollectionEntity__getCostumeList_43838708(
        UserServantCollectionEntity_o *this,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  il2cpp_array_size_t max_length; // x19
  void *Instance; // x0
  Il2CppObject *v9; // x1
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v11; // x24
  System_Collections_Generic_List_object__o *v12; // x21
  unsigned __int64 v13; // x28
  struct System_Int32_array *v14; // x8
  int32_t v15; // w25
  __int64 v16; // x26
  __int64 v17; // x27
  __int64 v18; // x26
  __int64 v19; // x27
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x19
  Il2CppObject *v31; // x20
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x20
  __int64 v40; // x19
  unsigned __int64 v41; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4D3194C & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__);
    sub_1C93AD4(&UserServantCollectionEntity___c_TypeInfo);
    byte_4D3194C = 1;
  }
  entity = 0;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  max_length = costumeIds->max_length;
  if ( !(_DWORD)max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = this->fields.costumeIds;
      if ( !v14 )
        break;
      if ( v13 >= LODWORD(v14->max_length) )
LABEL_42:
        sub_1C93D34(Instance);
      v15 = v14->m_Items[v13];
      v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v45.fields.currentCryptoKey = v17;
      *(_QWORD *)&v45.fields.fakeValue = v16;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v45, 0);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           (int32_t)Instance,
                           v15,
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v19;
        *(_QWORD *)&v46.fields.fakeValue = v18;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v46, 0);
        if ( !v11 )
          break;
        Instance = (void *)ServantCostumeReleaseMaster__isEnableMountCostume(
                             (ServantCostumeReleaseMaster_o *)v11,
                             (int32_t)Instance,
                             v15,
                             lv,
                             limitCount,
                             0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v12 )
            break;
          v9 = (Il2CppObject *)entity;
          items = v12->fields._items;
          v27 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v9,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v9;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v9, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      if ( (unsigned int)max_length == ++v13 )
        goto LABEL_25;
    }
LABEL_41:
    sub_1C93D2C(Instance, v9);
  }
LABEL_25:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v30 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, 0);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Comparison_ServantCostumeEntity__o *)v30;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__56_0, (int32_t)v30, v33, v34, v35, v36, v37, v38);
  }
  if ( !v12 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_59225184(
    v12,
    v30,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v39 = (unsigned int)v12->fields._size;
  v40 = sub_1C93B7C(int___TypeInfo, (unsigned int)v39);
  if ( (int)v39 >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v12,
                   v41,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v40 )
        goto LABEL_41;
      if ( v41 >= *(unsigned int *)(v40 + 24) )
        goto LABEL_42;
      *(_DWORD *)(v40 + 32 + 4 * v41++) = *((_DWORD *)Instance + 5);
      if ( v39 == v41 )
        return (System_Int32_array *)v40;
    }
  }
  return (System_Int32_array *)v40;
}


int32_t UserServantCollectionEntity__getFriendShipRank(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D3193B & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D3193B = 1;
  }
  v3 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v3;
  *(_QWORD *)&v6.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v6, 0);
}


bool UserServantCollectionEntity__getFriendShipRankInfo(
        UserServantCollectionEntity_o *this,
        int32_t *friendshipRank,
        int32_t *maxFriendshipRank,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  bool result; // w0
  int32_t v18; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4D31946 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31946 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v19, 0);
  if ( !v12 )
LABEL_14:
    sub_1C93D2C(Instance, v8);
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)Instance,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v14 = Entity, ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0)) )
  {
    v15 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v15;
    *(_QWORD *)&v20.fields.fakeValue = v16;
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v20, 0);
    result = 1;
    v18 = this->fields.friendshipExceedCount + HIDWORD(v14[6].klass);
  }
  else
  {
    v18 = 0;
    result = 0;
    *friendshipRank = -1;
  }
  *maxFriendshipRank = v18;
  return result;
}


int32_t UserServantCollectionEntity__getFriendshipExceedCount(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.friendshipExceedCount;
}


int32_t UserServantCollectionEntity__getLevelMax(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *Entity; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x8
  ServantLimitMaster_o *v12; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D31947 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31947 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
  if ( !v8 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v8,
             (int32_t)Instance,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v10 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v12 = (ServantLimitMaster_o *)v10,
        *(_QWORD *)&v15.fields.currentCryptoKey = v11,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0),
        !Entity)
    || !v12
    || (Instance = ServantLimitMaster__GetEntity(v12, (int32_t)Instance, (int32_t)Entity[5].monitor, 0)) == 0 )
  {
LABEL_12:
    sub_1C93D2C(Instance, v4);
  }
  return *((_DWORD *)Instance + 7);
}


int32_t UserServantCollectionEntity__getLimitCountMax(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4D31948 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31948 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C93D2C(Instance, v4);
  }
  return (int32_t)Instance[5].monitor;
}


void UserServantCollectionEntity__getPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        bool isOwner,
        bool useDatabaseGrandStatus,
        const MethodInfo *method)
{
  __int64 v15; // x26
  __int64 v16; // x27
  int32_t v17; // w0
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4D31942 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31942 = 1;
  }
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v19, 0);
  UserServantCollectionEntity__GetPassiveSkillInfo(
    this,
    idList,
    titleList,
    explanationList,
    v17,
    dispLimitCount,
    isOwner,
    useDatabaseGrandStatus,
    v18);
}


void UserServantCollectionEntity__getSkillInfo(
        UserServantCollectionEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D31940 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31940 = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
  UserServantCollectionEntity__GetSkillInfo(
    this,
    skillInfoList,
    v13,
    beforeClearQuestId,
    dispLimitCount,
    skillListNum,
    v14);
}


System_Int32_array *UserServantCollectionEntity__getSkillLevelList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  BalanceConfig_c *v7; // x19
  int32_t skillLv3; // w8
  __int64 v9; // x20
  unsigned __int64 v10; // x23

  if ( (byte_4D3193F & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D3193F = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1C93B7C(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
    sub_1C93D2C(0, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1C93D34(v4);
  }
  skillLv3 = this->fields.skillLv3;
  v9 = 11;
  v4->_1.byval_arg.bits = skillLv3;
  v4 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    v10 = v9 - 8;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v10 >= v4->static_fields->SvtEquipSkillListMax )
      return (System_Int32_array *)v7;
    if ( v10 >= LODWORD(v7->_1.namespaze) )
      goto LABEL_16;
    *((_DWORD *)&v7->_1.image + v9++) = 1;
  }
}


int32_t UserServantCollectionEntity__getSvtId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D3193A & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D3193A = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v6, 0);
}


bool UserServantCollectionEntity__getTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4D31944 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31944 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
  return UserServantCollectionEntity__GetTreasureDeviceInfo(this, tdInfo, v11, beforeClearQuestId, dispLimitCount, v12);
}


UserCommandCodeEntity_o *UserServantCollectionEntity__getUserCommandCodeEntity(
        UserServantCollectionEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x21
  __int64 v9; // x23
  __int64 v10; // x22
  UserServantCommandCodeMaster_o *v11; // x20
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x2
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4D3194E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3194E = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (UserServantCommandCodeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v16, 0);
  if ( !v11 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v11, &entity, userId, (int)Instance, v12) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v13);
LABEL_12:
    sub_1C93D2C(Instance, v6);
  }
  return 0;
}


int64_t UserServantCollectionEntity__getUserId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


void UserServantCollectionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3195A & 1) == 0 )
  {
    sub_1C93AD4(&UserServantCollectionEntity___c_TypeInfo);
    byte_4D3195A = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(UserServantCollectionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantCollectionEntity___c_TypeInfo->static_fields->__9 = (struct UserServantCollectionEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)UserServantCollectionEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserServantCollectionEntity___c___ctor(UserServantCollectionEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserServantCollectionEntity___c___getCostumeList_b__55_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t UserServantCollectionEntity___c___getCostumeList_b__56_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


void UserServantCollectionEntity___c__DisplayClass72_0___ctor(
        UserServantCollectionEntity___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantCollectionEntity___c__DisplayClass72_0___GetSkillChangeCostumeList_b__0(
        UserServantCollectionEntity___c__DisplayClass72_0_o *this,
        ServantSkillReleaseEntity_o *d,
        const MethodInfo *method)
{
  UserServantCollectionEntity___c__DisplayClass72_0_o *v4; // x20
  struct UserServantCollectionEntity_o *_4__this; // x8
  int32_t condTargetId; // w23
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4D3195B & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass72_0_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D3195B = 1;
  }
  if ( !d || (_4__this = v4->fields.__4__this) == 0 )
    sub_1C93D2C(this, d);
  condTargetId = d->fields.condTargetId;
  v8 = *(_QWORD *)&_4__this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&_4__this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v10, 0)
      && d->fields.condNum == v4->fields.costumeId;
}