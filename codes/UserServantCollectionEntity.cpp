void __fastcall UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FD1A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FD1A1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCollectionEntity___ctor_39833508(
        UserServantCollectionEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Int32_array *tdPlayed; // x1
  struct System_Int32_array **p_tdPlayed; // x20

  if ( (byte_49FD1A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, e);
    byte_49FD1A2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1B64324(v5);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_tdPlayed, (int32_t)tdPlayed, v6, v7);
  p_tdPlayed[2] = (struct System_Int32_array *)e->fields.createdAt;
}


void __fastcall UserServantCollectionEntity___ctor_39833700(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int128 v8; // q0

  if ( (byte_49FD1A3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, userId);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FD1A3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_49FD1A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_49FD1A0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_2E37718 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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

  if ( (byte_49FD19F & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD19F = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_49FD1BF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    byte_49FD1BF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v17;
  *(_QWORD *)&v20.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
  if ( !v18 )
    sub_1B64324(v19);
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
  __int64 v12; // x1
  __int64 v13; // x1
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
  int32_t friendshipRank; // w26
  int32_t maxLimitCount; // w22
  __int64 v30; // x0
  __int64 v31; // x0
  void *MasterData_object; // x0
  ServantStatusBattleListViewItem_o *v33; // x25
  bool v34; // w24
  BalanceConfig_c *v35; // x0
  System_Int32_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x19
  Il2CppObject *v46; // x26
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  int v50; // w8
  void *v51; // x27
  unsigned int v52; // w19
  __int64 v53; // x8
  int32_t v54; // w28
  System_String_array **v55; // x25
  int64_t UserId; // x29
  __int64 v57; // x22
  __int64 v58; // x23
  int32_t v59; // w4
  const MethodInfo *v60; // x5
  const MethodInfo *v61; // x1
  int32_t v62; // w2
  __int64 v63; // x22
  __int64 v64; // x8
  unsigned __int64 v65; // x23
  System_Int32_array *v66; // x8
  int max_length; // w9
  unsigned int v68; // w10
  __int64 v69; // x28
  char *v70; // x10
  _DWORD *v71; // x10
  int v72; // t1
  System_String_array *v73; // x8
  System_String_array *v74; // x9
  int32_t v75; // w2
  int32_t v76; // w3
  int32_t v77; // w2
  int32_t v78; // w3
  int32_t dispLimitCounta; // [xsp+0h] [xbp-C0h]
  EventServantPointRankMaster_o *v80; // [xsp+30h] [xbp-90h]
  UserEventServantPointMaster_o *Master_object; // [xsp+38h] [xbp-88h]
  UserEventServantPointEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_49FD1AD & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, idList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v17);
    sub_1B640C8(&DataManager_TypeInfo, v18);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v20);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v21);
    sub_1B640C8(&int___TypeInfo, v22);
    sub_1B640C8(&NetworkManager_TypeInfo, v23);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B640C8(&string___TypeInfo, v27);
    byte_49FD1AD = 1;
  }
  entity = 0LL;
  if ( isOwner )
    friendshipRank = BasicHelper__DecryptValue_40698696(this->fields.friendshipRank, 0LL);
  else
    friendshipRank = 0;
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
    v30 = sub_1BB5FA4(v30);
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 192) + 16LL);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1BB5FA4(v31);
  MasterData_object = **(void ***)(v31 + 184);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_object )
    goto LABEL_68;
  dispLimitCounta = dispLimitCount;
  v33 = (ServantStatusBattleListViewItem_o *)titleList;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    (ServantPassiveSkillMaster_o *)MasterData_object,
    idList,
    titleList,
    explanationList,
    dispSvtId,
    this->fields.userId,
    this->fields.maxLv,
    this->fields.maxLimitCount,
    dispLimitCounta,
    friendshipRank,
    -1,
    isOwner,
    0LL,
    0LL);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        dispSvtId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !MasterData_object )
    goto LABEL_68;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)MasterData_object, 0LL) )
    return;
  v34 = *idList == 0LL;
  if ( !*idList )
  {
    v35 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    v36 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v35->static_fields->SvtPassiveSkillListMax);
    *idList = v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)v36, v37, v38);
    v39 = (System_String_array *)sub_1B64170(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v39, v40, v41);
    v42 = (System_String_array *)sub_1B64170(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v42, v43, v44);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v45 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v46 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  MasterData_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !MasterData_object
    || (MasterData_object = EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 12, 0, 0LL)) == 0LL )
  {
LABEL_68:
    sub_1B64324(MasterData_object);
  }
  v50 = *((_DWORD *)MasterData_object + 6);
  v51 = MasterData_object;
  if ( v50 >= 1 )
  {
    v80 = (EventServantPointRankMaster_o *)v45;
    v52 = 0;
    while ( 1 )
    {
      if ( v52 >= v50 )
        goto LABEL_67;
      v53 = *((_QWORD *)v51 + (int)v52 + 4);
      if ( !v53 )
        goto LABEL_68;
      v54 = *(_DWORD *)(v53 + 16);
      v55 = explanationList;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v58 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v57 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v86.fields.currentCryptoKey = v58;
      *(_QWORD *)&v86.fields.fakeValue = v57;
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v86, 0LL);
      MasterData_object = Master_object;
      if ( !Master_object )
        goto LABEL_68;
      MasterData_object = (void *)UserEventServantPointMaster__TryGetEntity(
                                    Master_object,
                                    &entity,
                                    UserId,
                                    v54,
                                    v59,
                                    v60);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        MasterData_object = entity;
        if ( !entity )
          goto LABEL_68;
        explanationList = v55;
        MasterData_object = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, v61);
        v62 = (int)MasterData_object;
      }
      else
      {
        v62 = 0;
        explanationList = v55;
      }
      v33 = (ServantStatusBattleListViewItem_o *)titleList;
      if ( !v80 )
        goto LABEL_68;
      MasterData_object = EventServantPointRankMaster__GetEnableEntity(v80, v54, v62, dispSvtId, 0LL);
      if ( MasterData_object )
      {
        v63 = *((_QWORD *)MasterData_object + 4);
        if ( !v63 )
          goto LABEL_68;
        v64 = *(_QWORD *)(v63 + 24);
        if ( (int)v64 >= 1 )
          break;
      }
