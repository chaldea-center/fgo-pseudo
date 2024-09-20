void __fastcall UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BF1A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BF1A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCollectionEntity___ctor_40166064(
        UserServantCollectionEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *tdPlayed; // x1
  struct System_Int32_array **p_tdPlayed; // x20

  if ( (byte_4A5BF1B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BF1B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1B8880C(v5, v6);
  this->fields.userId = e->fields.userId;
  this->fields.svtId = e->fields.svtId;
  *(_OWORD *)&this->fields.status = *(_OWORD *)&e->fields.status;
  *(_OWORD *)&this->fields.maxLimitCount = *(_OWORD *)&e->fields.maxLimitCount;
  *(_QWORD *)&this->fields.treasureDeviceLv1 = *(_QWORD *)&e->fields.treasureDeviceLv1;
  this->fields.flag = e->fields.flag;
  this->fields.friendship = e->fields.friendship;
  this->fields.friendshipRank = e->fields.friendshipRank;
  *(_OWORD *)&this->fields.voicePlayed = *(_OWORD *)&e->fields.voicePlayed;
  tdPlayed = e->fields.tdPlayed;
  this->fields.tdPlayed = tdPlayed;
  p_tdPlayed = &this->fields.tdPlayed;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_tdPlayed, (int32_t)tdPlayed, v7, v8);
  p_tdPlayed[2] = (struct System_Int32_array *)e->fields.createdAt;
}


void __fastcall UserServantCollectionEntity___ctor_40166256(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int128 v7; // q0

  if ( (byte_4A5BF1C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF1C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&v7 = 0x100000001LL;
  *((_QWORD *)&v7 + 1) = 0x100000001LL;
  this->fields.status = 0;
  *(_OWORD *)&this->fields.skillLv1 = v7;
  this->fields.svtCommonFlag = 0;
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
}


bool __fastcall UserServantCollectionEntity__CheckSvtCommonFlag(
        int32_t svtCommonFlag,
        int32_t flagKind,
        const MethodInfo *method)
{
  return (flagKind & svtCommonFlag) != 0;
}


System_String_o *__fastcall UserServantCollectionEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4A5BF19 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4A5BF19 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_2E7DC34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantCollectionEntity__CreatePrimaryKey(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int64_t userId; // x20
  __int64 v4; // x21
  __int64 v5; // x19
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5BF18 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF18 = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  return UserServantCollectionEntity__CreatePK(userId, v6, v7);
}


void __fastcall UserServantCollectionEntity__GetAppendPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v14; // x26
  __int64 v15; // x27
  ServantAppendPassiveSkillMaster_o *v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A5BF38 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF38 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
  if ( !v16 )
    sub_1B8880C(v17, v18);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v16,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v17,
    this->fields.userId,
    0LL,
    0LL);
}


System_Int32_array *__fastcall UserServantCollectionEntity__GetCommandCardParam(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)UserServantCollectionEntity__GetUserCommandCardEntity(this, method);
  if ( result )
    return *(System_Int32_array **)&result->m_Items[13];
  return result;
}


