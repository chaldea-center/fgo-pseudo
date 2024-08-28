void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A1FEB0 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_long___ctor__, method);
    byte_4A1FEB0 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30F85A8 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall NpcServantFollowerEntity__CreatePrimaryKey(
        NpcServantFollowerEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool isChangeName; // [xsp+Ch] [xbp-4h] BYREF

  isChangeName = 0;
  return NpcServantFollowerEntity__GetFollowerName_39226520(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_39226520(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        bool *isChangeName,
        const MethodInfo *method)
{
  NpcServantFollowerEntity_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  const MethodInfo *v20; // x1
  NpcFollowerEntity_o *v21; // x21
  System_String_o *OverwriteServantName; // x22
  const MethodInfo *v23; // x1
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  ServantChangeEntity_o *v26; // x0
  const MethodInfo *v27; // x3
  System_String_o *name; // x0
  Il2CppObject *Entity; // x0

  v10 = this;
  if ( (byte_4A1FEAA & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B715CC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B715CC(&LocalizationManager_TypeInfo, v13);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B715CC(&string_TypeInfo, v15);
    sub_1B715CC(&StringLiteral_11577/*"SERVANT_HIDE_NAME"*/, v16);
    sub_1B715CC(&StringLiteral_9219/*"NONE"*/, v17);
    this = (NpcServantFollowerEntity_o *)sub_1B715CC(&StringLiteral_1/*""*/, v18);
    byte_4A1FEAA = 1;
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
      v21 = NpcFollowerEntity;
      OverwriteServantName = NpcFollowerEntity__GetOverwriteServantName(NpcFollowerEntity, v20);
      if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
        return OverwriteServantName;
      if ( NpcFollowerEntity__IsExistSvtChangeParam(v21, v23) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_23;
        v26 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v10->fields.svtId, 0LL);
        if ( v26 )
        {
          OverwriteServantName = NpcFollowerEntity__GetServantName(
                                   v21,
                                   v26->fields.priority,
                                   string_TypeInfo->static_fields->Empty,
                                   v27);
          if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
            return OverwriteServantName;
        }
      }
    }
    name = v10->fields.name;
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9219/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.svtId,
                   (const MethodInfo_30F8760 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName((ServantEntity_o *)Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_23:
    sub_1B71828(Instance, v25);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11577/*"SERVANT_HIDE_NAME"*/, 0LL);
}


int32_t __fastcall NpcServantFollowerEntity__GetFollowerTreasureDeviceId(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  NpcServantFollowerEntity_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  const MethodInfo *v13; // x1
  NpcFollowerEntity_o *v14; // x20
  const MethodInfo *v15; // x1
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  ServantChangeEntity_o *v18; // x0
  const MethodInfo *v19; // x3
  int32_t result; // w0

  v8 = this;
  if ( (byte_4A1FEAB & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantOverwriteMaster___, v9);
    sub_1B715CC(&DataManager_TypeInfo, v10);
    this = (NpcServantFollowerEntity_o *)sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A1FEAB = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v14 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v13) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_17;
      v18 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v8->fields.svtId, 0LL);
      if ( v18 )
      {
        result = NpcFollowerEntity__GetServantTd(v14, v18->fields.priority, -1, v19);
        if ( result != -1 )
          return result;
        return v8->fields.treasureDeviceId;
      }
    }
    if ( NpcFollowerEntity__IsOverwriteTreasureDevice(v14, v15) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
      if ( Instance )
      {
        result = ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
                   (ServantOverwriteMaster_o *)Instance,
                   v8->fields.svtId,
                   1,
                   0LL);
        if ( result > 0 )
          return result;
        return v8->fields.treasureDeviceId;
      }
LABEL_17:
      sub_1B71828(Instance, v17);
    }
  }
  return v8->fields.treasureDeviceId;
}


NpcFollowerEntity_o *__fastcall NpcServantFollowerEntity__GetNpcFollowerEntity(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A1FEAC & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, followerId);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A1FEAC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_1B71828(Instance, v10);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, v11);
  return entity;
}


