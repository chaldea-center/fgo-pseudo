void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185118 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, method);
    byte_4185118 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_20113708(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_20113708(
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
  __int64 v25; // x1
  ServantChangeEntity_o *v26; // x0
  const MethodInfo *v27; // x3
  System_String_o *name; // x0
  ServantEntity_o *Entity; // x0

  v10 = this;
  if ( (byte_4185112 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&string_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_11733/*"SERVANT_HIDE_NAME"*/, v16);
    sub_B2C35C(&StringLiteral_9310/*"NONE"*/, v17);
    this = (NpcServantFollowerEntity_o *)sub_B2C35C(&StringLiteral_1/*""*/, v18);
    byte_4185112 = 1;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_24;
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
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9310/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v10->fields.svtId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName(Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_24:
    sub_B2C434(Instance, v25);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_11733/*"SERVANT_HIDE_NAME"*/, 0LL);
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
  __int64 v17; // x1
  ServantChangeEntity_o *v18; // x0
  const MethodInfo *v19; // x3
  int32_t result; // w0

  v8 = this;
  if ( (byte_4185113 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantOverwriteMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    this = (NpcServantFollowerEntity_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4185113 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v14 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v13) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_18;
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
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_B2C434(Instance, v17);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4185114 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, followerId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4185114 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
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
  __int64 v10; // x1
  struct System_String_o *v11; // x1
  struct System_String_o *individuality; // x0
  System_String_o *v13; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v18; // x0

  if ( (byte_4185117 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_B2C35C(&Method_System_Func_string__int___ctor__, v5);
    sub_B2C35C(&System_Func_string__int__TypeInfo, v6);
    sub_B2C35C(&Method_System_Int32_Parse__, v7);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v10);
    byte_4185117 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_11;
  individuality = System_String__Replace_44312768(
                    individuality,
                    (System_String_o *)StringLiteral_15634/*"["*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !individuality )
    goto LABEL_11;
  v13 = System_String__Replace_44312768(
          individuality,
          (System_String_o *)StringLiteral_15870/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  individuality = (struct System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !individuality )
    goto LABEL_11;
  v11 = individuality;
  if ( !LODWORD(individuality[1].klass) )
  {
    v18 = sub_B2C460(individuality);
    sub_B2C400(v18, 0LL);
  }
  LOWORD(individuality[1].monitor) = 44;
  if ( !v13 )
LABEL_11:
    sub_B2C434(individuality, v11);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               v13,
                                                               (System_Char_array *)individuality,
                                                               0LL);
  v15 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_string__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v15,
    0LL,
    Method_System_Int32_Parse__,
    (const MethodInfo_27127B0 *)Method_System_Func_string__int___ctor__);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v14,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v16,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4185116 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9310/*"NONE"*/, method);
    byte_4185116 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9310/*"NONE"*/, 0LL);
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
  FollowerInfo_o *v23; // x23
  __int64 v24; // x24
  __int64 Instance; // x0
  __int64 v26; // x1
  int32_t svtId; // w19
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  struct System_Int32_array *passiveSkill; // x1
  __int64 v30; // x8
  __int64 v31; // x9
  __int64 v32; // x0
  System_Array_o **v33; // x19
  const MethodInfo *v34; // x4
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  struct System_Int32_array *v37; // x8
  unsigned int *v38; // x28
  AppendPassiveSkillInfo_o **v39; // x19
  __int64 v40; // x21
  unsigned __int64 v41; // x26
  AppendPassiveSkillInfo_o *v42; // x20
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  const MethodInfo *v45; // x5
  int v46; // w8
  System_String_o *FollowerName_20113708; // x0
  __int64 v48; // x0
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x19
  __int64 v50; // x0
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  FollowerInfo_o *result; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  int32_t v55; // [xsp+Ch] [xbp-84h]
  int32_t v56; // [xsp+10h] [xbp-80h]
  System_String_array *explanationList; // [xsp+20h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+28h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+30h] [xbp-60h] BYREF
  bool isChangeName; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4185115 & 1) == 0 )
  {
    sub_B2C35C(&AppendPassiveSkillInfo___TypeInfo, followerId);
    sub_B2C35C(&AppendPassiveSkillInfo_TypeInfo, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_B2C35C(&FollowerInfo_TypeInfo, v16);
    sub_B2C35C(&int___TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&ServantLeaderInfo___TypeInfo, v20);
    sub_B2C35C(&ServantLeaderInfo_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4185115 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v23 = (FollowerInfo_o *)sub_B2C42C(FollowerInfo_TypeInfo);
  FollowerInfo___ctor(v23, 0LL);
  v24 = sub_B2C42C(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_38;
  *(_QWORD *)(v24 + 24) = followerId;
  *(_QWORD *)(v24 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v24 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v24 + 64) = this->fields.limitCount;
  if ( dispLmtCnt >= 11 )
    *(int32x4_t *)(v24 + 160) = vdupq_n_s32(dispLmtCnt);
  *(_DWORD *)(v24 + 68) = this->fields.lv;
  *(_DWORD *)(v24 + 72) = 0;
  *(_DWORD *)(v24 + 76) = this->fields.hp;
  *(_DWORD *)(v24 + 80) = this->fields.atk;
  *(_DWORD *)(v24 + 92) = this->fields.skillId1;
  *(_DWORD *)(v24 + 96) = this->fields.skillId2;
  *(_DWORD *)(v24 + 100) = this->fields.skillId3;
  *(_DWORD *)(v24 + 104) = this->fields.skillLv1;
  *(_DWORD *)(v24 + 108) = this->fields.skillLv2;
  *(_DWORD *)(v24 + 112) = this->fields.skillLv3;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  if ( !passiveSkill || (v30 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_24:
    *(_QWORD *)(v24 + 120) = passiveSkill;
    sub_B2C2F8(v24 + 120, passiveSkill);
    goto LABEL_25;
  }
  if ( !idList )
    goto LABEL_24;
  v31 = *(_QWORD *)&idList->max_length;
  if ( !v31 )
    goto LABEL_24;
  v32 = sub_B2C374(int___TypeInfo, (unsigned int)(v31 + v30));
  *(_QWORD *)(v24 + 120) = v32;
  v33 = (System_Array_o **)(v24 + 120);
  sub_B2C2F8(v24 + 120, v32);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)idList, *v33, 0, 0LL);
  if ( !idList )
    goto LABEL_38;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)Instance, *v33, idList->max_length, 0LL);
LABEL_25:
  v55 = questPhase;
  v56 = questId;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v34);
  *(_DWORD *)(v24 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v24 + 152) = 0LL;
  *(_DWORD *)(v24 + 132) = treasureDeviceLv;
  *(_DWORD *)(v24 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_38;
  Instance = sub_B2C374(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v37 = this->fields.appendPassiveSkillIds;
  if ( !v37 )
    goto LABEL_38;
  v38 = (unsigned int *)Instance;
  v39 = (AppendPassiveSkillInfo_o **)(Instance + 32);
  v40 = 8LL;
  while ( 1 )
  {
    v41 = v40 - 8;
    if ( v40 - 8 >= (int)v37->max_length )
      break;
    v42 = (AppendPassiveSkillInfo_o *)sub_B2C42C(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v42, 0LL);
    v43 = this->fields.appendPassiveSkillIds;
    if ( !v43 )
      goto LABEL_38;
    if ( v41 >= v43->max_length )
      goto LABEL_50;
    if ( !v42 )
      goto LABEL_38;
    v42->fields.skillId = *((_DWORD *)&v43->obj.klass + v40);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_38;
    if ( v41 >= appendPassiveSkillLvs->max_length )
      goto LABEL_50;
    v42->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v40);
    if ( !v38 )
      goto LABEL_38;
    Instance = sub_B2C41C(v42, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
    if ( !Instance )
      goto LABEL_51;
    if ( v41 >= v38[6] )
      goto LABEL_50;
    *v39 = v42;
    sub_B2C2F8(v39, v42);
    v37 = this->fields.appendPassiveSkillIds;
    ++v40;
    ++v39;
    if ( !v37 )
      goto LABEL_38;
  }
  *(_QWORD *)(v24 + 216) = v38;
  sub_B2C2F8(v24 + 216, v38);
  if ( !v23 )
    goto LABEL_38;
  v23->fields.userId = followerId;
  v46 = (*(_DWORD *)(v24 + 192) & 4) != 0 ? 4 : 3;
  v23->fields.type = v46;
  isChangeName = 0;
  FollowerName_20113708 = NpcServantFollowerEntity__GetFollowerName_20113708(
                            this,
                            followerId,
                            v56,
                            v55,
                            &isChangeName,
                            v45);
  v23->fields.userName = FollowerName_20113708;
  sub_B2C2F8(&v23->fields.userName, FollowerName_20113708);
  v23->fields.userLv = 0;
  v48 = sub_B2C374(ServantLeaderInfo___TypeInfo, 1LL);
  v23->fields.userSvtLeaderHash = (struct ServantLeaderInfo_array *)v48;
  sub_B2C2F8(&v23->fields.userSvtLeaderHash, v48);
  userSvtLeaderHash = v23->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_38;
  Instance = sub_B2C41C(v24, userSvtLeaderHash->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_51;
  if ( !userSvtLeaderHash->max_length )
    goto LABEL_50;
  userSvtLeaderHash->m_Items[0] = (ServantLeaderInfo_o *)v24;
  sub_B2C2F8(userSvtLeaderHash->m_Items, v24);
  v50 = sub_B2C374(ServantLeaderInfo___TypeInfo, 1LL);
  v23->fields.eventUserSvtLeaderHash = (struct ServantLeaderInfo_array *)v50;
  sub_B2C2F8(&v23->fields.eventUserSvtLeaderHash, v50);
  eventUserSvtLeaderHash = v23->fields.eventUserSvtLeaderHash;
  if ( !eventUserSvtLeaderHash )
LABEL_38:
    sub_B2C434(Instance, v26);
  Instance = sub_B2C41C(v24, eventUserSvtLeaderHash->obj.klass->_1.element_class);
  if ( !Instance )
  {
LABEL_51:
    v54 = sub_B2C454();
    sub_B2C400(v54, 0LL);
  }
  if ( !eventUserSvtLeaderHash->max_length )
  {
LABEL_50:
    v53 = sub_B2C460(Instance);
    sub_B2C400(v53, 0LL);
  }
  eventUserSvtLeaderHash->m_Items[0] = (ServantLeaderInfo_o *)v24;
  sub_B2C2F8(eventUserSvtLeaderHash->m_Items, v24);
  result = v23;
  v23->fields.npcFollowerSvtId = this->fields.id;
  v23->fields.isMySvtOrNpc = isMySvtOrNpc;
  v23->fields.isFixedNpc = isFixedNpc;
  v23->fields.imageSvtId = imageSvtId;
  return result;
}