void __fastcall UserServantCollectionEntity__GetPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispSvtId,
        int32_t dispLimitCount,
        bool isOwner,
        const MethodInfo *method)
{
  System_Int32_array **v12; // x21
  int32_t friendshipRank; // w26
  int32_t maxLimitCount; // w22
  __int64 v15; // x0
  __int64 v16; // x0
  void *MasterData_object; // x0
  bool v18; // w24
  BalanceConfig_c *v19; // x0
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x25
  Il2CppObject *v30; // x26
  int32_t v31; // w2
  int32_t v32; // w3
  int v33; // w8
  int v34; // w19
  __int64 v35; // x8
  int32_t v36; // w28
  int64_t UserId; // x29
  __int64 v38; // x22
  __int64 v39; // x23
  int32_t v40; // w4
  int32_t v41; // w2
  __int64 v42; // x22
  __int64 v43; // x8
  unsigned __int64 v44; // x23
  System_Int32_array *v45; // x8
  int max_length; // w9
  unsigned int v47; // w10
  __int64 v48; // x28
  char *v49; // x10
  _DWORD *v50; // x10
  int v51; // t1
  System_String_array *v52; // x8
  System_String_array *v53; // x9
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  int *v58; // [xsp+30h] [xbp-90h]
  System_String_array **v59; // [xsp+38h] [xbp-88h]
  UserEventServantPointMaster_o *Master_object; // [xsp+40h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v12 = idList;
  if ( (byte_4A5BF26 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5BF26 = 1;
  }
  entity = 0LL;
  if ( isOwner )
    friendshipRank = BasicHelper__DecryptValue_41109412(this->fields.friendshipRank, 0LL);
  else
    friendshipRank = 0;
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BDA48C(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BDA48C(v16);
  MasterData_object = **(void ***)(v16 + 184);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_object )
    goto LABEL_68;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    (ServantPassiveSkillMaster_o *)MasterData_object,
    v12,
    titleList,
    explanationList,
    dispSvtId,
    this->fields.userId,
    this->fields.maxLv,
    this->fields.maxLimitCount,
    dispLimitCount,
    friendshipRank,
    -1,
    isOwner,
    0LL,
    0LL);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        dispSvtId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !MasterData_object )
    goto LABEL_68;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)MasterData_object, 0LL) )
    return;
  v18 = *v12 == 0LL;
  if ( !*v12 )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    v20 = sub_1B88658(int___TypeInfo, (unsigned int)v19->static_fields->SvtPassiveSkillListMax);
    *v12 = (System_Int32_array *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v12, v20, v21, v22);
    v23 = (System_String_array *)sub_1B88658(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v23, v24, v25);
    v26 = (System_String_array *)sub_1B88658(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v26, v27, v28);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
  MasterData_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !MasterData_object
    || (MasterData_object = EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 12, 0, 0LL)) == 0LL )
  {
LABEL_68:
    sub_1B8880C(MasterData_object, idList);
  }
  v33 = *((_DWORD *)MasterData_object + 6);
  if ( v33 >= 1 )
  {
    v34 = 0;
    v58 = (int *)MasterData_object;
    v59 = explanationList;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)v33 )
        goto LABEL_67;
      v35 = *((_QWORD *)MasterData_object + v34 + 4);
      if ( !v35 )
        goto LABEL_68;
      v36 = *(_DWORD *)(v35 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v39 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v64.fields.currentCryptoKey = v39;
      *(_QWORD *)&v64.fields.fakeValue = v38;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v64, 0LL);
      MasterData_object = Master_object;
      if ( !Master_object )
        goto LABEL_68;
      MasterData_object = (void *)UserEventServantPointMaster__TryGetEntity(
                                    Master_object,
                                    &entity,
                                    UserId,
                                    v36,
                                    v40,
                                    0LL);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        MasterData_object = entity;
        explanationList = v59;
        if ( !entity )
          goto LABEL_68;
        MasterData_object = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
        v41 = (int)MasterData_object;
      }
      else
      {
        explanationList = v59;
        v41 = 0;
      }
      if ( !v29 )
        goto LABEL_68;
      MasterData_object = EventServantPointRankMaster__GetEnableEntity(
                            (EventServantPointRankMaster_o *)v29,
                            v36,
                            v41,
                            dispSvtId,
                            0LL);
      if ( MasterData_object )
      {
        v42 = *((_QWORD *)MasterData_object + 4);
        if ( !v42 )
          goto LABEL_68;
        v43 = *(_QWORD *)(v42 + 24);
        if ( (int)v43 >= 1 )
          break;
      }
LABEL_63:
      MasterData_object = v58;
      ++v34;
      v33 = v58[6];
      if ( v34 >= v33 )
        goto LABEL_64;
    }
    v44 = 0LL;
    while ( v44 < (unsigned int)v43 )
    {
      v45 = *v12;
      if ( !*v12 )
        goto LABEL_68;
      max_length = v45->max_length;
      if ( max_length >= 1 )
      {
        idList = (System_Int32_array **)*(unsigned int *)(v42 + 4 * v44 + 32);
        v47 = 0;
        while ( 1 )
        {
          if ( v47 >= max_length )
            goto LABEL_67;
          v48 = (int)v47;
          v49 = (char *)v45 + 4 * (int)v47;
          v51 = *((_DWORD *)v49 + 8);
          v50 = v49 + 32;
          if ( !v51 )
            break;
          v47 = v48 + 1;
          if ( (int)v48 + 1 >= max_length )
            goto LABEL_62;
        }
        *v50 = (_DWORD)idList;
        if ( !v30 )
          goto LABEL_68;
        MasterData_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                              (int32_t)idList,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v52 = *titleList;
        if ( !*titleList )
          goto LABEL_68;
        v53 = *explanationList;
        if ( !*explanationList || !MasterData_object )
          goto LABEL_68;
        if ( (unsigned int)v48 >= v52->max_length || (unsigned int)v48 >= v53->max_length )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)MasterData_object,
          &v52->m_Items[v48],
          &v53->m_Items[v48],
          0,
          0LL);
        v18 = 0;
      }
LABEL_62:
      LODWORD(v43) = *(_DWORD *)(v42 + 24);
      if ( (__int64)++v44 >= (int)v43 )
        goto LABEL_63;
    }
LABEL_67:
    sub_1B88814(MasterData_object, idList);
  }
LABEL_64:
  if ( v18 )
  {
    *v12 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v12, 0, v31, v32);
    *titleList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, 0, v54, v55);
    *explanationList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, 0, v56, v57);
  }
}