System_Int32_array *__fastcall NpcServantFollowerEntity__GetOverwriteIndividuality(
        NpcServantFollowerEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__int__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4A1FEAF & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_string__int___, method);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1B715CC(&System_Func_string__int__TypeInfo, v4);
    sub_1B715CC(&Method_System_Int32_Parse__, v5);
    sub_1B715CC(&StringLiteral_15762/*"["*/, v6);
    sub_1B715CC(&StringLiteral_1/*""*/, v7);
    sub_1B715CC(&StringLiteral_16019/*"]"*/, v8);
    byte_4A1FEAF = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality
    || (individuality = System_String__Replace_61525132(
                          individuality,
                          (System_String_o *)StringLiteral_15762/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (individuality = System_String__Replace_61525132(
                          individuality,
                          (System_String_o *)StringLiteral_16019/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1B71828(individuality, v9);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(individuality, 0x2Cu, 0, 0LL);
  v12 = (System_Func_object__int__o *)sub_1B71818(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v12, 0LL, Method_System_Int32_Parse__, 0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_2E8B610 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v13,
           (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall NpcServantFollowerEntity__IsApplySvtChange(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 4) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsHideEquip(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 5) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsHideRarity(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 10) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsHideSupport(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 1) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsHideTreasureDeviceDetail(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 9) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsHideTreasureDeviceLv(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 8) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsNoDisplayBonusIcon(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 3) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsNoDisplayBonusIconEquip(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 6) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsNotClassBoard(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 11) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsNotUsedTreasureDevice(int32_t flag, const MethodInfo *method)
{
  return ((unsigned int)flag >> 2) & 1;
}


bool __fastcall NpcServantFollowerEntity__IsNpc(int32_t flag, const MethodInfo *method)
{
  return flag & 1;
}


bool __fastcall NpcServantFollowerEntity__IsOverwriteIndividuality(
        NpcServantFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A1FEAE & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_9219/*"NONE"*/, method);
    byte_4A1FEAE = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9219/*"NONE"*/, 0LL);
}


FollowerInfo_o *__fastcall NpcServantFollowerEntity__getFollowerInfo(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x23
  __int64 v24; // x24
  __int64 Instance; // x0
  __int64 v26; // x1
  int32_t svtId; // w19
  Il2CppObject *MasterData_object; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Int32_array *passiveSkill; // x1
  __int64 v32; // x8
  __int64 v33; // x9
  __int64 v34; // x0
  System_Array_o **v35; // x19
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x4
  int64_t v39; // x1
  int64_t v40; // x21
  int32_t v41; // w27
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Int32_array *v46; // x8
  unsigned int *v47; // x28
  ServantStatusBattleListViewItem_o *v48; // x29
  __int64 v49; // x25
  unsigned __int64 v50; // x26
  AppendPassiveSkillInfo_o *v51; // x19
  struct System_Int32_array *v52; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  int32_t v54; // w2
  int32_t v55; // w3
  const MethodInfo *v56; // x5
  int v57; // w8
  System_String_o *FollowerName_39226520; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x19
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x19
  int32_t v71; // w2
  int32_t v72; // w3
  int64_t id; // x8
  FollowerInfo_o *result; // x0
  __int64 v75; // x0
  int32_t questIda; // [xsp+Ch] [xbp-84h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+20h] [xbp-70h] BYREF
  bool isChangeName; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A1FEAD & 1) == 0 )
  {
    sub_1B715CC(&AppendPassiveSkillInfo___TypeInfo, followerId);
    sub_1B715CC(&AppendPassiveSkillInfo_TypeInfo, v14);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_1B715CC(&FollowerInfo_TypeInfo, v16);
    sub_1B715CC(&int___TypeInfo, v17);
    sub_1B715CC(&NetworkManager_TypeInfo, v18);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B715CC(&ServantLeaderInfo___TypeInfo, v20);
    sub_1B715CC(&ServantLeaderInfo_TypeInfo, v21);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4A1FEAD = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v23 = sub_1B71818(FollowerInfo_TypeInfo);
  FollowerInfo___ctor((FollowerInfo_o *)v23, 0LL);
  v24 = sub_1B71818(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_36;
  *(_QWORD *)(v24 + 24) = followerId;
  *(_QWORD *)(v24 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v24 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v24 + 64) = this->fields.limitCount;
  if ( dispLmtCnt >= 11 )
    *(int32x4_t *)(v24 + 160) = vdupq_n_s32(dispLmtCnt);
  *(_QWORD *)(v24 + 68) = (unsigned int)this->fields.lv;
  *(_QWORD *)(v24 + 76) = *(_QWORD *)&this->fields.hp;
  *(_OWORD *)(v24 + 92) = *(_OWORD *)&this->fields.skillId1;
  *(_QWORD *)(v24 + 108) = *(_QWORD *)&this->fields.skillLv2;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_36;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)MasterData_object,
                        Instance,
                        this->fields.svtId,
                        0LL);
  if ( !Instance )
    goto LABEL_36;
  UserServantCollectionEntity__getPassiveSkillInfo(
    (UserServantCollectionEntity_o *)Instance,
    &idList,
    &titleList,
    &explanationList,
    -1,
    0,
    0LL);
  passiveSkill = this->fields.passiveSkill;
  if ( !passiveSkill || (v32 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_22:
    *(_QWORD *)(v24 + 120) = passiveSkill;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v24 + 120), (int32_t)passiveSkill, v29, v30);
    goto LABEL_23;
  }
  if ( !idList )
    goto LABEL_22;
  v33 = *(_QWORD *)&idList->max_length;
  if ( !v33 )
    goto LABEL_22;
  v34 = sub_1B71674(int___TypeInfo, (unsigned int)(v33 + v32));
  *(_QWORD *)(v24 + 120) = v34;
  v35 = (System_Array_o **)(v24 + 120);
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v24 + 120), v34, v36, v37);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_36;
  System_Array__CopyTo((System_Array_o *)idList, *v35, 0, 0LL);
  if ( !idList )
    goto LABEL_36;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_36;
  System_Array__CopyTo((System_Array_o *)Instance, *v35, idList->max_length, 0LL);
