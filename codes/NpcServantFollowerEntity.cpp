void __fastcall NpcServantFollowerEntity___ctor(NpcServantFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4AF6 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_long___ctor__, method);
    byte_4BB4AF6 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3236188 *)Method_DataEntityBase_long___ctor__);
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
  return NpcServantFollowerEntity__GetFollowerName_40596344(this, followerId, questId, questPhase, &isChangeName, v5);
}


System_String_o *__fastcall NpcServantFollowerEntity__GetFollowerName_40596344(
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
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  ServantChangeEntity_o *v24; // x0
  System_String_o *name; // x0
  Il2CppObject *Entity; // x0

  v10 = this;
  if ( (byte_4BB4AF0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&LocalizationManager_TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C13D24(&string_TypeInfo, v15);
    sub_1C13D24(&StringLiteral_11815/*"SERVANT_FRAME_PURCHASE_INFO1"*/, v16);
    sub_1C13D24(&StringLiteral_9428/*"NMTOKEN"*/, v17);
    this = (NpcServantFollowerEntity_o *)sub_1C13D24(&StringLiteral_1/*""*/, v18);
    byte_4BB4AF0 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        if ( !Instance )
          goto LABEL_23;
        v24 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v10->fields.svtId, 0LL);
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
    if ( name && System_String__op_Inequality(name, (System_String_o *)StringLiteral_9428/*"NMTOKEN"*/, 0LL) )
      return v10->fields.name;
    *isChangeName = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.svtId,
                   (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
          return ServantEntity__getName((ServantEntity_o *)Entity, v10->fields.limitCount, -1, 0LL);
        return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
LABEL_23:
    sub_1C13F80(Instance, v23);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_11815/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
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
  NpcFollowerEntity_o *v13; // x20
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  ServantChangeEntity_o *v16; // x0
  int32_t result; // w0

  v8 = this;
  if ( (byte_4BB4AF1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantChangeMaster___, followerId);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantOverwriteMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    this = (NpcServantFollowerEntity_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BB4AF1 = 1;
  }
  NpcFollowerEntity = NpcServantFollowerEntity__GetNpcFollowerEntity(this, followerId, questId, questPhase, method);
  if ( NpcFollowerEntity )
  {
    v13 = NpcFollowerEntity;
    if ( NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
      if ( !Instance )
        goto LABEL_17;
      v16 = ServantChangeMaster__GetEnableEntity((ServantChangeMaster_o *)Instance, v8->fields.svtId, 0LL);
      if ( v16 )
      {
        result = NpcFollowerEntity__GetServantTd(v13, v16->fields.priority, -1, 0LL);
        if ( result != -1 )
          return result;
        return v8->fields.treasureDeviceId;
      }
    }
    if ( NpcFollowerEntity__IsOverwriteTreasureDevice(v13, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantOverwriteMaster___);
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
      sub_1C13F80(Instance, v15);
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
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB4AF2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_NpcFollowerMaster___, followerId);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BB4AF2 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v10);
  }
  NpcFollowerMaster__TryGetEntity((NpcFollowerMaster_o *)Instance, &entity, followerId, questId, questPhase, 0LL);
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

  if ( (byte_4BB4AF5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_string__int___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1C13D24(&System_Func_string__int__TypeInfo, v4);
    sub_1C13D24(&Method_System_Int32_Parse__, v5);
    sub_1C13D24(&StringLiteral_16061/*"You must call the Bind method before performing this operation."*/, v6);
    sub_1C13D24(&StringLiteral_1/*""*/, v7);
    sub_1C13D24(&StringLiteral_16320/*"\\p{_xmlI}"*/, v8);
    byte_4BB4AF5 = 1;
  }
  if ( !NpcServantFollowerEntity__IsOverwriteIndividuality(this, method) )
    return 0LL;
  individuality = this->fields.individuality;
  if ( !individuality
    || (individuality = System_String__Replace_62987572(
                          individuality,
                          (System_String_o *)StringLiteral_16061/*"You must call the Bind method before performing this operation."*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL
    || (individuality = System_String__Replace_62987572(
                          individuality,
                          (System_String_o *)StringLiteral_16320/*"\\p{_xmlI}"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL)) == 0LL )
  {
    sub_1C13F80(individuality, v9);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(individuality, 0x2Cu, 0, 0LL);
  v12 = (System_Func_object__int__o *)sub_1C13F70(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v12, 0LL, Method_System_Int32_Parse__, 0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_2FC022C *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v13,
           (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4BB4AF4 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9428/*"NMTOKEN"*/, method);
    byte_4BB4AF4 = 1;
  }
  return System_String__op_Inequality(this->fields.individuality, (System_String_o *)StringLiteral_9428/*"NMTOKEN"*/, 0LL);
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
  int64_t v24; // x24
  __int64 Instance; // x0
  __int64 v26; // x1
  int32_t svtId; // w19
  Il2CppObject *MasterData_object; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Int32_array *passiveSkill; // x1
  __int64 v36; // x8
  __int64 v37; // x9
  int64_t v38; // x0
  System_Array_o **v39; // x19
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x4
  int64_t v47; // x27
  int32_t v48; // w21
  int32_t treasureDeviceLv; // w8
  struct System_Int32_array *appendPassiveSkillIds; // x8
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Int32_array *v57; // x8
  unsigned int *v58; // x28
  PartyOrganizationUtility_o *v59; // x29
  __int64 v60; // x25
  unsigned __int64 v61; // x26
  AppendPassiveSkillInfo_o *v62; // x19
  struct System_Int32_array *v63; // x8
  struct System_Int32_array *appendPassiveSkillLvs; // x8
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  const MethodInfo *v71; // x5
  int v72; // w8
  System_String_o *FollowerName_40596344; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x19
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
  int64_t id; // x8
  FollowerInfo_o *result; // x0
  __int64 v110; // x0
  int32_t questIda; // [xsp+Ch] [xbp-84h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+20h] [xbp-70h] BYREF
  bool isChangeName; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BB4AF3 & 1) == 0 )
  {
    sub_1C13D24(&AppendPassiveSkillInfo___TypeInfo, followerId);
    sub_1C13D24(&AppendPassiveSkillInfo_TypeInfo, v14);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_1C13D24(&FollowerInfo_TypeInfo, v16);
    sub_1C13D24(&int___TypeInfo, v17);
    sub_1C13D24(&NetworkManager_TypeInfo, v18);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1C13D24(&ServantLeaderInfo___TypeInfo, v20);
    sub_1C13D24(&ServantLeaderInfo_TypeInfo, v21);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4BB4AF3 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  v23 = sub_1C13F70(FollowerInfo_TypeInfo);
  FollowerInfo___ctor((FollowerInfo_o *)v23, 0LL);
  v24 = sub_1C13F70(ServantLeaderInfo_TypeInfo);
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
    *(_DWORD *)(v24 + 164) = dispLmtCnt;
    if ( dispLmtCnt >= 11 )
    {
      *(_DWORD *)(v24 + 160) = dispLmtCnt;
      *(_DWORD *)(v24 + 168) = dispLmtCnt;
      *(_DWORD *)(v24 + 172) = dispLmtCnt;
    }
  }
  *(_QWORD *)(v24 + 68) = (unsigned int)this->fields.lv;
  *(_QWORD *)(v24 + 76) = *(_QWORD *)&this->fields.hp;
  *(_OWORD *)(v24 + 92) = *(_OWORD *)&this->fields.skillId1;
  *(_QWORD *)(v24 + 108) = *(_QWORD *)&this->fields.skillLv2;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v26);
    byte_4BAF1E5 = 1;
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
  if ( !passiveSkill || (v36 = *(_QWORD *)&passiveSkill->max_length) == 0 )
  {
    passiveSkill = idList;
LABEL_27:
    *(_QWORD *)(v24 + 120) = passiveSkill;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 120), (int64_t)passiveSkill, v29, v30, v31, v32, v33, v34);
    goto LABEL_28;
  }
  if ( !idList )
    goto LABEL_27;
  v37 = *(_QWORD *)&idList->max_length;
  if ( !v37 )
    goto LABEL_27;
  v38 = sub_1C13DCC(int___TypeInfo, (unsigned int)(v37 + v36));
  *(_QWORD *)(v24 + 120) = v38;
  v39 = (System_Array_o **)(v24 + 120);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 120), v38, v40, v41, v42, v43, v44, v45);
  Instance = (__int64)idList;
  if ( !idList )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)idList, *v39, 0, 0LL);
  if ( !idList )
    goto LABEL_41;
  Instance = (__int64)this->fields.passiveSkill;
  if ( !Instance )
    goto LABEL_41;
  System_Array__CopyTo((System_Array_o *)Instance, *v39, idList->max_length, 0LL);