System_Collections_Generic_List_int__o *__fastcall UserServantCollectionEntity__GetSkillChangeCostumeList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  System_Collections_Generic_List_int__o *v6; // x21
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v8; // x25
  __int64 v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x0
  __int64 v13; // x1
  System_Func_object__bool__o *v14; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4A5BF37 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_ServantSkillReleaseEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_1B885B0(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__);
    sub_1B885B0(&UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo);
    byte_4A5BF37 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_18;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_18;
  if ( (int)costumeIds->max_length >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = sub_1B887FC(UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0LL);
      if ( !v9 )
        break;
      *(_QWORD *)(v9 + 24) = this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v10, v11);
      if ( v8 >= costumeIds->max_length )
        sub_1B88814(v12, v13);
      *(_DWORD *)(v9 + 16) = costumeIds->m_Items[v8 + 1];
      v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v14,
        (Il2CppObject *)v9,
        Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__,
        0LL);
      Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                   EntryListFromCondType,
                                   (System_Func_T__bool__o *)v14,
                                   (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v6 )
          break;
        v4 = *(unsigned int *)(v9 + 16);
        items = v6->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v4,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = v4;
        }
      }
      if ( (__int64)++v8 >= (int)costumeIds->max_length )
        return v6;
    }
LABEL_18:
    sub_1B8880C(Instance, v4);
  }
  return v6;
}


void __fastcall UserServantCollectionEntity__GetSkillInfo(
        UserServantCollectionEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x25
  __int64 v13; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x24
  Il2CppObject *Entity; // x25
  __int64 v16; // x8
  __int64 v17; // x0
  ServantSkillMaster_o *v18; // x24
  const MethodInfo *v19; // x1
  System_Int32_array *SkillLevelList; // x26
  int32_t maxLimitCount; // w23
  BalanceConfig_c *v22; // x0
  BalanceConfig_c *v23; // x0
  SkillInfo_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  unsigned __int64 v27; // x28
  __int64 v28; // x21
  int32_t *v29; // x23
  __int64 i; // x19
  SkillInfo_o *v31; // x27
  unsigned __int64 v32; // x20
  ServantSkillEntity_o *v33; // x29
  int32_t skillNum; // w8
  SkillInfo_array *v35; // x29
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x0
  bool IsServantEquip; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A5BF24 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SkillInfo___TypeInfo);
    sub_1B885B0(&SkillInfo_TypeInfo);
    byte_4A5BF24 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v13;
  *(_QWORD *)&v44.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v44, 0LL);
  if ( !v14 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BDA48C(v17);
  Instance = **(_QWORD **)(v17 + 184);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_42;
  v18 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v19);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( skillListNum <= 0 )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    skillListNum = v22->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v23 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    skillListNum = v23->static_fields->SvtEquipSkillListMax;
  }
  v24 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v24, v25, v26);
  if ( skillListNum >= 1 )
  {
    v27 = 0LL;
    v28 = (unsigned int)skillListNum;
    v29 = &SkillLevelList->m_Items[1];
    for ( i = 32LL; ; i += 8LL )
    {
      v31 = (SkillInfo_o *)sub_1B887FC(SkillInfo_TypeInfo);
      SkillInfo___ctor(v31, 0LL);
      if ( !v18 )
        break;
      v32 = v27 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v18,
                            dispSvtId,
                            (int)v27 + 1,
                            this->fields.userId,
                            this->fields.maxLv,
                            this->fields.maxLimitCount,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            -1LL,
                            0,
                            0LL);
      if ( Instance )
      {
        if ( !v31 )
          break;
        v33 = (ServantSkillEntity_o *)Instance;
        v31->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v27 >= SkillLevelList->max_length )
          goto LABEL_43;
        v31->fields.lv = v29[v27];
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v31->fields.charge,
          &v31->fields.title,
          &v31->fields.explanation,
          v29[v27],
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v33, 0LL);
        v31->fields.strengthStatus = Instance;
        skillNum = v33->fields.skillNum;
        v31->fields.isUse = 1;
        v31->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v31 )
          break;
        v31->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v18, dispSvtId, v32, 0LL);
          if ( Instance )
          {
            v31->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v31->fields.title,
              &v31->fields.explanation,
              0LL);
          }
        }
      }
      v35 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1B886EC(v31, v35->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v38 = sub_1B88830(0LL);
        sub_1B886D8(v38, 0LL);
      }
      if ( v27 >= v35->max_length )
LABEL_43:
        sub_1B88814(Instance, v10);
      v35->m_Items[v27] = v31;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v35 + i), (int32_t)v31, v36, v37);
      ++v27;
      if ( v28 == v32 )
        return;
    }
LABEL_42:
    sub_1B8880C(Instance, v10);
  }
}


void __fastcall UserServantCollectionEntity__GetTransformedPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t svtId,
        int32_t dispLimitCount,
        bool isOwner,
        const MethodInfo *method)
{
  UserServantCollectionEntity__GetPassiveSkillInfo(
    this,
    idList,
    titleList,
    explanationList,
    svtId,
    dispLimitCount,
    isOwner,
    method);
}


