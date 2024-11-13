void __fastcall UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16FD2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16FD2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCollectionEntity___ctor_40897496(
        UserServantCollectionEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Int32_array *tdPlayed; // x1
  PartyOrganizationUtility_o *p_tdPlayed; // x20

  if ( (byte_4B16FD3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, e, method);
    byte_4B16FD3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1BCAA3C(v5, v6);
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
  p_tdPlayed = (PartyOrganizationUtility_o *)&this->fields.tdPlayed;
  sub_1BCA784(p_tdPlayed, (int64_t)tdPlayed, v7, v8, v9, v10, v11, v12);
  p_tdPlayed->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)e->fields.createdAt;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCollectionEntity___ctor_40897688(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int128 v10; // q0

  if ( (byte_4B16FD4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, userId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    byte_4B16FD4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&v10 = 0x100000001LL;
  *((_QWORD *)&v10 + 1) = 0x100000001LL;
  this->fields.status = 0;
  *(_OWORD *)&this->fields.skillLv1 = v10;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserServantCollectionEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4B16FD1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId, method);
    byte_4B16FD1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_2F10FBC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantCollectionEntity__CreatePrimaryKey(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t userId; // x20
  __int64 v5; // x21
  __int64 v6; // x19
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B16FD0 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B16FD0 = 1;
  }
  userId = this->fields.userId;
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
  return UserServantCollectionEntity__CreatePK(userId, v7, v8);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x26
  __int64 v20; // x27
  ServantAppendPassiveSkillMaster_o *v21; // x25
  __int64 v22; // x0
  __int64 v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B16FF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList, titleList);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    byte_4B16FF0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v24.fields.currentCryptoKey = v20;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  if ( !v21 )
    sub_1BCAA3C(v22, v23);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v21,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v22,
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
  long double v8; // q0
  System_Int32_array **v13; // x21
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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  int32_t friendshipRank; // w26
  int32_t maxLimitCount; // w22
  __int64 v48; // x0
  __int64 v49; // x0
  void *MasterData_object; // x0
  __int64 v51; // x1
  bool v52; // w24
  BalanceConfig_c *v53; // x0
  int64_t v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_String_array *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_String_array *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  Il2CppObject *v75; // x25
  Il2CppObject *v76; // x26
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int v83; // w8
  int v84; // w19
  __int64 v85; // x8
  int32_t v86; // w28
  __int64 v87; // x1
  int64_t UserId; // x29
  __int64 v89; // x22
  __int64 v90; // x23
  int32_t v91; // w4
  int32_t v92; // w2
  __int64 v93; // x22
  __int64 v94; // x8
  unsigned __int64 v95; // x23
  System_Int32_array *v96; // x8
  int max_length; // w9
  unsigned int v98; // w10
  __int64 v99; // x28
  char *v100; // x10
  _DWORD *v101; // x10
  int v102; // t1
  System_String_array *v103; // x8
  System_String_array *v104; // x9
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int *v117; // [xsp+30h] [xbp-90h]
  System_String_array **v118; // [xsp+38h] [xbp-88h]
  UserEventServantPointMaster_o *Master_object; // [xsp+40h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  v13 = idList;
  if ( (byte_4B16FDE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, idList, titleList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v24, v25);
    sub_1BCA7E0(&DataManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28, v29);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v30, v31);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v32, v33);
    sub_1BCA7E0(&int___TypeInfo, v34, v35);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v40, v41);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43);
    sub_1BCA7E0(&string___TypeInfo, v44, v45);
    byte_4B16FDE = 1;
  }
  entity = 0LL;
  if ( isOwner )
    friendshipRank = BasicHelper__DecryptValue_41845724(this->fields.friendshipRank, 0LL);
  else
    friendshipRank = 0;
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, idList);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  v48 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
    v48 = sub_1C1C6BC(v8);
  v49 = *(_QWORD *)(*(_QWORD *)(v48 + 192) + 16LL);
  if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
    v49 = sub_1C1C6BC(v8);
  MasterData_object = **(void ***)(v49 + 184);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_object )
    goto LABEL_68;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    (ServantPassiveSkillMaster_o *)MasterData_object,
    v13,
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
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        dispSvtId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !MasterData_object )
    goto LABEL_68;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)MasterData_object, 0LL) )
    return;
  v52 = *v13 == 0LL;
  if ( !*v13 )
  {
    v53 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v51);
      v53 = BalanceConfig_TypeInfo;
    }
    v54 = sub_1BCA888(int___TypeInfo, (unsigned int)v53->static_fields->SvtPassiveSkillListMax);
    *v13 = (System_Int32_array *)v54;
    sub_1BCA784((PartyOrganizationUtility_o *)v13, v54, v55, v56, v57, v58, v59, v60);
    v61 = (System_String_array *)sub_1BCA888(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v61;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v61, v62, v63, v64, v65, v66, v67);
    v68 = (System_String_array *)sub_1BCA888(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v68;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v68, v69, v70, v71, v72, v73, v74);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v51);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v75 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v76 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  MasterData_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !MasterData_object
    || (MasterData_object = EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 12, 0, 0LL)) == 0LL )
  {
LABEL_68:
    sub_1BCAA3C(MasterData_object, idList);
  }
  v83 = *((_DWORD *)MasterData_object + 6);
  if ( v83 >= 1 )
  {
    v84 = 0;
    v117 = (int *)MasterData_object;
    v118 = explanationList;
    while ( 1 )
    {
      if ( v84 >= (unsigned int)v83 )
        goto LABEL_67;
      v85 = *((_QWORD *)MasterData_object + v84 + 4);
      if ( !v85 )
        goto LABEL_68;
      v86 = *(_DWORD *)(v85 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, idList);
      UserId = NetworkManager__get_UserId(0LL);
      v90 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v89 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v87);
      *(_QWORD *)&v123.fields.currentCryptoKey = v90;
      *(_QWORD *)&v123.fields.fakeValue = v89;
      v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v123, 0LL);
      MasterData_object = Master_object;
      if ( !Master_object )
        goto LABEL_68;
      MasterData_object = (void *)UserEventServantPointMaster__TryGetEntity(
                                    Master_object,
                                    &entity,
                                    UserId,
                                    v86,
                                    v91,
                                    0LL);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        MasterData_object = entity;
        explanationList = v118;
        if ( !entity )
          goto LABEL_68;
        MasterData_object = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
        v92 = (int)MasterData_object;
      }
      else
      {
        explanationList = v118;
        v92 = 0;
      }
      if ( !v75 )
        goto LABEL_68;
      MasterData_object = EventServantPointRankMaster__GetEnableEntity(
                            (EventServantPointRankMaster_o *)v75,
                            v86,
                            v92,
                            dispSvtId,
                            0LL);
      if ( MasterData_object )
      {
        v93 = *((_QWORD *)MasterData_object + 4);
        if ( !v93 )
          goto LABEL_68;
        v94 = *(_QWORD *)(v93 + 24);
        if ( (int)v94 >= 1 )
          break;
      }