LABEL_63:
      v50 = *((_DWORD *)v51 + 6);
      if ( (int)++v52 >= v50 )
        goto LABEL_64;
    }
    v65 = 0LL;
    while ( v65 < (unsigned int)v64 )
    {
      v66 = *idList;
      if ( !*idList )
        goto LABEL_68;
      max_length = v66->max_length;
      if ( max_length >= 1 )
      {
        v47 = *(unsigned int *)(v63 + 4 * v65 + 32);
        v68 = 0;
        while ( 1 )
        {
          if ( v68 >= max_length )
            goto LABEL_67;
          v69 = (int)v68;
          v70 = (char *)v66 + 4 * (int)v68;
          v72 = *((_DWORD *)v70 + 8);
          v71 = v70 + 32;
          if ( !v72 )
            break;
          v68 = v69 + 1;
          if ( (int)v69 + 1 >= max_length )
            goto LABEL_62;
        }
        *v71 = v47;
        if ( !v46 )
          goto LABEL_68;
        MasterData_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v46,
                              v47,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v73 = *titleList;
        if ( !*titleList )
          goto LABEL_68;
        v74 = *explanationList;
        if ( !*explanationList || !MasterData_object )
          goto LABEL_68;
        if ( (unsigned int)v69 >= v73->max_length || (unsigned int)v69 >= v74->max_length )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)MasterData_object,
          &v73->m_Items[v69],
          &v74->m_Items[v69],
          0,
          0LL);
        v34 = 0;
      }
LABEL_62:
      LODWORD(v64) = *(_DWORD *)(v63 + 24);
      if ( (__int64)++v65 >= (int)v64 )
        goto LABEL_63;
    }