bool __fastcall UserServantCollectionEntity__GetTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v11; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x24
  __int64 v15; // x25
  int32_t v16; // w24
  int32_t maxLimitCount; // w23
  void *Master_object; // x0
  __int64 v19; // x1
  TreasureDvcInfo_o *v20; // x21
  int32_t treasureDeviceLv1; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5BF28 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A5BF28 = 1;
  }
  v11 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v11, 0LL);
  *tdInfo = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v11, v12, v13);
  v14 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = ServantTreasureDvcMaster__getUseEntity(
                    (ServantTreasureDvcMaster_o *)Master_object,
                    dispSvtId,
                    this->fields.userId,
                    this->fields.maxLv,
                    this->fields.maxLimitCount,
                    dispLimitCount,
                    v16,
                    beforeClearQuestId,
                    0LL);
  if ( Master_object )
  {
    v20 = *tdInfo;
    if ( *tdInfo )
    {
      v20->fields.id = *((_DWORD *)Master_object + 8);
      treasureDeviceLv1 = this->fields.treasureDeviceLv1;
      v20->fields.lv = treasureDeviceLv1;
      Master_object = (void *)ServantTreasureDvcEntity__getEffectExplanation(
                                (ServantTreasureDvcEntity_o *)Master_object,
                                &v20->fields.name,
                                &v20->fields.explanation,
                                &v20->fields.maxLv,
                                &v20->fields.guageCount,
                                &v20->fields.cardId,
                                &v20->fields.strengthStatus,
                                &v20->fields.treasureDeviceNum,
                                treasureDeviceLv1,
                                0LL);
      v20->fields.isUse = (unsigned __int8)Master_object & 1;
      if ( *tdInfo )
      {
        LOBYTE(Master_object) = (*tdInfo)->fields.isUse;
        return (char)Master_object;
      }
    }
LABEL_17:
    sub_1B8880C(Master_object, v19);
  }
  return (char)Master_object;
}


UserServantCommandCardEntity_o *__fastcall UserServantCollectionEntity__GetUserCommandCardEntity(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  DataManager_o *v5; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x20
  __int64 v8; // x22
  __int64 v9; // x21
  UserServantCommandCardMaster_o *v10; // x19
  const MethodInfo *v11; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5BF32 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BF32 = 1;
  }
  entity = 0LL;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  v5 = **(DataManager_o ***)(v4 + 184);
  if ( !v5 )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        v5,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserServantCommandCardMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v5 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  if ( !v10 )
LABEL_12:
    sub_1B8880C(v5, method);
  UserServantCommandCardMaster__TryGetEntity(v10, &entity, userId, (int)v5, v11);
  return entity;
}


bool __fastcall UserServantCollectionEntity__HasFlag(
        UserServantCollectionEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return (this->fields.flag & type) != 0;
}


bool __fastcall UserServantCollectionEntity__IsCostumeGet(
        UserServantCollectionEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  il2cpp_array_size_t max_length; // w9
  bool v5; // vf
  int v6; // w9
  int v7; // w10
  int32_t v8; // w11
  bool result; // w0

  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  max_length = costumeIds->max_length;
  v5 = __OFSUB__(max_length, 1);
  v6 = max_length - 1;
  if ( v6 < 0 != v5 )
    return 0;
  v7 = 0;
  do
  {
    v8 = costumeIds->m_Items[v7 + 1];
    result = v8 == costumeId;
    if ( v8 == costumeId )
      break;
  }
  while ( v6 != v7++ );
  return result;
}


bool __fastcall UserServantCollectionEntity__IsDataLostStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  Il2CppObject *v9; // x19
  __int64 v11; // x0
  __int64 v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5BF33 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF33 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !v8 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v8,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v9 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(v11);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BDA48C(v12);
  Instance = **(Il2CppObject ***)(v12 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(Instance, v4);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39615872(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v9[13].klass,
           0LL) == 1;
}


bool __fastcall UserServantCollectionEntity__IsFinded(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status != 0;
}


bool __fastcall UserServantCollectionEntity__IsGet(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status == 2;
}


bool __fastcall UserServantCollectionEntity__IsHideStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  Il2CppObject *v9; // x19
  __int64 v11; // x0
  __int64 v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5BF34 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF34 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !v8 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v8,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v9 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(v11);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BDA48C(v12);
  Instance = **(Il2CppObject ***)(v12 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(Instance, v4);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39615872(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v9[13].klass,
           0LL) == 2;
}


bool __fastcall UserServantCollectionEntity__IsLevelMax(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return UserServantCollectionEntity__getLevelMax(this, method) == this->fields.maxLv;
}


bool __fastcall UserServantCollectionEntity__IsLimitCountMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  return UserServantCollectionEntity__getLimitCountMax(this, method) == this->fields.maxLimitCount;
}