LABEL_63:
      MasterData_object = v117;
      ++v84;
      v83 = v117[6];
      if ( v84 >= v83 )
        goto LABEL_64;
    }
    v95 = 0LL;
    while ( v95 < (unsigned int)v94 )
    {
      v96 = *v13;
      if ( !*v13 )
        goto LABEL_68;
      max_length = v96->max_length;
      if ( max_length >= 1 )
      {
        idList = (System_Int32_array **)*(unsigned int *)(v93 + 4 * v95 + 32);
        v98 = 0;
        while ( 1 )
        {
          if ( v98 >= max_length )
            goto LABEL_67;
          v99 = (int)v98;
          v100 = (char *)v96 + 4 * (int)v98;
          v102 = *((_DWORD *)v100 + 8);
          v101 = v100 + 32;
          if ( !v102 )
            break;
          v98 = v99 + 1;
          if ( (int)v99 + 1 >= max_length )
            goto LABEL_62;
        }
        *v101 = (_DWORD)idList;
        if ( !v76 )
          goto LABEL_68;
        MasterData_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v76,
                              (int32_t)idList,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v103 = *titleList;
        if ( !*titleList )
          goto LABEL_68;
        v104 = *explanationList;
        if ( !*explanationList || !MasterData_object )
          goto LABEL_68;
        if ( (unsigned int)v99 >= v103->max_length || (unsigned int)v99 >= v104->max_length )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)MasterData_object,
          &v103->m_Items[v99],
          &v104->m_Items[v99],
          0,
          0LL);
        v52 = 0;
      }
LABEL_62:
      LODWORD(v94) = *(_DWORD *)(v93 + 24);
      if ( (__int64)++v95 >= (int)v94 )
        goto LABEL_63;
    }
LABEL_67:
    sub_1BCAA44(MasterData_object, idList);
  }
LABEL_64:
  if ( v52 )
  {
    *v13 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)v13, 0LL, v77, v78, v79, v80, v81, v82);
    *titleList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, 0LL, v105, v106, v107, v108, v109, v110);
    *explanationList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, 0LL, v111, v112, v113, v114, v115, v116);
  }
}


