void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B165ED = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_40160740(this, followerId, questId, questPhase, &isChangeName, v5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_40160740(
        NpcServantFollowerEntity_o *this,
        int64_t followerId,
        int32_t questId,
        int32_t questPhase,
        bool *isChangeName,
        const MethodInfo *method)
{
  NpcServantFollowerEntity_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  const MethodInfo *v28; // x1
  NpcFollowerEntity_o *v29; // x21
  System_String_o *OverwriteServantName; // x22
  const MethodInfo *v31; // x1
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  ServantChangeEntity_o *v34; // x0
  const MethodInfo *v35; // x3
  System_String_o *name; // x0
  Il2CppObject *Entity; // x0

  v10 = this;
  if ( (byte_4B165E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&string_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_11756/*"SERVANT_HIDE_NAME"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_9382/*"NONE"*/, v23, v24);
    this = (NpcServantFollowerEntity_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    byte_4B165E7 = 1;
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
      v29 = NpcFollowerEntity;
      OverwriteServantName = NpcFollowerEntity__GetOverwriteServantName(NpcFollowerEntity, v28);
      if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
        return OverwriteServantName;
      if ( NpcFollowerEntity__IsExistSvtChangeParam(v29, v31) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_23;
        v34 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v10->fields.svtId, 0LL);
        if ( v34 )
        {
          OverwriteServantName = NpcFollowerEntity__GetServantName(
                                   v29,
                                   v34->fields.priority,
                                   string_TypeInfo->static_fields->Empty,
                                   v35);
          if ( !System_String__IsNullOrEmpty(OverwriteServantName, 0LL) )
            return OverwriteServantName;
        }
      }
    }
    name = v10->fields.name;
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9382/*"NONE"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.svtId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName((ServantEntity_o *)Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_23:
    sub_1BCAA3C(Instance, v33);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, followerId);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11756/*"SERVANT_HIDE_NAME"*/, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  NpcFollowerEntity_o *NpcFollowerEntity; // x0
  const MethodInfo *v16; // x1
  NpcFollowerEntity_o *v17; // x20
  const MethodInfo *v18; // x1
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  ServantChangeEntity_o *v21; // x0
  const MethodInfo *v22; // x3
  int32_t result; // w0
  __int64 v24; // x1

  v8 = this;
  if ( (byte_4B165E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantOverwriteMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    this = (NpcServantFollowerEntity_o *)sub_1BCA7E0(
                                           &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                           v13,
                                           v14);
    byte_4B165E8 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v17 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, v16) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_17;
      v21 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v8->fields.svtId, 0LL);
      if ( v21 )
      {
        result = NpcFollowerEntity__GetServantTd(v17, v21->fields.priority, -1, v22);
        if ( result != -1 )
          return result;
        return v8->fields.treasureDeviceId;
      }
    }
    if ( NpcFollowerEntity__IsOverwriteTreasureDevice(v17, v18) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_1BCAA3C(Instance, v20);
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
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B165E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, followerId, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B165E9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, v12);
  return entity;
}


