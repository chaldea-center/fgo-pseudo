void __fastcall UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC88D7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC88D7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCollectionEntity___ctor_41389156(
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

  if ( (byte_4BC88D8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, e);
    byte_4BC88D8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1C1AE30(v5, v6);
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
  sub_1C1AB78(p_tdPlayed, (int64_t)tdPlayed, v7, v8, v9, v10, v11, v12);
  p_tdPlayed->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)e->fields.createdAt;
}


void __fastcall UserServantCollectionEntity___ctor_41389348(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int128 v8; // q0

  if ( (byte_4BC88D9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, userId);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BC88D9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&v8 = 0x100000001LL;
  *((_QWORD *)&v8 + 1) = 0x100000001LL;
  this->fields.status = 0;
  *(_OWORD *)&this->fields.skillLv1 = v8;
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
  if ( (byte_4BC88D6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_4BC88D6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_2F9D7BC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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

  if ( (byte_4BC88D5 & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BC88D5 = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v9, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x0
  __int64 v16; // x26
  __int64 v17; // x27
  ServantAppendPassiveSkillMaster_o *v18; // x25
  __int64 v19; // x0
  __int64 v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4BC88F5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList);
    sub_1C1ABD4(&DataManager_TypeInfo, v13);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    byte_4BC88F5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v21, 0LL);
  if ( !v18 )
    sub_1C1AE30(v19, v20);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v18,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v19,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  int32_t friendshipRank; // w26
  int32_t maxLimitCount; // w22
  __int64 v32; // x0
  __int64 v33; // x0
  void *MasterData_object; // x0
  bool v35; // w24
  BalanceConfig_c *v36; // x0
  int64_t v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_array *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_String_array *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppObject *v58; // x19
  Il2CppObject *v59; // x26
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int v66; // w8
  int v67; // w25
  __int64 v68; // x8
  int32_t v69; // w27
  NetworkManager_c *v70; // x0
  int64_t userIdNumber; // x22
  __int64 v72; // x23
  __int64 v73; // x28
  int32_t v74; // w4
  int32_t v75; // w2
  __int64 v76; // x22
  __int64 v77; // x8
  unsigned __int64 v78; // x23
  System_Int32_array *v79; // x8
  int max_length; // w9
  unsigned int v81; // w10
  __int64 v82; // x28
  char *v83; // x10
  _DWORD *v84; // x10
  int v85; // t1
  System_String_array *v86; // x8
  System_String_array *v87; // x9
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int *v100; // [xsp+30h] [xbp-90h]
  UserEventServantPointMaster_o *Master_object; // [xsp+40h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  v13 = idList;
  if ( (byte_4BC88E3 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, idList);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v15);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventMaster___, v16);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v17);
    sub_1C1ABD4(&Method_DataManager_GetMaster_SkillMaster___, v18);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v19);
    sub_1C1ABD4(&DataManager_TypeInfo, v20);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v23);
    sub_1C1ABD4(&int___TypeInfo, v24);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v25);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1C1ABD4(&string___TypeInfo, v29);
    byte_4BC88E3 = 1;
  }
  entity = 0LL;
  if ( isOwner )
    friendshipRank = BasicHelper__DecryptValue_42343996(this->fields.friendshipRank, 0LL);
  else
    friendshipRank = 0;
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1C6CAB0(v8);
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C6CAB0(v8);
  MasterData_object = **(void ***)(v33 + 184);
  if ( !MasterData_object )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_object )
    goto LABEL_72;
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
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_object )
    goto LABEL_72;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        dispSvtId,
                        (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !MasterData_object )
    goto LABEL_72;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)MasterData_object, 0LL) )
    return;
  v35 = *v13 == 0LL;
  if ( !*v13 )
  {
    v36 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    v37 = sub_1C1AC7C(int___TypeInfo, (unsigned int)v36->static_fields->SvtPassiveSkillListMax);
    *v13 = (System_Int32_array *)v37;
    sub_1C1AB78((PartyOrganizationUtility_o *)v13, v37, v38, v39, v40, v41, v42, v43);
    v44 = (System_String_array *)sub_1C1AC7C(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v44;
    sub_1C1AB78((PartyOrganizationUtility_o *)titleList, (int64_t)v44, v45, v46, v47, v48, v49, v50);
    v51 = (System_String_array *)sub_1C1AC7C(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v51;
    sub_1C1AB78((PartyOrganizationUtility_o *)explanationList, (int64_t)v51, v52, v53, v54, v55, v56, v57);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v58 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v59 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_SkillMaster___);
  MasterData_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !MasterData_object
    || (MasterData_object = EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 12, 0, 0, 0LL)) == 0LL )
  {
LABEL_72:
    sub_1C1AE30(MasterData_object, idList);
  }
  v66 = *((_DWORD *)MasterData_object + 6);
  if ( v66 >= 1 )
  {
    v67 = 0;
    v100 = (int *)MasterData_object;
    while ( 1 )
    {
      if ( v67 >= (unsigned int)v66 )
        goto LABEL_71;
      v68 = *((_QWORD *)MasterData_object + v67 + 4);
      if ( !v68 )
        goto LABEL_72;
      v69 = *(_DWORD *)(v68 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC2585 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, idList);
        byte_4BC2585 = 1;
      }
      v70 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v70 = NetworkManager_TypeInfo;
      }
      userIdNumber = v70->static_fields->userIdNumber;
      v73 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v72 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v105.fields.currentCryptoKey = v73;
      *(_QWORD *)&v105.fields.fakeValue = v72;
      v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v105, 0LL);
      MasterData_object = Master_object;
      if ( !Master_object )
        goto LABEL_72;
      MasterData_object = (void *)UserEventServantPointMaster__TryGetEntity(
                                    Master_object,
                                    &entity,
                                    userIdNumber,
                                    v69,
                                    v74,
                                    0LL);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        MasterData_object = entity;
        if ( !entity )
          goto LABEL_72;
        MasterData_object = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
        v75 = (int)MasterData_object;
      }
      else
      {
        v75 = 0;
      }
      if ( !v58 )
        goto LABEL_72;
      MasterData_object = EventServantPointRankMaster__GetEnableEntity(
                            (EventServantPointRankMaster_o *)v58,
                            v69,
                            v75,
                            dispSvtId,
                            0LL);
      if ( MasterData_object )
      {
        v76 = *((_QWORD *)MasterData_object + 4);
        if ( !v76 )
          goto LABEL_72;
        v77 = *(_QWORD *)(v76 + 24);
        if ( (int)v77 >= 1 )
          break;
      }
