void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F7F35 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    byte_40F7F35 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_21218484(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_21218484(
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
  NpcFollowerEntity_o *v20; // x21
  System_String_o *OverwriteServantName; // x22
  WebViewManager_o *Instance; // x0
  ServantChangeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantChangeEntity_o *v24; // x0
  System_String_o *name; // x0
  WebViewManager_o *v27; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x0
  ServantEntity_o *Entity; // x0

  v10 = this;
  if ( (byte_40F7F2F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&string_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_11694, v16);
    sub_B16FFC(&StringLiteral_9280, v17);
    this = (NpcServantFollowerEntity_o *)sub_B16FFC(&StringLiteral_1, v18);
    byte_40F7F2F = 1;
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
      v20 = NpcFollowerEntity;
      OverwriteServantName = NpcFollowerEntity__GetOverwriteServantName(NpcFollowerEntity, 0LL);
      if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
        return OverwriteServantName;
      if ( NpcFollowerEntity__IsExistSvtChangeParam(v20, 0LL) )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        MasterData_WarQuestSelectionMaster = (ServantChangeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        v24 = ServantChangeMaster__GetEnableEntity(MasterData_WarQuestSelectionMaster, v10->fields.svtId, 0LL);
        if ( v24 )
        {
          OverwriteServantName = NpcFollowerEntity__GetServantName(
                                   v20,
                                   v24->fields.priority,
                                   string_TypeInfo->static_fields->Empty,
                                   0LL);
          if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
            return OverwriteServantName;
        }
      }
    }
    name = v10->fields.name;
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9280, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v27 )
    {
      v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v27,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( v28 )
      {
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v28,
                                      v10->fields.svtId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName(Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1;
      }
    }
LABEL_24:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_11694, 0LL);
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
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  NpcFollowerEntity_o *v11; // x20
  WebViewManager_o *Instance; // x0
  ServantChangeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantChangeEntity_o *v14; // x0
  int32_t result; // w0

  v8 = this;
  if ( (byte_40F7F30 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    this = (NpcServantFollowerEntity_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F7F30 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( !NpcFollowerEntity )
    return v8->fields.treasureDeviceId;
  v11 = NpcFollowerEntity;
  if ( !NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, 0LL) )
    return v8->fields.treasureDeviceId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantChangeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v14 = ServantChangeMaster__GetEnableEntity(MasterData_WarQuestSelectionMaster, v8->fields.svtId, 0LL);
  if ( !v14 )
    return v8->fields.treasureDeviceId;
  result = NpcFollowerEntity__GetServantTd(v11, v14->fields.priority, -1, 0LL);
  if ( result == -1 )
    return v8->fields.treasureDeviceId;
  return result;
}


NpcFollowerEntity_o *__fastcall NpcServantFollowerEntity__GetNpcFollowerEntity(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  NpcFollowerMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v11; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7F31 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, followerId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F7F31 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  NpcFollowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, followerId, questId, questPhase, v11);
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
  System_String_o *individuality; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x19
  __int64 v14; // x2
  System_Char_array *v15; // x0
  __int64 v16; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F7F34 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_B16FFC(&Method_System_Func_string__int___ctor__, v5);
    sub_B16FFC(&System_Func_string__int__TypeInfo, v6);
    sub_B16FFC(&Method_System_Int32_Parse__, v7);
    sub_B16FFC(&StringLiteral_15571, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    sub_B16FFC(&StringLiteral_15807, v10);
    byte_40F7F34 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_11;
  v12 = System_String__Replace_43750968(
          individuality,
          (System_String_o *)StringLiteral_15571,
          (System_String_o *)StringLiteral_1,
          0LL);
  if ( !v12 )
    goto LABEL_11;
  v13 = System_String__Replace_43750968(
          v12,
          (System_String_o *)StringLiteral_15807,
          (System_String_o *)StringLiteral_1,
          0LL);
  v15 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v14);
  if ( !v15 )
    goto LABEL_11;
  if ( !v15->max_length )
  {
    sub_B17100(v15, v15, v16);
    sub_B170A0();
  }
  v15->m_Items[2] = 44;
  if ( !v13 )
LABEL_11:
    sub_B170D4();
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v13, v15, 0LL);
  v22 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                          System_Func_string__int__TypeInfo,
                                                                          v18,
                                                                          v19,
                                                                          v20,
                                                                          v21);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v22,
    0LL,
    Method_System_Int32_Parse__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_string__int___ctor__);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v23,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_40F7F33 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9280, method);
    byte_40F7F33 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9280, 0LL);
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
  __int64 v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x24
  int32_t svtId; // w19
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Int32_array *passiveSkill; // x1
  __int64 v41; // x8
  __int64 v42; // x9
  System_Int32_array **v43; // x0
  System_Array_o **v44; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Array_o *v51; // x0
  const MethodInfo *v52; // x4
  __int64 v53; // x2
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  __int64 v56; // x0
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct System_Int32_array *v64; // x8
  unsigned int *v65; // x28
  BattleServantConfConponent_o *v66; // x19
  __int64 v67; // x21
  unsigned __int64 v68; // x26
  AppendPassiveSkillInfo_o *v69; // x20
  __int64 v70; // x0
  __int64 v71; // x1
  System_String_array **v72; // x2
  struct System_Int32_array *v73; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  const MethodInfo *v80; // x5
  int v81; // w8
  System_Int32_array **FollowerName_21218484; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x2
  System_Int32_array **v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x19
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x2
  System_Int32_array **v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  __int64 v111; // x19
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  FollowerInfo_o *result; // x0
  int32_t v118; // [xsp+Ch] [xbp-84h]
  int32_t v119; // [xsp+10h] [xbp-80h]
  System_String_array *explanationList; // [xsp+20h] [xbp-70h] BYREF
  System_String_array *titleList; // [xsp+28h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+30h] [xbp-60h] BYREF
  bool isChangeName; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_40F7F32 & 1) == 0 )
  {
    sub_B16FFC(&AppendPassiveSkillInfo___TypeInfo, followerId);
    sub_B16FFC(&AppendPassiveSkillInfo_TypeInfo, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_B16FFC(&FollowerInfo_TypeInfo, v16);
    sub_B16FFC(&int___TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B16FFC(&ServantLeaderInfo___TypeInfo, v20);
    sub_B16FFC(&ServantLeaderInfo_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40F7F32 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v23 = sub_B170CC(
          FollowerInfo_TypeInfo,
          followerId,
          *(_QWORD *)&questId,
          *(_QWORD *)&questPhase,
          *(_QWORD *)&dispLmtCnt);
  FollowerInfo___ctor((FollowerInfo_o *)v23, 0LL);
  v28 = sub_B170CC(ServantLeaderInfo_TypeInfo, v24, v25, v26, v27);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_38;
  *(_QWORD *)(v28 + 24) = followerId;
  *(_QWORD *)(v28 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v28 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v28 + 64) = this->fields.limitCount;
  if ( dispLmtCnt >= 11 )
    *(int32x4_t *)(v28 + 160) = vdupq_n_s32(dispLmtCnt);
  *(_DWORD *)(v28 + 68) = this->fields.lv;
  *(_DWORD *)(v28 + 72) = 0;
  *(_DWORD *)(v28 + 76) = this->fields.hp;
  *(_DWORD *)(v28 + 80) = this->fields.atk;
  *(_DWORD *)(v28 + 92) = this->fields.skillId1;
  *(_DWORD *)(v28 + 96) = this->fields.skillId2;
  *(_DWORD *)(v28 + 100) = this->fields.skillId3;
  *(_DWORD *)(v28 + 104) = this->fields.skillLv1;
  *(_DWORD *)(v28 + 108) = this->fields.skillLv2;
  *(_DWORD *)(v28 + 112) = this->fields.skillLv3;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       this->fields.svtId,
                       0LL);
  if ( !EntityDefinitely )
    goto LABEL_38;
  UserServantCollectionEntity__getPassiveSkillInfo(EntityDefinitely, &idList, &titleList, &explanationList, -1, 0, 0LL);
  passiveSkill = this->fields.passiveSkill;
  if ( !passiveSkill || (v41 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_24:
    *(_QWORD *)(v28 + 120) = passiveSkill;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v28 + 120),
      (System_Int32_array **)passiveSkill,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    goto LABEL_25;
  }
  if ( !idList )
    goto LABEL_24;
  v42 = *(_QWORD *)&idList->max_length;
  if ( !v42 )
    goto LABEL_24;
  v43 = (System_Int32_array **)sub_B17014(int___TypeInfo, (unsigned int)(v42 + v41), v34);
  *(_QWORD *)(v28 + 120) = v43;
  v44 = (System_Array_o **)(v28 + 120);
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 120), v43, v45, v46, v47, v48, v49, v50);
  if ( !idList )
    goto LABEL_38;
  System_Array__CopyTo((System_Array_o *)idList, *v44, 0, 0LL);
  if ( !idList )
    goto LABEL_38;
  v51 = (System_Array_o *)this->fields.passiveSkill;
  if ( !v51 )
    goto LABEL_38;
  System_Array__CopyTo(v51, *v44, idList->max_length, 0LL);
LABEL_25:
  v118 = questPhase;
  v119 = questId;
  *(_DWORD *)(v28 + 128) = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(
                             this,
                             followerId,
                             questId,
                             questPhase,
                             v52);
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v28 + 152) = 0LL;
  *(_DWORD *)(v28 + 132) = treasureDeviceLv;
  *(_DWORD *)(v28 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_38;
  v56 = sub_B17014(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length, v53);
  v64 = this->fields.appendPassiveSkillIds;
  if ( !v64 )
    goto LABEL_38;
  v65 = (unsigned int *)v56;
  v66 = (BattleServantConfConponent_o *)(v56 + 32);
  v67 = 8LL;
  while ( 1 )
  {
    v68 = v67 - 8;
    if ( v67 - 8 >= (int)v64->max_length )
      break;
    v69 = (AppendPassiveSkillInfo_o *)sub_B170CC(AppendPassiveSkillInfo_TypeInfo, v57, v58, v59, v60);
    AppendPassiveSkillInfo___ctor(v69, 0LL);
    v73 = this->fields.appendPassiveSkillIds;
    if ( !v73 )
      goto LABEL_38;
    if ( v68 >= v73->max_length )
      goto LABEL_50;
    if ( !v69 )
      goto LABEL_38;
    v69->fields.skillId = *((_DWORD *)&v73->obj.klass + v67);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_38;
    if ( v68 >= appendPassiveSkillLvs->max_length )
      goto LABEL_50;
    v69->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v67);
    if ( !v65 )
      goto LABEL_38;
    v70 = sub_B170BC(v69, *(_QWORD *)(*(_QWORD *)v65 + 64LL));
    if ( !v70 )
      goto LABEL_51;
    if ( v68 >= v65[6] )
      goto LABEL_50;
    v66->klass = (BattleServantConfConponent_c *)v69;
    sub_B16F98(v66, (System_Int32_array **)v69, v72, v75, v76, v77, v78, v79);
    v64 = this->fields.appendPassiveSkillIds;
    ++v67;
    v66 = (BattleServantConfConponent_o *)((char *)v66 + 8);
    if ( !v64 )
      goto LABEL_38;
  }
  *(_QWORD *)(v28 + 216) = v65;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 216), (System_Int32_array **)v65, v58, v59, v60, v61, v62, v63);
  if ( !v23 )
    goto LABEL_38;
  *(_QWORD *)(v23 + 16) = followerId;
  v81 = (*(_DWORD *)(v28 + 192) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v23 + 36) = v81;
  isChangeName = 0;
  FollowerName_21218484 = (System_Int32_array **)NpcServantFollowerEntity__GetFollowerName_21218484(
                                                   this,
                                                   followerId,
                                                   v119,
                                                   v118,
                                                   &isChangeName,
                                                   v80);
  *(_QWORD *)(v23 + 24) = FollowerName_21218484;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), FollowerName_21218484, v83, v84, v85, v86, v87, v88);
  *(_DWORD *)(v23 + 32) = 0;
  v90 = (System_Int32_array **)sub_B17014(ServantLeaderInfo___TypeInfo, 1LL, v89);
  *(_QWORD *)(v23 + 40) = v90;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 40), v90, v91, v92, v93, v94, v95, v96);
  v97 = *(_QWORD *)(v23 + 40);
  if ( !v97 )
    goto LABEL_38;
  v70 = sub_B170BC(v28, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
  if ( !v70 )
    goto LABEL_51;
  if ( !*(_DWORD *)(v97 + 24) )
    goto LABEL_50;
  *(_QWORD *)(v97 + 32) = v28;
  sub_B16F98((BattleServantConfConponent_o *)(v97 + 32), (System_Int32_array **)v28, v72, v98, v99, v100, v101, v102);
  v104 = (System_Int32_array **)sub_B17014(ServantLeaderInfo___TypeInfo, 1LL, v103);
  *(_QWORD *)(v23 + 48) = v104;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 48), v104, v105, v106, v107, v108, v109, v110);
  v111 = *(_QWORD *)(v23 + 48);
  if ( !v111 )
LABEL_38:
    sub_B170D4();
  v70 = sub_B170BC(v28, *(_QWORD *)(*(_QWORD *)v111 + 64LL));
  if ( !v70 )
  {
LABEL_51:
    sub_B170F4(v70);
    sub_B170A0();
  }
  if ( !*(_DWORD *)(v111 + 24) )
  {
LABEL_50:
    sub_B17100(v70, v71, v72);
    sub_B170A0();
  }
  *(_QWORD *)(v111 + 32) = v28;
  sub_B16F98((BattleServantConfConponent_o *)(v111 + 32), (System_Int32_array **)v28, v72, v112, v113, v114, v115, v116);
  result = (FollowerInfo_o *)v23;
  *(_QWORD *)(v23 + 72) = this->fields.id;
  *(_BYTE *)(v23 + 96) = isMySvtOrNpc;
  *(_BYTE *)(v23 + 97) = isFixedNpc;
  *(_DWORD *)(v23 + 100) = imageSvtId;
  return result;
}