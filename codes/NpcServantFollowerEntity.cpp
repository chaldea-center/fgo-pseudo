void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E629F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42E629F = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_20689924(this, followerId, questId, questPhase, &isChangeName, v5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_20689924(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        bool *isChangeName,
        const MethodInfo *method)
{
  NpcServantFollowerEntity_o *v10; // x19
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  const MethodInfo *v36; // x1
  NpcFollowerEntity_o *v37; // x21
  System_String_o *OverwriteServantName; // x22
  const MethodInfo *v39; // x1
  DataManager_o *Instance; // x0
  __int64 v41; // x1
  ServantChangeEntity_o *v42; // x0
  const MethodInfo *v43; // x3
  System_String_o *name; // x0
  ServantEntity_o *Entity; // x0

  v10 = this;
  if ( (byte_42E6299 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&string_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_11872/*"SERVANT_HIDE_NAME"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, v29, v30, v31);
    this = (NpcServantFollowerEntity_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v32, v33, v34);
    byte_42E6299 = 1;
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
      v37 = NpcFollowerEntity;
      OverwriteServantName = NpcFollowerEntity__GetOverwriteServantName(NpcFollowerEntity, v36);
      if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
        return OverwriteServantName;
      if ( NpcFollowerEntity__IsExistSvtChangeParam(v37, v39) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_24;
        v42 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v10->fields.svtId, 0LL);
        if ( v42 )
        {
          OverwriteServantName = NpcFollowerEntity__GetServantName(
                                   v37,
                                   v42->fields.priority,
                                   string_TypeInfo->static_fields->Empty,
                                   v43);
          if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
            return OverwriteServantName;
        }
      }
    }
    name = v10->fields.name;
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9405/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v10->fields.svtId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName(Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_24:
    sub_B5D69C(Instance, v41);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_11872/*"SERVANT_HIDE_NAME"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcServantFollowerEntity__GetFollowerTreasureDeviceId(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  NpcServantFollowerEntity_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  const MethodInfo *v19; // x1
  NpcFollowerEntity_o *v20; // x20
  const MethodInfo *v21; // x1
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  ServantChangeEntity_o *v24; // x0
  const MethodInfo *v25; // x3
  int32_t result; // w0

  v8 = this;
  if ( (byte_42E629A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantOverwriteMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    this = (NpcServantFollowerEntity_o *)sub_B5D5C4(
                                           &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                           v15,
                                           v16,
                                           v17);
    byte_42E629A = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v20 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v19) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_18;
      v24 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v8->fields.svtId, 0LL);
      if ( v24 )
      {
        result = NpcFollowerEntity__GetServantTd(v20, v24->fields.priority, -1, v25);
        if ( result != -1 )
          return result;
        return v8->fields.treasureDeviceId;
      }
    }
    if ( NpcFollowerEntity__IsOverwriteTreasureDevice(v20, v21) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_B5D69C(Instance, v23);
    }
  }
  return v8->fields.treasureDeviceId;
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcServantFollowerEntity__GetNpcFollowerEntity(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E629B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, followerId, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E629B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, v13);
  return entity;
}


System_Int32_array *__fastcall NpcServantFollowerEntity__GetOverwriteIndividuality(
        NpcServantFollowerEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct System_String_o *v29; // x1
  struct System_String_o *individuality; // x0
  System_String_o *v31; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  __int64 v36; // x0

  if ( (byte_42E629E & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Int32_Parse__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v26, v27, v28);
    byte_42E629E = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_11;
  individuality = System_String__Replace_44585024(
                    individuality,
                    (System_String_o *)StringLiteral_15824/*"["*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !individuality )
    goto LABEL_11;
  v31 = System_String__Replace_44585024(
          individuality,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  individuality = (struct System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !individuality )
    goto LABEL_11;
  v29 = individuality;
  if ( !LODWORD(individuality[1].klass) )
  {
    v36 = sub_B5D6C8(individuality);
    sub_B5D668(v36, 0LL);
  }
  LOWORD(individuality[1].monitor) = 44;
  if ( !v31 )
LABEL_11:
    sub_B5D69C(individuality, v29);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               v31,
                                                               (System_Char_array *)individuality,
                                                               0LL);
  v33 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v33,
    0LL,
    Method_System_Int32_Parse__,
    (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v32,
                                                               (System_Func_TSource__TResult__o *)v33,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v34,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E629D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, (_DWORD)method, v2, v3);
    byte_42E629D = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9405/*"NONE"*/, 0LL);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  FollowerInfo_o *v41; // x23
  __int64 v42; // x24
  __int64 Instance; // x0
  __int64 v44; // x1
  int32_t svtId; // w19
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  struct System_Int32_array *passiveSkill; // x1
  __int64 v48; // x8
  __int64 v49; // x9
  System_Array_o **v50; // x19
  const MethodInfo *v51; // x4
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  struct System_Int32_array *v54; // x8
  unsigned int *v55; // x28
  AppendPassiveSkillInfo_o **v56; // x19
  __int64 v57; // x21
  unsigned __int64 v58; // x26
  AppendPassiveSkillInfo_o *v59; // x20
  struct System_Int32_array *v60; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  const MethodInfo *v62; // x5
  int v63; // w8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x19
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  FollowerInfo_o *result; // x0
  __int64 v67; // x0
  __int64 v68; // x0
  int32_t v69; // [xsp+Ch] [xbp-84h]
  int32_t v70; // [xsp+10h] [xbp-80h]
  System_String_array *explanationList; // [xsp+20h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+28h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+30h] [xbp-60h] BYREF
  bool isChangeName; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_42E629C & 1) == 0 )
  {
    sub_B5D5C4(&AppendPassiveSkillInfo___TypeInfo, followerId, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&AppendPassiveSkillInfo_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17, v18, v19);
    sub_B5D5C4(&FollowerInfo_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&int___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&ServantLeaderInfo___TypeInfo, v32, v33, v34);
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    byte_42E629C = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v41 = (FollowerInfo_o *)sub_B5D694(FollowerInfo_TypeInfo);
  FollowerInfo___ctor(v41, 0LL);
  v42 = sub_B5D694(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v42, 0LL);
  if ( !v42 )
    goto LABEL_38;
  *(_QWORD *)(v42 + 24) = followerId;
  *(_QWORD *)(v42 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v42 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v42 + 64) = this->fields.limitCount;
  if ( dispLmtCnt >= 11 )
    *(int32x4_t *)(v42 + 160) = vdupq_n_s32(dispLmtCnt);
  *(_DWORD *)(v42 + 68) = this->fields.lv;
  *(_DWORD *)(v42 + 72) = 0;
  *(_DWORD *)(v42 + 76) = this->fields.hp;
  *(_DWORD *)(v42 + 80) = this->fields.atk;
  *(_DWORD *)(v42 + 92) = this->fields.skillId1;
  *(_DWORD *)(v42 + 96) = this->fields.skillId2;
  *(_DWORD *)(v42 + 100) = this->fields.skillId3;
  *(_DWORD *)(v42 + 104) = this->fields.skillLv1;
  *(_DWORD *)(v42 + 108) = this->fields.skillLv2;
  *(_DWORD *)(v42 + 112) = this->fields.skillLv3;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  if ( !passiveSkill || (v48 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_24:
    *(_QWORD *)(v42 + 120) = passiveSkill;
    sub_B5D560(v42 + 120);
    goto LABEL_25;
  }
  if ( !idList )
    goto LABEL_24;
  v49 = *(_QWORD *)&idList->max_length;
  if ( !v49 )
    goto LABEL_24;
  *(_QWORD *)(v42 + 120) = sub_B5D5DC(int___TypeInfo, (unsigned int)(v49 + v48));
  v50 = (System_Array_o **)(v42 + 120);
  sub_B5D560(v42 + 120);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)idList, *v50, 0, 0LL);
  if ( !idList )
    goto LABEL_38;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)Instance, *v50, idList->max_length, 0LL);