LABEL_67:
    sub_1B6432C(MasterData_object, v47);
  }
LABEL_64:
  if ( v34 )
  {
    *idList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, 0, v48, v49);
    v33->klass = 0LL;
    sub_1B6406C(v33, 0, v75, v76);
    *explanationList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, 0, v77, v78);
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
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v19; // x25
  __int64 v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_object__bool__o *v26; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10

  if ( (byte_49FD1BE & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_ServantSkillReleaseEntity___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v3);
    sub_1B640C8(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__, v9);
    sub_1B640C8(&UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo, v10);
    byte_49FD1BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_18;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0LL);
  v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_18;
  if ( (int)costumeIds->max_length >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      v20 = sub_1B64314(UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo, v16, v17);
      UserServantCollectionEntity___c__DisplayClass69_0___ctor(
        (UserServantCollectionEntity___c__DisplayClass69_0_o *)v20,
        0LL);
      if ( !v20 )
        break;
      *(_QWORD *)(v20 + 24) = this;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)this, v21, v22);
      if ( v19 >= costumeIds->max_length )
        sub_1B6432C(v23, v24);
      *(_DWORD *)(v20 + 16) = costumeIds->m_Items[v19 + 1];
      v26 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ServantSkillReleaseEntity__bool__TypeInfo, v24, v25);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v20,
        Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__,
        0LL);
      Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                   EntryListFromCondType,
                                   (System_Func_T__bool__o *)v26,
                                   (const MethodInfo_2E24870 *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v15 )
          break;
        v16 = *(unsigned int *)(v20 + 16);
        items = v15->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            v16,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v15->fields._size = size + 1;
          items->m_Items[size + 1] = v16;
        }
      }
      if ( (__int64)++v19 >= (int)costumeIds->max_length )
        return v15;
    }
LABEL_18:
    sub_1B64324(Instance);
  }
  return v15;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x25
  __int64 v21; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x24
  Il2CppObject *Entity; // x25
  __int64 v24; // x8
  __int64 v25; // x0
  ServantSkillMaster_o *v26; // x24
  const MethodInfo *v27; // x1
  System_Int32_array *SkillLevelList; // x26
  int32_t maxLimitCount; // w23
  BalanceConfig_c *v30; // x0
  BalanceConfig_c *v31; // x0
  SkillInfo_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  __int64 v36; // x2
  unsigned __int64 v37; // x28
  __int64 v38; // x21
  int32_t *v39; // x23
  __int64 i; // x19
  SkillInfo_o *v41; // x27
  unsigned __int64 v42; // x20
  __int64 v43; // x1
  ServantSkillEntity_o *v44; // x29
  int32_t skillNum; // w8
  SkillInfo_array *v46; // x29
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x0
  bool IsServantEquip; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49FD1AB & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&SkillInfo___TypeInfo, v16);
    sub_1B640C8(&SkillInfo_TypeInfo, v17);
    byte_49FD1AB = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v21;
  *(_QWORD *)&v55.fields.fakeValue = v20;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v22 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v22,
             Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BB5FA4(v25);
  Instance = **(_QWORD **)(v25 + 184);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_42;
  v26 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v27);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( skillListNum <= 0 )
  {
    v30 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    skillListNum = v30->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    skillListNum = v31->static_fields->SvtEquipSkillListMax;
  }
  v32 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v32, v33, v34);
  if ( skillListNum >= 1 )
  {
    v37 = 0LL;
    v38 = (unsigned int)skillListNum;
    v39 = &SkillLevelList->m_Items[1];
    for ( i = 32LL; ; i += 8LL )
    {
      v41 = (SkillInfo_o *)sub_1B64314(SkillInfo_TypeInfo, v35, v36);
      SkillInfo___ctor(v41, 0LL);
      if ( !v26 )
        break;
      v42 = v37 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v26,
                            dispSvtId,
                            (int)v37 + 1,
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
        if ( !v41 )
          break;
        v44 = (ServantSkillEntity_o *)Instance;
        v41->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v37 >= SkillLevelList->max_length )
          goto LABEL_43;
        v41->fields.lv = v39[v37];
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v41->fields.charge,
          &v41->fields.title,
          &v41->fields.explanation,
          v39[v37],
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v44, 0LL);
        v41->fields.strengthStatus = Instance;
        skillNum = v44->fields.skillNum;
        v41->fields.isUse = 1;
        v41->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v41 )
          break;
        v41->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v26, dispSvtId, v42, 0LL);
          if ( Instance )
          {
            v41->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v41->fields.title,
              &v41->fields.explanation,
              0LL);
          }
        }
      }
      v46 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1B64204(v41, v46->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v49 = sub_1B64348(0LL);
        sub_1B641F0(v49, 0LL);
      }
      if ( v37 >= v46->max_length )
