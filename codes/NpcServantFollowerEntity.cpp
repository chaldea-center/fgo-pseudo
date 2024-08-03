void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC7E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_long___ctor__, method);
    byte_49FC7E4 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D3CEC *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_39110520(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_39110520(
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
  ServantChangeEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  System_String_o *name; // x0
  Il2CppObject *Entity; // x0

  v10 = this;
  if ( (byte_49FC7DE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&string_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_11563/*"SERVANT_HIDE_NAME"*/, v16);
    sub_1B640C8(&StringLiteral_9209/*"NONE"*/, v17);
    this = (NpcServantFollowerEntity_o *)sub_1B640C8(&StringLiteral_1/*""*/, v18);
    byte_49FC7DE = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_23;
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
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9209/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.svtId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName((ServantEntity_o *)Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_23:
    sub_1B64324(Instance);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11563/*"SERVANT_HIDE_NAME"*/, 0LL);
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
  ServantChangeEntity_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t result; // w0

  v8 = this;
  if ( (byte_49FC7DF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantOverwriteMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    this = (NpcServantFollowerEntity_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FC7DF = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v14 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v13) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_17;
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
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_1B64324(Instance);
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
  const MethodInfo *v10; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FC7E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcFollowerMaster___, followerId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FC7E0 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  System_String_o *individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_Func_object__int__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49FC7E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1B640C8(&System_Func_string__int__TypeInfo, v4);
    sub_1B640C8(&Method_System_Int32_Parse__, v5);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v8);
    byte_49FC7E3 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality
    || (individuality = System_String__Replace_61395016(
                          individuality,
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (individuality = System_String__Replace_61395016(
                          individuality,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1B64324(individuality);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(individuality, 0x2Cu, 0, 0LL);
  v13 = (System_Func_object__int__o *)sub_1B64314(System_Func_string__int__TypeInfo, v11, v12);
  System_Func_object__int____ctor(v13, 0LL, Method_System_Int32_Parse__, 0LL);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v10,
                                                               (System_Func_TSource__TResult__o *)v13,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v14,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_49FC7E2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9209/*"NONE"*/, method);
    byte_49FC7E2 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9209/*"NONE"*/, 0LL);
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
  __int64 v26; // x24
  __int64 Instance; // x0
  int32_t svtId; // w19
  Il2CppObject *MasterData_object; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Int32_array *passiveSkill; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  __int64 v35; // x0
  System_Array_o **v36; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x4
  int64_t v40; // x1
  int64_t v41; // x21
  int32_t v42; // w27
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  int32_t v47; // w3
  struct System_Int32_array *v48; // x8
  unsigned int *v49; // x28
  ServantStatusBattleListViewItem_o *v50; // x29
  __int64 v51; // x25
  unsigned __int64 v52; // x26
  AppendPassiveSkillInfo_o *v53; // x19
  __int64 v54; // x1
  struct System_Int32_array *v55; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  int32_t v57; // w2
  int32_t v58; // w3
  const MethodInfo *v59; // x5
  int v60; // w8
  System_String_o *FollowerName_39110520; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x19
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  __int64 v73; // x19
  int32_t v74; // w2
  int32_t v75; // w3
  int64_t id; // x8
  FollowerInfo_o *result; // x0
  __int64 v78; // x0
  int32_t questIda; // [xsp+Ch] [xbp-84h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+20h] [xbp-70h] BYREF
  bool isChangeName; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49FC7E1 & 1) == 0 )
  {
    sub_1B640C8(&AppendPassiveSkillInfo___TypeInfo, followerId);
    sub_1B640C8(&AppendPassiveSkillInfo_TypeInfo, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_1B640C8(&FollowerInfo_TypeInfo, v16);
    sub_1B640C8(&int___TypeInfo, v17);
    sub_1B640C8(&NetworkManager_TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B640C8(&ServantLeaderInfo___TypeInfo, v20);
    sub_1B640C8(&ServantLeaderInfo_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49FC7E1 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v23 = sub_1B64314(FollowerInfo_TypeInfo, followerId, *(_QWORD *)&questId);
  FollowerInfo___ctor((FollowerInfo_o *)v23, 0LL);
  v26 = sub_1B64314(ServantLeaderInfo_TypeInfo, v24, v25);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_36;
  *(_QWORD *)(v26 + 24) = followerId;
  *(_QWORD *)(v26 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v26 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v26 + 64) = this->fields.limitCount;
  if ( dispLmtCnt >= 11 )
    *(int32x4_t *)(v26 + 160) = vdupq_n_s32(dispLmtCnt);
  *(_QWORD *)(v26 + 68) = (unsigned int)this->fields.lv;
  *(_QWORD *)(v26 + 76) = *(_QWORD *)&this->fields.hp;
  *(_OWORD *)(v26 + 92) = *(_OWORD *)&this->fields.skillId1;
  *(_QWORD *)(v26 + 108) = *(_QWORD *)&this->fields.skillLv2;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  if ( !passiveSkill || (v33 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_22:
    *(_QWORD *)(v26 + 120) = passiveSkill;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 120), (int32_t)passiveSkill, v30, v31);
    goto LABEL_23;
  }
  if ( !idList )
    goto LABEL_22;
  v34 = *(_QWORD *)&idList->max_length;
  if ( !v34 )
    goto LABEL_22;
  v35 = sub_1B64170(int___TypeInfo, (unsigned int)(v34 + v33));
  *(_QWORD *)(v26 + 120) = v35;
  v36 = (System_Array_o **)(v26 + 120);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 120), v35, v37, v38);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_36;
  System_Array__CopyTo((System_Array_o *)idList, *v36, 0, 0LL);
  if ( !idList )
    goto LABEL_36;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_36;
  System_Array__CopyTo((System_Array_o *)Instance, *v36, idList->max_length, 0LL);
LABEL_23:
  v40 = followerId;
  v41 = followerId;
  questIda = questId;
  v42 = questPhase;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, v40, questId, questPhase, v39);
  *(_DWORD *)(v26 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v26 + 152) = 0LL;
  *(_DWORD *)(v26 + 132) = treasureDeviceLv;
  *(_DWORD *)(v26 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_36;
  Instance = sub_1B64170(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v48 = this->fields.appendPassiveSkillIds;
  if ( !v48 )
    goto LABEL_36;
  v49 = (unsigned int *)Instance;
  v50 = (ServantStatusBattleListViewItem_o *)(Instance + 32);
  v51 = 8LL;
  while ( 1 )
  {
    v52 = v51 - 8;
    if ( v51 - 8 >= (int)v48->max_length )
      break;
    v53 = (AppendPassiveSkillInfo_o *)sub_1B64314(AppendPassiveSkillInfo_TypeInfo, v45, v46);
    AppendPassiveSkillInfo___ctor(v53, 0LL);
    v55 = this->fields.appendPassiveSkillIds;
    if ( !v55 )
      goto LABEL_36;
    if ( v52 >= v55->max_length )
      goto LABEL_48;
    if ( !v53 )
      goto LABEL_36;
    v53->fields.skillId = *((_DWORD *)&v55->obj.klass + v51);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_36;
    if ( v52 >= appendPassiveSkillLvs->max_length )
      goto LABEL_48;
    v53->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v51);
    if ( !v49 )
      goto LABEL_36;
    Instance = sub_1B64204(v53, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
    if ( !Instance )
      goto LABEL_49;
    if ( v52 >= v49[6] )
      goto LABEL_48;
    v50->klass = (ServantStatusBattleListViewItem_c *)v53;
    sub_1B6406C(v50, (int32_t)v53, v57, v58);
    v48 = this->fields.appendPassiveSkillIds;
    ++v51;
    v50 = (ServantStatusBattleListViewItem_o *)((char *)v50 + 8);
    if ( !v48 )
      goto LABEL_36;
  }
  *(_QWORD *)(v26 + 216) = v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 216), (int32_t)v49, v46, v47);
  if ( !v23 )
    goto LABEL_36;
  *(_QWORD *)(v23 + 16) = v41;
  v60 = (*(_DWORD *)(v26 + 192) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v23 + 36) = v60;
  isChangeName = 0;
  FollowerName_39110520 = NpcServantFollowerEntity__GetFollowerName_39110520(
                            this,
                            v41,
                            questIda,
                            v42,
                            &isChangeName,
                            v59);
  *(_QWORD *)(v23 + 24) = FollowerName_39110520;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)FollowerName_39110520, v62, v63);
  *(_DWORD *)(v23 + 32) = 0;
  v64 = sub_1B64170(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v23 + 40) = v64;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 40), v64, v65, v66);
  v67 = *(_QWORD *)(v23 + 40);
  if ( !v67 )
    goto LABEL_36;
  Instance = sub_1B64204(v26, *(_QWORD *)(*(_QWORD *)v67 + 64LL));
  if ( !Instance )
    goto LABEL_49;
  if ( !*(_DWORD *)(v67 + 24) )
    goto LABEL_48;
  *(_QWORD *)(v67 + 32) = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 32), v26, v68, v69);
  v70 = sub_1B64170(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v23 + 48) = v70;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 48), v70, v71, v72);
  v73 = *(_QWORD *)(v23 + 48);
  if ( !v73 )
LABEL_36:
    sub_1B64324(Instance);
  Instance = sub_1B64204(v26, *(_QWORD *)(*(_QWORD *)v73 + 64LL));
  if ( !Instance )
  {
LABEL_49:
    v78 = sub_1B64348(Instance);
    sub_1B641F0(v78, 0LL);
  }
  if ( !*(_DWORD *)(v73 + 24) )
LABEL_48:
    sub_1B6432C(Instance, v54);
  *(_QWORD *)(v73 + 32) = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v73 + 32), v26, v74, v75);
  id = this->fields.id;
  *(_BYTE *)(v23 + 104) = isMySvtOrNpc;
  *(_BYTE *)(v23 + 105) = isFixedNpc;
  result = (FollowerInfo_o *)v23;
  *(_QWORD *)(v23 + 80) = id;
  *(_DWORD *)(v23 + 108) = imageSvtId;
  return result;
}