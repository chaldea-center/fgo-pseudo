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

  if ( (byte_5933827 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933827 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0)
    || !Instance )
  {
    sub_21FFECC(Instance, v4);
  }
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Instance, usrData->fields.userId, 0);
}


ServantEntity_o *MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantEntity_o *result; // x0

  if ( (byte_5933824 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933824 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  result = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                svtId,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  return result;
}


int32_t MyRoomData__getSvtFriendshipLv(MyRoomData_o *this, int32_t hSvtId, const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v6; // x1
  struct UserGameEntity_o *usrData; // x8
  __int64 v8; // x2
  __int64 v9; // x19
  __int64 v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_5933825 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933825 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0)
    || !Instance
    || (Instance = (char *)UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)Instance,
                             usrData->fields.userId,
                             hSvtId,
                             0)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  v9 = *(_QWORD *)(Instance + 108);
  v10 = *(_QWORD *)(Instance + 116);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v8);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v12, 0);
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

  if ( (byte_5933826 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933826 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v7);
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0);
  return result;
}


int32_t MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5933821 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933821 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v3);
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

  if ( (byte_5933820 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933820 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v5);
  }
  return UserExpMaster__getEntityFromLevel((UserExpMaster_o *)Instance, currentLv + 1, 0);
}


UserServantEntity_o *MyRoomData__getUsrSvtData(MyRoomData_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  UserServantEntity_o *result; // x0

  if ( (byte_5933823 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933823 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  result = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                    usrSvtId,
                                    (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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

  if ( (byte_5933822 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933822 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  v2 = sub_21FFD10(int___TypeInfo, 2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (Instance = (Il2CppObject *)UserServantMaster__getCount(
                                     (UserServantMaster_o *)Instance,
                                     &servantEquipSum[1],
                                     servantEquipSum,
                                     0,
                                     0),
        !v2) )
  {
    sub_21FFECC(Instance, v4);
  }
  v5 = *(_DWORD *)(v2 + 24);
  if ( !v5 || (*(_DWORD *)(v2 + 32) = servantEquipSum[1], v5 == 1) )
    sub_21FFED4(Instance);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MstProfileData_o *v11; // x21
  struct MstProfileData_o **p_mstInfoData; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_String_o *name; // x1
  struct MstProfileData_o *v28; // x21
  UserGameEntity_o *v29; // x8
  struct MstProfileData_o *v30; // x9
  int64_t birthDay; // x11
  struct MstProfileData_o *v32; // x21
  int64_t v33; // x9
  float v34; // s0
  struct MstProfileData_o *v35; // x22
  struct UserGameEntity_o *v36; // x8
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int v43; // w10
  struct MstProfileData_o *v44; // x8
  struct UserGameEntity_o *v45; // x9
  struct System_String_o *friendCode; // x1
  int32_t v47; // w10
  int32_t svtEquipKeep; // w9
  struct UserGameEntity_o *v49; // x8
  struct MstProfileData_o *v50; // x9
  int64_t qp; // x10
  int32_t mana; // w11
  int32_t stone; // w12
  int32_t rarePri; // w8
  float barExp; // [xsp+4h] [xbp-3Ch] BYREF
  int64_t lateExp; // [xsp+8h] [xbp-38h] BYREF
  int64_t exp; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_593381F & 1) == 0 )
  {
    sub_21FFC50(&MstProfileData_TypeInfo);
    byte_593381F = 1;
  }
  exp = 0;
  lateExp = 0;
  barExp = 0.0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrData = SelfUserGame;
  p_usrData = &this->fields.usrData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v5, v6, v7, v8, v9, v10);
  v11 = (MstProfileData_o *)sub_21FFEBC(MstProfileData_TypeInfo);
  MstProfileData___ctor(v11, 0);
  this->fields.mstInfoData = v11;
  p_mstInfoData = &this->fields.mstInfoData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_mstInfoData, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  if ( !*p_usrData )
    goto LABEL_25;
  ActiveUserEquipId = (int64_t)*p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  name = (*p_usrData)->fields.name;
  *(_QWORD *)(ActiveUserEquipId + 16) = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(ActiveUserEquipId + 16), (int32_t)name, v21, v22, v23, v24, v25, v26);
  ActiveUserEquipId = (int64_t)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v28 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v28->fields.genderType = *(_DWORD *)(ActiveUserEquipId + 76);
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId((UserGameEntity_o *)ActiveUserEquipId, 0);
  v29 = *p_usrData;
  v28->fields.userEquipId = ActiveUserEquipId;
  if ( !v29 )
    goto LABEL_25;
  v30 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  birthDay = v29->fields.birthDay;
  v30->fields.userLv = v29->fields.lv;
  v30->fields.birthDayVal = birthDay;
  ActiveUserEquipId = UserGameEntity__getExpInfo(v29, &exp, &lateExp, &barExp, 0);
  v32 = *p_mstInfoData;
  if ( (ActiveUserEquipId & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_25;
    v33 = lateExp;
    v34 = barExp;
    v32->fields.exp = exp;
    v32->fields.lateExp = v33;
    v32->fields.barExp = v34;
  }
  ActiveUserEquipId = (int64_t)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  ActiveUserEquipId = UserGameEntity__GetFriendPoint((UserGameEntity_o *)ActiveUserEquipId, 0);
  if ( !v32 )
    goto LABEL_25;
  v35 = *p_mstInfoData;
  v32->fields.friendPoint = ActiveUserEquipId;
  ActiveUserEquipId = MyRoomData__getUserFriendSum((MyRoomData_o *)ActiveUserEquipId, v20);
  if ( !v35 )
    goto LABEL_25;
  v36 = *p_usrData;
  v35->fields.currentFriendNum = ActiveUserEquipId;
  if ( !v36 )
    goto LABEL_25;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  (*p_mstInfoData)->fields.maxFriendNum = v36->fields.friendKeep;
  ActiveUserEquipId = (int64_t)MyRoomData__getUsrSvtNum((MyRoomData_o *)ActiveUserEquipId, v20);
  if ( !ActiveUserEquipId )
    goto LABEL_25;
  v43 = *(_DWORD *)(ActiveUserEquipId + 24);
  if ( !v43 )
    goto LABEL_26;
  v44 = *p_mstInfoData;
  if ( !*p_mstInfoData || (v45 = *p_usrData, v44->fields.currentSvtNum = *(_DWORD *)(ActiveUserEquipId + 32), !v45) )
LABEL_25:
    sub_21FFECC(ActiveUserEquipId, v20);
  v44->fields.maxSvtNum = v45->fields.svtKeep;
  if ( v43 == 1 )
LABEL_26:
    sub_21FFED4(ActiveUserEquipId);
  friendCode = v45->fields.friendCode;
  v47 = *(_DWORD *)(ActiveUserEquipId + 36);
  svtEquipKeep = v45->fields.svtEquipKeep;
  v44->fields.friendCode = friendCode;
  v44->fields.currentSvtEpNum = v47;
  v44->fields.maxSvtEqNum = svtEquipKeep;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v44->fields.friendCode,
    (int32_t)friendCode,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v49 = *p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v50 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  qp = v49->fields.qp;
  mana = v49->fields.mana;
  stone = v49->fields.stone;
  rarePri = v49->fields.rarePri;
  v50->fields.currentQp = qp;
  v50->fields.currentMana = mana;
  v50->fields.currentStone = stone;
  v50->fields.currentRareMana = rarePri;
}


void MyRoomData__setUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrData = SelfUserGame;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
}