bool __fastcall UserServantCollectionEntity__IsLinkBadStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  Il2CppObject *v9; // x19
  __int64 v11; // x0
  __int64 v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5BF36 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !v8 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v8,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v9 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(v11);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BDA48C(v12);
  Instance = **(Il2CppObject ***)(v12 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(Instance, v4);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39615872(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v9[13].klass,
           0LL) == 4;
}


bool __fastcall UserServantCollectionEntity__IsLinkLostStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  Il2CppObject *v9; // x19
  __int64 v11; // x0
  __int64 v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5BF35 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF35 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !v8 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v8,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v9 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(v11);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BDA48C(v12);
  Instance = **(Il2CppObject ***)(v12 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(Instance, v4);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39615872(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v9[13].klass,
           0LL) == 3;
}


bool __fastcall UserServantCollectionEntity__IsModifySvtCommonFlag(
        UserServantCollectionEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  return this->fields.svtCommonFlag != value;
}


bool __fastcall UserServantCollectionEntity__IsNew(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w20
  Il2CppObject *v15; // x0
  __int64 v16; // x20
  __int64 v17; // x21
  ServantCommentMaster_o *v18; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5BF1F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantCollectionManager_TypeInfo);
    byte_4A5BF1F = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId )
    return 0;
  status = this->fields.status;
  if ( !status )
    return 0;
  if ( status != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v8;
    *(_QWORD *)&v21.fields.fakeValue = v7;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
    if ( !v9 )
      goto LABEL_27;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v9,
                 (int32_t)Instance,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_27;
    if ( !SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      return 0;
  }
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v11;
  *(_QWORD *)&v22.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  if ( !UserServantCollectionManager__IsNew(v12, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v15 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v18 = (ServantCommentMaster_o *)v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v17;
      *(_QWORD *)&v23.fields.fakeValue = v16;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
      if ( v18 )
        return ServantCommentMaster__GetNewList(v18, &idList, &priorityList, (int32_t)Instance, 0LL);
    }
LABEL_27:
    sub_1B8880C(Instance, v5);
  }
  return 1;
}


bool __fastcall UserServantCollectionEntity__IsPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v9; // x23
  __int64 v10; // x24
  int64_t v11; // x20
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  _BOOL8 v14; // x0
  unsigned __int64 voicePlayed; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5BF2C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF2C = 1;
  }
  if ( flagNum <= 63 )
  {
    voicePlayed = this->fields.voicePlayed;
    return (voicePlayed >> flagNum) & 1;
  }
  if ( flagNum <= 127 )
  {
    voicePlayed = this->fields.voicePlayed2;
    return (voicePlayed >> flagNum) & 1;
  }
  p_userServantVoicePlayedEntity = &this->fields.userServantVoicePlayedEntity;
  userServantVoicePlayedEntity = this->fields.userServantVoicePlayedEntity;
  if ( !userServantVoicePlayedEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v11 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                       v17,
                                                                       0LL);
    if ( !Master_object )
      goto LABEL_20;
    if ( !UserServantVoicePlayedMaster__TryGetEntity(
            (UserServantVoicePlayedMaster_o *)Master_object,
            p_userServantVoicePlayedEntity,
            v11,
            (int32_t)userServantVoicePlayedEntity,
            v13) )
    {
      LOBYTE(v14) = 0;
      return v14;
    }
    userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
    if ( !*p_userServantVoicePlayedEntity )
LABEL_20:
      sub_1B8880C(userServantVoicePlayedEntity, v12);
  }
  LOBYTE(v14) = UserServantVoicePlayedEntity__IsPlayed(userServantVoicePlayedEntity, flagNum, method);
  return v14;
}


void __fastcall UserServantCollectionEntity__SetOld(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  __int64 v10; // x19
  __int64 v11; // x20
  int32_t v12; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5BF20 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantCollectionManager_TypeInfo);
    byte_4A5BF20 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__get_UserId(0LL) == this->fields.userId )
  {
    status = this->fields.status;
    if ( status )
    {
      if ( status == 2 )
        goto LABEL_14;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v13.fields.currentCryptoKey = v8;
      *(_QWORD *)&v13.fields.fakeValue = v7;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
      if ( !v9
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         v9,
                         (int32_t)Instance,
                         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
      {
LABEL_20:
        sub_1B8880C(Instance, v5);
      }
      if ( SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      {
LABEL_14:
        v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = v11;
        *(_QWORD *)&v14.fields.fakeValue = v10;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        UserServantCollectionManager__SetOld(v12, 0LL);
      }
    }
  }
}


bool __fastcall UserServantCollectionEntity__SetPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v9; // x23
  __int64 v10; // x24
  int64_t v11; // x20
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5BF2D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF2D = 1;
  }
  if ( flagNum <= 63 )
  {
    voicePlayed = this->fields.voicePlayed;
    if ( (voicePlayed & (1LL << flagNum)) != 0 )
      return 0;
    this->fields.voicePlayed = voicePlayed | (1LL << flagNum);
  }
  else
  {
    if ( flagNum > 127 )
    {
      p_userServantVoicePlayedEntity = &this->fields.userServantVoicePlayedEntity;
      userServantVoicePlayedEntity = this->fields.userServantVoicePlayedEntity;
      if ( userServantVoicePlayedEntity )
        return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, method);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v11 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v10;
      *(_QWORD *)&v17.fields.fakeValue = v9;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                         v17,
                                                                         0LL);
      if ( !Master_object )
