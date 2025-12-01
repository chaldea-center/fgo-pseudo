void NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7978 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_long___ctor__);
    byte_4CC7978 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_34069E4 *)Method_DataEntityBase_long___ctor__);
}


int64_t NpcServantFollowerEntity__CreatePrimaryKey(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *NpcServantFollowerEntity__GetFollowerName(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool isChangeName; // [xsp+Ch] [xbp-4h] BYREF

  isChangeName = 0;
  return NpcServantFollowerEntity__GetFollowerName_42705932(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *NpcServantFollowerEntity__GetFollowerName_42705932(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        bool *isChangeName,
        const MethodInfo *method)
{
  NpcServantFollowerEntity_o *v10; // x19
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  const MethodInfo *v12; // x1
  NpcFollowerEntity_o *v13; // x21
  System_String_o *OverwriteServantName; // x22
  const MethodInfo *v15; // x1
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  ServantChangeEntity_o *v18; // x0
  const MethodInfo *v19; // x3
  System_String_o *name; // x0
  Il2CppObject *Entity; // x0

  v10 = this;
  if ( (byte_4CC7972 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&StringLiteral_11656/*"SERVANT_HIDE_NAME"*/);
    sub_1C713B0(&StringLiteral_9277/*"NONE"*/);
    this = (NpcServantFollowerEntity_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7972 = 1;
  }
  *isChangeName = 1;
  if ( (v10->fields.flag & 2) == 0 )
  {
    NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(
                          this,
                          followerId,
                          questId,
                          questPhase,
                          (const MethodInfo *)isChangeName);
    if ( NpcFollowerEntity )
    {
      v13 = NpcFollowerEntity;
      OverwriteServantName = NpcFollowerEntity__GetOverwriteServantName(NpcFollowerEntity, v12);
      if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0) )
        return OverwriteServantName;
      if ( NpcFollowerEntity__IsExistSvtChangeParam(v13, v15) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_23;
        v18 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v10->fields.svtId, 0);
        if ( v18 )
        {
          OverwriteServantName = NpcFollowerEntity__GetServantName(
                                   v13,
                                   v18->fields.priority,
                                   string_TypeInfo->static_fields->Empty,
                                   v19);
          if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0) )
            return OverwriteServantName;
        }
      }
    }
    name = v10->fields.name;
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9277/*"NONE"*/, 0) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.svtId,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName((ServantEntity_o *)Entity, v10->fields.limitCount, -1, 0, 0);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_23:
    sub_1C71608(Instance, v17);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11656/*"SERVANT_HIDE_NAME"*/, 0);
}


int32_t NpcServantFollowerEntity__GetFollowerTreasureDeviceId(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  NpcServantFollowerEntity_o *v8; // x19
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  const MethodInfo *v10; // x1
  NpcFollowerEntity_o *v11; // x20
  const MethodInfo *v12; // x1
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  ServantChangeEntity_o *v15; // x0
  const MethodInfo *v16; // x3
  int32_t result; // w0

  v8 = this;
  if ( (byte_4CC7973 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantOverwriteMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    this = (NpcServantFollowerEntity_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7973 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v11 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v10) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_17;
      v15 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v8->fields.svtId, 0);
      if ( v15 )
      {
        result = NpcFollowerEntity__GetServantTd(v11, v15->fields.priority, -1, v16);
        if ( result != -1 )
          return result;
        return v8->fields.treasureDeviceId;
      }
    }
    if ( NpcFollowerEntity__IsOverwriteTreasureDevice(v11, v12) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
      if ( Instance )
      {
        result = ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
                   (ServantOverwriteMaster_o *)Instance,
                   v8->fields.svtId,
                   1,
                   0);
        if ( result > 0 )
          return result;
        return v8->fields.treasureDeviceId;
      }
LABEL_17:
      sub_1C71608(Instance, v14);
    }
  }
  return v8->fields.treasureDeviceId;
}


