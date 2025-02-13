void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC965 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_long___ctor__);
    byte_4BDC965 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_325992C *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_40699184(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_40699184(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        bool *isChangeName,
        const MethodInfo *method)
{
  NpcServantFollowerEntity_o *v10; // x19
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  NpcFollowerEntity_o *v12; // x21
  System_String_o *OverwriteServantName; // x22
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  ServantChangeEntity_o *v16; // x0
  System_String_o *name; // x0
  Il2CppObject *Entity; // x0

  v10 = this;
  if ( (byte_4BDC95F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_11836/*"SERVANT_HIDE_NAME"*/);
    sub_1C21E38(&StringLiteral_9444/*"NONE"*/);
    this = (NpcServantFollowerEntity_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC95F = 1;
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
      v12 = NpcFollowerEntity;
      OverwriteServantName = NpcFollowerEntity__GetOverwriteServantName(NpcFollowerEntity, 0LL);
      if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
        return OverwriteServantName;
      if ( NpcFollowerEntity__IsExistSvtChangeParam(v12, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_23;
        v16 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v10->fields.svtId, 0LL);
        if ( v16 )
        {
          OverwriteServantName = NpcFollowerEntity__GetServantName(
                                   v12,
                                   v16->fields.priority,
                                   string_TypeInfo->static_fields->Empty,
                                   0LL);
          if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
            return OverwriteServantName;
        }
      }
    }
    name = v10->fields.name;
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9444/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.svtId,
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName((ServantEntity_o *)Entity, v10->fields.limitCount, -1, 0, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_23:
    sub_1C22094(Instance, v15);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11836/*"SERVANT_HIDE_NAME"*/, 0LL);
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
  NpcFollowerEntity_o *v10; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  ServantChangeEntity_o *v13; // x0
  int32_t result; // w0

  v8 = this;
  if ( (byte_4BDC960 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantOverwriteMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    this = (NpcServantFollowerEntity_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC960 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v10 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_17;
      v13 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v8->fields.svtId, 0LL);
      if ( v13 )
      {
        result = NpcFollowerEntity__GetServantTd(v10, v13->fields.priority, -1, 0LL);
        if ( result != -1 )
          return result;
        return v8->fields.treasureDeviceId;
      }
    }
    if ( NpcFollowerEntity__IsOverwriteTreasureDevice(v10, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_1C22094(Instance, v12);
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
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDC961 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC961 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v9);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, 0LL);
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

  if ( (byte_4BDC964 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_string__int__TypeInfo);
    sub_1C21E38(&Method_System_Int32_Parse__);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDC964 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality
    || (individuality = System_String__Replace_63135104(
                          individuality,
                          (System_String_o *)StringLiteral_16086/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (individuality = System_String__Replace_63135104(
                          individuality,
                          (System_String_o *)StringLiteral_16345/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1C22094(individuality, v3);
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(individuality, 0x2Cu, 0, 0LL);
  v6 = (System_Func_object__int__o *)sub_1C22084(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v6, 0LL, Method_System_Int32_Parse__, 0LL);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                              v5,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v7,
           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4BDC963 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9444/*"NONE"*/);
    byte_4BDC963 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9444/*"NONE"*/, 0LL);
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
  int64_t v15; // x24
  __int64 Instance; // x0
  __int64 v17; // x1
  int32_t svtId; // w19
  Il2CppObject *MasterData_object; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Int32_array *passiveSkill; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int64_t v29; // x0
  System_Array_o **v30; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x4
  int64_t v38; // x27
  int32_t v39; // w21
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Int32_array *v48; // x8
  unsigned int *v49; // x28
  PartyOrganizationUtility_o *v50; // x29
  __int64 v51; // x25
  unsigned __int64 v52; // x26
  AppendPassiveSkillInfo_o *v53; // x19
  struct System_Int32_array *v54; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x5
  int v63; // w8
  System_String_o *FollowerName_40699184; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x19
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x19
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t id; // x8
  FollowerInfo_o *result; // x0
  __int64 v101; // x0
  int32_t questIda; // [xsp+Ch] [xbp-84h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+20h] [xbp-70h] BYREF
  bool isChangeName; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BDC962 & 1) == 0 )
  {
    sub_1C21E38(&AppendPassiveSkillInfo___TypeInfo);
    sub_1C21E38(&AppendPassiveSkillInfo_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&FollowerInfo_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ServantLeaderInfo___TypeInfo);
    sub_1C21E38(&ServantLeaderInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC962 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v14 = sub_1C22084(FollowerInfo_TypeInfo);
  FollowerInfo___ctor((FollowerInfo_o *)v14, 0LL);
  v15 = sub_1C22084(ServantLeaderInfo_TypeInfo);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_41;
  *(_QWORD *)(v15 + 24) = followerId;
  *(_QWORD *)(v15 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v15 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v15 + 64) = this->fields.limitCount;
  if ( (dispLmtCnt & 0x80000000) == 0 )
  {
    *(_DWORD *)(v15 + 164) = dispLmtCnt;
    if ( dispLmtCnt >= 11 )
    {
      *(_DWORD *)(v15 + 160) = dispLmtCnt;
      *(_DWORD *)(v15 + 168) = dispLmtCnt;
      *(_DWORD *)(v15 + 172) = dispLmtCnt;
    }
  }
  *(_QWORD *)(v15 + 68) = (unsigned int)this->fields.lv;
  *(_QWORD *)(v15 + 76) = *(_QWORD *)&this->fields.hp;
  *(_OWORD *)(v15 + 92) = *(_OWORD *)&this->fields.skillId1;
  *(_QWORD *)(v15 + 108) = *(_QWORD *)&this->fields.skillLv2;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
  if ( !passiveSkill || (v27 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_27:
    *(_QWORD *)(v15 + 120) = passiveSkill;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 120), (int64_t)passiveSkill, v20, v21, v22, v23, v24, v25);
    goto LABEL_28;
  }
  if ( !idList )
    goto LABEL_27;
  v28 = *(_QWORD *)&idList->max_length;
  if ( !v28 )
    goto LABEL_27;
  v29 = sub_1C21EE0(int___TypeInfo, (unsigned int)(v28 + v27));
  *(_QWORD *)(v15 + 120) = v29;
  v30 = (System_Array_o **)(v15 + 120);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 120), v29, v31, v32, v33, v34, v35, v36);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)idList, *v30, 0, 0LL);
  if ( !idList )
    goto LABEL_41;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)Instance, *v30, idList->max_length, 0LL);
