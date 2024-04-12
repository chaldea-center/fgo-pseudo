void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ADB08 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42ADB08 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_20743660(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_20743660(
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  ServantChangeEntity_o *v18; // x0
  const MethodInfo *v19; // x3
  System_String_o *name; // x0
  ServantEntity_o *Entity; // x0

  v10 = this;
  if ( (byte_42ADB02 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_11818/*"SERVANT_HIDE_NAME"*/);
    sub_B52984(&StringLiteral_9367/*"NONE"*/);
    this = (NpcServantFollowerEntity_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42ADB02 = 1;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_24;
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
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9367/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v10->fields.svtId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName(Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_24:
    sub_B52A5C(Instance, v17);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_11818/*"SERVANT_HIDE_NAME"*/, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  ServantChangeEntity_o *v15; // x0
  const MethodInfo *v16; // x3
  int32_t result; // w0

  v8 = this;
  if ( (byte_42ADB03 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantOverwriteMaster___);
    sub_B52984(&DataManager_TypeInfo);
    this = (NpcServantFollowerEntity_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ADB03 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v11 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v10) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_18;
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
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_B52A5C(Instance, v14);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ADB04 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ADB04 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v9);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, v10);
  return entity;
}


System_Int32_array *__fastcall NpcServantFollowerEntity__GetOverwriteIndividuality(
        NpcServantFollowerEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x1
  struct System_String_o *individuality; // x0
  System_String_o *v5; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  __int64 v10; // x0

  if ( (byte_42ADB07 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_string__int___ctor__);
    sub_B52984(&System_Func_string__int__TypeInfo);
    sub_B52984(&Method_System_Int32_Parse__);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42ADB07 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_11;
  individuality = System_String__Replace_44575552(
                    individuality,
                    (System_String_o *)StringLiteral_15739/*"["*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !individuality )
    goto LABEL_11;
  v5 = System_String__Replace_44575552(
         individuality,
         (System_String_o *)StringLiteral_15976/*"]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  individuality = (struct System_String_o *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !individuality )
    goto LABEL_11;
  v3 = individuality;
  if ( !LODWORD(individuality[1].klass) )
  {
    v10 = sub_B52A88(individuality);
    sub_B52A28(v10, 0LL);
  }
  LOWORD(individuality[1].monitor) = 44;
  if ( !v5 )
LABEL_11:
    sub_B52A5C(individuality, v3);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                              v5,
                                                              (System_Char_array *)individuality,
                                                              0LL);
  v7 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_string__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v7,
    0LL,
    Method_System_Int32_Parse__,
    (const MethodInfo_2BC9C68 *)Method_System_Func_string__int___ctor__);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                              v6,
                                                              (System_Func_TSource__TResult__o *)v7,
                                                              (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v8,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_42ADB06 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9367/*"NONE"*/);
    byte_42ADB06 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9367/*"NONE"*/, 0LL);
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
  FollowerInfo_o *v14; // x23
  __int64 v15; // x24
  __int64 Instance; // x0
  __int64 v17; // x1
  int32_t svtId; // w19
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  struct System_Int32_array *passiveSkill; // x1
  __int64 v21; // x8
  __int64 v22; // x9
  System_Array_o **v23; // x19
  const MethodInfo *v24; // x4
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  struct System_Int32_array *v27; // x8
  unsigned int *v28; // x28
  AppendPassiveSkillInfo_o **v29; // x19
  __int64 v30; // x21
  unsigned __int64 v31; // x26
  AppendPassiveSkillInfo_o *v32; // x20
  struct System_Int32_array *v33; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  const MethodInfo *v35; // x5
  int v36; // w8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x19
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  FollowerInfo_o *result; // x0
  __int64 v40; // x0
  __int64 v41; // x0
  int32_t v42; // [xsp+Ch] [xbp-84h]
  int32_t v43; // [xsp+10h] [xbp-80h]
  System_String_array *explanationList; // [xsp+20h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+28h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+30h] [xbp-60h] BYREF
  bool isChangeName; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_42ADB05 & 1) == 0 )
  {
    sub_B52984(&AppendPassiveSkillInfo___TypeInfo);
    sub_B52984(&AppendPassiveSkillInfo_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&FollowerInfo_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantLeaderInfo___TypeInfo);
    sub_B52984(&ServantLeaderInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ADB05 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v14 = (FollowerInfo_o *)sub_B52A54(FollowerInfo_TypeInfo);
  FollowerInfo___ctor(v14, 0LL);
  v15 = sub_B52A54(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_38;
  *(_QWORD *)(v15 + 24) = followerId;
  *(_QWORD *)(v15 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v15 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v15 + 64) = this->fields.limitCount;
  if ( dispLmtCnt >= 11 )
    *(int32x4_t *)(v15 + 160) = vdupq_n_s32(dispLmtCnt);
  *(_DWORD *)(v15 + 68) = this->fields.lv;
  *(_DWORD *)(v15 + 72) = 0;
  *(_DWORD *)(v15 + 76) = this->fields.hp;
  *(_DWORD *)(v15 + 80) = this->fields.atk;
  *(_DWORD *)(v15 + 92) = this->fields.skillId1;
  *(_DWORD *)(v15 + 96) = this->fields.skillId2;
  *(_DWORD *)(v15 + 100) = this->fields.skillId3;
  *(_DWORD *)(v15 + 104) = this->fields.skillLv1;
  *(_DWORD *)(v15 + 108) = this->fields.skillLv2;
  *(_DWORD *)(v15 + 112) = this->fields.skillLv3;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  if ( !passiveSkill || (v21 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_24:
    *(_QWORD *)(v15 + 120) = passiveSkill;
    sub_B52920(v15 + 120);
    goto LABEL_25;
  }
  if ( !idList )
    goto LABEL_24;
  v22 = *(_QWORD *)&idList->max_length;
  if ( !v22 )
    goto LABEL_24;
  *(_QWORD *)(v15 + 120) = sub_B5299C(int___TypeInfo, (unsigned int)(v22 + v21));
  v23 = (System_Array_o **)(v15 + 120);
  sub_B52920(v15 + 120);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)idList, *v23, 0, 0LL);
  if ( !idList )
    goto LABEL_38;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)Instance, *v23, idList->max_length, 0LL);
LABEL_25:
  v42 = questPhase;
  v43 = questId;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v24);
  *(_DWORD *)(v15 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v15 + 152) = 0LL;
  *(_DWORD *)(v15 + 132) = treasureDeviceLv;
  *(_DWORD *)(v15 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_38;
  Instance = sub_B5299C(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v27 = this->fields.appendPassiveSkillIds;
  if ( !v27 )
    goto LABEL_38;
  v28 = (unsigned int *)Instance;
  v29 = (AppendPassiveSkillInfo_o **)(Instance + 32);
  v30 = 8LL;
  while ( 1 )
  {
    v31 = v30 - 8;
    if ( v30 - 8 >= (int)v27->max_length )
      break;
    v32 = (AppendPassiveSkillInfo_o *)sub_B52A54(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v32, 0LL);
    v33 = this->fields.appendPassiveSkillIds;
    if ( !v33 )
      goto LABEL_38;
    if ( v31 >= v33->max_length )
      goto LABEL_50;
    if ( !v32 )
      goto LABEL_38;
    v32->fields.skillId = *((_DWORD *)&v33->obj.klass + v30);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_38;
    if ( v31 >= appendPassiveSkillLvs->max_length )
      goto LABEL_50;
    v32->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v30);
    if ( !v28 )
      goto LABEL_38;
    Instance = sub_B52A44(v32, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
    if ( !Instance )
      goto LABEL_51;
    if ( v31 >= v28[6] )
      goto LABEL_50;
    *v29 = v32;
    sub_B52920(v29);
    v27 = this->fields.appendPassiveSkillIds;
    ++v30;
    ++v29;
    if ( !v27 )
      goto LABEL_38;
  }
  *(_QWORD *)(v15 + 216) = v28;
  sub_B52920(v15 + 216);
  if ( !v14 )
    goto LABEL_38;
  v14->fields.userId = followerId;
  v36 = (*(_DWORD *)(v15 + 192) & 4) != 0 ? 4 : 3;
  v14->fields.type = v36;
  isChangeName = 0;
  v14->fields.userName = NpcServantFollowerEntity__GetFollowerName_20743660(
                           this,
                           followerId,
                           v43,
                           v42,
                           &isChangeName,
                           v35);
  sub_B52920(&v14->fields.userName);
  v14->fields.userLv = 0;
  v14->fields.userSvtLeaderHash = (struct ServantLeaderInfo_array *)sub_B5299C(ServantLeaderInfo___TypeInfo, 1LL);
  sub_B52920(&v14->fields.userSvtLeaderHash);
  userSvtLeaderHash = v14->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_38;
  Instance = sub_B52A44(v15, userSvtLeaderHash->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_51;
  if ( !userSvtLeaderHash->max_length )
    goto LABEL_50;
  userSvtLeaderHash->m_Items[0] = (ServantLeaderInfo_o *)v15;
  sub_B52920(userSvtLeaderHash->m_Items);
  v14->fields.eventUserSvtLeaderHash = (struct ServantLeaderInfo_array *)sub_B5299C(ServantLeaderInfo___TypeInfo, 1LL);
  sub_B52920(&v14->fields.eventUserSvtLeaderHash);
  eventUserSvtLeaderHash = v14->fields.eventUserSvtLeaderHash;
  if ( !eventUserSvtLeaderHash )
LABEL_38:
    sub_B52A5C(Instance, v17);
  Instance = sub_B52A44(v15, eventUserSvtLeaderHash->obj.klass->_1.element_class);
  if ( !Instance )
  {
LABEL_51:
    v41 = sub_B52A7C();
    sub_B52A28(v41, 0LL);
  }
  if ( !eventUserSvtLeaderHash->max_length )
  {
LABEL_50:
    v40 = sub_B52A88(Instance);
    sub_B52A28(v40, 0LL);
  }
  eventUserSvtLeaderHash->m_Items[0] = (ServantLeaderInfo_o *)v15;
  sub_B52920(eventUserSvtLeaderHash->m_Items);
  result = v14;
  v14->fields.npcFollowerSvtId = this->fields.id;
  v14->fields.isMySvtOrNpc = isMySvtOrNpc;
  v14->fields.isFixedNpc = isFixedNpc;
  v14->fields.imageSvtId = imageSvtId;
  return result;
}