System_Collections_Generic_List_int__o *__fastcall UserServantCollectionEntity__GetSkillChangeCostumeList(
        UserServantCollectionEntity_o *this,
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v30; // x25
  __int64 v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_object__bool__o *v42; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10

  if ( (byte_4B16FEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ServantSkillReleaseEntity___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v4, v5);
    sub_1BCA7E0(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__, v16, v17);
    sub_1BCA7E0(&UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo, v18, v19);
    byte_4B16FEF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_18;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0LL);
  v26 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_18;
  if ( (int)costumeIds->max_length >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      v31 = sub_1BCAA2C(UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo, v21, v27, v28);
      System_Object___ctor((Il2CppObject *)v31, 0LL);
      if ( !v31 )
        break;
      *(_QWORD *)(v31 + 24) = this;
      sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)this, v32, v33, v34, v35, v36, v37);
      if ( v30 >= costumeIds->max_length )
        sub_1BCAA44(v38, v39);
      *(_DWORD *)(v31 + 16) = costumeIds->m_Items[v30 + 1];
      v42 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_ServantSkillReleaseEntity__bool__TypeInfo,
                                             v39,
                                             v40,
                                             v41);
      System_Func_object__bool____ctor(
        v42,
        (Il2CppObject *)v31,
        Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__,
        0LL);
      Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                   EntryListFromCondType,
                                   (System_Func_T__bool__o *)v42,
                                   (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v26 )
          break;
        v21 = *(unsigned int *)(v31 + 16);
        items = v26->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++v26->fields._version;
        if ( !items )
          break;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v26,
            v21,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v26->fields._size = size + 1;
          items->m_Items[size + 1] = v21;
        }
      }
      if ( (__int64)++v30 >= (int)costumeIds->max_length )
        return v26;
    }
LABEL_18:
    sub_1BCAA3C(Instance, v21);
  }
  return v26;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCollectionEntity__GetSkillInfo(
        UserServantCollectionEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 Instance; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v30; // x1
  __int64 v31; // x25
  __int64 v32; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x24
  Il2CppObject *Entity; // x25
  long double v35; // q0
  __int64 v36; // x8
  __int64 v37; // x0
  ServantSkillMaster_o *v38; // x24
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  System_Int32_array *SkillLevelList; // x26
  int32_t maxLimitCount; // w23
  BalanceConfig_c *v43; // x0
  BalanceConfig_c *v44; // x0
  SkillInfo_array *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  unsigned __int64 v55; // x28
  __int64 v56; // x21
  int32_t *v57; // x23
  __int64 i; // x19
  SkillInfo_o *v59; // x27
  unsigned __int64 v60; // x20
  ServantSkillEntity_o *v61; // x29
  int32_t skillNum; // w8
  SkillInfo_array *v63; // x29
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x0
  bool IsServantEquip; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4B16FDC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, *(_QWORD *)&dispSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v23, v24);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v25, v26);
    byte_4B16FDC = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
  *(_QWORD *)&v76.fields.currentCryptoKey = v32;
  *(_QWORD *)&v76.fields.fakeValue = v31;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v76, 0LL);
  if ( !v33 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v33,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1C1C6BC(v35);
  v37 = *(_QWORD *)(*(_QWORD *)(v36 + 192) + 16LL);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1C1C6BC(v35);
  Instance = **(_QWORD **)(v37 + 184);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_42;
  v38 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v39);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v40);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( skillListNum <= 0 )
  {
    v43 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40);
      v43 = BalanceConfig_TypeInfo;
    }
    skillListNum = v43->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v44 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40);
      v44 = BalanceConfig_TypeInfo;
    }
    skillListNum = v44->static_fields->SvtEquipSkillListMax;
  }
  v45 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v45;
  sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  if ( skillListNum >= 1 )
  {
    v55 = 0LL;
    v56 = (unsigned int)skillListNum;
    v57 = &SkillLevelList->m_Items[1];
    for ( i = 32LL; ; i += 8LL )
    {
      v59 = (SkillInfo_o *)sub_1BCAA2C(SkillInfo_TypeInfo, v52, v53, v54);
      SkillInfo___ctor(v59, 0LL);
      if ( !v38 )
        break;
      v60 = v55 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v38,
                            dispSvtId,
                            (int)v55 + 1,
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
        if ( !v59 )
          break;
        v61 = (ServantSkillEntity_o *)Instance;
        v59->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v55 >= SkillLevelList->max_length )
          goto LABEL_43;
        v59->fields.lv = v57[v55];
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v59->fields.charge,
          &v59->fields.title,
          &v59->fields.explanation,
          v57[v55],
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v61, 0LL);
        v59->fields.strengthStatus = Instance;
        skillNum = v61->fields.skillNum;
        v59->fields.isUse = 1;
        v59->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v59 )
          break;
        v59->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v38, dispSvtId, v60, 0LL);
          if ( Instance )
          {
            v59->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v59->fields.title,
              &v59->fields.explanation,
              0LL);
          }
        }
      }
      v63 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1BCA91C(v59, v63->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v70 = sub_1BCAA60(0LL);
        sub_1BCA908(v70, 0LL);
      }
      if ( v55 >= v63->max_length )
LABEL_43:
        sub_1BCAA44(Instance, v28);
      v63->m_Items[v55] = v59;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v63 + i), (int64_t)v59, v64, v65, v66, v67, v68, v69);
      ++v55;
      if ( v56 == v60 )
        return;
    }