NpcFollowerEntity_o *NpcServantFollowerEntity__GetNpcFollowerEntity(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC7974 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7974 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0 )
  {
    sub_1C71608(Instance, v9);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, v10);
  return entity;
}


System_Int32_array *NpcServantFollowerEntity__GetOverwriteIndividuality(
        NpcServantFollowerEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0

  if ( (byte_4CC7977 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&System_Func_string__int__TypeInfo);
    sub_1C713B0(&Method_System_Int32_Parse__);
    sub_1C713B0(&StringLiteral_15808/*"["*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_16058/*"]"*/);
    byte_4CC7977 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0;
  individuality = this->fields.individuality;
  if ( !individuality
    || (individuality = System_String__Replace_64078288(
                          individuality,
                          (System_String_o *)StringLiteral_15808/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0
    || (individuality = System_String__Replace_64078288(
                          individuality,
                          (System_String_o *)StringLiteral_16058/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0 )
  {
    sub_1C71608(individuality, v3);
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(individuality, 0x2Cu, 0, 0);
  v6 = (System_Func_object__int__o *)sub_1C715FC(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v6, 0, Method_System_Int32_Parse__, 0);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                              v5,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v7,
           (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool NpcServantFollowerEntity__IsApplySvtChange(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 4) & 1;
}


bool NpcServantFollowerEntity__IsHideEquip(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 5) & 1;
}


bool NpcServantFollowerEntity__IsHideRarity(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 10) & 1;
}


bool NpcServantFollowerEntity__IsHideSupport(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 1) & 1;
}


bool NpcServantFollowerEntity__IsHideTreasureDeviceDetail(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 9) & 1;
}


bool NpcServantFollowerEntity__IsHideTreasureDeviceLv(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 8) & 1;
}


bool NpcServantFollowerEntity__IsNoDisplayBonusIcon(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 3) & 1;
}


bool NpcServantFollowerEntity__IsNoDisplayBonusIconEquip(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 6) & 1;
}


bool NpcServantFollowerEntity__IsNotClassBoard(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 11) & 1;
}


bool NpcServantFollowerEntity__IsNotUsedTreasureDevice(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 2) & 1;
}


bool NpcServantFollowerEntity__IsNpc(int32_t flag, const MethodInfo *method)
{
  return flag & 1;
}


bool NpcServantFollowerEntity__IsOverwriteIndividuality(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7976 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9277/*"NONE"*/);
    byte_4CC7976 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9277/*"NONE"*/, 0);
}