LABEL_43:
        sub_1B6432C(Instance, v43);
      v46->m_Items[v37] = v41;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v46 + i), (int32_t)v41, v47, v48);
      ++v37;
      if ( v38 == v42 )
        return;
    }
LABEL_42:
    sub_1B64324(Instance);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  TreasureDvcInfo_o *v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x24
  __int64 v19; // x25
  int32_t v20; // w24
  int32_t maxLimitCount; // w23
  void *Master_object; // x0
  TreasureDvcInfo_o *v23; // x21
  int32_t treasureDeviceLv1; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_49FD1AF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, tdInfo);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&TreasureDvcInfo_TypeInfo, v14);
    byte_49FD1AF = 1;
  }
  v15 = (TreasureDvcInfo_o *)sub_1B64314(TreasureDvcInfo_TypeInfo, tdInfo, *(_QWORD *)&dispSvtId);
  TreasureDvcInfo___ctor(v15, 0LL);
  *tdInfo = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v15, v16, v17);
  v18 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v18;
  *(_QWORD *)&v26.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v26, 0LL);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = ServantTreasureDvcMaster__getUseEntity(
                    (ServantTreasureDvcMaster_o *)Master_object,
                    dispSvtId,
                    this->fields.userId,
                    this->fields.maxLv,
                    this->fields.maxLimitCount,
                    dispLimitCount,
                    v20,
                    beforeClearQuestId,
                    0LL);
  if ( Master_object )
  {
    v23 = *tdInfo;
    if ( *tdInfo )
    {
      v23->fields.id = *((_DWORD *)Master_object + 8);
      treasureDeviceLv1 = this->fields.treasureDeviceLv1;
      v23->fields.lv = treasureDeviceLv1;
      Master_object = (void *)ServantTreasureDvcEntity__getEffectExplanation(
                                (ServantTreasureDvcEntity_o *)Master_object,
                                &v23->fields.name,
                                &v23->fields.explanation,
                                &v23->fields.maxLv,
                                &v23->fields.guageCount,
                                &v23->fields.cardId,
                                &v23->fields.strengthStatus,
                                &v23->fields.treasureDeviceNum,
                                treasureDeviceLv1,
                                0LL);
      v23->fields.isUse = (unsigned __int8)Master_object & 1;
      if ( *tdInfo )
      {
        LOBYTE(Master_object) = (*tdInfo)->fields.isUse;
        return (char)Master_object;
      }
    }
LABEL_17:
    sub_1B64324(Master_object);
  }
  return (char)Master_object;
}