LABEL_42:
    sub_1BCAA3C(Instance, v28);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionEntity__GetTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  TreasureDvcInfo_o *v19; // x24
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x24
  __int64 v28; // x25
  __int64 v29; // x1
  int32_t v30; // w24
  int32_t maxLimitCount; // w23
  void *Master_object; // x0
  __int64 v33; // x1
  TreasureDvcInfo_o *v34; // x21
  int32_t treasureDeviceLv1; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B16FE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, tdInfo, *(_QWORD *)&dispSvtId);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, v17, v18);
    byte_4B16FE0 = 1;
  }
  v19 = (TreasureDvcInfo_o *)sub_1BCAA2C(
                               TreasureDvcInfo_TypeInfo,
                               tdInfo,
                               *(_QWORD *)&dispSvtId,
                               *(_QWORD *)&beforeClearQuestId);
  TreasureDvcInfo___ctor(v19, 0LL);
  *tdInfo = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v27 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v28 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  *(_QWORD *)&v37.fields.currentCryptoKey = v27;
  *(_QWORD *)&v37.fields.fakeValue = v28;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v29);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = ServantTreasureDvcMaster__getUseEntity(
                    (ServantTreasureDvcMaster_o *)Master_object,
                    dispSvtId,
                    this->fields.userId,
                    this->fields.maxLv,
                    this->fields.maxLimitCount,
                    dispLimitCount,
                    v30,
                    beforeClearQuestId,
                    0LL);
  if ( Master_object )
  {
    v34 = *tdInfo;
    if ( *tdInfo )
    {
      v34->fields.id = *((_DWORD *)Master_object + 8);
      treasureDeviceLv1 = this->fields.treasureDeviceLv1;
      v34->fields.lv = treasureDeviceLv1;
      Master_object = (void *)ServantTreasureDvcEntity__getEffectExplanation(
                                (ServantTreasureDvcEntity_o *)Master_object,
                                &v34->fields.name,
                                &v34->fields.explanation,
                                &v34->fields.maxLv,
                                &v34->fields.guageCount,
                                &v34->fields.cardId,
                                &v34->fields.strengthStatus,
                                &v34->fields.treasureDeviceNum,
                                treasureDeviceLv1,
                                0LL);
      v34->fields.isUse = (unsigned __int8)Master_object & 1;
      if ( *tdInfo )
      {
        LOBYTE(Master_object) = (*tdInfo)->fields.isUse;
        return (char)Master_object;
      }
    }
LABEL_17:
    sub_1BCAA3C(Master_object, v33);
  }
  return (char)Master_object;
}


UserServantCommandCardEntity_o *__fastcall UserServantCollectionEntity__GetUserCommandCardEntity(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x0
  DataManager_o *v11; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  int64_t userId; // x20
  __int64 v15; // x22
  __int64 v16; // x21
  UserServantCommandCardMaster_o *v17; // x19
  const MethodInfo *v18; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B16FEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7, v8);
    byte_4B16FEA = 1;
  }
  entity = 0LL;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = **(DataManager_o ***)(v10 + 184);
  if ( !v11 )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (UserServantCommandCardMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !v17 )