LABEL_22:
        sub_1B8880C(userServantVoicePlayedEntity, v12);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             (UserServantVoicePlayedMaster_o *)Master_object,
             p_userServantVoicePlayedEntity,
             v11,
             (int32_t)userServantVoicePlayedEntity,
             v13) )
      {
        userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
        if ( *p_userServantVoicePlayedEntity )
          return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, method);
        goto LABEL_22;
      }
      return 1;
    }
    voicePlayed2 = this->fields.voicePlayed2;
    if ( (voicePlayed2 & (1LL << flagNum)) != 0 )
      return 0;
    this->fields.voicePlayed2 = voicePlayed2 | (1LL << flagNum);
  }
  return 1;
}


bool __fastcall UserServantCollectionEntity__getCollectionStatus(
        UserServantCollectionEntity_o *this,
        int32_t *lv,
        int32_t *hp,
        int32_t *atk,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  _DWORD *v15; // x23
  Il2CppObject *v16; // x0
  __int64 v17; // x25
  __int64 v18; // x26
  ServantLimitMaster_o *v19; // x24
  _DWORD *v20; // x22
  int32_t v21; // w8
  int v22; // w8
  __int64 v23; // x9
  int v24; // w10
  bool result; // w0
  __int64 v26; // x8
  int32_t v27; // w8
  int32_t status; // w28
  Il2CppObject *v29; // x0
  __int64 v30; // x24
  __int64 v31; // x25
  ServantLimitMaster_o *v32; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A5BF21 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v13;
  *(_QWORD *)&v33.fields.fakeValue = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33, 0LL);
  if ( !v14 )
    goto LABEL_32;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v14,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_32;
  v15 = Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v29 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v31 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v32 = (ServantLimitMaster_o *)v29;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v35.fields.currentCryptoKey = v31;
      *(_QWORD *)&v35.fields.fakeValue = v30;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
      v10 = (unsigned int)Instance;
      if ( status == 2 )
      {
        if ( v32 )
        {
          Instance = ServantLimitMaster__GetEntity(v32, (int32_t)Instance, v15[22], 0LL);
          if ( Instance )
          {
            *lv = *((_DWORD *)Instance + 7);
            *atk = *((_DWORD *)Instance + 12);
            v27 = *((_DWORD *)Instance + 10);
            result = 1;
            goto LABEL_31;
          }
        }
      }
      else if ( v32 )
      {
        Instance = ServantLimitMaster__GetEntity(v32, (int32_t)Instance, 0, 0LL);
        *lv = 1;
        if ( Instance )
        {
          *atk = *((_DWORD *)Instance + 11);
          v27 = *((_DWORD *)Instance + 9);
          result = 0;
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_1B8880C(Instance, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitMaster_o *)v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v18;
  *(_QWORD *)&v34.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
  if ( !v19 )
    goto LABEL_32;
  Instance = ServantLimitMaster__GetEntity(v19, (int32_t)Instance, this->fields.maxLimitCount, 0LL);
  if ( !Instance )
    goto LABEL_32;
  v20 = Instance;
  v21 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  *lv = v21;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, v15[33], *lv, 0LL);
  if ( !Instance )
    goto LABEL_32;
  v22 = v20[11];
  v23 = 274877907LL * *((_DWORD *)Instance + 7) * (v20[12] - v22);
  *atk = (v23 >> 38) + ((unsigned __int64)v23 >> 63) + v22;
  LODWORD(v23) = v20[9];
  v24 = *((_DWORD *)Instance + 7);
  result = 1;
  v26 = 274877907LL * v24 * (v20[10] - (int)v23);
  v27 = (v26 >> 38) + ((unsigned __int64)v26 >> 63) + v23;
LABEL_31:
  *hp = v27;
  return result;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x20
  __int64 v7; // x22
  __int64 v8; // x21
  Il2CppObject *v9; // x19
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5BF30 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF30 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( !v9 )
LABEL_8:
    sub_1B8880C(Instance, v4);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           (int32_t)Instance,
           v10);
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  __int64 v4; // x22
  void *Instance; // x0
  Il2CppObject *v6; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v8; // x19
  unsigned __int64 v9; // x25
  __int64 v10; // x26
  struct System_Int32_array *v11; // x8
  int32_t v12; // w22
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x21
  System_Int32_array *v27; // x20
  unsigned __int64 v28; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4A5BF2E & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__);
    sub_1B885B0(&UserServantCollectionEntity___c_TypeInfo);
    byte_4A5BF2E = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v4 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v4 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v4 >= 1 )
  {
    v9 = 0LL;
    v10 = (unsigned int)v4;
    while ( 1 )
    {
      v11 = this->fields.costumeIds;
      if ( !v11 )
        break;
      if ( v9 >= v11->max_length )
LABEL_38:
        sub_1B88814(Instance, v6);
      v12 = v11->m_Items[v9 + 1];
      v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v31.fields.currentCryptoKey = v14;
      *(_QWORD *)&v31.fields.fakeValue = v13;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           (int32_t)Instance,
                           v12,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v8 )
          break;
        v6 = (Il2CppObject *)entity;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v6,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v6, v15, v16);
        }
      }
      if ( v10 == ++v9 )
        goto LABEL_21;
    }
