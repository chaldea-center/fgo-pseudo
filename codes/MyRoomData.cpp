void MyRoomData___ctor(MyRoomData_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


MstProfileData_o *MyRoomData__getMstInfoData(MyRoomData_o *this, const MethodInfo *method)
{
  return this->fields.mstInfoData;
}


UserPresentBoxEntity_array *MyRoomData__getPresentList(MyRoomData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct UserGameEntity_o *usrData; // x8

  if ( (byte_4CE99EF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE99EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0)
    || !Instance )
  {
    sub_1C7BD40(Instance, v4);
  }
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Instance, usrData->fields.userId, 0);
}


ServantEntity_o *MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantEntity_o *result; // x0

  if ( (byte_4CE99EC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE99EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  result = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                svtId,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  return result;
}


int32_t MyRoomData__getSvtFriendshipLv(MyRoomData_o *this, int32_t hSvtId, const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v6; // x1
  struct UserGameEntity_o *usrData; // x8
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4CE99ED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE99ED = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0)
    || !Instance
    || (Instance = (char *)UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)Instance,
                             usrData->fields.userId,
                             hSvtId,
                             0)) == 0 )
  {
    sub_1C7BD40(Instance, v6);
  }
  v8 = *(_QWORD *)(Instance + 100);
  v9 = *(_QWORD *)(Instance + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v11, 0);
}


ServantLimitEntity_o *MyRoomData__getSvtLimitData(
        MyRoomData_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ServantLimitEntity_o *result; // x0

  if ( (byte_4CE99EE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE99EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v7);
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0);
  return result;
}


int32_t MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CE99E9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE99E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v3);
  }
  return TblFriendMaster__GetFriendSum((TblFriendMaster_o *)Instance, 0);
}


UserGameEntity_o *MyRoomData__getUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  return this->fields.usrData;
}


UserExpEntity_o *MyRoomData__getUsrNextExpData(MyRoomData_o *this, int32_t currentLv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CE99E8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE99E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v5);
  }
  return UserExpMaster__getEntityFromLevel((UserExpMaster_o *)Instance, currentLv + 1, 0);
}