LABEL_28:
  v38 = followerId;
  questIda = questId;
  v39 = questPhase;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v37);
  *(_DWORD *)(v15 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v15 + 152) = 0LL;
  *(_DWORD *)(v15 + 132) = treasureDeviceLv;
  *(_DWORD *)(v15 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_41;
  Instance = sub_1C21EE0(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v48 = this->fields.appendPassiveSkillIds;
  if ( !v48 )
    goto LABEL_41;
  v49 = (unsigned int *)Instance;
  v50 = (PartyOrganizationUtility_o *)(Instance + 32);
  v51 = 8LL;
  while ( 1 )
  {
    v52 = v51 - 8;
    if ( v51 - 8 >= (int)v48->max_length )
      break;
    v53 = (AppendPassiveSkillInfo_o *)sub_1C22084(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v53, 0LL);
    v54 = this->fields.appendPassiveSkillIds;
    if ( !v54 )
      goto LABEL_41;
    if ( v52 >= v54->max_length )
      goto LABEL_53;
    if ( !v53 )
      goto LABEL_41;
    v53->fields.skillId = *((_DWORD *)&v54->obj.klass + v51);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_41;
    if ( v52 >= appendPassiveSkillLvs->max_length )
      goto LABEL_53;
    v53->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v51);
    if ( !v49 )
      goto LABEL_41;
    Instance = sub_1C21F74(v53, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
    if ( !Instance )
      goto LABEL_54;
    if ( v52 >= v49[6] )
      goto LABEL_53;
    v50->klass = (PartyOrganizationUtility_c *)v53;
    sub_1C21DDC(v50, (int64_t)v53, v56, v57, v58, v59, v60, v61);
    v48 = this->fields.appendPassiveSkillIds;
    ++v51;
    v50 = (PartyOrganizationUtility_o *)((char *)v50 + 8);
    if ( !v48 )
      goto LABEL_41;
  }
  *(_QWORD *)(v15 + 216) = v49;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 216), (int64_t)v49, v42, v43, v44, v45, v46, v47);
  if ( !v14 )
    goto LABEL_41;
  *(_QWORD *)(v14 + 16) = v38;
  v63 = (*(_DWORD *)(v15 + 192) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v14 + 36) = v63;
  isChangeName = 0;
  FollowerName_40699184 = NpcServantFollowerEntity__GetFollowerName_40699184(
                            this,
                            v38,
                            questIda,
                            v39,
                            &isChangeName,
                            v62);
  *(_QWORD *)(v14 + 24) = FollowerName_40699184;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)FollowerName_40699184, v65, v66, v67, v68, v69, v70);
  *(_DWORD *)(v14 + 32) = 0;
  v71 = sub_1C21EE0(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v14 + 40) = v71;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 40), v71, v72, v73, v74, v75, v76, v77);
  v78 = *(_QWORD *)(v14 + 40);
  if ( !v78 )
    goto LABEL_41;
  Instance = sub_1C21F74(v15, *(_QWORD *)(*(_QWORD *)v78 + 64LL));
  if ( !Instance )
    goto LABEL_54;
  if ( !*(_DWORD *)(v78 + 24) )
    goto LABEL_53;
  *(_QWORD *)(v78 + 32) = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v78 + 32), v15, v79, v80, v81, v82, v83, v84);
  v85 = sub_1C21EE0(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v14 + 48) = v85;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 48), v85, v86, v87, v88, v89, v90, v91);
  v92 = *(_QWORD *)(v14 + 48);
  if ( !v92 )
LABEL_41:
    sub_1C22094(Instance, v17);
  Instance = sub_1C21F74(v15, *(_QWORD *)(*(_QWORD *)v92 + 64LL));
  if ( !Instance )
  {
LABEL_54:
    v101 = sub_1C220B8(Instance);
    sub_1C21F60(v101, 0LL);
  }
  if ( !*(_DWORD *)(v92 + 24) )
LABEL_53:
    sub_1C2209C(Instance, v17);
  *(_QWORD *)(v92 + 32) = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v92 + 32), v15, v93, v94, v95, v96, v97, v98);
  id = this->fields.id;
  *(_BYTE *)(v14 + 104) = isMySvtOrNpc;
  *(_BYTE *)(v14 + 105) = isFixedNpc;
  result = (FollowerInfo_o *)v14;
  *(_QWORD *)(v14 + 80) = id;
  *(_DWORD *)(v14 + 108) = imageSvtId;
  return result;
}