LABEL_67:
      MasterData_object = v100;
      ++v67;
      v66 = v100[6];
      if ( v67 >= v66 )
        goto LABEL_68;
    }
    v78 = 0LL;
    while ( v78 < (unsigned int)v77 )
    {
      v79 = *v13;
      if ( !*v13 )
        goto LABEL_72;
      max_length = v79->max_length;
      if ( max_length >= 1 )
      {
        idList = (System_Int32_array **)*(unsigned int *)(v76 + 4 * v78 + 32);
        v81 = 0;
        while ( 1 )
        {
          if ( v81 >= max_length )
            goto LABEL_71;
          v82 = (int)v81;
          v83 = (char *)v79 + 4 * (int)v81;
          v85 = *((_DWORD *)v83 + 8);
          v84 = v83 + 32;
          if ( !v85 )
            break;
          v81 = v82 + 1;
          if ( (int)v82 + 1 >= max_length )
            goto LABEL_66;
        }
        *v84 = (_DWORD)idList;
        if ( !v59 )
          goto LABEL_72;
        MasterData_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v59,
                              (int32_t)idList,
                              (const MethodInfo_3248678 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v86 = *titleList;
        if ( !*titleList )
          goto LABEL_72;
        v87 = *explanationList;
        if ( !*explanationList || !MasterData_object )
          goto LABEL_72;
        if ( (unsigned int)v82 >= v86->max_length || (unsigned int)v82 >= v87->max_length )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)MasterData_object,
          &v86->m_Items[v82],
          &v87->m_Items[v82],
          0,
          0LL);
        v35 = 0;
      }
LABEL_66:
      LODWORD(v77) = *(_DWORD *)(v76 + 24);
      if ( (__int64)++v78 >= (int)v77 )
        goto LABEL_67;
    }
LABEL_71:
    sub_1C1AE38(MasterData_object, idList);
  }
LABEL_68:
  if ( v35 )
  {
    *v13 = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)v13, 0LL, v60, v61, v62, v63, v64, v65);
    *titleList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)titleList, 0LL, v88, v89, v90, v91, v92, v93);
    *explanationList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)explanationList, 0LL, v94, v95, v96, v97, v98, v99);
  }
}


