void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4350B9B & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_long___ctor__);
    byte_4350B9B = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_21C0344 *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_23277308(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_23277308(
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
  if ( (byte_4350B95 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_11893/*"SERVANT_HIDE_NAME"*/);
    sub_B70694(&StringLiteral_9420/*"NONE"*/);
    this = (NpcServantFollowerEntity_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4350B95 = 1;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
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
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9420/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v10->fields.svtId,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName(Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_24:
    sub_B7076C(Instance, v17);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_HIDE_NAME"*/, 0LL);
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
  if ( (byte_4350B96 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantOverwriteMaster___);
    sub_B70694(&DataManager_TypeInfo);
    this = (NpcServantFollowerEntity_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350B96 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v11 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v10) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
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
      Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_B7076C(Instance, v14);
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

  if ( (byte_4350B97 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350B97 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v9);
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

  if ( (byte_4350B9A & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Func_string__int___ctor__);
    sub_B70694(&System_Func_string__int__TypeInfo);
    sub_B70694(&Method_System_Int32_Parse__);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_4350B9A = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_11;
  individuality = System_String__Replace_44765404(
                    individuality,
                    (System_String_o *)StringLiteral_15855/*"["*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !individuality )
    goto LABEL_11;
  v5 = System_String__Replace_44765404(
         individuality,
         (System_String_o *)StringLiteral_16092/*"]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  individuality = (struct System_String_o *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !individuality )
    goto LABEL_11;
  v3 = individuality;
  if ( !LODWORD(individuality[1].klass) )
  {
    v10 = sub_B70798(individuality);
    sub_B70738(v10, 0LL);
  }
  LOWORD(individuality[1].monitor) = 44;
  if ( !v5 )
LABEL_11:
    sub_B7076C(individuality, v3);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                              v5,
                                                              (System_Char_array *)individuality,
                                                              0LL);
  v7 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_string__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v7,
    0LL,
    Method_System_Int32_Parse__,
    (const MethodInfo_29AD124 *)Method_System_Func_string__int___ctor__);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                              v6,
                                                              (System_Func_TSource__TResult__o *)v7,
                                                              (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v8,
           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4350B99 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9420/*"NONE"*/);
    byte_4350B99 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9420/*"NONE"*/, 0LL);
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Int32_array *passiveSkill; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  System_Int32_array **v29; // x0
  System_Array_o **v30; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x4
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Int32_array *v46; // x8
  unsigned int *v47; // x28
  BattleServantConfConponent_o *v48; // x19
  __int64 v49; // x21
  unsigned __int64 v50; // x26
  AppendPassiveSkillInfo_o *v51; // x20
  struct System_Int32_array *v52; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x5
  int v61; // w8
  System_Int32_array **FollowerName_23277308; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x19
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  __int64 v90; // x19
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  FollowerInfo_o *result; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  int32_t v100; // [xsp+Ch] [xbp-84h]
  int32_t v101; // [xsp+10h] [xbp-80h]
  System_String_array *explanationList; // [xsp+20h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+28h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+30h] [xbp-60h] BYREF
  bool isChangeName; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4350B98 & 1) == 0 )
  {
    sub_B70694(&AppendPassiveSkillInfo___TypeInfo);
    sub_B70694(&AppendPassiveSkillInfo_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&FollowerInfo_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&ServantLeaderInfo___TypeInfo);
    sub_B70694(&ServantLeaderInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350B98 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v14 = sub_B70764(FollowerInfo_TypeInfo);
  FollowerInfo___ctor((FollowerInfo_o *)v14, 0LL);
  v15 = sub_B70764(ServantLeaderInfo_TypeInfo);
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
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  if ( !passiveSkill || (v27 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_24:
    *(_QWORD *)(v15 + 120) = passiveSkill;
    sub_B70630(
      (BattleServantConfConponent_o *)(v15 + 120),
      (System_Int32_array **)passiveSkill,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    goto LABEL_25;
  }
  if ( !idList )
    goto LABEL_24;
  v28 = *(_QWORD *)&idList->max_length;
  if ( !v28 )
    goto LABEL_24;
  v29 = (System_Int32_array **)sub_B706AC(int___TypeInfo, (unsigned int)(v28 + v27));
  *(_QWORD *)(v15 + 120) = v29;
  v30 = (System_Array_o **)(v15 + 120);
  sub_B70630((BattleServantConfConponent_o *)(v15 + 120), v29, v31, v32, v33, v34, v35, v36);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)idList, *v30, 0, 0LL);
  if ( !idList )
    goto LABEL_38;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)Instance, *v30, idList->max_length, 0LL);
LABEL_25:
  v100 = questPhase;
  v101 = questId;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v37);
  *(_DWORD *)(v15 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v15 + 152) = 0LL;
  *(_DWORD *)(v15 + 132) = treasureDeviceLv;
  *(_DWORD *)(v15 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_38;
  Instance = sub_B706AC(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v46 = this->fields.appendPassiveSkillIds;
  if ( !v46 )
    goto LABEL_38;
  v47 = (unsigned int *)Instance;
  v48 = (BattleServantConfConponent_o *)(Instance + 32);
  v49 = 8LL;
  while ( 1 )
  {
    v50 = v49 - 8;
    if ( v49 - 8 >= (int)v46->max_length )
      break;
    v51 = (AppendPassiveSkillInfo_o *)sub_B70764(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v51, 0LL);
    v52 = this->fields.appendPassiveSkillIds;
    if ( !v52 )
      goto LABEL_38;
    if ( v50 >= v52->max_length )
      goto LABEL_50;
    if ( !v51 )
      goto LABEL_38;
    v51->fields.skillId = *((_DWORD *)&v52->obj.klass + v49);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_38;
    if ( v50 >= appendPassiveSkillLvs->max_length )
      goto LABEL_50;
    v51->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v49);
    if ( !v47 )
      goto LABEL_38;
    Instance = sub_B70754(v51, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
    if ( !Instance )
      goto LABEL_51;
    if ( v50 >= v47[6] )
      goto LABEL_50;
    v48->klass = (BattleServantConfConponent_c *)v51;
    sub_B70630(v48, (System_Int32_array **)v51, v54, v55, v56, v57, v58, v59);
    v46 = this->fields.appendPassiveSkillIds;
    ++v49;
    v48 = (BattleServantConfConponent_o *)((char *)v48 + 8);
    if ( !v46 )
      goto LABEL_38;
  }
  *(_QWORD *)(v15 + 216) = v47;
  sub_B70630((BattleServantConfConponent_o *)(v15 + 216), (System_Int32_array **)v47, v40, v41, v42, v43, v44, v45);
  if ( !v14 )
    goto LABEL_38;
  *(_QWORD *)(v14 + 16) = followerId;
  v61 = (*(_DWORD *)(v15 + 192) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v14 + 36) = v61;
  isChangeName = 0;
  FollowerName_23277308 = (System_Int32_array **)NpcServantFollowerEntity__GetFollowerName_23277308(
                                                   this,
                                                   followerId,
                                                   v101,
                                                   v100,
                                                   &isChangeName,
                                                   v60);
  *(_QWORD *)(v14 + 24) = FollowerName_23277308;
  sub_B70630((BattleServantConfConponent_o *)(v14 + 24), FollowerName_23277308, v63, v64, v65, v66, v67, v68);
  *(_DWORD *)(v14 + 32) = 0;
  v69 = (System_Int32_array **)sub_B706AC(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v14 + 40) = v69;
  sub_B70630((BattleServantConfConponent_o *)(v14 + 40), v69, v70, v71, v72, v73, v74, v75);
  v76 = *(_QWORD *)(v14 + 40);
  if ( !v76 )
    goto LABEL_38;
  Instance = sub_B70754(v15, *(_QWORD *)(*(_QWORD *)v76 + 64LL));
  if ( !Instance )
    goto LABEL_51;
  if ( !*(_DWORD *)(v76 + 24) )
    goto LABEL_50;
  *(_QWORD *)(v76 + 32) = v15;
  sub_B70630((BattleServantConfConponent_o *)(v76 + 32), (System_Int32_array **)v15, v77, v78, v79, v80, v81, v82);
  v83 = (System_Int32_array **)sub_B706AC(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v14 + 48) = v83;
  sub_B70630((BattleServantConfConponent_o *)(v14 + 48), v83, v84, v85, v86, v87, v88, v89);
  v90 = *(_QWORD *)(v14 + 48);
  if ( !v90 )
LABEL_38:
    sub_B7076C(Instance, v17);
  Instance = sub_B70754(v15, *(_QWORD *)(*(_QWORD *)v90 + 64LL));
  if ( !Instance )
  {
LABEL_51:
    v99 = sub_B7078C(Instance);
    sub_B70738(v99, 0LL);
  }
  if ( !*(_DWORD *)(v90 + 24) )
  {
LABEL_50:
    v98 = sub_B70798(Instance);
    sub_B70738(v98, 0LL);
  }
  *(_QWORD *)(v90 + 32) = v15;
  sub_B70630((BattleServantConfConponent_o *)(v90 + 32), (System_Int32_array **)v15, v91, v92, v93, v94, v95, v96);
  result = (FollowerInfo_o *)v14;
  *(_QWORD *)(v14 + 72) = this->fields.id;
  *(_BYTE *)(v14 + 96) = isMySvtOrNpc;
  *(_BYTE *)(v14 + 97) = isFixedNpc;
  *(_DWORD *)(v14 + 100) = imageSvtId;
  return result;
}