System_Int32_array *__fastcall NpcServantFollowerEntity__GetOverwriteIndividuality(
        NpcServantFollowerEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  System_String_o *individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Func_object__int__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4B165EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v4, v5);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Int32_Parse__, v8, v9);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v14, v15);
    byte_4B165EC = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality
    || (individuality = System_String__Replace_62420848(
                          individuality,
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (individuality = System_String__Replace_62420848(
                          individuality,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1BCAA3C(individuality, v16);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(individuality, 0x2Cu, 0, 0LL);
  v22 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v19, v20, v21);
  System_Func_object__int____ctor(v22, 0LL, Method_System_Int32_Parse__, 0LL);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v23,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v2; // x2

  if ( (byte_4B165EB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9382/*"NONE"*/, method, v2);
    byte_4B165EB = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9382/*"NONE"*/, 0LL);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  int64_t v36; // x24
  __int64 Instance; // x0
  __int64 v38; // x1
  int32_t svtId; // w19
  __int64 v40; // x1
  Il2CppObject *MasterData_object; // x19
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Int32_array *passiveSkill; // x1
  __int64 v49; // x8
  __int64 v50; // x9
  int64_t v51; // x0
  System_Array_o **v52; // x19
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  const MethodInfo *v59; // x4
  int64_t v60; // x1
  int64_t v61; // x21
  int32_t v62; // w27
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  int64_t v65; // x2
  __int64 v66; // x3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Int32_array *v71; // x8
  unsigned int *v72; // x28
  PartyOrganizationUtility_o *v73; // x29
  __int64 v74; // x25
  unsigned __int64 v75; // x26
  AppendPassiveSkillInfo_o *v76; // x19
  struct System_Int32_array *v77; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  const MethodInfo *v85; // x5
  int v86; // w8
  System_String_o *FollowerName_40160740; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x19
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  __int64 v115; // x19
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t id; // x8
  FollowerInfo_o *result; // x0
  __int64 v124; // x0
  int32_t questIda; // [xsp+Ch] [xbp-84h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+20h] [xbp-70h] BYREF
  bool isChangeName; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B165EA & 1) == 0 )
  {
    sub_1BCA7E0(&AppendPassiveSkillInfo___TypeInfo, followerId, *(_QWORD *)&questId);
    sub_1BCA7E0(&AppendPassiveSkillInfo_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16, v17);
    sub_1BCA7E0(&FollowerInfo_TypeInfo, v18, v19);
    sub_1BCA7E0(&int___TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
    sub_1BCA7E0(&ServantLeaderInfo___TypeInfo, v26, v27);
    sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    byte_4B165EA = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v32 = sub_1BCAA2C(FollowerInfo_TypeInfo, followerId, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
  FollowerInfo___ctor((FollowerInfo_o *)v32, 0LL);
  v36 = sub_1BCAA2C(ServantLeaderInfo_TypeInfo, v33, v34, v35);
  ServantLeaderInfo___ctor((ServantLeaderInfo_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_37;
  *(_QWORD *)(v36 + 24) = followerId;
  *(_QWORD *)(v36 + 40) = 0LL;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v36 + 48) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(_DWORD *)(v36 + 64) = this->fields.limitCount;
  if ( (dispLmtCnt & 0x80000000) == 0 )
  {
    *(_DWORD *)(v36 + 164) = dispLmtCnt;
    if ( dispLmtCnt >= 11 )
    {
      *(_DWORD *)(v36 + 160) = dispLmtCnt;
      *(_DWORD *)(v36 + 168) = dispLmtCnt;
      *(_DWORD *)(v36 + 172) = dispLmtCnt;
    }
  }
  *(_QWORD *)(v36 + 68) = (unsigned int)this->fields.lv;
  *(_QWORD *)(v36 + 76) = *(_QWORD *)&this->fields.hp;
  *(_OWORD *)(v36 + 92) = *(_OWORD *)&this->fields.skillId1;
  *(_QWORD *)(v36 + 108) = *(_QWORD *)&this->fields.skillLv2;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_37;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)MasterData_object,
                        Instance,
                        this->fields.svtId,
                        0LL);
  if ( !Instance )
    goto LABEL_37;
  UserServantCollectionEntity__getPassiveSkillInfo(
    (UserServantCollectionEntity_o *)Instance,
    &idList,
    &titleList,
    &explanationList,
    -1,
    0,
    0LL);
  passiveSkill = this->fields.passiveSkill;
  if ( !passiveSkill || (v49 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_23:
    *(_QWORD *)(v36 + 120) = passiveSkill;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 120), (int64_t)passiveSkill, v42, v43, v44, v45, v46, v47);
    goto LABEL_24;
  }
  if ( !idList )
    goto LABEL_23;
  v50 = *(_QWORD *)&idList->max_length;
  if ( !v50 )
    goto LABEL_23;
  v51 = sub_1BCA888(int___TypeInfo, (unsigned int)(v50 + v49));
  *(_QWORD *)(v36 + 120) = v51;
  v52 = (System_Array_o **)(v36 + 120);
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 120), v51, v53, v54, v55, v56, v57, v58);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_37;
  System_Array__CopyTo((System_Array_o *)idList, *v52, 0, 0LL);
  if ( !idList )
    goto LABEL_37;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_37;
  System_Array__CopyTo((System_Array_o *)Instance, *v52, idList->max_length, 0LL);