System_Collections_Generic_List_int__o *__fastcall UserServantCollectionEntity__GetSkillChangeCostumeList(
        UserServantCollectionEntity_o *this,
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  System_Collections_Generic_List_int__o *v14; // x21
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v16; // x25
  __int64 v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x1
  System_Func_object__bool__o *v26; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10

  if ( (byte_4BC88F4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_ServantSkillReleaseEntity___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v3);
    sub_1C1ABD4(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C1ABD4(&Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__, v9);
    sub_1C1ABD4(&UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo, v10);
    byte_4BC88F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_18;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0LL);
  v14 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_18;
  if ( (int)costumeIds->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sub_1C1AE20(UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0LL);
      if ( !v17 )
        break;
      *(_QWORD *)(v17 + 24) = this;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
      if ( v16 >= costumeIds->max_length )
        sub_1C1AE38(v24, v25);
      *(_DWORD *)(v17 + 16) = costumeIds->m_Items[v16 + 1];
      v26 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v17,
        Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__,
        0LL);
      Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                   EntryListFromCondType,
                                   (System_Func_T__bool__o *)v26,
                                   (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          break;
        v12 = *(unsigned int *)(v17 + 16);
        items = v14->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v14,
            v12,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v14->fields._size = size + 1;
          items->m_Items[size + 1] = v12;
        }
      }
      if ( (__int64)++v16 >= (int)costumeIds->max_length )
        return v14;
    }
LABEL_18:
    sub_1C1AE30(Instance, v12);
  }
  return v14;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x25
  __int64 v22; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x24
  Il2CppObject *Entity; // x25
  long double v25; // q0
  __int64 v26; // x8
  __int64 v27; // x0
  ServantSkillMaster_o *v28; // x24
  const MethodInfo *v29; // x1
  System_Int32_array *SkillLevelList; // x26
  int32_t maxLimitCount; // w23
  BalanceConfig_c *v32; // x0
  BalanceConfig_c *v33; // x0
  SkillInfo_array *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  unsigned __int64 v41; // x28
  __int64 v42; // x21
  int32_t *v43; // x23
  __int64 i; // x19
  SkillInfo_o *v45; // x27
  unsigned __int64 v46; // x20
  ServantSkillEntity_o *v47; // x29
  int32_t skillNum; // w8
  SkillInfo_array *v49; // x29
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x0
  bool IsServantEquip; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4BC88E1 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C1ABD4(&SkillInfo___TypeInfo, v16);
    sub_1C1ABD4(&SkillInfo_TypeInfo, v17);
    byte_4BC88E1 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v62.fields.currentCryptoKey = v22;
  *(_QWORD *)&v62.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v62, 0LL);
  if ( !v23 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             Instance,
             (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C6CAB0(v25);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C6CAB0(v25);
  Instance = **(_QWORD **)(v27 + 184);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_42;
  v28 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v29);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( skillListNum <= 0 )
  {
    v32 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    skillListNum = v32->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    skillListNum = v33->static_fields->SvtEquipSkillListMax;
  }
  v34 = (SkillInfo_array *)sub_1C1AC7C(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v34;
  sub_1C1AB78((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  if ( skillListNum >= 1 )
  {
    v41 = 0LL;
    v42 = (unsigned int)skillListNum;
    v43 = &SkillLevelList->m_Items[1];
    for ( i = 32LL; ; i += 8LL )
    {
      v45 = (SkillInfo_o *)sub_1C1AE20(SkillInfo_TypeInfo);
      SkillInfo___ctor(v45, 0LL);
      if ( !v28 )
        break;
      v46 = v41 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v28,
                            dispSvtId,
                            (int)v41 + 1,
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
        if ( !v45 )
          break;
        v47 = (ServantSkillEntity_o *)Instance;
        v45->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v41 >= SkillLevelList->max_length )
          goto LABEL_43;
        v45->fields.lv = v43[v41];
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v45->fields.charge,
          &v45->fields.title,
          &v45->fields.explanation,
          v43[v41],
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v47, 0LL);
        v45->fields.strengthStatus = Instance;
        skillNum = v47->fields.skillNum;
        v45->fields.isUse = 1;
        v45->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v45 )
          break;
        v45->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v28, dispSvtId, v46, 0LL);
          if ( Instance )
          {
            v45->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v45->fields.title,
              &v45->fields.explanation,
              0LL);
          }
        }
      }
      v49 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1C1AD10(v45, v49->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v56 = sub_1C1AE54(0LL);
        sub_1C1ACFC(v56, 0LL);
      }
      if ( v41 >= v49->max_length )
LABEL_43:
        sub_1C1AE38(Instance, v19);
      v49->m_Items[v41] = v45;
      sub_1C1AB78((PartyOrganizationUtility_o *)((char *)v49 + i), (int64_t)v45, v50, v51, v52, v53, v54, v55);
      ++v41;
      if ( v42 == v46 )
        return;
    }
