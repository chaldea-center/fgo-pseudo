void __fastcall UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A70C29 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A70C29 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCollectionEntity___ctor_40219804(
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

  if ( (byte_4A70C2A & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, e);
    byte_4A70C2A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1B9026C(v5, v6);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_tdPlayed, (int32_t)tdPlayed, v7, v8);
  p_tdPlayed[2] = (struct System_Int32_array *)e->fields.createdAt;
}


void __fastcall UserServantCollectionEntity___ctor_40219996(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int128 v8; // q0

  if ( (byte_4A70C2B & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, userId);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A70C2B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_4A70C28 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_4A70C28 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_2E8C548 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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

  if ( (byte_4A70C27 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A70C27 = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v9, 0LL);
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

  if ( (byte_4A70C47 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList);
    sub_1B90010(&DataManager_TypeInfo, v13);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    byte_4A70C47 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v21, 0LL);
  if ( !v18 )
    sub_1B9026C(v19, v20);
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
  System_Int32_array **v12; // x21
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
  __int64 v28; // x1
  int32_t friendshipRank; // w26
  int32_t maxLimitCount; // w22
  __int64 v31; // x0
  __int64 v32; // x0
  void *MasterData_object; // x0
  bool v34; // w24
  BalanceConfig_c *v35; // x0
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x25
  Il2CppObject *v46; // x26
  int32_t v47; // w2
  int32_t v48; // w3
  int v49; // w8
  int v50; // w19
  __int64 v51; // x8
  int32_t v52; // w28
  int64_t UserId; // x29
  __int64 v54; // x22
  __int64 v55; // x23
  int32_t v56; // w4
  int32_t v57; // w2
  __int64 v58; // x22
  __int64 v59; // x8
  unsigned __int64 v60; // x23
  System_Int32_array *v61; // x8
  int max_length; // w9
  unsigned int v63; // w10
  __int64 v64; // x28
  char *v65; // x10
  _DWORD *v66; // x10
  int v67; // t1
  System_String_array *v68; // x8
  System_String_array *v69; // x9
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w2
  int32_t v73; // w3
  int *v74; // [xsp+30h] [xbp-90h]
  System_String_array **v75; // [xsp+38h] [xbp-88h]
  UserEventServantPointMaster_o *Master_object; // [xsp+40h] [xbp-80h]
  UserEventServantPointEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  v12 = idList;
  if ( (byte_4A70C35 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, idList);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v14);
    sub_1B90010(&Method_DataManager_GetMaster_EventMaster___, v15);
    sub_1B90010(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_1B90010(&Method_DataManager_GetMaster_SkillMaster___, v17);
    sub_1B90010(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v18);
    sub_1B90010(&DataManager_TypeInfo, v19);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1B90010(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v21);
    sub_1B90010(&ImageLimitCount_TypeInfo, v22);
    sub_1B90010(&int___TypeInfo, v23);
    sub_1B90010(&NetworkManager_TypeInfo, v24);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v26);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B90010(&string___TypeInfo, v28);
    byte_4A70C35 = 1;
  }
  entity = 0LL;
  if ( isOwner )
    friendshipRank = BasicHelper__DecryptValue_41163624(this->fields.friendshipRank, 0LL);
  else
    friendshipRank = 0;
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1BE1EEC(v31);
  v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1BE1EEC(v32);
  MasterData_object = **(void ***)(v32 + 184);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
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
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_object )
    goto LABEL_68;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        dispSvtId,
                        (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !MasterData_object )
    goto LABEL_68;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)MasterData_object, 0LL) )
    return;
  v34 = *v12 == 0LL;
  if ( !*v12 )
  {
    v35 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    v36 = sub_1B900B8(int___TypeInfo, (unsigned int)v35->static_fields->SvtPassiveSkillListMax);
    *v12 = (System_Int32_array *)v36;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v12, v36, v37, v38);
    v39 = (System_String_array *)sub_1B900B8(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v39;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v39, v40, v41);
    v42 = (System_String_array *)sub_1B900B8(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v42;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v42, v43, v44);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v45 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v46 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SkillMaster___);
  MasterData_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !MasterData_object
    || (MasterData_object = EventMaster__GetEnableEntityList((EventMaster_o *)MasterData_object, 12, 0, 0LL)) == 0LL )
  {
LABEL_68:
    sub_1B9026C(MasterData_object, idList);
  }
  v49 = *((_DWORD *)MasterData_object + 6);
  if ( v49 >= 1 )
  {
    v50 = 0;
    v74 = (int *)MasterData_object;
    v75 = explanationList;
    while ( 1 )
    {
      if ( v50 >= (unsigned int)v49 )
        goto LABEL_67;
      v51 = *((_QWORD *)MasterData_object + v50 + 4);
      if ( !v51 )
        goto LABEL_68;
      v52 = *(_DWORD *)(v51 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v55 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v54 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v80.fields.currentCryptoKey = v55;
      *(_QWORD *)&v80.fields.fakeValue = v54;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v80, 0LL);
      MasterData_object = Master_object;
      if ( !Master_object )
        goto LABEL_68;
      MasterData_object = (void *)UserEventServantPointMaster__TryGetEntity(
                                    Master_object,
                                    &entity,
                                    UserId,
                                    v52,
                                    v56,
                                    0LL);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        MasterData_object = entity;
        explanationList = v75;
        if ( !entity )
          goto LABEL_68;
        MasterData_object = (void *)UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
        v57 = (int)MasterData_object;
      }
      else
      {
        explanationList = v75;
        v57 = 0;
      }
      if ( !v45 )
        goto LABEL_68;
      MasterData_object = EventServantPointRankMaster__GetEnableEntity(
                            (EventServantPointRankMaster_o *)v45,
                            v52,
                            v57,
                            dispSvtId,
                            0LL);
      if ( MasterData_object )
      {
        v58 = *((_QWORD *)MasterData_object + 4);
        if ( !v58 )
          goto LABEL_68;
        v59 = *(_QWORD *)(v58 + 24);
        if ( (int)v59 >= 1 )
          break;
      }
LABEL_63:
      MasterData_object = v74;
      ++v50;
      v49 = v74[6];
      if ( v50 >= v49 )
        goto LABEL_64;
    }
    v60 = 0LL;
    while ( v60 < (unsigned int)v59 )
    {
      v61 = *v12;
      if ( !*v12 )
        goto LABEL_68;
      max_length = v61->max_length;
      if ( max_length >= 1 )
      {
        idList = (System_Int32_array **)*(unsigned int *)(v58 + 4 * v60 + 32);
        v63 = 0;
        while ( 1 )
        {
          if ( v63 >= max_length )
            goto LABEL_67;
          v64 = (int)v63;
          v65 = (char *)v61 + 4 * (int)v63;
          v67 = *((_DWORD *)v65 + 8);
          v66 = v65 + 32;
          if ( !v67 )
            break;
          v63 = v64 + 1;
          if ( (int)v64 + 1 >= max_length )
            goto LABEL_62;
        }
        *v66 = (_DWORD)idList;
        if ( !v46 )
          goto LABEL_68;
        MasterData_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v46,
                              (int32_t)idList,
                              (const MethodInfo_312C5A8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v68 = *titleList;
        if ( !*titleList )
          goto LABEL_68;
        v69 = *explanationList;
        if ( !*explanationList || !MasterData_object )
          goto LABEL_68;
        if ( (unsigned int)v64 >= v68->max_length || (unsigned int)v64 >= v69->max_length )
          break;
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)MasterData_object,
          &v68->m_Items[v64],
          &v69->m_Items[v64],
          0,
          0LL);
        v34 = 0;
      }
