void NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43537 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_long___ctor__);
    byte_4C43537 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339EC04 *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_42423840(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *NpcServantFollowerEntity__GetFollowerName_42423840(
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
  ServantChangeEntity_o *v17; // x0
  const MethodInfo *v18; // x3
  System_String_o *name; // x0
  Il2CppObject *Entity; // x0

  v10 = this;
  if ( (byte_4C43531 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_11651/*"SERVANT_HIDE_NAME"*/);
    sub_1C37058(&StringLiteral_9276/*"NONE"*/);
    this = (NpcServantFollowerEntity_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C43531 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_23;
        v17 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v10->fields.svtId, 0);
        if ( v17 )
        {
          OverwriteServantName = NpcFollowerEntity__GetServantName(
                                   v13,
                                   v17->fields.priority,
                                   string_TypeInfo->static_fields->Empty,
                                   v18);
          if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0) )
            return OverwriteServantName;
        }
      }
    }
    name = v10->fields.name;
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9276/*"NONE"*/, 0) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.svtId,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName((ServantEntity_o *)Entity, v10->fields.limitCount, -1, 0, 0);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_23:
    sub_1C372B4(Instance);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11651/*"SERVANT_HIDE_NAME"*/, 0);
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
  ServantChangeEntity_o *v14; // x0
  const MethodInfo *v15; // x3
  int32_t result; // w0

  v8 = this;
  if ( (byte_4C43532 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantOverwriteMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    this = (NpcServantFollowerEntity_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43532 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v11 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v10) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_17;
      v14 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v8->fields.svtId, 0);
      if ( v14 )
      {
        result = NpcFollowerEntity__GetServantTd(v11, v14->fields.priority, -1, v15);
        if ( result != -1 )
          return result;
        return v8->fields.treasureDeviceId;
      }
    }
    if ( NpcFollowerEntity__IsOverwriteTreasureDevice(v11, v12) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_1C372B4(Instance);
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
  const MethodInfo *v9; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C43533 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43533 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, v9);
  return entity;
}


System_Int32_array *NpcServantFollowerEntity__GetOverwriteIndividuality(
        NpcServantFollowerEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x19
  System_Func_object__int__o *v5; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4C43536 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&Method_System_Int32_Parse__);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C43536 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0;
  individuality = this->fields.individuality;
  if ( !individuality
    || (individuality = System_String__Replace_63608204(
                          individuality,
                          (System_String_o *)StringLiteral_15804/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0
    || (individuality = System_String__Replace_63608204(
                          individuality,
                          (System_String_o *)StringLiteral_16058/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0)) == 0 )
  {
    sub_1C372B4(individuality);
  }
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(individuality, 0x2Cu, 0, 0);
  v5 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v5, 0, Method_System_Int32_Parse__, 0);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                              v4,
                                                              (System_Func_TSource__TResult__o *)v5,
                                                              (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v6,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4C43535 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9276/*"NONE"*/);
    byte_4C43535 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9276/*"NONE"*/, 0);
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
  int32_t svtId; // w19
  Il2CppObject *MasterData_object; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Int32_array *passiveSkill; // x1
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v23; // x9
  __int64 v24; // x0
  System_Array_o **v25; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x4
  int64_t v29; // x27
  int32_t v30; // w21
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Int32_array *v35; // x8
  unsigned int *v36; // x28
  CGThumbnailListItem_o *v37; // x29
  __int64 v38; // x25
  unsigned __int64 v39; // x26
  AppendPassiveSkillInfo_o *v40; // x19
  struct System_Int32_array *v41; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x5
  int v46; // w8
  System_String_o *FollowerName_42423840; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x19
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x19
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int64_t id; // x8
  FollowerInfo_o *result; // x0
  __int64 v64; // x0
  int32_t questIda; // [xsp+Ch] [xbp-84h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+20h] [xbp-70h] BYREF
  bool isChangeName; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C43534 & 1) == 0 )
  {
    sub_1C37058(&AppendPassiveSkillInfo___TypeInfo);
    sub_1C37058(&AppendPassiveSkillInfo_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&FollowerInfo_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&ServantLeaderInfo___TypeInfo);
    sub_1C37058(&ServantLeaderInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43534 = 1;
  }
  titleList = 0;
  idList = 0;
  explanationList = 0;
  v14 = sub_1C372A4(FollowerInfo_TypeInfo);
  FollowerInfo___ctor((FollowerInfo_o *)v14, 0);
  v15 = sub_1C372A4(ServantLeaderInfo_TypeInfo);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
    0);
  passiveSkill = this->fields.passiveSkill;
  if ( !passiveSkill || (max_length = passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_27:
    *(_QWORD *)(v15 + 120) = passiveSkill;
    sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 120), (int32_t)passiveSkill, v19, v20);
    goto LABEL_28;
  }
  if ( !idList )
    goto LABEL_27;
  v23 = idList->max_length;
  if ( !v23 )
    goto LABEL_27;
  v24 = sub_1C37100(int___TypeInfo, (unsigned int)(v23 + max_length));
  *(_QWORD *)(v15 + 120) = v24;
  v25 = (System_Array_o **)(v15 + 120);
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 120), v24, v26, v27);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)idList, *v25, 0, 0);
  if ( !idList )
    goto LABEL_41;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)Instance, *v25, idList->max_length, 0);