LABEL_42:
    sub_1C1AE30(Instance, v19);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  TreasureDvcInfo_o *v15; // x24
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x24
  __int64 v23; // x25
  int32_t v24; // w24
  int32_t maxLimitCount; // w23
  ServantTreasureDvcMaster_o *Master_object; // x0
  __int64 v27; // x1
  TreasureDvcInfo_o *v28; // x21
  int32_t treasureDeviceLv1; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4BC88E5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, tdInfo);
    sub_1C1ABD4(&DataManager_TypeInfo, v11);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C1ABD4(&TreasureDvcInfo_TypeInfo, v14);
    byte_4BC88E5 = 1;
  }
  v15 = (TreasureDvcInfo_o *)sub_1C1AE20(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v15, 0LL);
  *tdInfo = v15;
  sub_1C1AB78((PartyOrganizationUtility_o *)tdInfo, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v22;
  *(_QWORD *)&v31.fields.fakeValue = v23;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v31, 0LL);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (ServantTreasureDvcMaster_o *)ServantTreasureDvcMaster__getUseEntity(
                                                  Master_object,
                                                  dispSvtId,
                                                  this->fields.userId,
                                                  this->fields.maxLv,
                                                  this->fields.maxLimitCount,
                                                  dispLimitCount,
                                                  v24,
                                                  beforeClearQuestId,
                                                  0LL);
  if ( Master_object )
  {
    v28 = *tdInfo;
    if ( *tdInfo )
    {
      v28->fields.id = Master_object->fields.revision;
      treasureDeviceLv1 = this->fields.treasureDeviceLv1;
      v28->fields.lv = treasureDeviceLv1;
      Master_object = (ServantTreasureDvcMaster_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                                      (ServantTreasureDvcEntity_o *)Master_object,
                                                      &v28->fields.name,
                                                      &v28->fields.explanation,
                                                      &v28->fields.maxLv,
                                                      &v28->fields.guageCount,
                                                      &v28->fields.cardId,
                                                      &v28->fields.strengthStatus,
                                                      &v28->fields.treasureDeviceNum,
                                                      treasureDeviceLv1,
                                                      0LL);
      v28->fields.isUse = (unsigned __int8)Master_object & 1;
      if ( *tdInfo )
      {
        LOBYTE(Master_object) = (*tdInfo)->fields.isUse;
        return (char)Master_object;
      }
    }
LABEL_17:
    sub_1C1AE30(Master_object, v27);
  }
  return (char)Master_object;
}


