void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B0248B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_long___ctor__, method);
    byte_4B0248B = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32ACBD4 *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_41330620(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_41330620(
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
  if ( (byte_4B02485 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BC3008(&string_TypeInfo, v15);
    sub_1BC3008(&StringLiteral_11535/*"SERVANT_HIDE_NAME"*/, v16);
    sub_1BC3008(&StringLiteral_9194/*"NONE"*/, v17);
    this = (NpcServantFollowerEntity_o *)sub_1BC3008(&StringLiteral_1/*""*/, v18);
    byte_4B02485 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
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
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9194/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.svtId,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName((ServantEntity_o *)Entity, v10->fields.limitCount, -1, 0, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_23:
    sub_1BC3264(Instance, v25);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11535/*"SERVANT_HIDE_NAME"*/, 0LL);
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
  if ( (byte_4B02486 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantOverwriteMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    this = (NpcServantFollowerEntity_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B02486 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v14 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v13) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
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
      Instance = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_1BC3264(Instance, v17);
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

  if ( (byte_4B02487 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_NpcFollowerMaster___, followerId);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B02487 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v10);
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

  if ( (byte_4B0248A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_string__int___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1BC3008(&System_Func_string__int__TypeInfo, v4);
    sub_1BC3008(&Method_System_Int32_Parse__, v5);
    sub_1BC3008(&StringLiteral_15658/*"["*/, v6);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    sub_1BC3008(&StringLiteral_15911/*"]"*/, v8);
    byte_4B0248A = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality
    || (individuality = System_String__Replace_62395196(
                          individuality,
                          (System_String_o *)StringLiteral_15658/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (individuality = System_String__Replace_62395196(
                          individuality,
                          (System_String_o *)StringLiteral_15911/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1BC3264(individuality, v9);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(individuality, 0x2Cu, 0, 0LL);
  v12 = (System_Func_object__int__o *)sub_1BC3254(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v12, 0LL, Method_System_Int32_Parse__, 0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v13,
           (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4B02489 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9194/*"NONE"*/, method);
    byte_4B02489 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9194/*"NONE"*/, 0LL);
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
  const MethodInfo *v30; // x3
  struct System_Int32_array *passiveSkill; // x1
  __int64 v32; // x8
  __int64 v33; // x9
  __int64 v34; // x0
  System_Array_o **v35; // x19
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x4
  int64_t v39; // x27
  int32_t v40; // w21
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Int32_array *v45; // x8
  unsigned int *v46; // x28
  CGThumbnailListItem_o *v47; // x29
  __int64 v48; // x25
  unsigned __int64 v49; // x26
  AppendPassiveSkillInfo_o *v50; // x19
  __int64 v51; // x2
  struct System_Int32_array *v52; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x5
  int v56; // w8
  System_String_o *FollowerName_41330620; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x19
  const MethodInfo *v64; // x3
  __int64 v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x19
  const MethodInfo *v69; // x3
  int64_t id; // x8
  FollowerInfo_o *result; // x0
  __int64 v72; // x0
  int32_t questIda; // [xsp+Ch] [xbp-84h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+20h] [xbp-70h] BYREF
  bool isChangeName; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B02488 & 1) == 0 )
  {
    sub_1BC3008(&AppendPassiveSkillInfo___TypeInfo, followerId);
    sub_1BC3008(&AppendPassiveSkillInfo_TypeInfo, v14);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_1BC3008(&FollowerInfo_TypeInfo, v16);
    sub_1BC3008(&int___TypeInfo, v17);
    sub_1BC3008(&NetworkManager_TypeInfo, v18);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BC3008(&ServantLeaderInfo___TypeInfo, v20);
    sub_1BC3008(&ServantLeaderInfo_TypeInfo, v21);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B02488 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v23 = sub_1BC3254(FollowerInfo_TypeInfo);
  FollowerInfo___ctor((FollowerInfo_o *)v23, 0LL);
  v24 = sub_1BC3254(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_41;
  *(_QWORD *)(v24 + 24) = followerId;
  *(_QWORD *)(v24 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v24 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v24 + 64) = this->fields.limitCount;
  if ( (dispLmtCnt & 0x80000000) == 0 )
  {
    *(_DWORD *)(v24 + 180) = dispLmtCnt;
    if ( dispLmtCnt >= 11 )
    {
      *(_DWORD *)(v24 + 176) = dispLmtCnt;
      *(_DWORD *)(v24 + 184) = dispLmtCnt;
      *(_DWORD *)(v24 + 188) = dispLmtCnt;
    }
  }
  *(_QWORD *)(v24 + 68) = (unsigned int)this->fields.lv;
  *(_QWORD *)(v24 + 76) = *(_QWORD *)&this->fields.hp;
  *(_OWORD *)(v24 + 92) = *(_OWORD *)&this->fields.skillId1;
  *(_QWORD *)(v24 + 108) = *(_QWORD *)&this->fields.skillLv2;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v26);
    byte_4AFC1F1 = 1;
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
                        0LL);
  if ( !Instance )
    goto LABEL_41;
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
LABEL_27:
    *(_QWORD *)(v24 + 120) = passiveSkill;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 120), (int32_t)passiveSkill, v29, v30);
    goto LABEL_28;
  }
  if ( !idList )
    goto LABEL_27;
  v33 = *(_QWORD *)&idList->max_length;
  if ( !v33 )
    goto LABEL_27;
  v34 = sub_1BC30B0(int___TypeInfo, (unsigned int)(v33 + v32));
  *(_QWORD *)(v24 + 120) = v34;
  v35 = (System_Array_o **)(v24 + 120);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 120), v34, v36, v37);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)idList, *v35, 0, 0LL);
  if ( !idList )
    goto LABEL_41;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)Instance, *v35, idList->max_length, 0LL);
LABEL_28:
  v39 = followerId;
  questIda = questId;
  v40 = questPhase;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v38);
  *(_DWORD *)(v24 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v24 + 168) = 0LL;
  *(_DWORD *)(v24 + 132) = treasureDeviceLv;
  *(_DWORD *)(v24 + 272) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_41;
  Instance = sub_1BC30B0(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v45 = this->fields.appendPassiveSkillIds;
  if ( !v45 )
    goto LABEL_41;
  v46 = (unsigned int *)Instance;
  v47 = (CGThumbnailListItem_o *)(Instance + 32);
  v48 = 8LL;
  while ( 1 )
  {
    v49 = v48 - 8;
    if ( v48 - 8 >= (int)v45->max_length )
      break;
    v50 = (AppendPassiveSkillInfo_o *)sub_1BC3254(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v50, 0LL);
    v52 = this->fields.appendPassiveSkillIds;
    if ( !v52 )
      goto LABEL_41;
    if ( v49 >= v52->max_length )
      goto LABEL_53;
    if ( !v50 )
      goto LABEL_41;
    v50->fields.skillId = *((_DWORD *)&v52->obj.klass + v48);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_41;
    if ( v49 >= appendPassiveSkillLvs->max_length )
      goto LABEL_53;
    v50->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v48);
    if ( !v46 )
      goto LABEL_41;
    Instance = sub_1BC3144(v50, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
    if ( !Instance )
      goto LABEL_54;
    if ( v49 >= v46[6] )
      goto LABEL_53;
    v47->klass = (CGThumbnailListItem_c *)v50;
    sub_1BC2FAC(v47, (int32_t)v50, v51, v54);
    v45 = this->fields.appendPassiveSkillIds;
    ++v48;
    v47 = (CGThumbnailListItem_o *)((char *)v47 + 8);
    if ( !v45 )
      goto LABEL_41;
  }
  *(_QWORD *)(v24 + 224) = v46;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 224), (int32_t)v46, v43, v44);
  if ( !v23 )
    goto LABEL_41;
  *(_QWORD *)(v23 + 16) = v39;
  v56 = (*(_DWORD *)(v24 + 272) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v23 + 36) = v56;
  isChangeName = 0;
  FollowerName_41330620 = NpcServantFollowerEntity__GetFollowerName_41330620(
                            this,
                            v39,
                            questIda,
                            v40,
                            &isChangeName,
                            v55);
  *(_QWORD *)(v23 + 24) = FollowerName_41330620;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 24), (int32_t)FollowerName_41330620, v58, v59);
  *(_DWORD *)(v23 + 32) = 0;
  v60 = sub_1BC30B0(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v23 + 40) = v60;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 40), v60, v61, v62);
  v63 = *(_QWORD *)(v23 + 40);
  if ( !v63 )
    goto LABEL_41;
  Instance = sub_1BC3144(v24, *(_QWORD *)(*(_QWORD *)v63 + 64LL));
  if ( !Instance )
    goto LABEL_54;
  if ( !*(_DWORD *)(v63 + 24) )
    goto LABEL_53;
  *(_QWORD *)(v63 + 32) = v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v63 + 32), v24, v51, v64);
  v65 = sub_1BC30B0(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v23 + 48) = v65;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 48), v65, v66, v67);
  v68 = *(_QWORD *)(v23 + 48);
  if ( !v68 )
LABEL_41:
    sub_1BC3264(Instance, v26);
  Instance = sub_1BC3144(v24, *(_QWORD *)(*(_QWORD *)v68 + 64LL));
  if ( !Instance )
  {
LABEL_54:
    v72 = sub_1BC3288(Instance);
    sub_1BC3130(v72, 0LL);
  }
  if ( !*(_DWORD *)(v68 + 24) )
LABEL_53:
    sub_1BC326C(Instance, v26, v51);
  *(_QWORD *)(v68 + 32) = v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v68 + 32), v24, v51, v69);
  id = this->fields.id;
  *(_BYTE *)(v23 + 104) = isMySvtOrNpc;
  *(_BYTE *)(v23 + 105) = isFixedNpc;
  result = (FollowerInfo_o *)v23;
  *(_QWORD *)(v23 + 80) = id;
  *(_DWORD *)(v23 + 108) = imageSvtId;
  return result;
}