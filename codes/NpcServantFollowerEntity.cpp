void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4212002 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_long___ctor__, method);
    byte_4212002 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_2669AD8 *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_19795384(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_19795384(
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
  DataManager_o *Instance; // x0
  ServantChangeEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  System_String_o *name; // x0
  ServantEntity_o *Entity; // x0

  v10 = this;
  if ( (byte_4211FFC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&string_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_11761/*"SERVANT_HIDE_NAME"*/, v16);
    sub_B0D8A4(&StringLiteral_9333/*"NONE"*/, v17);
    this = (NpcServantFollowerEntity_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    byte_4211FFC = 1;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_24;
        v25 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v10->fields.svtId, 0LL);
        if ( v25 )
        {
          OverwriteServantName = NpcFollowerEntity__GetServantName(
                                   v21,
                                   v25->fields.priority,
                                   string_TypeInfo->static_fields->Empty,
                                   v26);
          if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
            return OverwriteServantName;
        }
      }
    }
    name = v10->fields.name;
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9333/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v10->fields.svtId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName(Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_24:
    sub_B0D97C(Instance);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_11761/*"SERVANT_HIDE_NAME"*/, 0LL);
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
  DataManager_o *Instance; // x0
  ServantChangeEntity_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t result; // w0

  v8 = this;
  if ( (byte_4211FFD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantOverwriteMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    this = (NpcServantFollowerEntity_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4211FFD = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v14 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v13) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_18;
      v17 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v8->fields.svtId, 0LL);
      if ( v17 )
      {
        result = NpcFollowerEntity__GetServantTd(v14, v17->fields.priority, -1, v18);
        if ( result != -1 )
          return result;
        return v8->fields.treasureDeviceId;
      }
    }
    if ( NpcFollowerEntity__IsOverwriteTreasureDevice(v14, v15) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
LABEL_18:
      sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v10; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4211FFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, followerId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4211FFE = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, v10);
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
  __int64 v10; // x1
  struct System_String_o *individuality; // x0
  System_String_o *v12; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v19; // x0

  if ( (byte_4212001 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_B0D8A4(&Method_System_Func_string__int___ctor__, v5);
    sub_B0D8A4(&System_Func_string__int__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Int32_Parse__, v7);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v10);
    byte_4212001 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_11;
  individuality = System_String__Replace_43857140(
                    individuality,
                    (System_String_o *)StringLiteral_15681/*"["*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !individuality )
    goto LABEL_11;
  v12 = System_String__Replace_43857140(
          individuality,
          (System_String_o *)StringLiteral_15917/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  individuality = (struct System_String_o *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !individuality )
    goto LABEL_11;
  if ( !LODWORD(individuality[1].klass) )
  {
    v19 = sub_B0D9A8(individuality);
    sub_B0D948(v19, 0LL);
  }
  LOWORD(individuality[1].monitor) = 44;
  if ( !v12 )
LABEL_11:
    sub_B0D97C(individuality);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               v12,
                                                               (System_Char_array *)individuality,
                                                               0LL);
  v16 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                          System_Func_string__int__TypeInfo,
                                                                          v14,
                                                                          v15);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v16,
    0LL,
    Method_System_Int32_Parse__,
    (const MethodInfo_2619564 *)Method_System_Func_string__int___ctor__);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)v16,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4212000 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9333/*"NONE"*/, method);
    byte_4212000 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9333/*"NONE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  FollowerInfo_o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x24
  __int64 Instance; // x0
  int32_t svtId; // w19
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  struct System_Int32_array *passiveSkill; // x1
  __int64 v31; // x8
  __int64 v32; // x9
  __int64 v33; // x0
  System_Array_o **v34; // x19
  const MethodInfo *v35; // x4
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  struct System_Int32_array *v40; // x8
  unsigned int *v41; // x28
  AppendPassiveSkillInfo_o **v42; // x19
  __int64 v43; // x21
  unsigned __int64 v44; // x26
  AppendPassiveSkillInfo_o *v45; // x20
  struct System_Int32_array *v46; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  const MethodInfo *v48; // x5
  int v49; // w8
  System_String_o *FollowerName_19795384; // x0
  __int64 v51; // x0
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x19
  __int64 v53; // x0
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  FollowerInfo_o *result; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  int32_t v58; // [xsp+Ch] [xbp-84h]
  int32_t v59; // [xsp+10h] [xbp-80h]
  System_String_array *explanationList; // [xsp+20h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+28h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+30h] [xbp-60h] BYREF
  bool isChangeName; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4211FFF & 1) == 0 )
  {
    sub_B0D8A4(&AppendPassiveSkillInfo___TypeInfo, followerId);
    sub_B0D8A4(&AppendPassiveSkillInfo_TypeInfo, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_B0D8A4(&FollowerInfo_TypeInfo, v16);
    sub_B0D8A4(&int___TypeInfo, v17);
    sub_B0D8A4(&NetworkManager_TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B0D8A4(&ServantLeaderInfo___TypeInfo, v20);
    sub_B0D8A4(&ServantLeaderInfo_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4211FFF = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v23 = (FollowerInfo_o *)sub_B0D974(FollowerInfo_TypeInfo, followerId, *(_QWORD *)&questId);
  FollowerInfo___ctor(v23, 0LL);
  v26 = sub_B0D974(ServantLeaderInfo_TypeInfo, v24, v25);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_38;
  *(_QWORD *)(v26 + 24) = followerId;
  *(_QWORD *)(v26 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v26 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v26 + 64) = this->fields.limitCount;
  if ( dispLmtCnt >= 11 )
    *(int32x4_t *)(v26 + 160) = vdupq_n_s32(dispLmtCnt);
  *(_DWORD *)(v26 + 68) = this->fields.lv;
  *(_DWORD *)(v26 + 72) = 0;
  *(_DWORD *)(v26 + 76) = this->fields.hp;
  *(_DWORD *)(v26 + 80) = this->fields.atk;
  *(_DWORD *)(v26 + 92) = this->fields.skillId1;
  *(_DWORD *)(v26 + 96) = this->fields.skillId2;
  *(_DWORD *)(v26 + 100) = this->fields.skillId3;
  *(_DWORD *)(v26 + 104) = this->fields.skillLv1;
  *(_DWORD *)(v26 + 108) = this->fields.skillLv2;
  *(_DWORD *)(v26 + 112) = this->fields.skillLv3;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        MasterData_WarQuestSelectionMaster,
                        Instance,
                        this->fields.svtId,
                        0LL);
  if ( !Instance )
    goto LABEL_38;
  UserServantCollectionEntity__getPassiveSkillInfo(
    (UserServantCollectionEntity_o *)Instance,
    &idList,
    &titleList,
    &explanationList,
    -1,
    0,
    0LL);
  passiveSkill = this->fields.passiveSkill;
  if ( !passiveSkill || (v31 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_24:
    *(_QWORD *)(v26 + 120) = passiveSkill;
    sub_B0D840(v26 + 120, passiveSkill);
    goto LABEL_25;
  }
  if ( !idList )
    goto LABEL_24;
  v32 = *(_QWORD *)&idList->max_length;
  if ( !v32 )
    goto LABEL_24;
  v33 = sub_B0D8BC(int___TypeInfo, (unsigned int)(v32 + v31));
  *(_QWORD *)(v26 + 120) = v33;
  v34 = (System_Array_o **)(v26 + 120);
  sub_B0D840(v26 + 120, v33);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)idList, *v34, 0, 0LL);
  if ( !idList )
    goto LABEL_38;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)Instance, *v34, idList->max_length, 0LL);
LABEL_25:
  v58 = questPhase;
  v59 = questId;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v35);
  *(_DWORD *)(v26 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v26 + 152) = 0LL;
  *(_DWORD *)(v26 + 132) = treasureDeviceLv;
  *(_DWORD *)(v26 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_38;
  Instance = sub_B0D8BC(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v40 = this->fields.appendPassiveSkillIds;
  if ( !v40 )
    goto LABEL_38;
  v41 = (unsigned int *)Instance;
  v42 = (AppendPassiveSkillInfo_o **)(Instance + 32);
  v43 = 8LL;
  while ( 1 )
  {
    v44 = v43 - 8;
    if ( v43 - 8 >= (int)v40->max_length )
      break;
    v45 = (AppendPassiveSkillInfo_o *)sub_B0D974(AppendPassiveSkillInfo_TypeInfo, v38, v39);
    AppendPassiveSkillInfo___ctor(v45, 0LL);
    v46 = this->fields.appendPassiveSkillIds;
    if ( !v46 )
      goto LABEL_38;
    if ( v44 >= v46->max_length )
      goto LABEL_50;
    if ( !v45 )
      goto LABEL_38;
    v45->fields.skillId = *((_DWORD *)&v46->obj.klass + v43);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_38;
    if ( v44 >= appendPassiveSkillLvs->max_length )
      goto LABEL_50;
    v45->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v43);
    if ( !v41 )
      goto LABEL_38;
    Instance = sub_B0D964(v45, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
    if ( !Instance )
      goto LABEL_51;
    if ( v44 >= v41[6] )
      goto LABEL_50;
    *v42 = v45;
    sub_B0D840(v42, v45);
    v40 = this->fields.appendPassiveSkillIds;
    ++v43;
    ++v42;
    if ( !v40 )
      goto LABEL_38;
  }
  *(_QWORD *)(v26 + 216) = v41;
  sub_B0D840(v26 + 216, v41);
  if ( !v23 )
    goto LABEL_38;
  v23->fields.userId = followerId;
  v49 = (*(_DWORD *)(v26 + 192) & 4) != 0 ? 4 : 3;
  v23->fields.type = v49;
  isChangeName = 0;
  FollowerName_19795384 = NpcServantFollowerEntity__GetFollowerName_19795384(
                            this,
                            followerId,
                            v59,
                            v58,
                            &isChangeName,
                            v48);
  v23->fields.userName = FollowerName_19795384;
  sub_B0D840(&v23->fields.userName, FollowerName_19795384);
  v23->fields.userLv = 0;
  v51 = sub_B0D8BC(ServantLeaderInfo___TypeInfo, 1LL);
  v23->fields.userSvtLeaderHash = (struct ServantLeaderInfo_array *)v51;
  sub_B0D840(&v23->fields.userSvtLeaderHash, v51);
  userSvtLeaderHash = v23->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_38;
  Instance = sub_B0D964(v26, userSvtLeaderHash->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_51;
  if ( !userSvtLeaderHash->max_length )
    goto LABEL_50;
  userSvtLeaderHash->m_Items[0] = (ServantLeaderInfo_o *)v26;
  sub_B0D840(userSvtLeaderHash->m_Items, v26);
  v53 = sub_B0D8BC(ServantLeaderInfo___TypeInfo, 1LL);
  v23->fields.eventUserSvtLeaderHash = (struct ServantLeaderInfo_array *)v53;
  sub_B0D840(&v23->fields.eventUserSvtLeaderHash, v53);
  eventUserSvtLeaderHash = v23->fields.eventUserSvtLeaderHash;
  if ( !eventUserSvtLeaderHash )
LABEL_38:
    sub_B0D97C(Instance);
  Instance = sub_B0D964(v26, eventUserSvtLeaderHash->obj.klass->_1.element_class);
  if ( !Instance )
  {
LABEL_51:
    v57 = sub_B0D99C();
    sub_B0D948(v57, 0LL);
  }
  if ( !eventUserSvtLeaderHash->max_length )
  {
LABEL_50:
    v56 = sub_B0D9A8(Instance);
    sub_B0D948(v56, 0LL);
  }
  eventUserSvtLeaderHash->m_Items[0] = (ServantLeaderInfo_o *)v26;
  sub_B0D840(eventUserSvtLeaderHash->m_Items, v26);
  result = v23;
  v23->fields.npcFollowerSvtId = this->fields.id;
  v23->fields.isMySvtOrNpc = isMySvtOrNpc;
  v23->fields.isFixedNpc = isFixedNpc;
  v23->fields.imageSvtId = imageSvtId;
  return result;
}