LABEL_62:
      LODWORD(v59) = *(_DWORD *)(v58 + 24);
      if ( (__int64)++v60 >= (int)v59 )
        goto LABEL_63;
    }
LABEL_67:
    sub_1B90274(MasterData_object, idList);
  }
LABEL_64:
  if ( v34 )
  {
    *v12 = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v12, 0, v47, v48);
    *titleList = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)titleList, 0, v70, v71);
    *explanationList = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)explanationList, 0, v72, v73);
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
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x0
  __int64 v21; // x1
  System_Func_object__bool__o *v22; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10

  if ( (byte_4A70C46 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_ServantSkillReleaseEntity___, method);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v3);
    sub_1B90010(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B90010(&Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__, v9);
    sub_1B90010(&UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo, v10);
    byte_4A70C46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_18;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0LL);
  v14 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_18;
  if ( (int)costumeIds->max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = sub_1B9025C(UserServantCollectionEntity___c__DisplayClass69_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0LL);
      if ( !v17 )
        break;
      *(_QWORD *)(v17 + 24) = this;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v18, v19);
      if ( v16 >= costumeIds->max_length )
        sub_1B90274(v20, v21);
      *(_DWORD *)(v17 + 16) = costumeIds->m_Items[v16 + 1];
      v22 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v22,
        (Il2CppObject *)v17,
        Method_UserServantCollectionEntity___c__DisplayClass69_0__GetSkillChangeCostumeList_b__0__,
        0LL);
      Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                   EntryListFromCondType,
                                   (System_Func_T__bool__o *)v22,
                                   (const MethodInfo_2E795E4 *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          break;
        v12 = *(unsigned int *)(v17 + 16);
        items = v14->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v14,
            v12,
            *(const MethodInfo_34F399C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
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
    sub_1B9026C(Instance, v12);
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
  __int64 v25; // x8
  __int64 v26; // x0
  ServantSkillMaster_o *v27; // x24
  const MethodInfo *v28; // x1
  System_Int32_array *SkillLevelList; // x26
  int32_t maxLimitCount; // w23
  BalanceConfig_c *v31; // x0
  BalanceConfig_c *v32; // x0
  SkillInfo_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  unsigned __int64 v36; // x28
  __int64 v37; // x21
  int32_t *v38; // x23
  __int64 i; // x19
  SkillInfo_o *v40; // x27
  unsigned __int64 v41; // x20
  ServantSkillEntity_o *v42; // x29
  int32_t skillNum; // w8
  SkillInfo_array *v44; // x29
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x0
  bool IsServantEquip; // [xsp+2Ch] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4A70C33 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B90010(&ImageLimitCount_TypeInfo, v12);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B90010(&SkillInfo___TypeInfo, v16);
    sub_1B90010(&SkillInfo_TypeInfo, v17);
    byte_4A70C33 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v22;
  *(_QWORD *)&v53.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v53, 0LL);
  if ( !v23 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BE1EEC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1BE1EEC(v26);
  Instance = **(_QWORD **)(v26 + 184);
  if ( !Instance )
    goto LABEL_42;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_42;
  v27 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Entity, 0LL);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v28);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( skillListNum <= 0 )
  {
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    skillListNum = v31->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v32 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    skillListNum = v32->static_fields->SvtEquipSkillListMax;
  }
  v33 = (SkillInfo_array *)sub_1B900B8(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v33, v34, v35);
  if ( skillListNum >= 1 )
  {
    v36 = 0LL;
    v37 = (unsigned int)skillListNum;
    v38 = &SkillLevelList->m_Items[1];
    for ( i = 32LL; ; i += 8LL )
    {
      v40 = (SkillInfo_o *)sub_1B9025C(SkillInfo_TypeInfo);
      SkillInfo___ctor(v40, 0LL);
      if ( !v27 )
        break;
      v41 = v36 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v27,
                            dispSvtId,
                            (int)v36 + 1,
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
        if ( !v40 )
          break;
        v42 = (ServantSkillEntity_o *)Instance;
        v40->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v36 >= SkillLevelList->max_length )
          goto LABEL_43;
        v40->fields.lv = v38[v36];
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v40->fields.charge,
          &v40->fields.title,
          &v40->fields.explanation,
          v38[v36],
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v42, 0LL);
        v40->fields.strengthStatus = Instance;
        skillNum = v42->fields.skillNum;
        v40->fields.isUse = 1;
        v40->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v40 )
          break;
        v40->fields.lv = -1;
        if ( !IsServantEquip )
        {
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v27, dispSvtId, v41, 0LL);
          if ( Instance )
          {
            v40->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v40->fields.title,
              &v40->fields.explanation,
              0LL);
          }
        }
      }
      v44 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_1B9014C(v40, v44->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v47 = sub_1B90290(0LL);
        sub_1B90138(v47, 0LL);
      }
      if ( v36 >= v44->max_length )