UserServantCommandCardEntity_o *__fastcall UserServantCollectionEntity__GetUserCommandCardEntity(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  DataManager_o *v8; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x20
  __int64 v11; // x22
  __int64 v12; // x21
  UserServantCommandCardMaster_o *v13; // x19
  const MethodInfo *v14; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4BC88EF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_4BC88EF = 1;
  }
  entity = 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6CAB0(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6CAB0(v2);
  v8 = **(DataManager_o ***)(v7 + 184);
  if ( !v8 )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (UserServantCommandCardMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v8 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v17, 0LL);
  if ( !v13 )
LABEL_12:
    sub_1C1AE30(v8, method);
  UserServantCommandCardMaster__TryGetEntity(v13, &entity, userId, (int)v8, v14);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  Il2CppObject *v14; // x19
  long double v15; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BC88F0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC88F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v19, 0LL);
  if ( !v13 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C6CAB0(v15);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C6CAB0(v15);
  Instance = **(Il2CppObject ***)(v18 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1C1AE30(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_40835316(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v14[13].klass,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  Il2CppObject *v14; // x19
  long double v15; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BC88F1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC88F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v19, 0LL);
  if ( !v13 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C6CAB0(v15);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C6CAB0(v15);
  Instance = **(Il2CppObject ***)(v18 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1C1AE30(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_40835316(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v14[13].klass,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  Il2CppObject *v14; // x19
  long double v15; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BC88F3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC88F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v19, 0LL);
  if ( !v13 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C6CAB0(v15);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C6CAB0(v15);
  Instance = **(Il2CppObject ***)(v18 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1C1AE30(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_40835316(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v14[13].klass,
           0LL) == 4;
}


bool __fastcall UserServantCollectionEntity__IsLinkLostStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  Il2CppObject *v14; // x19
  long double v15; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BC88F2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC88F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v19, 0LL);
  if ( !v13 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C6CAB0(v15);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C6CAB0(v15);
  Instance = **(Il2CppObject ***)(v18 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1C1AE30(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_40835316(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v14[13].klass,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  __int64 v17; // x20
  __int64 v18; // x21
  int32_t v19; // w20
  Il2CppObject *v22; // x0
  __int64 v23; // x20
  __int64 v24; // x21
  ServantCommentMaster_o *v25; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4BC88DC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&UserServantCollectionManager_TypeInfo, v8);
    byte_4BC88DC = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC2585 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( v9->static_fields->userIdNumber != this->fields.userId )
    return 0;
  status = this->fields.status;
  if ( !status )
    return 0;
  if ( status != 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
    v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v15;
    *(_QWORD *)&v28.fields.fakeValue = v14;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v28, 0LL);
    if ( !v16 )
      goto LABEL_31;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v16,
                 (int32_t)Instance,
                 (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_31;
    if ( !SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      return 0;
  }
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v18;
  *(_QWORD *)&v29.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v29, 0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  if ( !UserServantCollectionManager__IsNew(v19, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v22 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v25 = (ServantCommentMaster_o *)v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v30.fields.currentCryptoKey = v24;
      *(_QWORD *)&v30.fields.fakeValue = v23;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v30, 0LL);
      if ( v25 )
        return ServantCommentMaster__GetNewList(v25, &idList, &priorityList, (int32_t)Instance, 0LL);
    }
LABEL_31:
    sub_1C1AE30(Instance, v12);
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
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  __int64 v10; // x1
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v12; // x0
  __int64 v13; // x20
  __int64 v14; // x24
  int64_t userIdNumber; // x23
  __int64 v16; // x1
  _BOOL8 v17; // x0
  unsigned __int64 voicePlayed; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4BC88E9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BC88E9 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
      byte_4BC2585 = 1;
    }
    v12 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v12 = NetworkManager_TypeInfo;
    }
    v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    userIdNumber = v12->static_fields->userIdNumber;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v14;
    *(_QWORD *)&v20.fields.fakeValue = v13;
    userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                                                       v20,
                                                                       0LL);
    if ( !Master_object )
      goto LABEL_24;
    if ( !UserServantVoicePlayedMaster__TryGetEntity(
            (UserServantVoicePlayedMaster_o *)Master_object,
            p_userServantVoicePlayedEntity,
            userIdNumber,
            (int32_t)userServantVoicePlayedEntity,
            0LL) )
    {
      LOBYTE(v17) = 0;
      return v17;
    }
    userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
    if ( !*p_userServantVoicePlayedEntity )
LABEL_24:
      sub_1C1AE30(userServantVoicePlayedEntity, v16);
  }
  LOBYTE(v17) = UserServantVoicePlayedEntity__IsPlayed(userServantVoicePlayedEntity, flagNum, 0LL);
  return v17;
}


void __fastcall UserServantCollectionEntity__SetOld(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_c *v8; // x0
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  __int64 v16; // x19
  __int64 v17; // x20
  int32_t v18; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4BC88DD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C1ABD4(&UserServantCollectionManager_TypeInfo, v7);
    byte_4BC88DD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC2585 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( v8->static_fields->userIdNumber == this->fields.userId )
  {
    status = this->fields.status;
    if ( status )
    {
      if ( status == 2 )
        goto LABEL_18;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
      v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = v14;
      *(_QWORD *)&v19.fields.fakeValue = v13;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v19, 0LL);
      if ( !v15
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         v15,
                         (int32_t)Instance,
                         (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
      {
LABEL_24:
        sub_1C1AE30(Instance, v11);
      }
      if ( SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      {
LABEL_18:
        v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v17;
        *(_QWORD *)&v20.fields.fakeValue = v16;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v20, 0LL);
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        UserServantCollectionManager__SetOld(v18, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  __int64 v10; // x1
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v12; // x0
  __int64 v13; // x20
  __int64 v14; // x24
  int64_t userIdNumber; // x23
  __int64 v16; // x1
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4BC88EA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BC88EA = 1;
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
        return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BC2585 )
      {
        sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
        byte_4BC2585 = 1;
      }
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v12 = NetworkManager_TypeInfo;
      }
      v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      userIdNumber = v12->static_fields->userIdNumber;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v20.fields.currentCryptoKey = v14;
      *(_QWORD *)&v20.fields.fakeValue = v13;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                                                         v20,
                                                                         0LL);
      if ( !Master_object )
LABEL_26:
        sub_1C1AE30(userServantVoicePlayedEntity, v16);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             (UserServantVoicePlayedMaster_o *)Master_object,
             p_userServantVoicePlayedEntity,
             userIdNumber,
             (int32_t)userServantVoicePlayedEntity,
             0LL) )
      {
        userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
        if ( *p_userServantVoicePlayedEntity )
          return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, 0LL);
        goto LABEL_26;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x23
  _DWORD *v20; // x23
  Il2CppObject *v21; // x0
  __int64 v22; // x25
  __int64 v23; // x26
  ServantLimitMaster_o *v24; // x24
  _DWORD *v25; // x22
  int32_t v26; // w8
  int v27; // w8
  __int64 v28; // x9
  int v29; // w10
  bool result; // w0
  __int64 v31; // x8
  int32_t v32; // w8
  int32_t status; // w28
  Il2CppObject *v34; // x0
  __int64 v35; // x24
  __int64 v36; // x25
  ServantLimitMaster_o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4BC88DE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantExpMaster___, lv);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4BC88DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v18;
  *(_QWORD *)&v38.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v38, 0LL);
  if ( !v19 )
    goto LABEL_32;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v19,
               (int32_t)Instance,
               (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_32;
  v20 = Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v34 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v36 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v37 = (ServantLimitMaster_o *)v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v40.fields.currentCryptoKey = v36;
      *(_QWORD *)&v40.fields.fakeValue = v35;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v40, 0LL);
      v15 = (unsigned int)Instance;
      if ( status == 2 )
      {
        if ( v37 )
        {
          Instance = ServantLimitMaster__GetEntity(v37, (int32_t)Instance, v20[22], 0LL);
          if ( Instance )
          {
            *lv = *((_DWORD *)Instance + 7);
            *atk = *((_DWORD *)Instance + 12);
            v32 = *((_DWORD *)Instance + 10);
            result = 1;
            goto LABEL_31;
          }
        }
      }
      else if ( v37 )
      {
        Instance = ServantLimitMaster__GetEntity(v37, (int32_t)Instance, 0, 0LL);
        *lv = 1;
        if ( Instance )
        {
          *atk = *((_DWORD *)Instance + 11);
          v32 = *((_DWORD *)Instance + 9);
          result = 0;
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_1C1AE30(Instance, v15);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v21 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v24 = (ServantLimitMaster_o *)v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v23;
  *(_QWORD *)&v39.fields.fakeValue = v22;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v39, 0LL);
  if ( !v24 )
    goto LABEL_32;
  Instance = ServantLimitMaster__GetEntity(v24, (int32_t)Instance, this->fields.maxLimitCount, 0LL);
  if ( !Instance )
    goto LABEL_32;
  v25 = Instance;
  v26 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  *lv = v26;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, v20[33], *lv, 0LL);
  if ( !Instance )
    goto LABEL_32;
  v27 = v25[11];
  v28 = 274877907LL * *((_DWORD *)Instance + 7) * (v25[12] - v27);
  *atk = (v28 >> 38) + ((unsigned __int64)v28 >> 63) + v27;
  LODWORD(v28) = v25[9];
  v29 = *((_DWORD *)Instance + 7);
  result = 1;
  v31 = 274877907LL * v29 * (v25[10] - (int)v28);
  v32 = (v31 >> 38) + ((unsigned __int64)v31 >> 63) + v28;
LABEL_31:
  *hp = v32;
  return result;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x20
  __int64 v9; // x22
  __int64 v10; // x21
  Il2CppObject *v11; // x19
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4BC88ED & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC88ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v14, 0LL);
  if ( !v11 )
LABEL_8:
    sub_1C1AE30(Instance, v6);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           (int32_t)Instance,
           v12);
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList(
        UserServantCollectionEntity_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct System_Int32_array *costumeIds; // x8
  __int64 v17; // x22
  void *Instance; // x0
  Il2CppObject *v19; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v21; // x19
  unsigned __int64 v22; // x25
  __int64 v23; // x26
  struct System_Int32_array *v24; // x8
  int32_t v25; // w22
  __int64 v26; // x23
  __int64 v27; // x24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Comparison_T__o *v38; // x20
  Il2CppObject *v39; // x21
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x21
  System_Int32_array *v48; // x20
  unsigned __int64 v49; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4BC88EB & 1) == 0 )
  {
    sub_1C1ABD4(&System_Comparison_ServantCostumeEntity__TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v4);
    sub_1C1ABD4(&int___TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v11);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C1ABD4(&Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, v14);
    sub_1C1ABD4(&UserServantCollectionEntity___c_TypeInfo, v15);
    byte_4BC88EB = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v17 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v17 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v17 >= 1 )
  {
    v22 = 0LL;
    v23 = (unsigned int)v17;
    while ( 1 )
    {
      v24 = this->fields.costumeIds;
      if ( !v24 )
        break;
      if ( v22 >= v24->max_length )
LABEL_38:
        sub_1C1AE38(Instance, v19);
      v25 = v24->m_Items[v22 + 1];
      v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = v27;
      *(_QWORD *)&v52.fields.fakeValue = v26;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v52, 0LL);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           (int32_t)Instance,
                           v25,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v21 )
          break;
        v19 = (Il2CppObject *)entity;
        items = v21->fields._items;
        v35 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v19,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v19;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v19, v28, v29, v30, v31, v32, v33);
        }
      }
      if ( v23 == ++v22 )
        goto LABEL_21;
    }