LABEL_37:
    sub_1B8880C(Instance, v6);
  }
LABEL_21:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v21 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Comparison_ServantCostumeEntity__o *)v21;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__55_0, (int32_t)v21, v24, v25);
  }
  if ( !v8 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55571192(
    v8,
    v21,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v26 = (unsigned int)v8->fields._size;
  v27 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v26);
  if ( (int)v26 >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v8,
                   v28,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v27 )
        goto LABEL_37;
      if ( v28 >= v27->max_length )
        goto LABEL_38;
      v27->m_Items[++v28] = *((_DWORD *)Instance + 5);
      if ( v26 == v28 )
        return v27;
    }
  }
  return v27;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList_40175344(
        UserServantCollectionEntity_o *this,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  __int64 v7; // x19
  void *Instance; // x0
  Il2CppObject *v9; // x1
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v11; // x24
  System_Collections_Generic_List_object__o *v12; // x21
  unsigned __int64 v13; // x28
  struct System_Int32_array *v14; // x8
  int32_t v15; // w25
  __int64 v16; // x26
  __int64 v17; // x27
  __int64 v18; // x26
  __int64 v19; // x27
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x19
  Il2CppObject *v27; // x20
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x20
  System_Int32_array *v32; // x19
  unsigned __int64 v33; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A5BF2F & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__);
    sub_1B885B0(&UserServantCollectionEntity___c_TypeInfo);
    byte_4A5BF2F = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v7 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v7 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v7 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v14 = this->fields.costumeIds;
      if ( !v14 )
        break;
      if ( v13 >= v14->max_length )
LABEL_42:
        sub_1B88814(Instance, v9);
      v15 = v14->m_Items[v13 + 1];
      v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v17;
      *(_QWORD *)&v37.fields.fakeValue = v16;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           (int32_t)Instance,
                           v15,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v19;
        *(_QWORD *)&v38.fields.fakeValue = v18;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
        if ( !v11 )
          break;
        Instance = (void *)ServantCostumeReleaseMaster__isEnableMountCostume(
                             (ServantCostumeReleaseMaster_o *)v11,
                             (int32_t)Instance,
                             v15,
                             lv,
                             limitCount,
                             0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v12 )
            break;
          v9 = (Il2CppObject *)entity;
          items = v12->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v9,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v9;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v9, v20, v21);
          }
        }
      }
      if ( (unsigned int)v7 == ++v13 )
        goto LABEL_25;
    }
LABEL_41:
    sub_1B8880C(Instance, v9);
  }
LABEL_25:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v26 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Comparison_ServantCostumeEntity__o *)v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_0, (int32_t)v26, v29, v30);
  }
  if ( !v12 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_55571192(
    v12,
    v26,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v31 = (unsigned int)v12->fields._size;
  v32 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v31);
  if ( (int)v31 >= 1 )
  {
    v33 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v12,
                   v33,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v32 )
        goto LABEL_41;
      if ( v33 >= v32->max_length )
        goto LABEL_42;
      v32->m_Items[++v33] = *((_DWORD *)Instance + 5);
      if ( v31 == v33 )
        return v32;
    }
  }
  return v32;
}


int32_t __fastcall UserServantCollectionEntity__getFriendShipRank(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5BF1E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF1E = 1;
  }
  v3 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v3;
  *(_QWORD *)&v6.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


bool __fastcall UserServantCollectionEntity__getFriendShipRankInfo(
        UserServantCollectionEntity_o *this,
        int32_t *friendshipRank,
        int32_t *maxFriendshipRank,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  bool result; // w0
  int32_t v18; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A5BF29 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF29 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
  if ( !v12 )
LABEL_14:
    sub_1B8880C(Instance, v8);
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v14 = Entity, ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)) )
  {
    v15 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v15;
    *(_QWORD *)&v20.fields.fakeValue = v16;
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
    result = 1;
    v18 = this->fields.friendshipExceedCount + HIDWORD(v14[6].klass);
  }
  else
  {
    v18 = 0;
    result = 0;
    *friendshipRank = -1;
  }
  *maxFriendshipRank = v18;
  return result;
}