LABEL_12:
    sub_1BCAA3C(v11, method);
  UserServantCommandCardMaster__TryGetEntity(v17, &entity, userId, (int)v11, v18);
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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x1
  __int64 v18; // x20
  __int64 v19; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x19
  Il2CppObject *v21; // x19
  long double v22; // q0
  __int64 v24; // x0
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B16FEB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B16FEB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v26.fields.currentCryptoKey = v19;
  *(_QWORD *)&v26.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
  if ( !v20 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v21 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(v22);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(v22);
  Instance = **(Il2CppObject ***)(v25 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v15);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_40344112(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v21[13].klass,
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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x1
  __int64 v18; // x20
  __int64 v19; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x19
  Il2CppObject *v21; // x19
  long double v22; // q0
  __int64 v24; // x0
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B16FEC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B16FEC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v26.fields.currentCryptoKey = v19;
  *(_QWORD *)&v26.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
  if ( !v20 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v21 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(v22);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(v22);
  Instance = **(Il2CppObject ***)(v25 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v15);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_40344112(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v21[13].klass,
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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x1
  __int64 v18; // x20
  __int64 v19; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x19
  Il2CppObject *v21; // x19
  long double v22; // q0
  __int64 v24; // x0
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B16FEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B16FEE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v26.fields.currentCryptoKey = v19;
  *(_QWORD *)&v26.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
  if ( !v20 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v21 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(v22);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(v22);
  Instance = **(Il2CppObject ***)(v25 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v15);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_40344112(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v21[13].klass,
           0LL) == 4;
}


bool __fastcall UserServantCollectionEntity__IsLinkLostStateServant(
        UserServantCollectionEntity_o *this,
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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x1
  __int64 v18; // x20
  __int64 v19; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x19
  Il2CppObject *v21; // x19
  long double v22; // q0
  __int64 v24; // x0
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B16FED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B16FED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v26.fields.currentCryptoKey = v19;
  *(_QWORD *)&v26.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
  if ( !v20 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v21 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(v22);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(v22);
  Instance = **(Il2CppObject ***)(v25 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v15);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_40344112(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v21[13].klass,
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
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  __int64 v22; // x21
  __int64 v23; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x20
  __int64 v25; // x20
  __int64 v26; // x21
  __int64 v27; // x1
  int32_t v28; // w20
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x20
  __int64 v34; // x21
  ServantCommentMaster_o *v35; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4B16FD7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&UserServantCollectionManager_TypeInfo, v14, v15);
    byte_4B16FD7 = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId )
    return 0;
  status = this->fields.status;
  if ( !status )
    return 0;
  if ( status != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    *(_QWORD *)&v38.fields.currentCryptoKey = v23;
    *(_QWORD *)&v38.fields.fakeValue = v22;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v38, 0LL);
    if ( !v24 )
      goto LABEL_27;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v24,
                 (int32_t)Instance,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_27;
    if ( !SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      return 0;
  }
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v39.fields.currentCryptoKey = v26;
  *(_QWORD *)&v39.fields.fakeValue = v25;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v39, 0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v27);
  if ( !UserServantCollectionManager__IsNew(v28, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v31 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v35 = (ServantCommentMaster_o *)v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
      *(_QWORD *)&v40.fields.currentCryptoKey = v34;
      *(_QWORD *)&v40.fields.fakeValue = v33;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v40, 0LL);
      if ( v35 )
        return ServantCommentMaster__GetNewList(v35, &idList, &priorityList, (int32_t)Instance, 0LL);
    }
LABEL_27:
    sub_1BCAA3C(Instance, v19);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionEntity__IsPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  __int64 v13; // x1
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x24
  int64_t v19; // x20
  __int64 v20; // x1
  const MethodInfo *v21; // x4
  _BOOL8 v22; // x0
  unsigned __int64 voicePlayed; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B16FE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B16FE4 = 1;
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&flagNum);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    UserId = NetworkManager__get_UserId(0LL);
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v19 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    *(_QWORD *)&v25.fields.currentCryptoKey = v18;
    *(_QWORD *)&v25.fields.fakeValue = v17;
    userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                       v25,
                                                                       0LL);
    if ( !Master_object )
      goto LABEL_20;
    if ( !UserServantVoicePlayedMaster__TryGetEntity(
            (UserServantVoicePlayedMaster_o *)Master_object,
            p_userServantVoicePlayedEntity,
            v19,
            (int32_t)userServantVoicePlayedEntity,
            v21) )
    {
      LOBYTE(v22) = 0;
      return v22;
    }
    userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
    if ( !*p_userServantVoicePlayedEntity )
LABEL_20:
      sub_1BCAA3C(userServantVoicePlayedEntity, v20);
  }
  LOBYTE(v22) = UserServantVoicePlayedEntity__IsPlayed(userServantVoicePlayedEntity, flagNum, method);
  return v22;
}