FollowerInfo_o *NpcServantFollowerEntity__getFollowerInfo(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        int32_t dispLmtCnt,
        bool isMySvtOrNpc,
        bool isFixedNpc,
        int32_t imageSvtId,
        const MethodInfo *method)
{
  __int64 v14; // x23
  __int64 v15; // x24
  __int64 Instance; // x0
  __int64 v17; // x1
  int32_t svtId; // w19
  Il2CppObject *MasterData_object; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Int32_array *passiveSkill; // x1
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v28; // x9
  __int64 v29; // x0
  System_Array_o **v30; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x4
  int64_t v38; // x27
  int32_t v39; // w21
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct System_Int32_array *v48; // x8
  unsigned int *v49; // x28
  GrandQuestFolderBoardItem_o *v50; // x29
  __int64 v51; // x25
  unsigned __int64 v52; // x26
  AppendPassiveSkillInfo_o *v53; // x19
  struct System_Int32_array *v54; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  const MethodInfo *v62; // x5
  int v63; // w8
  System_String_o *FollowerName_42705932; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  __int64 v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  __int64 v78; // x19
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  __int64 v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  __int64 v92; // x19
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  int64_t id; // x8
  FollowerInfo_o *result; // x0
  __int64 v101; // x0
  int32_t questIda; // [xsp+Ch] [xbp-84h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+20h] [xbp-70h] BYREF
  bool isChangeName; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CC7975 & 1) == 0 )
  {
    sub_1C713B0(&AppendPassiveSkillInfo___TypeInfo);
    sub_1C713B0(&AppendPassiveSkillInfo_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&FollowerInfo_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantLeaderInfo___TypeInfo);
    sub_1C713B0(&ServantLeaderInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7975 = 1;
  }
  titleList = 0;
  idList = 0;
  explanationList = 0;
  v14 = sub_1C715FC(FollowerInfo_TypeInfo);
  FollowerInfo___ctor((FollowerInfo_o *)v14, 0);
  v15 = sub_1C715FC(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v15, 0);
  if ( !v15 )
    goto LABEL_41;
  *(_QWORD *)(v15 + 24) = followerId;
  *(_QWORD *)(v15 + 40) = 0;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v15 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0);
  *(_DWORD *)(v15 + 64) = this->fields.limitCount;
  if ( (dispLmtCnt & 0x80000000) == 0 )
  {
    *(_DWORD *)(v15 + 180) = dispLmtCnt;
    if ( dispLmtCnt >= 11 )
    {
      *(_DWORD *)(v15 + 176) = dispLmtCnt;
      *(_DWORD *)(v15 + 184) = dispLmtCnt;
      *(_DWORD *)(v15 + 188) = dispLmtCnt;
    }
  }
  *(_QWORD *)(v15 + 68) = (unsigned int)this->fields.lv;
  *(_QWORD *)(v15 + 76) = *(_QWORD *)&this->fields.hp;
  *(_OWORD *)(v15 + 92) = *(_OWORD *)&this->fields.skillId1;
  *(_QWORD *)(v15 + 108) = *(_QWORD *)&this->fields.skillLv2;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_41;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)MasterData_object,
                        *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                        this->fields.svtId,
                        0);
  if ( !Instance )
    goto LABEL_41;
  UserServantCollectionEntity__getPassiveSkillInfo(
    (UserServantCollectionEntity_o *)Instance,
    &idList,
    &titleList,
    &explanationList,
    -1,
    0,
    0,
    0);
  passiveSkill = this->fields.passiveSkill;
  if ( !passiveSkill || (max_length = passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_27:
    *(_QWORD *)(v15 + 120) = passiveSkill;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 120), (int32_t)passiveSkill, v20, v21, v22, v23, v24, v25);
    goto LABEL_28;
  }
  if ( !idList )
    goto LABEL_27;
  v28 = idList->max_length;
  if ( !v28 )
    goto LABEL_27;
  v29 = sub_1C71458(int___TypeInfo, (unsigned int)(v28 + max_length));
  *(_QWORD *)(v15 + 120) = v29;
  v30 = (System_Array_o **)(v15 + 120);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 120), v29, v31, v32, v33, v34, v35, v36);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)idList, *v30, 0, 0);
  if ( !idList )
    goto LABEL_41;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)Instance, *v30, idList->max_length, 0);