UserServantCommandCardEntity_o *__fastcall UserServantCollectionEntity__GetUserCommandCardEntity(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  DataManager_o *v7; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x20
  __int64 v10; // x22
  __int64 v11; // x21
  UserServantCommandCardMaster_o *v12; // x19
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_49FD1B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_49FD1B9 = 1;
  }
  entity = 0LL;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB5FA4(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB5FA4(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        v7,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserServantCommandCardMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  if ( !v12 )
LABEL_12:
    sub_1B64324(v7);
  UserServantCommandCardMaster__TryGetEntity(v12, &entity, userId, (int)v7, 0LL);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x19
  Il2CppObject *v13; // x19
  __int64 v15; // x0
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FD1BA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD1BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  if ( !v12 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v12,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v13 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  Instance = **(Il2CppObject ***)(v16 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39287176(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v13[13].klass,
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
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x19
  Il2CppObject *v13; // x19
  __int64 v15; // x0
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FD1BB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD1BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  if ( !v12 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v12,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v13 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  Instance = **(Il2CppObject ***)(v16 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39287176(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v13[13].klass,
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
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x19
  Il2CppObject *v13; // x19
  __int64 v15; // x0
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FD1BD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD1BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  if ( !v12 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v12,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v13 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  Instance = **(Il2CppObject ***)(v16 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39287176(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v13[13].klass,
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
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x19
  Il2CppObject *v13; // x19
  __int64 v15; // x0
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FD1BC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD1BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  if ( !v12 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v12,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v13 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  Instance = **(Il2CppObject ***)(v16 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39287176(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v13[13].klass,
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
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  __int64 v15; // x20
  __int64 v16; // x21
  int32_t v17; // w20
  Il2CppObject *v20; // x0
  __int64 v21; // x20
  __int64 v22; // x21
  ServantCommentMaster_o *v23; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_49FD1A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v8);
    byte_49FD1A6 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v13;
    *(_QWORD *)&v26.fields.fakeValue = v12;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v26, 0LL);
    if ( !v14 )
      goto LABEL_27;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v14,
                 (int32_t)Instance,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_27;
    if ( !SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      return 0;
  }
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v16;
  *(_QWORD *)&v27.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  if ( !UserServantCollectionManager__IsNew(v17, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v20 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v23 = (ServantCommentMaster_o *)v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v28.fields.currentCryptoKey = v22;
      *(_QWORD *)&v28.fields.fakeValue = v21;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
      if ( v23 )
        return ServantCommentMaster__GetNewList(v23, &idList, &priorityList, (int32_t)Instance, 0LL);
    }
LABEL_27:
    sub_1B64324(Instance);
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
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  int64_t v14; // x20
  _BOOL8 v15; // x0
  unsigned __int64 voicePlayed; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD1B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FD1B3 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v14 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                       v18,
                                                                       0LL);
    if ( !Master_object )
      goto LABEL_20;
    if ( !UserServantVoicePlayedMaster__TryGetEntity(
            (UserServantVoicePlayedMaster_o *)Master_object,
            p_userServantVoicePlayedEntity,
            v14,
            (int32_t)userServantVoicePlayedEntity,
            0LL) )
    {
      LOBYTE(v15) = 0;
      return v15;
    }
    userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
    if ( !*p_userServantVoicePlayedEntity )
LABEL_20:
      sub_1B64324(userServantVoicePlayedEntity);
  }
  LOBYTE(v15) = UserServantVoicePlayedEntity__IsPlayed(userServantVoicePlayedEntity, flagNum, 0LL);
  return v15;
}


void __fastcall UserServantCollectionEntity__SetOld(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  __int64 v14; // x19
  __int64 v15; // x20
  int32_t v16; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD1A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v7);
    byte_49FD1A7 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v12;
      *(_QWORD *)&v17.fields.fakeValue = v11;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
      if ( !v13
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         v13,
                         (int32_t)Instance,
                         (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
      {
LABEL_20:
        sub_1B64324(Instance);
      }
      if ( SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      {
LABEL_14:
        v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = v15;
        *(_QWORD *)&v18.fields.fakeValue = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        UserServantCollectionManager__SetOld(v16, 0LL);
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
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  int64_t v14; // x20
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD1B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FD1B4 = 1;
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v14 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v13;
      *(_QWORD *)&v18.fields.fakeValue = v12;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                         v18,
                                                                         0LL);
      if ( !Master_object )
LABEL_22:
        sub_1B64324(userServantVoicePlayedEntity);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             (UserServantVoicePlayedMaster_o *)Master_object,
             p_userServantVoicePlayedEntity,
             v14,
             (int32_t)userServantVoicePlayedEntity,
             0LL) )
      {
        userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
        if ( *p_userServantVoicePlayedEntity )
          return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x24
  __int64 v17; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x23
  _DWORD *v19; // x23
  Il2CppObject *v20; // x0
  __int64 v21; // x25
  __int64 v22; // x26
  ServantLimitMaster_o *v23; // x24
  _DWORD *v24; // x22
  int32_t v25; // w8
  int v26; // w8
  __int64 v27; // x9
  int v28; // w10
  bool result; // w0
  __int64 v30; // x8
  int32_t v31; // w8
  int32_t status; // w28
  Il2CppObject *v33; // x0
  __int64 v34; // x24
  __int64 v35; // x25
  ServantLimitMaster_o *v36; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_49FD1A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, lv);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FD1A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v17;
  *(_QWORD *)&v37.fields.fakeValue = v16;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v37, 0LL);
  if ( !v18 )
    goto LABEL_32;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v18,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_32;
  v19 = Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v33 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v35 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v36 = (ServantLimitMaster_o *)v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v39.fields.currentCryptoKey = v35;
      *(_QWORD *)&v39.fields.fakeValue = v34;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
      if ( status == 2 )
      {
        if ( v36 )
        {
          Instance = ServantLimitMaster__GetEntity(v36, (int32_t)Instance, v19[22], 0LL);
          if ( Instance )
          {
            *lv = *((_DWORD *)Instance + 7);
            *atk = *((_DWORD *)Instance + 12);
            v31 = *((_DWORD *)Instance + 10);
            result = 1;
            goto LABEL_31;
          }
        }
      }
      else if ( v36 )
      {
        Instance = ServantLimitMaster__GetEntity(v36, (int32_t)Instance, 0, 0LL);
        *lv = 1;
        if ( Instance )
        {
          *atk = *((_DWORD *)Instance + 11);
          v31 = *((_DWORD *)Instance + 9);
          result = 0;
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_1B64324(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v20 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (ServantLimitMaster_o *)v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v22;
  *(_QWORD *)&v38.fields.fakeValue = v21;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38, 0LL);
  if ( !v23 )
    goto LABEL_32;
  Instance = ServantLimitMaster__GetEntity(v23, (int32_t)Instance, this->fields.maxLimitCount, 0LL);
  if ( !Instance )
    goto LABEL_32;
  v24 = Instance;
  v25 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  *lv = v25;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, v19[33], *lv, 0LL);
  if ( !Instance )
    goto LABEL_32;
  v26 = v24[11];
  v27 = 274877907LL * *((_DWORD *)Instance + 7) * (v24[12] - v26);
  *atk = (v27 >> 38) + ((unsigned __int64)v27 >> 63) + v26;
  LODWORD(v27) = v24[9];
  v28 = *((_DWORD *)Instance + 7);
  result = 1;
  v30 = 274877907LL * v28 * (v24[10] - (int)v27);
  v31 = (v30 >> 38) + ((unsigned __int64)v30 >> 63) + v27;
LABEL_31:
  *hp = v31;
  return result;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x20
  __int64 v8; // x22
  __int64 v9; // x21
  UserServantCommandCodeMaster_o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD1B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FD1B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserServantCommandCodeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10 )
LABEL_8:
    sub_1B64324(Instance);
  return UserServantCommandCodeMaster__getCommandCodeIdList(v10, userId, (int32_t)Instance, 0LL);
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
  Il2CppObject *MasterData_object; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x25
  __int64 v26; // x26
  struct System_Int32_array *v27; // x8
  int32_t v28; // w22
  __int64 v29; // x23
  __int64 v30; // x24
  int32_t v31; // w3
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Comparison_T__o *v37; // x20
  Il2CppObject *v38; // x21
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x21
  System_Int32_array *v43; // x20
  unsigned __int64 v44; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_49FD1B5 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_ServantCostumeEntity__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, v14);
    sub_1B640C8(&UserServantCollectionEntity___c_TypeInfo, v15);
    byte_49FD1B5 = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v17 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v17 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCostumeEntity__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v17 >= 1 )
  {
    v25 = 0LL;
    v26 = (unsigned int)v17;
    while ( 1 )
    {
      v27 = this->fields.costumeIds;
      if ( !v27 )
        break;
      if ( v25 >= v27->max_length )
LABEL_38:
        sub_1B6432C(Instance, v23);
      v28 = v27->m_Items[v25 + 1];
      v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v47.fields.currentCryptoKey = v30;
      *(_QWORD *)&v47.fields.fakeValue = v29;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v47, 0LL);
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
        if ( !v22 )
          break;
        v32 = (Il2CppObject *)entity;
        items = v22->fields._items;
        v34 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          break;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v32,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v32;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v32, v24, v31);
        }
      }
      if ( v26 == ++v25 )
        goto LABEL_21;
    }
LABEL_37:
    sub_1B64324(Instance);
  }
LABEL_21:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v37 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v37 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v38 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v37 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantCostumeEntity__TypeInfo, v23, v24);
    System_Comparison_object____ctor(v37, v38, Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Comparison_ServantCostumeEntity__o *)v37;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__55_0, (int32_t)v37, v40, v41);
  }
  if ( !v22 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55243320(
    v22,
    v37,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v42 = (unsigned int)v22->fields._size;
  v43 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v42);
  if ( (int)v42 >= 1 )
  {
    v44 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v22,
                   v44,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v43 )
        goto LABEL_37;
      if ( v44 >= v43->max_length )
        goto LABEL_38;
      v43->m_Items[++v44] = *((_DWORD *)Instance + 5);
      if ( v42 == v44 )
        return v43;
    }
  }
  return v43;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList_39841856(
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
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v23; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x28
  struct System_Int32_array *v30; // x8
  int32_t v31; // w25
  __int64 v32; // x26
  __int64 v33; // x27
  __int64 v34; // x26
  __int64 v35; // x27
  int32_t v36; // w3
  Il2CppObject *v37; // x1
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Comparison_T__o *v42; // x19
  Il2CppObject *v43; // x20
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x20
  System_Int32_array *v48; // x19
  unsigned __int64 v49; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_49FD1B6 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_ServantCostumeEntity__TypeInfo, *(_QWORD *)&lv);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v7);
    sub_1B640C8(&int___TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, v17);
    sub_1B640C8(&UserServantCollectionEntity___c_TypeInfo, v18);
    byte_49FD1B6 = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v20 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v20 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v23 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCostumeEntity__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v20 >= 1 )
  {
    v29 = 0LL;
    while ( 1 )
    {
      v30 = this->fields.costumeIds;
      if ( !v30 )
        break;
      if ( v29 >= v30->max_length )
LABEL_42:
        sub_1B6432C(Instance, v27);
      v31 = v30->m_Items[v29 + 1];
      v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v53.fields.currentCryptoKey = v33;
      *(_QWORD *)&v53.fields.fakeValue = v32;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v53, 0LL);
      if ( !MasterData_object )
        break;
      Instance = (void *)ServantCostumeMaster__TryGetEntity(
                           (ServantCostumeMaster_o *)MasterData_object,
                           &entity,
                           (int32_t)Instance,
                           v31,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v35 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v34 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v54.fields.currentCryptoKey = v35;
        *(_QWORD *)&v54.fields.fakeValue = v34;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
        if ( !v23 )
          break;
        Instance = (void *)ServantCostumeReleaseMaster__isEnableMountCostume(
                             (ServantCostumeReleaseMaster_o *)v23,
                             (int32_t)Instance,
                             v31,
                             lv,
                             limitCount,
                             0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v26 )
            break;
          v37 = (Il2CppObject *)entity;
          items = v26->fields._items;
          v39 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              v37,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v37;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v37, v28, v36);
          }
        }
      }
      if ( (unsigned int)v20 == ++v29 )
        goto LABEL_25;
    }