int32_t __fastcall UserServantCollectionEntity__getFriendshipExceedCount(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.friendshipExceedCount;
}


int32_t __fastcall UserServantCollectionEntity__getLevelMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *Entity; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x8
  ServantLimitMaster_o *v12; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5BF2A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF2A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  if ( !v8 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v8,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v10 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v12 = (ServantLimitMaster_o *)v10,
        *(_QWORD *)&v15.fields.currentCryptoKey = v11,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL),
        !Entity)
    || !v12
    || (Instance = ServantLimitMaster__GetEntity(v12, (int32_t)Instance, (int32_t)Entity[5].monitor, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall UserServantCollectionEntity__getLimitCountMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BF2B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return (int32_t)Instance[5].monitor;
}


void __fastcall UserServantCollectionEntity__getPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        bool isOwner,
        const MethodInfo *method)
{
  __int64 v13; // x25
  __int64 v14; // x26
  int32_t v15; // w0
  const MethodInfo *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5BF25 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF25 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  UserServantCollectionEntity__GetPassiveSkillInfo(
    this,
    idList,
    titleList,
    explanationList,
    v15,
    dispLimitCount,
    isOwner,
    v16);
}


void __fastcall UserServantCollectionEntity__getSkillInfo(
        UserServantCollectionEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5BF23 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF23 = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  UserServantCollectionEntity__GetSkillInfo(
    this,
    skillInfoList,
    v13,
    beforeClearQuestId,
    dispLimitCount,
    skillListNum,
    v14);
}


System_Int32_array *__fastcall UserServantCollectionEntity__getSkillLevelList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v7; // x19
  int32_t skillLv3; // w8
  __int64 v9; // x20
  unsigned __int64 v10; // x23

  if ( (byte_4A5BF22 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5BF22 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
    sub_1B8880C(0LL, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = (System_Int32_array *)v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1B88814(v4, v5);
  }
  skillLv3 = this->fields.skillLv3;
  v9 = 11LL;
  v4->_1.byval_arg.bits = skillLv3;
  v4 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    v10 = v9 - 8;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v10 >= v4->static_fields->SvtEquipSkillListMax )
      return v7;
    if ( v10 >= v7->max_length )
      goto LABEL_16;
    *((_DWORD *)&v7->obj.klass + v9++) = 1;
  }
}


int32_t __fastcall UserServantCollectionEntity__getSvtId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5BF1D & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF1D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


bool __fastcall UserServantCollectionEntity__getTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5BF27 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF27 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  return UserServantCollectionEntity__GetTreasureDeviceInfo(this, tdInfo, v11, beforeClearQuestId, dispLimitCount, v12);
}


UserCommandCodeEntity_o *__fastcall UserServantCollectionEntity__getUserCommandCodeEntity(
        UserServantCollectionEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x21
  __int64 v9; // x23
  __int64 v10; // x22
  UserServantCommandCodeMaster_o *v11; // x20
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x2
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5BF31 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF31 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (UserServantCommandCodeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v11 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v11, &entity, userId, (int)Instance, v12) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v13);
LABEL_12:
    sub_1B8880C(Instance, v6);
  }
  return 0LL;
}


int64_t __fastcall UserServantCollectionEntity__getUserId(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}


void __fastcall UserServantCollectionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BF39 & 1) == 0 )
  {
    sub_1B885B0(&UserServantCollectionEntity___c_TypeInfo);
    byte_4A5BF39 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserServantCollectionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserServantCollectionEntity___c_TypeInfo->static_fields->__9 = (struct UserServantCollectionEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserServantCollectionEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall UserServantCollectionEntity___c___ctor(
        UserServantCollectionEntity___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__55_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__56_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall UserServantCollectionEntity___c__DisplayClass69_0___ctor(
        UserServantCollectionEntity___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantCollectionEntity___c__DisplayClass69_0___GetSkillChangeCostumeList_b__0(
        UserServantCollectionEntity___c__DisplayClass69_0_o *this,
        ServantSkillReleaseEntity_o *d,
        const MethodInfo *method)
{
  UserServantCollectionEntity___c__DisplayClass69_0_o *v4; // x20
  struct UserServantCollectionEntity_o *_4__this; // x8
  int32_t condTargetId; // w23
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4A5BF3A & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass69_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BF3A = 1;
  }
  if ( !d || (_4__this = v4->fields.__4__this) == 0LL )
    sub_1B8880C(this, d);
  condTargetId = d->fields.condTargetId;
  v8 = *(_QWORD *)&_4__this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&_4__this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL)
      && d->fields.condNum == v4->fields.costumeId;
}