LABEL_28:
  v38 = followerId;
  questIda = questId;
  v39 = questPhase;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v37);
  *(_DWORD *)(v15 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v15 + 168) = 0;
  *(_DWORD *)(v15 + 132) = treasureDeviceLv;
  *(_DWORD *)(v15 + 272) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_41;
  Instance = sub_1C71458(AppendPassiveSkillInfo___TypeInfo, LODWORD(appendPassiveSkillIds->max_length));
  v48 = this->fields.appendPassiveSkillIds;
  if ( !v48 )
    goto LABEL_41;
  v49 = (unsigned int *)Instance;
  v50 = (GrandQuestFolderBoardItem_o *)(Instance + 32);
  v51 = 8;
  while ( 1 )
  {
    v52 = v51 - 8;
    if ( v51 - 8 >= SLODWORD(v48->max_length) )
      break;
    v53 = (AppendPassiveSkillInfo_o *)sub_1C715FC(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v53, 0);
    v54 = this->fields.appendPassiveSkillIds;
    if ( !v54 )
      goto LABEL_41;
    if ( v52 >= LODWORD(v54->max_length) )
      goto LABEL_53;
    if ( !v53 )
      goto LABEL_41;
    v53->fields.skillId = *((_DWORD *)&v54->obj.klass + v51);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_41;
    if ( v52 >= LODWORD(appendPassiveSkillLvs->max_length) )
      goto LABEL_53;
    v53->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v51);
    if ( !v49 )
      goto LABEL_41;
    Instance = sub_1C714EC(v53, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
    if ( !Instance )
      goto LABEL_54;
    if ( v52 >= v49[6] )
      goto LABEL_53;
    v50->klass = (GrandQuestFolderBoardItem_c *)v53;
    sub_1C71354(v50, (int32_t)v53, v56, v57, v58, v59, v60, v61);
    v48 = this->fields.appendPassiveSkillIds;
    ++v51;
    v50 = (GrandQuestFolderBoardItem_o *)((char *)v50 + 8);
    if ( !v48 )
      goto LABEL_41;
  }
  *(_QWORD *)(v15 + 224) = v49;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 224), (int32_t)v49, v42, v43, v44, v45, v46, v47);
  if ( !v14 )
    goto LABEL_41;
  *(_QWORD *)(v14 + 16) = v38;
  v63 = (*(_DWORD *)(v15 + 272) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v14 + 36) = v63;
  isChangeName = 0;
  FollowerName_42705932 = NpcServantFollowerEntity__GetFollowerName_42705932(
                            this,
                            v38,
                            questIda,
                            v39,
                            &isChangeName,
                            v62);
  *(_QWORD *)(v14 + 24) = FollowerName_42705932;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 24), (int32_t)FollowerName_42705932, v65, v66, v67, v68, v69, v70);
  *(_DWORD *)(v14 + 32) = 0;
  v71 = sub_1C71458(ServantLeaderInfo___TypeInfo, 1);
  *(_QWORD *)(v14 + 40) = v71;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 40), v71, v72, v73, v74, v75, v76, v77);
  v78 = *(_QWORD *)(v14 + 40);
  if ( !v78 )
    goto LABEL_41;
  Instance = sub_1C714EC(v15, *(_QWORD *)(*(_QWORD *)v78 + 64LL));
  if ( !Instance )
    goto LABEL_54;
  if ( !*(_DWORD *)(v78 + 24) )
    goto LABEL_53;
  *(_QWORD *)(v78 + 32) = v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v78 + 32), v15, v79, v80, v81, v82, v83, v84);
  v85 = sub_1C71458(ServantLeaderInfo___TypeInfo, 1);
  *(_QWORD *)(v14 + 48) = v85;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 48), v85, v86, v87, v88, v89, v90, v91);
  v92 = *(_QWORD *)(v14 + 48);
  if ( !v92 )
LABEL_41:
    sub_1C71608(Instance, v17);
  Instance = sub_1C714EC(v15, *(_QWORD *)(*(_QWORD *)v92 + 64LL));
  if ( !Instance )
  {
LABEL_54:
    v101 = sub_1C7162C(Instance);
    sub_1C714D8(v101, 0);
  }
  if ( !*(_DWORD *)(v92 + 24) )
LABEL_53:
    sub_1C71610(Instance);
  *(_QWORD *)(v92 + 32) = v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v92 + 32), v15, v93, v94, v95, v96, v97, v98);
  id = this->fields.id;
  *(_BYTE *)(v14 + 104) = isMySvtOrNpc;
  *(_BYTE *)(v14 + 105) = isFixedNpc;
  result = (FollowerInfo_o *)v14;
  *(_QWORD *)(v14 + 80) = id;
  *(_DWORD *)(v14 + 108) = imageSvtId;
  return result;
}