LABEL_43:
        sub_1B90274(Instance, v19);
      v44->m_Items[v36] = v40;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)v44 + i), (int32_t)v40, v45, v46);
      ++v36;
      if ( v37 == v41 )
        return;
    }
LABEL_42:
    sub_1B9026C(Instance, v19);
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
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x24
  __int64 v19; // x25
  int32_t v20; // w24
  int32_t maxLimitCount; // w23
  void *Master_object; // x0
  __int64 v23; // x1
  TreasureDvcInfo_o *v24; // x21
  int32_t treasureDeviceLv1; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4A70C37 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, tdInfo);
    sub_1B90010(&DataManager_TypeInfo, v11);
    sub_1B90010(&ImageLimitCount_TypeInfo, v12);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B90010(&TreasureDvcInfo_TypeInfo, v14);
    byte_4A70C37 = 1;
  }
  v15 = (TreasureDvcInfo_o *)sub_1B9025C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v15, 0LL);
  *tdInfo = v15;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v15, v16, v17);
  v18 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v27, 0LL);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    maxLimitCount = this->fields.maxLimitCount;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    dispLimitCount = ImageLimitCount__GetImageLimitCount(dispSvtId, maxLimitCount, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
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
    v24 = *tdInfo;
    if ( *tdInfo )
    {
      v24->fields.id = *((_DWORD *)Master_object + 8);
      treasureDeviceLv1 = this->fields.treasureDeviceLv1;
      v24->fields.lv = treasureDeviceLv1;
      Master_object = (void *)ServantTreasureDvcEntity__getEffectExplanation(
                                (ServantTreasureDvcEntity_o *)Master_object,
                                &v24->fields.name,
                                &v24->fields.explanation,
                                &v24->fields.maxLv,
                                &v24->fields.guageCount,
                                &v24->fields.cardId,
                                &v24->fields.strengthStatus,
                                &v24->fields.treasureDeviceNum,
                                treasureDeviceLv1,
                                0LL);
      v24->fields.isUse = (unsigned __int8)Master_object & 1;
      if ( *tdInfo )
      {
        LOBYTE(Master_object) = (*tdInfo)->fields.isUse;
        return (char)Master_object;
      }
    }
LABEL_17:
    sub_1B9026C(Master_object, v23);
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
  const MethodInfo *v13; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A70C41 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_4A70C41 = 1;
  }
  entity = 0LL;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BE1EEC(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BE1EEC(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        v7,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserServantCommandCardMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v16, 0LL);
  if ( !v12 )
LABEL_12:
    sub_1B9026C(v7, method);
  UserServantCommandCardMaster__TryGetEntity(v12, &entity, userId, (int)v7, v13);
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
  __int64 v16; // x0
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A70C42 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A70C42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v18, 0LL);
  if ( !v13 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BE1EEC(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BE1EEC(v17);
  Instance = **(Il2CppObject ***)(v17 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B9026C(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39669280(
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
  __int64 v16; // x0
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A70C43 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A70C43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v18, 0LL);
  if ( !v13 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BE1EEC(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BE1EEC(v17);
  Instance = **(Il2CppObject ***)(v17 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B9026C(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39669280(
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
  __int64 v16; // x0
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A70C45 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A70C45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v18, 0LL);
  if ( !v13 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BE1EEC(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BE1EEC(v17);
  Instance = **(Il2CppObject ***)(v17 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B9026C(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39669280(
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
  __int64 v16; // x0
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A70C44 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A70C44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v18, 0LL);
  if ( !v13 )
    goto LABEL_17;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_17;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BE1EEC(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BE1EEC(v17);
  Instance = **(Il2CppObject ***)(v17 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B9026C(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_39669280(
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
  int32_t status; // w8
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  __int64 v16; // x20
  __int64 v17; // x21
  int32_t v18; // w20
  Il2CppObject *v21; // x0
  __int64 v22; // x20
  __int64 v23; // x21
  ServantCommentMaster_o *v24; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4A70C2E & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B90010(&NetworkManager_TypeInfo, v5);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B90010(&UserServantCollectionManager_TypeInfo, v8);
    byte_4A70C2E = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
    v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v14;
    *(_QWORD *)&v27.fields.fakeValue = v13;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v27, 0LL);
    if ( !v15 )
      goto LABEL_27;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v15,
                 (int32_t)Instance,
                 (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_27;
    if ( !SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      return 0;
  }
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v17;
  *(_QWORD *)&v28.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v28, 0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  if ( !UserServantCollectionManager__IsNew(v18, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v21 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v24 = (ServantCommentMaster_o *)v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v29.fields.currentCryptoKey = v23;
      *(_QWORD *)&v29.fields.fakeValue = v22;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v29, 0LL);
      if ( v24 )
        return ServantCommentMaster__GetNewList(v24, &idList, &priorityList, (int32_t)Instance, 0LL);
    }
LABEL_27:
    sub_1B9026C(Instance, v11);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  _BOOL8 v17; // x0
  unsigned __int64 voicePlayed; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A70C3B & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(&NetworkManager_TypeInfo, v6);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A70C3B = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v14 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v13;
    *(_QWORD *)&v20.fields.fakeValue = v12;
    userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                                       v20,
                                                                       0LL);
    if ( !Master_object )
      goto LABEL_20;
    if ( !UserServantVoicePlayedMaster__TryGetEntity(
            (UserServantVoicePlayedMaster_o *)Master_object,
            p_userServantVoicePlayedEntity,
            v14,
            (int32_t)userServantVoicePlayedEntity,
            v16) )
    {
      LOBYTE(v17) = 0;
      return v17;
    }
    userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
    if ( !*p_userServantVoicePlayedEntity )
LABEL_20:
      sub_1B9026C(userServantVoicePlayedEntity, v15);
  }
  LOBYTE(v17) = UserServantVoicePlayedEntity__IsPlayed(userServantVoicePlayedEntity, flagNum, method);
  return v17;
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
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x20
  int32_t v17; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A70C2F & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B90010(&NetworkManager_TypeInfo, v4);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B90010(&UserServantCollectionManager_TypeInfo, v7);
    byte_4A70C2F = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
      v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v13;
      *(_QWORD *)&v18.fields.fakeValue = v12;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v18, 0LL);
      if ( !v14
        || (Instance = DataMasterBase_object__object__int___GetEntity(
                         v14,
                         (int32_t)Instance,
                         (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
      {
LABEL_20:
        sub_1B9026C(Instance, v10);
      }
      if ( SvtType__IsEnemyCollectionDetail(HIDWORD(Instance[5].klass), 0LL) )
      {
LABEL_14:
        v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v19.fields.currentCryptoKey = v16;
        *(_QWORD *)&v19.fields.fakeValue = v15;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v19, 0LL);
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        UserServantCollectionManager__SetOld(v17, 0LL);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A70C3C & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(&NetworkManager_TypeInfo, v6);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A70C3C = 1;
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v14 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v20.fields.currentCryptoKey = v13;
      *(_QWORD *)&v20.fields.fakeValue = v12;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                                         v20,
                                                                         0LL);
      if ( !Master_object )
LABEL_22:
        sub_1B9026C(userServantVoicePlayedEntity, v15);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             (UserServantVoicePlayedMaster_o *)Master_object,
             p_userServantVoicePlayedEntity,
             v14,
             (int32_t)userServantVoicePlayedEntity,
             v16) )
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

  if ( (byte_4A70C30 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantExpMaster___, lv);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A70C30 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v18;
  *(_QWORD *)&v38.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v38, 0LL);
  if ( !v19 )
    goto LABEL_32;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v19,
               (int32_t)Instance,
               (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_32;
  v20 = Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v34 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v36 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v37 = (ServantLimitMaster_o *)v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v40.fields.currentCryptoKey = v36;
      *(_QWORD *)&v40.fields.fakeValue = v35;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v40, 0LL);
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
    sub_1B9026C(Instance, v15);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  v21 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v24 = (ServantLimitMaster_o *)v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v23;
  *(_QWORD *)&v39.fields.fakeValue = v22;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v39, 0LL);
  if ( !v24 )
    goto LABEL_32;
  Instance = ServantLimitMaster__GetEntity(v24, (int32_t)Instance, this->fields.maxLimitCount, 0LL);
  if ( !Instance )
    goto LABEL_32;
  v25 = Instance;
  v26 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  *lv = v26;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantExpMaster___);
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

  if ( (byte_4A70C3F & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A70C3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v14, 0LL);
  if ( !v11 )
LABEL_8:
    sub_1B9026C(Instance, v6);
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
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x20
  Il2CppObject *v35; // x21
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x21
  System_Int32_array *v40; // x20
  unsigned __int64 v41; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A70C3D & 1) == 0 )
  {
    sub_1B90010(&System_Comparison_ServantCostumeEntity__TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v4);
    sub_1B90010(&int___TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v10);
    sub_1B90010(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v11);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B90010(&Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, v14);
    sub_1B90010(&UserServantCollectionEntity___c_TypeInfo, v15);
    byte_4A70C3D = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v17 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v17 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
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
        sub_1B90274(Instance, v19);
      v25 = v24->m_Items[v22 + 1];
      v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v44.fields.currentCryptoKey = v27;
      *(_QWORD *)&v44.fields.fakeValue = v26;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v44, 0LL);
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
        v31 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v19,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v19;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v19, v28, v29);
        }
      }
      if ( v23 == ++v22 )
        goto LABEL_21;
    }
LABEL_37:
    sub_1B9026C(Instance, v19);
  }
LABEL_21:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v34 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_UserServantCollectionEntity___c__getCostumeList_b__55_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Comparison_ServantCostumeEntity__o *)v34;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__55_0, (int32_t)v34, v37, v38);
  }
  if ( !v21 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55649412(
    v21,
    v34,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v39 = (unsigned int)v21->fields._size;
  v40 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, (unsigned int)v39);
  if ( (int)v39 >= 1 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v21,
                   v41,
                   (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v40 )
        goto LABEL_37;
      if ( v41 >= v40->max_length )
        goto LABEL_38;
      v40->m_Items[++v41] = *((_DWORD *)Instance + 5);
      if ( v39 == v41 )
        return v40;
    }
  }
  return v40;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList_40229084(
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
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Comparison_T__o *v39; // x19
  Il2CppObject *v40; // x20
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x20
  System_Int32_array *v45; // x19
  unsigned __int64 v46; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4A70C3E & 1) == 0 )
  {
    sub_1B90010(&System_Comparison_ServantCostumeEntity__TypeInfo, *(_QWORD *)&lv);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v7);
    sub_1B90010(&int___TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v13);
    sub_1B90010(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v14);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B90010(&Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, v17);
    sub_1B90010(&UserServantCollectionEntity___c_TypeInfo, v18);
    byte_4A70C3E = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v20 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v20 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v24 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
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
        sub_1B90274(Instance, v22);
      v28 = v27->m_Items[v26 + 1];
      v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = v30;
      *(_QWORD *)&v50.fields.fakeValue = v29;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v50, 0LL);
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
        *(_QWORD *)&v51.fields.currentCryptoKey = v32;
        *(_QWORD *)&v51.fields.fakeValue = v31;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v51, 0LL);
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
          v36 = Method_System_Collections_Generic_List_ServantCostumeEntity__Add__;
          ++v25->fields._version;
          if ( !items )
            break;
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              v22,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v25->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v22;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v22, v33, v34);
          }
        }
      }
      if ( (unsigned int)v20 == ++v26 )
        goto LABEL_25;
    }