LABEL_23:
  v39 = followerId;
  v40 = followerId;
  questIda = questId;
  v41 = questPhase;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, v39, questId, questPhase, v38);
  *(_DWORD *)(v24 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v24 + 152) = 0LL;
  *(_DWORD *)(v24 + 132) = treasureDeviceLv;
  *(_DWORD *)(v24 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_36;
  Instance = sub_1B71674(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v46 = this->fields.appendPassiveSkillIds;
  if ( !v46 )
    goto LABEL_36;
  v47 = (unsigned int *)Instance;
  v48 = (ServantStatusBattleListViewItem_o *)(Instance + 32);
  v49 = 8LL;
  while ( 1 )
  {
    v50 = v49 - 8;
    if ( v49 - 8 >= (int)v46->max_length )
      break;
    v51 = (AppendPassiveSkillInfo_o *)sub_1B71818(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v51, 0LL);
    v52 = this->fields.appendPassiveSkillIds;
    if ( !v52 )
      goto LABEL_36;
    if ( v50 >= v52->max_length )
      goto LABEL_48;
    if ( !v51 )
      goto LABEL_36;
    v51->fields.skillId = *((_DWORD *)&v52->obj.klass + v49);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_36;
    if ( v50 >= appendPassiveSkillLvs->max_length )
      goto LABEL_48;
    v51->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v49);
    if ( !v47 )
      goto LABEL_36;
    Instance = sub_1B71708(v51, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
    if ( !Instance )
      goto LABEL_49;
    if ( v50 >= v47[6] )
      goto LABEL_48;
    v48->klass = (ServantStatusBattleListViewItem_c *)v51;
    sub_1B71570(v48, (int32_t)v51, v54, v55);
    v46 = this->fields.appendPassiveSkillIds;
    ++v49;
    v48 = (ServantStatusBattleListViewItem_o *)((char *)v48 + 8);
    if ( !v46 )
      goto LABEL_36;
  }
  *(_QWORD *)(v24 + 216) = v47;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v24 + 216), (int32_t)v47, v44, v45);
  if ( !v23 )
    goto LABEL_36;
  *(_QWORD *)(v23 + 16) = v40;
  v57 = (*(_DWORD *)(v24 + 192) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v23 + 36) = v57;
  isChangeName = 0;
  FollowerName_39226520 = NpcServantFollowerEntity__GetFollowerName_39226520(
                            this,
                            v40,
                            questIda,
                            v41,
                            &isChangeName,
                            v56);
  *(_QWORD *)(v23 + 24) = FollowerName_39226520;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)FollowerName_39226520, v59, v60);
  *(_DWORD *)(v23 + 32) = 0;
  v61 = sub_1B71674(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v23 + 40) = v61;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v23 + 40), v61, v62, v63);
  v64 = *(_QWORD *)(v23 + 40);
  if ( !v64 )
    goto LABEL_36;
  Instance = sub_1B71708(v24, *(_QWORD *)(*(_QWORD *)v64 + 64LL));
  if ( !Instance )
    goto LABEL_49;
  if ( !*(_DWORD *)(v64 + 24) )
    goto LABEL_48;
  *(_QWORD *)(v64 + 32) = v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v64 + 32), v24, v65, v66);
  v67 = sub_1B71674(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v23 + 48) = v67;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v23 + 48), v67, v68, v69);
  v70 = *(_QWORD *)(v23 + 48);
  if ( !v70 )
LABEL_36:
    sub_1B71828(Instance, v26);
  Instance = sub_1B71708(v24, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
  if ( !Instance )
  {
LABEL_49:
    v75 = sub_1B7184C(Instance);
    sub_1B716F4(v75, 0LL);
  }
  if ( !*(_DWORD *)(v70 + 24) )
LABEL_48:
    sub_1B71830(Instance, v26);
  *(_QWORD *)(v70 + 32) = v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v70 + 32), v24, v71, v72);
  id = this->fields.id;
  *(_BYTE *)(v23 + 104) = isMySvtOrNpc;
  *(_BYTE *)(v23 + 105) = isFixedNpc;
  result = (FollowerInfo_o *)v23;
  *(_QWORD *)(v23 + 80) = id;
  *(_DWORD *)(v23 + 108) = imageSvtId;
  return result;
}