LABEL_25:
  v69 = questPhase;
  v70 = questId;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v51);
  *(_DWORD *)(v42 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v42 + 152) = 0LL;
  *(_DWORD *)(v42 + 132) = treasureDeviceLv;
  *(_DWORD *)(v42 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_38;
  Instance = sub_B5D5DC(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v54 = this->fields.appendPassiveSkillIds;
  if ( !v54 )
    goto LABEL_38;
  v55 = (unsigned int *)Instance;
  v56 = (AppendPassiveSkillInfo_o **)(Instance + 32);
  v57 = 8LL;
  while ( 1 )
  {
    v58 = v57 - 8;
    if ( v57 - 8 >= (int)v54->max_length )
      break;
    v59 = (AppendPassiveSkillInfo_o *)sub_B5D694(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v59, 0LL);
    v60 = this->fields.appendPassiveSkillIds;
    if ( !v60 )
      goto LABEL_38;
    if ( v58 >= v60->max_length )
      goto LABEL_50;
    if ( !v59 )
      goto LABEL_38;
    v59->fields.skillId = *((_DWORD *)&v60->obj.klass + v57);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_38;
    if ( v58 >= appendPassiveSkillLvs->max_length )
      goto LABEL_50;
    v59->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v57);
    if ( !v55 )
      goto LABEL_38;
    Instance = sub_B5D684(v59, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !Instance )
      goto LABEL_51;
    if ( v58 >= v55[6] )
      goto LABEL_50;
    *v56 = v59;
    sub_B5D560(v56);
    v54 = this->fields.appendPassiveSkillIds;
    ++v57;
    ++v56;
    if ( !v54 )
      goto LABEL_38;
  }
  *(_QWORD *)(v42 + 216) = v55;
  sub_B5D560(v42 + 216);
  if ( !v41 )
    goto LABEL_38;
  v41->fields.userId = followerId;
  v63 = (*(_DWORD *)(v42 + 192) & 4) != 0 ? 4 : 3;
  v41->fields.type = v63;
  isChangeName = 0;
  v41->fields.userName = NpcServantFollowerEntity__GetFollowerName_20689924(
                           this,
                           followerId,
                           v70,
                           v69,
                           &isChangeName,
                           v62);
  sub_B5D560(&v41->fields.userName);
  v41->fields.userLv = 0;
  v41->fields.userSvtLeaderHash = (struct ServantLeaderInfo_array *)sub_B5D5DC(ServantLeaderInfo___TypeInfo, 1LL);
  sub_B5D560(&v41->fields.userSvtLeaderHash);
  userSvtLeaderHash = v41->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_38;
  Instance = sub_B5D684(v42, userSvtLeaderHash->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_51;
  if ( !userSvtLeaderHash->max_length )
    goto LABEL_50;
  userSvtLeaderHash->m_Items[0] = (ServantLeaderInfo_o *)v42;
  sub_B5D560(userSvtLeaderHash->m_Items);
  v41->fields.eventUserSvtLeaderHash = (struct ServantLeaderInfo_array *)sub_B5D5DC(ServantLeaderInfo___TypeInfo, 1LL);
  sub_B5D560(&v41->fields.eventUserSvtLeaderHash);
  eventUserSvtLeaderHash = v41->fields.eventUserSvtLeaderHash;
  if ( !eventUserSvtLeaderHash )
LABEL_38:
    sub_B5D69C(Instance, v44);
  Instance = sub_B5D684(v42, eventUserSvtLeaderHash->obj.klass->_1.element_class);
  if ( !Instance )
  {
LABEL_51:
    v68 = sub_B5D6BC();
    sub_B5D668(v68, 0LL);
  }
  if ( !eventUserSvtLeaderHash->max_length )
  {
LABEL_50:
    v67 = sub_B5D6C8(Instance);
    sub_B5D668(v67, 0LL);
  }
  eventUserSvtLeaderHash->m_Items[0] = (ServantLeaderInfo_o *)v42;
  sub_B5D560(eventUserSvtLeaderHash->m_Items);
  result = v41;
  v41->fields.npcFollowerSvtId = this->fields.id;
  v41->fields.isMySvtOrNpc = isMySvtOrNpc;
  v41->fields.isFixedNpc = isFixedNpc;
  v41->fields.imageSvtId = imageSvtId;
  return result;
}