LABEL_37:
    sub_1C1AE30(Instance, v19);
  }
LABEL_21:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v38 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v38 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v39 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v38 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v38, v39, Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Comparison_ServantCostumeEntity__o *)v38;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__55_0, (int64_t)v38, v41, v42, v43, v44, v45, v46);
  }
  if ( !v21 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_56877908(
    v21,
    v38,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v47 = (unsigned int)v21->fields._size;
  v48 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, (unsigned int)v47);
  if ( (int)v47 >= 1 )
  {
    v49 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v21,
                   v49,
                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v48 )
        goto LABEL_37;
      if ( v49 >= v48->max_length )
        goto LABEL_38;
      v48->m_Items[++v49] = *((_DWORD *)Instance + 5);
      if ( v47 == v49 )
        return v48;
    }
  }
  return v48;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList_41398164(
        UserServantCollectionEntity_o *this,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_Int32_array *costumeIds; // x8
  __int64 v20; // x19
  void *Instance; // x0
  Il2CppObject *v22; // x1
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v24; // x24
  System_Collections_Generic_List_object__o *v25; // x21
  unsigned __int64 v26; // x28
  struct System_Int32_array *v27; // x8
  int32_t v28; // w25
  __int64 v29; // x26
  __int64 v30; // x27
  __int64 v31; // x26
  __int64 v32; // x27
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x19
  Il2CppObject *v44; // x20
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x20
  System_Int32_array *v53; // x19
  unsigned __int64 v54; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4BC88EC & 1) == 0 )
  {
    sub_1C1ABD4(&System_Comparison_ServantCostumeEntity__TypeInfo, *(_QWORD *)&lv);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v7);
    sub_1C1ABD4(&int___TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v14);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C1ABD4(&Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, v17);
    sub_1C1ABD4(&UserServantCollectionEntity___c_TypeInfo, v18);
    byte_4BC88EC = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v20 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v20 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v24 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v20 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      v27 = this->fields.costumeIds;
      if ( !v27 )
        break;
      if ( v26 >= v27->max_length )