LABEL_28:
  v47 = followerId;
  questIda = questId;
  v48 = questPhase;
  Instance = NpcServantFollowerEntity__GetFollowerTreasureDeviceId(this, followerId, questId, questPhase, v46);
  *(_DWORD *)(v24 + 128) = Instance;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  *(_QWORD *)(v24 + 152) = 0LL;
  *(_DWORD *)(v24 + 132) = treasureDeviceLv;
  *(_DWORD *)(v24 + 192) = this->fields.flag | 1;
  appendPassiveSkillIds = this->fields.appendPassiveSkillIds;
  if ( !appendPassiveSkillIds )
    goto LABEL_41;
  Instance = sub_1C13DCC(AppendPassiveSkillInfo___TypeInfo, appendPassiveSkillIds->max_length);
  v57 = this->fields.appendPassiveSkillIds;
  if ( !v57 )
    goto LABEL_41;
  v58 = (unsigned int *)Instance;
  v59 = (PartyOrganizationUtility_o *)(Instance + 32);
  v60 = 8LL;
  while ( 1 )
  {
    v61 = v60 - 8;
    if ( v60 - 8 >= (int)v57->max_length )
      break;
    v62 = (AppendPassiveSkillInfo_o *)sub_1C13F70(AppendPassiveSkillInfo_TypeInfo);
    AppendPassiveSkillInfo___ctor(v62, 0LL);
    v63 = this->fields.appendPassiveSkillIds;
    if ( !v63 )
      goto LABEL_41;
    if ( v61 >= v63->max_length )
      goto LABEL_53;
    if ( !v62 )
      goto LABEL_41;
    v62->fields.skillId = *((_DWORD *)&v63->obj.klass + v60);
    appendPassiveSkillLvs = this->fields.appendPassiveSkillLvs;
    if ( !appendPassiveSkillLvs )
      goto LABEL_41;
    if ( v61 >= appendPassiveSkillLvs->max_length )
      goto LABEL_53;
    v62->fields.skillLv = *((_DWORD *)&appendPassiveSkillLvs->obj.klass + v60);
    if ( !v58 )
      goto LABEL_41;
    Instance = sub_1C13E60(v62, *(_QWORD *)(*(_QWORD *)v58 + 64LL));
    if ( !Instance )
      goto LABEL_54;
    if ( v61 >= v58[6] )
      goto LABEL_53;
    v59->klass = (PartyOrganizationUtility_c *)v62;
    sub_1C13CC8(v59, (int64_t)v62, v65, v66, v67, v68, v69, v70);
    v57 = this->fields.appendPassiveSkillIds;
    ++v60;
    v59 = (PartyOrganizationUtility_o *)((char *)v59 + 8);
    if ( !v57 )
      goto LABEL_41;
  }
  *(_QWORD *)(v24 + 216) = v58;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 216), (int64_t)v58, v51, v52, v53, v54, v55, v56);
  if ( !v23 )
    goto LABEL_41;
  *(_QWORD *)(v23 + 16) = v47;
  v72 = (*(_DWORD *)(v24 + 192) & 4) != 0 ? 4 : 3;
  *(_DWORD *)(v23 + 36) = v72;
  isChangeName = 0;
  FollowerName_40596344 = NpcServantFollowerEntity__GetFollowerName_40596344(
                            this,
                            v47,
                            questIda,
                            v48,
                            &isChangeName,
                            v71);
  *(_QWORD *)(v23 + 24) = FollowerName_40596344;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)FollowerName_40596344, v74, v75, v76, v77, v78, v79);
  *(_DWORD *)(v23 + 32) = 0;
  v80 = sub_1C13DCC(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v23 + 40) = v80;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 40), v80, v81, v82, v83, v84, v85, v86);
  v87 = *(_QWORD *)(v23 + 40);
  if ( !v87 )
    goto LABEL_41;
  Instance = sub_1C13E60(v24, *(_QWORD *)(*(_QWORD *)v87 + 64LL));
  if ( !Instance )
    goto LABEL_54;
  if ( !*(_DWORD *)(v87 + 24) )
    goto LABEL_53;
  *(_QWORD *)(v87 + 32) = v24;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v87 + 32), v24, v88, v89, v90, v91, v92, v93);
  v94 = sub_1C13DCC(ServantLeaderInfo___TypeInfo, 1LL);
  *(_QWORD *)(v23 + 48) = v94;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 48), v94, v95, v96, v97, v98, v99, v100);
  v101 = *(_QWORD *)(v23 + 48);
  if ( !v101 )
LABEL_41:
    sub_1C13F80(Instance, v26);
  Instance = sub_1C13E60(v24, *(_QWORD *)(*(_QWORD *)v101 + 64LL));
  if ( !Instance )
  {
LABEL_54:
    v110 = sub_1C13FA4(Instance);
    sub_1C13E4C(v110, 0LL);
  }
  if ( !*(_DWORD *)(v101 + 24) )
LABEL_53:
    sub_1C13F88(Instance, v26);
  *(_QWORD *)(v101 + 32) = v24;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v101 + 32), v24, v102, v103, v104, v105, v106, v107);
  id = this->fields.id;
  *(_BYTE *)(v23 + 104) = isMySvtOrNpc;
  *(_BYTE *)(v23 + 105) = isFixedNpc;
  result = (FollowerInfo_o *)v23;
  *(_QWORD *)(v23 + 80) = id;
  *(_DWORD *)(v23 + 108) = imageSvtId;
  return result;
}