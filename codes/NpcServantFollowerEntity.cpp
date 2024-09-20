void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B542 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    byte_4A5B542 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_39434324(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_39434324(
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
  if ( (byte_4A5B53C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_11618/*"SERVANT_HIDE_NAME"*/);
    sub_1B885B0(&StringLiteral_9251/*"NONE"*/);
    this = (NpcServantFollowerEntity_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B53C = 1;
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
      if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
        return OverwriteServantName;
      if ( NpcFollowerEntity__IsExistSvtChangeParam(v13, v15) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_23;
        v18 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v10->fields.svtId, 0LL);
        if ( v18 )
        {
          OverwriteServantName = NpcFollowerEntity__GetServantName(
                                   v13,
                                   v18->fields.priority,
                                   string_TypeInfo->static_fields->Empty,
                                   v19);
          if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
            return OverwriteServantName;
        }
      }
    }
    name = v10->fields.name;
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9251/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.svtId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName((ServantEntity_o *)Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_23:
    sub_1B8880C(Instance, v17);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11618/*"SERVANT_HIDE_NAME"*/, 0LL);
}


int32_t __fastcall NpcServantFollowerEntity__GetFollowerTreasureDeviceId(
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
  if ( (byte_4A5B53D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantOverwriteMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    this = (NpcServantFollowerEntity_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B53D = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v11 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v10) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_17;
      v15 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v8->fields.svtId, 0LL);
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
      Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_1B8880C(Instance, v14);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B53E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B53E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v9);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, v10);
  return entity;
}


System_Int32_array *__fastcall NpcServantFollowerEntity__GetOverwriteIndividuality(
        NpcServantFollowerEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0

  if ( (byte_4A5B541 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&Method_System_Int32_Parse__);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5B541 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality
    || (individuality = System_String__Replace_61726660(
                          individuality,
                          (System_String_o *)StringLiteral_15812/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (individuality = System_String__Replace_61726660(
                          individuality,
                          (System_String_o *)StringLiteral_16069/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1B8880C(individuality, v3);
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(individuality, 0x2Cu, 0, 0LL);
  v6 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v6, 0LL, Method_System_Int32_Parse__, 0LL);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                              v5,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v7,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4A5B540 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9251/*"NONE"*/);
    byte_4A5B540 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9251/*"NONE"*/, 0LL);
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
  __int64 v14; // x23
  __int64 v15; // x24
  __int64 Instance; // x0
  __int64 v17; // x1
  int32_t svtId; // w19
  Il2CppObject *MasterData_object; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Int32_array *passiveSkill; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  __int64 v25; // x0
  System_Array_o **v26; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x4
  int64_t v30; // x1
  int64_t v31; // x21
  int32_t v32; // w27
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Int32_array *v37; // x8
  unsigned int *v38; // x28
  ServantStatusBattleListViewItem_o *v39; // x29
  __int64 v40; // x25
  unsigned __int64 v41; // x26
  AppendPassiveSkillInfo_o *v42; // x19
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  int32_t v45; // w2
  int32_t v46; // w3
  const MethodInfo *v47; // x5
  int v48; // w8
  System_String_o *FollowerName_39434324; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  __int64 v55; // x19
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x19
  int32_t v62; // w2
  int32_t v63; // w3
  int64_t id; // x8
  FollowerInfo_o *result; // x0
  __int64 v66; // x0
  int32_t questIda; // [xsp+Ch] [xbp-84h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+20h] [xbp-70h] BYREF
  bool isChangeName; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5B53F & 1) == 0 )
  {
    sub_1B885B0(&AppendPassiveSkillInfo___TypeInfo);
    sub_1B885B0(&AppendPassiveSkillInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&FollowerInfo_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantLeaderInfo___TypeInfo);
    sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B53F = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v14 = sub_1B887FC(FollowerInfo_TypeInfo);
  FollowerInfo___ctor((FollowerInfo_o *)v14, 0LL);
  v15 = sub_1B887FC(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_36;
  *(_QWORD *)(v15 + 24) = followerId;
  *(_QWORD *)(v15 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v15 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v15 + 64) = this->fields.limitCount;
  if ( dispLmtCnt >= 11 )
    *(int32x4_t *)(v15 + 160) = vdupq_n_s32(dispLmtCnt);
  *(_QWORD *)(v15 + 68) = (unsigned int)this->fields.lv;
  *(_QWORD *)(v15 + 76) = *(_QWORD *)&this->fields.hp;
  *(_OWORD *)(v15 + 92) = *(_OWORD *)&this->fields.skillId1;
  *(_QWORD *)(v15 + 108) = *(_QWORD *)&this->fields.skillLv2;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  if ( !passiveSkill || (v23 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_22:
    *(_QWORD *)(v15 + 120) = passiveSkill;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 120), (int32_t)passiveSkill, v20, v21);
    goto LABEL_23;
  }
  if ( !idList )
    goto LABEL_22;
  v24 = *(_QWORD *)&idList->max_length;
  if ( !v24 )
    goto LABEL_22;
  v25 = sub_1B88658(int___TypeInfo, (unsigned int)(v24 + v23));
  *(_QWORD *)(v15 + 120) = v25;
  v26 = (System_Array_o **)(v15 + 120);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 120), v25, v27, v28);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_36;
  System_Array__CopyTo((System_Array_o *)idList, *v26, 0, 0LL);
  if ( !idList )
    goto LABEL_36;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_36;
  System_Array__CopyTo((System_Array_o *)Instance, *v26, idList->max_length, 0LL);