LABEL_24:
  v60 = followerId;
  v61 = followerId;
  questIda = questId;
  v62 = questPhase;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, v60, questId, questPhase, v59);
  *(_DWORD *)(v36 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v36 + 152) = 0LL;
  *(_DWORD *)(v36 + 132) = treasureDeviceLv;
  *(_DWORD *)(v36 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_37;
  Instance = sub_1BCA888(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v71 = this->fields.appendPassiveSkillIds;
  if ( !v71 )
    goto LABEL_37;
  v72 = (unsigned int *)Instance;
  v73 = (PartyOrganizationUtility_o *)(Instance + 32);
  v74 = 8LL;
  while ( 1 )
  {
    v75 = v74 - 8;
    if ( v74 - 8 >= (int)v71->max_length )
      break;
    v76 = (AppendPassiveSkillInfo_o *)sub_1BCAA2C(AppendPassiveSkillInfo_TypeInfo, v38, v65, v66);
    AppendPassiveSkillInfo___ctor(v76, 0LL);
    v77 = this->fields.appendPassiveSkillIds;
    if ( !v77 )
      goto LABEL_37;
    if ( v75 >= v77->max_length )
      goto LABEL_49;
    if ( !v76 )
      goto LABEL_37;
    v76->fields.skillId = *((_DWORD *)&v77->obj.klass + v74);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_37;
    if ( v75 >= appendPassiveSkillLvs->max_length )
      goto LABEL_49;
    v76->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v74);
    if ( !v72 )
      goto LABEL_37;
    Instance = sub_1BCA91C(v76, *(_QWORD *)(*(_QWORD *)v72 + 64LL));
    if ( !Instance )
      goto LABEL_50;
    if ( v75 >= v72[6] )
      goto LABEL_49;
    v73->klass = (PartyOrganizationUtility_c *)v76;
    sub_1BCA784(v73, (int64_t)v76, v79, v80, v81, v82, v83, v84);
    v71 = this->fields.appendPassiveSkillIds;
    ++v74;
    v73 = (PartyOrganizationUtility_o *)((char *)v73 + 8);
    if ( !v71 )
      goto LABEL_37;
  }
  *(_QWORD *)(v36 + 216) = v72;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 216), (int64_t)v72, v65, v66, v67, v68, v69, v70);
  if ( !v32 )
    goto LABEL_37;
  *(_QWORD *)(v32 + 16) = v61;
  v86 = (*(_DWORD *)(v36 + 192) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v32 + 36) = v86;
  isChangeName = 0;
  FollowerName_40160740 = NpcServantFollowerEntity__GetFollowerName_40160740(
                            this,
                            v61,
                            questIda,
                            v62,
                            &isChangeName,
                            v85);
  *(_QWORD *)(v32 + 24) = FollowerName_40160740;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 24), (int64_t)FollowerName_40160740, v88, v89, v90, v91, v92, v93);
  *(_DWORD *)(v32 + 32) = 0;
  v94 = sub_1BCA888(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v32 + 40) = v94;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 40), v94, v95, v96, v97, v98, v99, v100);
  v101 = *(_QWORD *)(v32 + 40);
  if ( !v101 )
    goto LABEL_37;
  Instance = sub_1BCA91C(v36, *(_QWORD *)(*(_QWORD *)v101 + 64LL));
  if ( !Instance )
    goto LABEL_50;
  if ( !*(_DWORD *)(v101 + 24) )
    goto LABEL_49;
  *(_QWORD *)(v101 + 32) = v36;
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 32), v36, v102, v103, v104, v105, v106, v107);
  v108 = sub_1BCA888(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v32 + 48) = v108;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 48), v108, v109, v110, v111, v112, v113, v114);
  v115 = *(_QWORD *)(v32 + 48);
  if ( !v115 )
LABEL_37:
    sub_1BCAA3C(Instance, v38);
  Instance = sub_1BCA91C(v36, *(_QWORD *)(*(_QWORD *)v115 + 64LL));
  if ( !Instance )
  {
LABEL_50:
    v124 = sub_1BCAA60(Instance);
    sub_1BCA908(v124, 0LL);
  }
  if ( !*(_DWORD *)(v115 + 24) )
LABEL_49:
    sub_1BCAA44(Instance, v38);
  *(_QWORD *)(v115 + 32) = v36;
  sub_1BCA784((PartyOrganizationUtility_o *)(v115 + 32), v36, v116, v117, v118, v119, v120, v121);
  id = this->fields.id;
  *(_BYTE *)(v32 + 104) = isMySvtOrNpc;
  *(_BYTE *)(v32 + 105) = isFixedNpc;
  result = (FollowerInfo_o *)v32;
  *(_QWORD *)(v32 + 80) = id;
  *(_DWORD *)(v32 + 108) = imageSvtId;
  return result;
}