void __fastcall UserServantCollectionEntity__SetOld(UserServantCollectionEntity_o *this, const MethodInfo *method)
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
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  __int64 v23; // x19
  __int64 v24; // x20
  __int64 v25; // x1
  int32_t v26; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B16FD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&UserServantCollectionManager_TypeInfo, v12, v13);
    byte_4B16FD8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( NetworkManager__get_UserId(0LL) == this->fields.userId )
  {
    status = this->fields.status;
    if ( status )
    {
      if ( status == 2 )
        goto LABEL_14;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
      *(_QWORD *)&v27.fields.currentCryptoKey = v21;
      *(_QWORD *)&v27.fields.fakeValue = v20;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
      if ( !v22
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         v22,
                         (int32_t)Instance,
                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
      {
LABEL_20:
        sub_1BCAA3C(Instance, v17);
      }
      if ( SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      {
LABEL_14:
        v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
        *(_QWORD *)&v28.fields.currentCryptoKey = v24;
        *(_QWORD *)&v28.fields.fakeValue = v23;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v25);
        UserServantCollectionManager__SetOld(v26, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionEntity__SetPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  __int64 v13; // x1
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x24
  int64_t v19; // x20
  __int64 v20; // x1
  const MethodInfo *v21; // x4
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B16FE5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B16FE5 = 1;
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&flagNum);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
      UserId = NetworkManager__get_UserId(0LL);
      v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v19 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
      *(_QWORD *)&v25.fields.currentCryptoKey = v18;
      *(_QWORD *)&v25.fields.fakeValue = v17;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                         v25,
                                                                         0LL);
      if ( !Master_object )
LABEL_22:
        sub_1BCAA3C(userServantVoicePlayedEntity, v20);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             (UserServantVoicePlayedMaster_o *)Master_object,
             p_userServantVoicePlayedEntity,
             v19,
             (int32_t)userServantVoicePlayedEntity,
             v21) )
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  void *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x1
  __int64 v23; // x24
  __int64 v24; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x23
  _DWORD *v26; // x23
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x25
  __int64 v30; // x26
  ServantLimitMaster_o *v31; // x24
  _DWORD *v32; // x22
  int32_t v33; // w8
  int v34; // w8
  __int64 v35; // x9
  int v36; // w10
  bool result; // w0
  __int64 v38; // x8
  int32_t v39; // w8
  int32_t status; // w28
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x24
  __int64 v44; // x25
  ServantLimitMaster_o *v45; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B16FD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, lv, hp);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B16FD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v46.fields.currentCryptoKey = v24;
  *(_QWORD *)&v46.fields.fakeValue = v23;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v46, 0LL);
  if ( !v25 )
    goto LABEL_32;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v25,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_32;
  v26 = Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v41 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v44 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v43 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v45 = (ServantLimitMaster_o *)v41;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
      *(_QWORD *)&v48.fields.currentCryptoKey = v44;
      *(_QWORD *)&v48.fields.fakeValue = v43;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v48, 0LL);
      v20 = (unsigned int)Instance;
      if ( status == 2 )
      {
        if ( v45 )
        {
          Instance = ServantLimitMaster__GetEntity(v45, (int32_t)Instance, v26[22], 0LL);
          if ( Instance )
          {
            *lv = *((_DWORD *)Instance + 7);
            *atk = *((_DWORD *)Instance + 12);
            v39 = *((_DWORD *)Instance + 10);
            result = 1;
            goto LABEL_31;
          }
        }
      }
      else if ( v45 )
      {
        Instance = ServantLimitMaster__GetEntity(v45, (int32_t)Instance, 0, 0LL);
        *lv = 1;
        if ( Instance )
        {
          *atk = *((_DWORD *)Instance + 11);
          v39 = *((_DWORD *)Instance + 9);
          result = 0;
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_1BCAA3C(Instance, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v27 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v31 = (ServantLimitMaster_o *)v27;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
  *(_QWORD *)&v47.fields.currentCryptoKey = v30;
  *(_QWORD *)&v47.fields.fakeValue = v29;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v47, 0LL);
  if ( !v31 )
    goto LABEL_32;
  Instance = ServantLimitMaster__GetEntity(v31, (int32_t)Instance, this->fields.maxLimitCount, 0LL);
  if ( !Instance )
    goto LABEL_32;
  v32 = Instance;
  v33 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  *lv = v33;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, v26[33], *lv, 0LL);
  if ( !Instance )
    goto LABEL_32;
  v34 = v32[11];
  v35 = 274877907LL * *((_DWORD *)Instance + 7) * (v32[12] - v34);
  *atk = (v35 >> 38) + ((unsigned __int64)v35 >> 63) + v34;
  LODWORD(v35) = v32[9];
  v36 = *((_DWORD *)Instance + 7);
  result = 1;
  v38 = 274877907LL * v36 * (v32[10] - (int)v35);
  v39 = (v38 >> 38) + ((unsigned __int64)v38 >> 63) + v35;
LABEL_31:
  *hp = v39;
  return result;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  int64_t userId; // x20
  __int64 v13; // x22
  __int64 v14; // x21
  Il2CppObject *v15; // x19
  const MethodInfo *v16; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B16FE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16FE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v15 )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           (int32_t)Instance,
           v16);
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList(
        UserServantCollectionEntity_o *this,
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
  struct System_Int32_array *costumeIds; // x8
  __int64 v31; // x22
  void *Instance; // x0
  Il2CppObject *v33; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_object__o *v38; // x19
  int64_t v39; // x2
  __int64 v40; // x3
  unsigned __int64 v41; // x25
  __int64 v42; // x26
  struct System_Int32_array *v43; // x8
  int32_t v44; // w22
  __int64 v45; // x23
  __int64 v46; // x24
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Comparison_T__o *v55; // x20
  Il2CppObject *v56; // x21
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x21
  System_Int32_array *v65; // x20
  unsigned __int64 v66; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4B16FE6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_ServantCostumeEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, v26, v27);
    sub_1BCA7E0(&UserServantCollectionEntity___c_TypeInfo, v28, v29);
    byte_4B16FE6 = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v31 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v31 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCostumeEntity__TypeInfo,
                                                       v35,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v31 >= 1 )
  {
    v41 = 0LL;
    v42 = (unsigned int)v31;
    while ( 1 )
    {
      v43 = this->fields.costumeIds;
      if ( !v43 )
        break;
      if ( v41 >= v43->max_length )
LABEL_38:
        sub_1BCAA44(Instance, v33);
      v44 = v43->m_Items[v41 + 1];
      v46 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
      *(_QWORD *)&v69.fields.currentCryptoKey = v46;
      *(_QWORD *)&v69.fields.fakeValue = v45;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v69, 0LL);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           (int32_t)Instance,
                           v44,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v38 )
          break;
        v33 = (Il2CppObject *)entity;
        items = v38->fields._items;
        v52 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
        ++v38->fields._version;
        if ( !items )
          break;
        size = v38->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v38,
            v33,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v38->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v33;
          sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v33, v39, v40, v47, v48, v49, v50);
        }
      }
      if ( v42 == ++v41 )
        goto LABEL_21;
    }