LABEL_41:
    sub_1B9026C(Instance, v22);
  }
LABEL_25:
  Instance = UserServantCollectionEntity___c_TypeInfo;
  if ( !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = UserServantCollectionEntity___c_TypeInfo;
  }
  v39 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v39 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = UserServantCollectionEntity___c_TypeInfo;
    }
    v40 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v39 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_object____ctor(v39, v40, Method_UserServantCollectionEntity___c__getCostumeList_b__56_0__, 0LL);
    static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Comparison_ServantCostumeEntity__o *)v39;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_0, (int32_t)v39, v42, v43);
  }
  if ( !v25 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_55649412(
    v25,
    v39,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  v44 = (unsigned int)v25->fields._size;
  v45 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, (unsigned int)v44);
  if ( (int)v44 >= 1 )
  {
    v46 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v25,
                   v46,
                   (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
      if ( !Instance || !v45 )
        goto LABEL_41;
      if ( v46 >= v45->max_length )
        goto LABEL_42;
      v45->m_Items[++v46] = *((_DWORD *)Instance + 5);
      if ( v44 == v46 )
        return v45;
    }
  }
  return v45;
}


int32_t __fastcall UserServantCollectionEntity__getFriendShipRank(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A70C2D & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A70C2D = 1;
  }
  v3 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v3;
  *(_QWORD *)&v6.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v6, 0LL);
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

  if ( (byte_4A70C38 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, friendshipRank);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A70C38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v22, 0LL);
  if ( !v15 )