LABEL_28:
  v29 = followerId;
  questIda = questId;
  v30 = questPhase;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v28);
  *(_DWORD *)(v15 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v15 + 168) = 0;
  *(_DWORD *)(v15 + 132) = treasureDeviceLv;
  *(_DWORD *)(v15 + 272) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_41;
  Instance = sub_1C37100(AppendPassiveSkillInfo___TypeInfo, LODWORD(appendPassiveSkillIds->max_length));
  v35 = this->fields.appendPassiveSkillIds;
  if ( !v35 )
    goto LABEL_41;
  v36 = (unsigned int *)Instance;
  v37 = (CGThumbnailListItem_o *)(Instance + 32);
  v38 = 8;
  while ( 1 )
  {
    v39 = v38 - 8;
    if ( v38 - 8 >= SLODWORD(v35->max_length) )
      break;
    v40 = (AppendPassiveSkillInfo_o *)sub_1C372A4(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v40, 0);
    v41 = this->fields.appendPassiveSkillIds;
    if ( !v41 )
      goto LABEL_41;
    if ( v39 >= LODWORD(v41->max_length) )
      goto LABEL_53;
    if ( !v40 )
      goto LABEL_41;
    v40->fields.skillId = *((_DWORD *)&v41->obj.klass + v38);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_41;
    if ( v39 >= LODWORD(appendPassiveSkillLvs->max_length) )
      goto LABEL_53;
    v40->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v38);
    if ( !v36 )
      goto LABEL_41;
    Instance = sub_1C37194(v40, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
    if ( !Instance )
      goto LABEL_54;
    if ( v39 >= v36[6] )
      goto LABEL_53;
    v37->klass = (CGThumbnailListItem_c *)v40;
    sub_1C36FFC(v37, (int32_t)v40, v43, v44);
    v35 = this->fields.appendPassiveSkillIds;
    ++v38;
    v37 = (CGThumbnailListItem_o *)((char *)v37 + 8);
    if ( !v35 )
      goto LABEL_41;
  }
  *(_QWORD *)(v15 + 224) = v36;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 224), (int32_t)v36, v33, v34);
  if ( !v14 )
    goto LABEL_41;
  *(_QWORD *)(v14 + 16) = v29;
  v46 = (*(_DWORD *)(v15 + 272) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v14 + 36) = v46;
  isChangeName = 0;
  FollowerName_42423840 = NpcServantFollowerEntity__GetFollowerName_42423840(
                            this,
                            v29,
                            questIda,
                            v30,
                            &isChangeName,
                            v45);
  *(_QWORD *)(v14 + 24) = FollowerName_42423840;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 24), (int32_t)FollowerName_42423840, v48, v49);
  *(_DWORD *)(v14 + 32) = 0;
  v50 = sub_1C37100(ServantLeaderInfo___TypeInfo, 1);
  *(_QWORD *)(v14 + 40) = v50;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 40), v50, v51, v52);
  v53 = *(_QWORD *)(v14 + 40);
  if ( !v53 )
    goto LABEL_41;
  Instance = sub_1C37194(v15, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
  if ( !Instance )
    goto LABEL_54;
  if ( !*(_DWORD *)(v53 + 24) )
    goto LABEL_53;
  *(_QWORD *)(v53 + 32) = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)(v53 + 32), v15, v54, v55);
  v56 = sub_1C37100(ServantLeaderInfo___TypeInfo, 1);
  *(_QWORD *)(v14 + 48) = v56;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 48), v56, v57, v58);
  v59 = *(_QWORD *)(v14 + 48);
  if ( !v59 )
LABEL_41:
    sub_1C372B4(Instance);
  Instance = sub_1C37194(v15, *(_QWORD *)(*(_QWORD *)v59 + 64LL));
  if ( !Instance )
  {
LABEL_54:
    v64 = sub_1C372D8(Instance);
    sub_1C37180(v64, 0);
  }
  if ( !*(_DWORD *)(v59 + 24) )
LABEL_53:
    sub_1C372BC(Instance);
  *(_QWORD *)(v59 + 32) = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)(v59 + 32), v15, v60, v61);
  id = this->fields.id;
  *(_BYTE *)(v14 + 104) = isMySvtOrNpc;
  *(_BYTE *)(v14 + 105) = isFixedNpc;
  result = (FollowerInfo_o *)v14;
  *(_QWORD *)(v14 + 80) = id;
  *(_DWORD *)(v14 + 108) = imageSvtId;
  return result;
}