LABEL_23:
  v30 = followerId;
  v31 = followerId;
  questIda = questId;
  v32 = questPhase;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, v30, questId, questPhase, v29);
  *(_DWORD *)(v15 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v15 + 152) = 0LL;
  *(_DWORD *)(v15 + 132) = treasureDeviceLv;
  *(_DWORD *)(v15 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_36;
  Instance = sub_1B88658(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v37 = this->fields.appendPassiveSkillIds;
  if ( !v37 )
    goto LABEL_36;
  v38 = (unsigned int *)Instance;
  v39 = (ServantStatusBattleListViewItem_o *)(Instance + 32);
  v40 = 8LL;
  while ( 1 )
  {
    v41 = v40 - 8;
    if ( v40 - 8 >= (int)v37->max_length )
      break;
    v42 = (AppendPassiveSkillInfo_o *)sub_1B887FC(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v42, 0LL);
    v43 = this->fields.appendPassiveSkillIds;
    if ( !v43 )
      goto LABEL_36;
    if ( v41 >= v43->max_length )
      goto LABEL_48;
    if ( !v42 )
      goto LABEL_36;
    v42->fields.skillId = *((_DWORD *)&v43->obj.klass + v40);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_36;
    if ( v41 >= appendPassiveSkillLvs->max_length )
      goto LABEL_48;
    v42->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v40);
    if ( !v38 )
      goto LABEL_36;
    Instance = sub_1B886EC(v42, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
    if ( !Instance )
      goto LABEL_49;
    if ( v41 >= v38[6] )
      goto LABEL_48;
    v39->klass = (ServantStatusBattleListViewItem_c *)v42;
    sub_1B88554(v39, (int32_t)v42, v45, v46);
    v37 = this->fields.appendPassiveSkillIds;
    ++v40;
    v39 = (ServantStatusBattleListViewItem_o *)((char *)v39 + 8);
    if ( !v37 )
      goto LABEL_36;
  }
  *(_QWORD *)(v15 + 216) = v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 216), (int32_t)v38, v35, v36);
  if ( !v14 )
    goto LABEL_36;
  *(_QWORD *)(v14 + 16) = v31;
  v48 = (*(_DWORD *)(v15 + 192) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v14 + 36) = v48;
  isChangeName = 0;
  FollowerName_39434324 = NpcServantFollowerEntity__GetFollowerName_39434324(
                            this,
                            v31,
                            questIda,
                            v32,
                            &isChangeName,
                            v47);
  *(_QWORD *)(v14 + 24) = FollowerName_39434324;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)FollowerName_39434324, v50, v51);
  *(_DWORD *)(v14 + 32) = 0;
  v52 = sub_1B88658(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v14 + 40) = v52;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 40), v52, v53, v54);
  v55 = *(_QWORD *)(v14 + 40);
  if ( !v55 )
    goto LABEL_36;
  Instance = sub_1B886EC(v15, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
  if ( !Instance )
    goto LABEL_49;
  if ( !*(_DWORD *)(v55 + 24) )
    goto LABEL_48;
  *(_QWORD *)(v55 + 32) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 32), v15, v56, v57);
  v58 = sub_1B88658(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v14 + 48) = v58;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 48), v58, v59, v60);
  v61 = *(_QWORD *)(v14 + 48);
  if ( !v61 )
LABEL_36:
    sub_1B8880C(Instance, v17);
  Instance = sub_1B886EC(v15, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
  if ( !Instance )
  {
LABEL_49:
    v66 = sub_1B88830(Instance);
    sub_1B886D8(v66, 0LL);
  }
  if ( !*(_DWORD *)(v61 + 24) )
LABEL_48:
    sub_1B88814(Instance, v17);
  *(_QWORD *)(v61 + 32) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v61 + 32), v15, v62, v63);
  id = this->fields.id;
  *(_BYTE *)(v14 + 104) = isMySvtOrNpc;
  *(_BYTE *)(v14 + 105) = isFixedNpc;
  result = (FollowerInfo_o *)v14;
  *(_QWORD *)(v14 + 80) = id;
  *(_DWORD *)(v14 + 108) = imageSvtId;
  return result;
}