LABEL_14:
    sub_1B9026C(Instance, v11);
  Entity = DataMasterBase_object__object__int___GetEntity(
             v15,
             (int32_t)Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v17 = Entity, ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL)) )
  {
    v18 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v19;
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v23, 0LL);
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

  if ( (byte_4A70C39 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A70C39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v18, 0LL);
  if ( !v12 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v14 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v19.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v16 = (ServantLimitMaster_o *)v14,
        *(_QWORD *)&v19.fields.currentCryptoKey = v15,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v19, 0LL),
        !Entity)
    || !v16
    || (Instance = ServantLimitMaster__GetEntity(v16, (int32_t)Instance, (int32_t)Entity[5].monitor, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1B9026C(Instance, v8);
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

  if ( (byte_4A70C3A & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A70C3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B9026C(Instance, v7);
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

  if ( (byte_4A70C34 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, idList);
    byte_4A70C34 = 1;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v17, 0LL);
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

  if ( (byte_4A70C32 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    byte_4A70C32 = 1;
  }
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v15, 0LL);
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

  if ( (byte_4A70C31 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&int___TypeInfo, v3);
    byte_4A70C31 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1B900B8(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
    sub_1B9026C(0LL, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_16:
    sub_1B90274(v5, v6);
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

  if ( (byte_4A70C2C & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A70C2C = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v6, 0LL);
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

  if ( (byte_4A70C36 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
    byte_4A70C36 = 1;
  }
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v14, 0LL);
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

  if ( (byte_4A70C40 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A70C40 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (UserServantCommandCodeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v18, 0LL);
  if ( !v13 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v13, &entity, userId, (int)Instance, v14) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v15);
LABEL_12:
    sub_1B9026C(Instance, v8);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A70C48 & 1) == 0 )
  {
    sub_1B90010(&UserServantCollectionEntity___c_TypeInfo, v1);
    byte_4A70C48 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(UserServantCollectionEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserServantCollectionEntity___c_TypeInfo->static_fields->__9 = (struct UserServantCollectionEntity___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)UserServantCollectionEntity___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B9026C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__56_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B9026C(this, a);
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
  if ( (byte_4A70C49 & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass69_0_o *)sub_1B90010(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                    d);
    byte_4A70C49 = 1;
  }
  if ( !d || (_4__this = v4->fields.__4__this) == 0LL )
    sub_1B9026C(this, d);
  condTargetId = d->fields.condTargetId;
  v8 = *(_QWORD *)&_4__this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&_4__this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v10, 0LL)
      && d->fields.condNum == v4->fields.costumeId;
}