LABEL_37:
    sub_1BCAA3C(Instance, v33);
  }
LABEL_21:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo, v33);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v55 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v55 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v33);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v56 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v55 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantCostumeEntity__TypeInfo, v33, v39, v40);
    System_Comparison_object____ctor(v55, v56, Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Comparison_ServantCostumeEntity__o *)v55;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__55_0, (int64_t)v55, v58, v59, v60, v61, v62, v63);
  }
  if ( !v38 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_56244000(
    v38,
    v55,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v64 = (unsigned int)v38->fields._size;
  v65 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v64);
  if ( (int)v64 >= 1 )
  {
    v66 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v38,
                   v66,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v65 )
        goto LABEL_37;
      if ( v66 >= v65->max_length )
        goto LABEL_38;
      v65->m_Items[++v66] = *((_DWORD *)Instance + 5);
      if ( v64 == v66 )
        return v65;
    }
  }
  return v65;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList_40906776(
        UserServantCollectionEntity_o *this,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  struct System_Int32_array *costumeIds; // x8
  __int64 v33; // x19
  void *Instance; // x0
  Il2CppObject *v35; // x1
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v37; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x21
  int64_t v42; // x2
  __int64 v43; // x3
  unsigned __int64 v44; // x28
  struct System_Int32_array *v45; // x8
  int32_t v46; // w25
  __int64 v47; // x26
  __int64 v48; // x27
  __int64 v49; // x26
  __int64 v50; // x27
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  System_Comparison_T__o *v59; // x19
  Il2CppObject *v60; // x20
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x20
  System_Int32_array *v69; // x19
  unsigned __int64 v70; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_4B16FE7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_ServantCostumeEntity__TypeInfo, *(_QWORD *)&lv, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, v28, v29);
    sub_1BCA7E0(&UserServantCollectionEntity___c_TypeInfo, v30, v31);
    byte_4B16FE7 = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v33 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v33 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v37 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCostumeEntity__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v33 >= 1 )
  {
    v44 = 0LL;
    while ( 1 )
    {
      v45 = this->fields.costumeIds;
      if ( !v45 )
        break;
      if ( v44 >= v45->max_length )
LABEL_42:
        sub_1BCAA44(Instance, v35);
      v46 = v45->m_Items[v44 + 1];
      v48 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
      *(_QWORD *)&v74.fields.currentCryptoKey = v48;
      *(_QWORD *)&v74.fields.fakeValue = v47;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v74, 0LL);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           (int32_t)Instance,
                           v46,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v50 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v49 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
        *(_QWORD *)&v75.fields.currentCryptoKey = v50;
        *(_QWORD *)&v75.fields.fakeValue = v49;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v75, 0LL);
        if ( !v37 )
          break;
        Instance = (void *)ServantCostumeReleaseMaster__isEnableMountCostume(
                             (ServantCostumeReleaseMaster_o *)v37,
                             (int32_t)Instance,
                             v46,
                             lv,
                             limitCount,
                             0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v41 )
            break;
          v35 = (Il2CppObject *)entity;
          items = v41->fields._items;
          v56 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
          ++v41->fields._version;
          if ( !items )
            break;
          size = v41->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              v35,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &items->obj.klass + size;
            v41->fields._size = size + 1;
            v58[4] = (Il2CppClass *)v35;
            sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v35, v42, v43, v51, v52, v53, v54);
          }
        }
      }
      if ( (unsigned int)v33 == ++v44 )
        goto LABEL_25;
    }
LABEL_41:
    sub_1BCAA3C(Instance, v35);
  }
LABEL_25:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo, v35);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v59 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v59 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v35);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v60 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v59 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantCostumeEntity__TypeInfo, v35, v42, v43);
    System_Comparison_object____ctor(v59, v60, Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Comparison_ServantCostumeEntity__o *)v59;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__56_0, (int64_t)v59, v62, v63, v64, v65, v66, v67);
  }
  if ( !v41 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_56244000(
    v41,
    v59,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v68 = (unsigned int)v41->fields._size;
  v69 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v68);
  if ( (int)v68 >= 1 )
  {
    v70 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v41,
                   v70,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v69 )
        goto LABEL_41;
      if ( v70 >= v69->max_length )
        goto LABEL_42;
      v69->m_Items[++v70] = *((_DWORD *)Instance + 5);
      if ( v68 == v70 )
        return v69;
    }
  }
  return v69;
}