LABEL_41:
    sub_1B64324(Instance);
  }
LABEL_25:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v42 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v42 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v42 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantCostumeEntity__TypeInfo, v27, v28);
    System_Comparison_object____ctor(v42, v43, Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Comparison_ServantCostumeEntity__o *)v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_0, (int32_t)v42, v45, v46);
  }
  if ( !v26 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_55243320(
    v26,
    v42,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v47 = (unsigned int)v26->fields._size;
  v48 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v47);
  if ( (int)v47 >= 1 )
  {
    v49 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v26,
                   v49,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v48 )
        goto LABEL_41;
      if ( v49 >= v48->max_length )
        goto LABEL_42;
      v48->m_Items[++v49] = *((_DWORD *)Instance + 5);
      if ( v47 == v49 )
        return v48;
    }
  }
  return v48;
}


int32_t __fastcall UserServantCollectionEntity__getFriendShipRank(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_49FD1A5 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD1A5 = 1;
  }
  v3 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v3;
  *(_QWORD *)&v6.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  bool result; // w0
  int32_t v20; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49FD1B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, friendshipRank);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FD1B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v21, 0LL);
  if ( !v14 )
LABEL_14:
    sub_1B64324(Instance);
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v16 = Entity, ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)) )
  {
    v17 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v17;
    *(_QWORD *)&v22.fields.fakeValue = v18;
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
    result = 1;
    v20 = this->fields.friendshipExceedCount + HIDWORD(v16[6].klass);
  }
  else
  {
    v20 = 0;
    result = 0;
    *friendshipRank = -1;
  }
  *maxFriendshipRank = v20;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  Il2CppObject *Entity; // x20
  Il2CppObject *v13; // x0
  __int64 v14; // x8
  ServantLimitMaster_o *v15; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FD1B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FD1B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  if ( !v11 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v11,
             (int32_t)Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v13 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v18.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v15 = (ServantLimitMaster_o *)v13,
        *(_QWORD *)&v18.fields.currentCryptoKey = v14,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL),
        !Entity)
    || !v15
    || (Instance = ServantLimitMaster__GetEntity(v15, (int32_t)Instance, (int32_t)Entity[5].monitor, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FD1B2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD1B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v10
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Instance);
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

  if ( (byte_49FD1AC & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
    byte_49FD1AC = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
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

  if ( (byte_49FD1AA & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    byte_49FD1AA = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
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

  if ( (byte_49FD1A9 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&int___TypeInfo, v3);
    byte_49FD1A9 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1B64170(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
    sub_1B64324(0LL);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1B6432C(v5, v6);
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

  if ( (byte_49FD1A4 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FD1A4 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
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

  if ( (byte_49FD1AE & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_49FD1AE = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
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
  Il2CppObject *MasterData_object; // x0
  int64_t userId; // x21
  __int64 v10; // x23
  __int64 v11; // x22
  UserServantCommandCodeMaster_o *v12; // x20
  bool v13; // w8
  UserCommandCodeEntity_o *result; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49FD1B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FD1B8 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserServantCommandCodeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
  if ( !v12 )
    goto LABEL_11;
  v13 = UserServantCommandCodeMaster__TryGetEntity(v12, &entity, userId, (int)Instance, 0LL);
  result = 0LL;
  if ( !v13 )
    return result;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1B64324(Instance);
  return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, 0LL);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD1C0 & 1) == 0 )
  {
    sub_1B640C8(&UserServantCollectionEntity___c_TypeInfo, v1);
    byte_49FD1C0 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserServantCollectionEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserServantCollectionEntity___c_TypeInfo->static_fields->__9 = (struct UserServantCollectionEntity___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserServantCollectionEntity___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__56_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
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
  if ( (byte_49FD1C1 & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass69_0_o *)sub_1B640C8(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                    d);
    byte_49FD1C1 = 1;
  }
  if ( !d || (_4__this = v4->fields.__4__this) == 0LL )
    sub_1B64324(this);
  condTargetId = d->fields.condTargetId;
  v8 = *(_QWORD *)&_4__this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&_4__this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL)
      && d->fields.condNum == v4->fields.costumeId;
}