LABEL_42:
        sub_1C1AE38(Instance, v22);
      v28 = v27->m_Items[v26 + 1];
      v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v30;
      *(_QWORD *)&v58.fields.fakeValue = v29;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v58, 0LL);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           (int32_t)Instance,
                           v28,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v59.fields.currentCryptoKey = v32;
        *(_QWORD *)&v59.fields.fakeValue = v31;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v59, 0LL);
        if ( !v24 )
          break;
        Instance = (void *)ServantCostumeReleaseMaster__isEnableMountCostume(
                             (ServantCostumeReleaseMaster_o *)v24,
                             (int32_t)Instance,
                             v28,
                             lv,
                             limitCount,
                             0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v25 )
            break;
          v22 = (Il2CppObject *)entity;
          items = v25->fields._items;
          v40 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
          ++v25->fields._version;
          if ( !items )
            break;
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              v22,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v25->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v22;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v22, v33, v34, v35, v36, v37, v38);
          }
        }
      }
      if ( (unsigned int)v20 == ++v26 )
        goto LABEL_25;
    }
LABEL_41:
    sub_1C1AE30(Instance, v22);
  }
LABEL_25:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v43 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v43, v44, Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Comparison_ServantCostumeEntity__o *)v43;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__56_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v25 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_56877908(
    v25,
    v43,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v52 = (unsigned int)v25->fields._size;
  v53 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, (unsigned int)v52);
  if ( (int)v52 >= 1 )
  {
    v54 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v25,
                   v54,
                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v53 )
        goto LABEL_41;
      if ( v54 >= v53->max_length )
        goto LABEL_42;
      v53->m_Items[++v54] = *((_DWORD *)Instance + 5);
      if ( v52 == v54 )
        return v53;
    }
  }
  return v53;
}