int32_t __fastcall UserServantCollectionEntity__getFriendShipRank(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B16FD6 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B16FD6 = 1;
  }
  v4 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v4;
  *(_QWORD *)&v7.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}


bool __fastcall UserServantCollectionEntity__getFriendShipRankInfo(
        UserServantCollectionEntity_o *this,
        int32_t *friendshipRank,
        int32_t *maxFriendshipRank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x23
  __int64 v24; // x24
  bool result; // w0
  int32_t v26; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B16FE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, friendshipRank, maxFriendshipRank);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B16FE1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  if ( !v19 )
LABEL_14:
    sub_1BCAA3C(Instance, v14);
  Entity = DataMasterBase_object__object__int___GetEntity(
             v19,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v21 = Entity, ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)) )
  {
    v23 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v24 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    *(_QWORD *)&v28.fields.currentCryptoKey = v23;
    *(_QWORD *)&v28.fields.fakeValue = v24;
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
    result = 1;
    v26 = this->fields.friendshipExceedCount + HIDWORD(v21[6].klass);
  }
  else
  {
    v26 = 0;
    result = 0;
    *friendshipRank = -1;
  }
  *maxFriendshipRank = v26;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  void *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x20
  Il2CppObject *Entity; // x20
  Il2CppObject *v20; // x0
  __int64 v21; // x8
  ServantLimitMaster_o *v22; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B16FE2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B16FE2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(_QWORD *)&v24.fields.currentCryptoKey = v17;
  *(_QWORD *)&v24.fields.fakeValue = v16;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  if ( !v18 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v18,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v20 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v25.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v22 = (ServantLimitMaster_o *)v20,
        *(_QWORD *)&v25.fields.currentCryptoKey = v21,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL),
        !Entity)
    || !v22
    || (Instance = ServantLimitMaster__GetEntity(v22, (int32_t)Instance, (int32_t)Entity[5].monitor, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v13);
  }
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall UserServantCollectionEntity__getLimitCountMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B16FE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16FE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v16
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
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

  if ( (byte_4B16FDD & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList, titleList);
    byte_4B16FDD = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B16FDB & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList, *(_QWORD *)&beforeClearQuestId);
    byte_4B16FDB = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v10; // x19
  int32_t skillLv3; // w8
  __int64 v12; // x20
  unsigned __int64 v13; // x23

  if ( (byte_4B16FDA & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B16FDA = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (BalanceConfig_c *)sub_1BCA888(int___TypeInfo, (unsigned int)v6->static_fields->SvtEquipSkillListMax);
  if ( !v7 )
    sub_1BCAA3C(0LL, v8);
  namespaze = (unsigned int)v7->_1.namespaze;
  v10 = (System_Int32_array *)v7;
  if ( !namespaze
    || (LODWORD(v7->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v7->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1BCAA44(v7, v8);
  }
  skillLv3 = this->fields.skillLv3;
  v12 = 11LL;
  v7->_1.byval_arg.bits = skillLv3;
  v7 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    v13 = v12 - 8;
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7, v8);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v7->static_fields->SvtEquipSkillListMax )
      return v10;
    if ( v13 >= v10->max_length )
      goto LABEL_16;
    *((_DWORD *)&v10->obj.klass + v12++) = 1;
  }
}


int32_t __fastcall UserServantCollectionEntity__getSvtId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B16FD5 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B16FD5 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B16FDF & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4B16FDF = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  return UserServantCollectionEntity__GetTreasureDeviceInfo(this, tdInfo, v11, beforeClearQuestId, dispLimitCount, v12);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_o *__fastcall UserServantCollectionEntity__getUserCommandCodeEntity(
        UserServantCollectionEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x1
  int64_t userId; // x21
  __int64 v14; // x23
  __int64 v15; // x22
  UserServantCommandCodeMaster_o *v16; // x20
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B16FE9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B16FE9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (UserServantCommandCodeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v21.fields.currentCryptoKey = v14;
  *(_QWORD *)&v21.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !v16 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v16, &entity, userId, (int)Instance, v17) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v18);
LABEL_12:
    sub_1BCAA3C(Instance, v10);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16FF1 & 1) == 0 )
  {
    sub_1BCA7E0(&UserServantCollectionEntity___c_TypeInfo, v1, v2);
    byte_4B16FF1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserServantCollectionEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserServantCollectionEntity___c_TypeInfo->static_fields->__9 = (struct UserServantCollectionEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserServantCollectionEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__56_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
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
  if ( (byte_4B16FF2 & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass69_0_o *)sub_1BCA7E0(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                    d,
                                                                    method);
    byte_4B16FF2 = 1;
  }
  if ( !d || (_4__this = v4->fields.__4__this) == 0LL )
    sub_1BCAA3C(this, d);
  condTargetId = d->fields.condTargetId;
  v8 = *(_QWORD *)&_4__this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&_4__this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, d);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL)
      && d->fields.condNum == v4->fields.costumeId;
}