UserServantEntity_o *MyRoomData__getUsrSvtData(MyRoomData_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  UserServantEntity_o *result; // x0

  if ( (byte_4CE99EB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE99EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  result = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                    usrSvtId,
                                    (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return result;
}


System_Int32_array *MyRoomData__getUsrSvtNum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  System_Int32_array *result; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CE99EA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE99EA = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  v2 = sub_1C7BB90(int___TypeInfo, 2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (Instance = (Il2CppObject *)UserServantMaster__getCount(
                                     (UserServantMaster_o *)Instance,
                                     &servantEquipSum[1],
                                     servantEquipSum,
                                     0,
                                     0),
        !v2) )
  {
    sub_1C7BD40(Instance, v4);
  }
  v5 = *(_DWORD *)(v2 + 24);
  if ( !v5 || (*(_DWORD *)(v2 + 32) = servantEquipSum[1], v5 == 1) )
    sub_1C7BD48(Instance);
  result = (System_Int32_array *)v2;
  *(_DWORD *)(v2 + 36) = servantEquipSum[0];
  return result;
}


// attributes: thunk
void MyRoomData__initMyRoomData(MyRoomData_o *this, const MethodInfo *method)
{
  MyRoomData__setUserInfoData(this, method);
}


void MyRoomData__setUserInfoData(MyRoomData_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  MstProfileData_o *v11; // x21
  struct MstProfileData_o **p_mstInfoData; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  void *ExpInfo; // x0
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_String_o *name; // x1
  struct MstProfileData_o *v28; // x21
  struct MstProfileData_o *v29; // x8
  struct MstProfileData_o *v30; // x21
  int64_t v31; // x8
  struct MstProfileData_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  unsigned int v39; // w9
  struct MstProfileData_o *v40; // x8
  struct UserGameEntity_o *v41; // x10
  struct System_String_o *friendCode; // x1
  struct UserGameEntity_o *v43; // x8
  struct MstProfileData_o *v44; // x9
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-30h] BYREF
  int64_t exp; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CE99E7 & 1) == 0 )
  {
    sub_1C7BAE8(&MstProfileData_TypeInfo);
    byte_4CE99E7 = 1;
  }
  lateExp = 0;
  exp = 0;
  barExp = 0.0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrData = SelfUserGame;
  p_usrData = &this->fields.usrData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v5, v6, v7, v8, v9, v10);
  v11 = (MstProfileData_o *)sub_1C7BD34(MstProfileData_TypeInfo);
  MstProfileData___ctor(v11, 0);
  this->fields.mstInfoData = v11;
  p_mstInfoData = &this->fields.mstInfoData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_mstInfoData, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  name = (*p_usrData)->fields.name;
  *((_QWORD *)ExpInfo + 2) = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)((char *)ExpInfo + 16), (int32_t)name, v21, v22, v23, v24, v25, v26);
  ExpInfo = *p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v28 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v28->fields.genderType = *((_DWORD *)ExpInfo + 19);
  v28->fields.userEquipId = UserGameEntity__getActiveUserEquipId((UserGameEntity_o *)ExpInfo, 0);
  ExpInfo = *p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v29 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v29->fields.userLv = *((_DWORD *)ExpInfo + 20);
  v29->fields.birthDayVal = *((_QWORD *)ExpInfo + 4);
  ExpInfo = (void *)UserGameEntity__getExpInfo((UserGameEntity_o *)ExpInfo, &exp, &lateExp, &barExp, 0);
  v30 = *p_mstInfoData;
  if ( ((unsigned __int8)ExpInfo & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_25;
    v31 = lateExp;
    v30->fields.exp = exp;
    v30->fields.lateExp = v31;
    v30->fields.barExp = barExp;
  }
  ExpInfo = *p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = (void *)UserGameEntity__GetFriendPoint((UserGameEntity_o *)ExpInfo, 0);
  if ( !v30 )
    goto LABEL_25;
  v30->fields.friendPoint = (int)ExpInfo;
  v32 = *p_mstInfoData;
  ExpInfo = (void *)MyRoomData__getUserFriendSum((MyRoomData_o *)ExpInfo, v20);
  if ( !v32 )
    goto LABEL_25;
  v32->fields.currentFriendNum = (int)ExpInfo;
  if ( !*p_usrData )
    goto LABEL_25;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  (*p_mstInfoData)->fields.maxFriendNum = (*p_usrData)->fields.friendKeep;
  ExpInfo = MyRoomData__getUsrSvtNum((MyRoomData_o *)ExpInfo, v20);
  if ( !ExpInfo )
    goto LABEL_25;
  v39 = *((_DWORD *)ExpInfo + 6);
  if ( !v39 )
    goto LABEL_26;
  v40 = *p_mstInfoData;
  if ( !*p_mstInfoData || (v40->fields.currentSvtNum = *((_DWORD *)ExpInfo + 8), (v41 = *p_usrData) == 0) )
LABEL_25:
    sub_1C7BD40(ExpInfo, v20);
  v40->fields.maxSvtNum = v41->fields.svtKeep;
  if ( v39 <= 1 )
LABEL_26:
    sub_1C7BD48(ExpInfo);
  v40->fields.currentSvtEpNum = *((_DWORD *)ExpInfo + 9);
  v40->fields.maxSvtEqNum = v41->fields.svtEquipKeep;
  friendCode = v41->fields.friendCode;
  v40->fields.friendCode = friendCode;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v40->fields.friendCode, (int32_t)friendCode, v33, v34, v35, v36, v37, v38);
  v43 = *p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v44 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v44->fields.currentQp = v43->fields.qp;
  v44->fields.currentMana = v43->fields.mana;
  v44->fields.currentStone = v43->fields.stone;
  v44->fields.currentRareMana = v43->fields.rarePri;
}


void MyRoomData__setUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrData = SelfUserGame;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
}