int32_t __fastcall UserServantCollectionEntity__getFriendShipRank(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4BC88DB & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BC88DB = 1;
  }
  v3 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v3;
  *(_QWORD *)&v6.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v6, 0LL);
}


bool __fastcall UserServantCollectionEntity__getFriendShipRankInfo(
        UserServantCollectionEntity_o *this,
        int32_t *friendshipRank,
        int32_t *maxFriendshipRank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  bool result; // w0
  int32_t v21; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4BC88E6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, friendshipRank);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC88E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v22, 0LL);
  if ( !v15 )
LABEL_14:
    sub_1C1AE30(Instance, v11);
  Entity = DataMasterBase_object__object__int___GetEntity(
             v15,
             (int32_t)Instance,
             (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v17 = Entity, ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)) )
  {
    v18 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v19;
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v23, 0LL);
    result = 1;
    v21 = this->fields.friendshipExceedCount + HIDWORD(v17[6].klass);
  }
  else
  {
    v21 = 0;
    result = 0;
    *friendshipRank = -1;
  }
  *maxFriendshipRank = v21;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  Il2CppObject *Entity; // x20
  Il2CppObject *v14; // x0
  __int64 v15; // x8
  ServantLimitMaster_o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BC88E7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC88E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v18, 0LL);
  if ( !v12 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)Instance,
             (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v14 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v19.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v16 = (ServantLimitMaster_o *)v14,
        *(_QWORD *)&v19.fields.currentCryptoKey = v15,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v19, 0LL),
        !Entity)
    || !v16
    || (Instance = ServantLimitMaster__GetEntity(v16, (int32_t)Instance, (int32_t)Entity[5].monitor, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1C1AE30(Instance, v8);
  }
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall UserServantCollectionEntity__getLimitCountMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4BC88E8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC88E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1C1AE30(Instance, v7);
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

  if ( (byte_4BC88E2 & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
    byte_4BC88E2 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v17, 0LL);
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

  if ( (byte_4BC88E0 & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    byte_4BC88E0 = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v15, 0LL);
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
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v8; // x19
  int32_t skillLv3; // w8
  __int64 v10; // x20
  unsigned __int64 v11; // x23

  if ( (byte_4BC88DF & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&int___TypeInfo, v3);
    byte_4BC88DF = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1C1AC7C(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
    sub_1C1AE30(0LL, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1C1AE38(v5, v6);
  }
  skillLv3 = this->fields.skillLv3;
  v10 = 11LL;
  v5->_1.byval_arg.bits = skillLv3;
  v5 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    v11 = v10 - 8;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v11 >= v5->static_fields->SvtEquipSkillListMax )
      return v8;
    if ( v11 >= v8->max_length )
      goto LABEL_16;
    *((_DWORD *)&v8->obj.klass + v10++) = 1;
  }
}


int32_t __fastcall UserServantCollectionEntity__getSvtId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4BC88DA & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BC88DA = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v6, 0LL);
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

  if ( (byte_4BC88E4 & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_4BC88E4 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v14, 0LL);
  return UserServantCollectionEntity__GetTreasureDeviceInfo(this, tdInfo, v11, beforeClearQuestId, dispLimitCount, v12);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_o *__fastcall UserServantCollectionEntity__getUserCommandCodeEntity(
        UserServantCollectionEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x21
  __int64 v11; // x23
  __int64 v12; // x22
  UserServantCommandCodeMaster_o *v13; // x20
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x2
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4BC88EE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC88EE = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (UserServantCommandCodeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v18, 0LL);
  if ( !v13 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v13, &entity, userId, (int)Instance, v14) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v15);
LABEL_12:
    sub_1C1AE30(Instance, v8);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC88F6 & 1) == 0 )
  {
    sub_1C1ABD4(&UserServantCollectionEntity___c_TypeInfo, v1);
    byte_4BC88F6 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(UserServantCollectionEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserServantCollectionEntity___c_TypeInfo->static_fields->__9 = (struct UserServantCollectionEntity___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)UserServantCollectionEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__56_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C1AE30(this, a);
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
  if ( (byte_4BC88F7 & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass69_0_o *)sub_1C1ABD4(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                    d);
    byte_4BC88F7 = 1;
  }
  if ( !d || (_4__this = v4->fields.__4__this) == 0LL )
    sub_1C1AE30(this, d);
  condTargetId = d->fields.condTargetId;
  v8 = *(_QWORD *)&_4__this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&_4__this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v10, 0LL)
      && d->fields.condNum == v4->fields.costumeId;
}