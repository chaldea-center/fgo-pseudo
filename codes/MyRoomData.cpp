void __fastcall MyRoomData___ctor(MyRoomData_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


MstProfileData_o *__fastcall MyRoomData__getMstInfoData(MyRoomData_o *this, const MethodInfo *method)
{
  return this->fields.mstInfoData;
}


UserPresentBoxEntity_array *__fastcall MyRoomData__getPresentList(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct UserGameEntity_o *usrData; // x8

  if ( (byte_4B11A45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B11A45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Instance, usrData->fields.userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  ServantEntity_o *result; // x0

  if ( (byte_4B11A42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B11A42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  result = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                svtId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomData__getSvtFriendshipLv(MyRoomData_o *this, int32_t hSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  char *Instance; // x0
  __int64 v10; // x1
  struct UserGameEntity_o *usrData; // x8
  __int64 v12; // x19
  __int64 v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B11A43 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&hSvtId, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B11A43 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance
    || (Instance = (char *)UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)Instance,
                             usrData->fields.userId,
                             hSvtId,
                             0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  v12 = *(_QWORD *)(Instance + 100);
  v13 = *(_QWORD *)(Instance + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitEntity_o *__fastcall MyRoomData__getSvtLimitData(
        MyRoomData_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  ServantLimitEntity_o *result; // x0

  if ( (byte_4B11A44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B11A44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0LL);
  return result;
}


int32_t __fastcall MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B11A3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B11A3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v6);
  }
  return TblFriendMaster__GetFriendSum((TblFriendMaster_o *)Instance, 0LL);
}


UserGameEntity_o *__fastcall MyRoomData__getUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  return this->fields.usrData;
}


// local variable allocation has failed, the output may be wrong!
UserExpEntity_o *__fastcall MyRoomData__getUsrNextExpData(
        MyRoomData_o *this,
        int32_t currentLv,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B11A3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserExpMaster___, *(_QWORD *)&currentLv, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B11A3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserExpMaster__getEntityFromLevel((UserExpMaster_o *)Instance, currentLv + 1, 0LL);
}


UserServantEntity_o *__fastcall MyRoomData__getUsrSvtData(
        MyRoomData_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  UserServantEntity_o *result; // x0

  if ( (byte_4B11A41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B11A41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  result = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                    usrSvtId,
                                    (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return result;
}


System_Int32_array *__fastcall MyRoomData__getUsrSvtNum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Int32_array *v7; // x19
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *result; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11A40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B11A40 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v7 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserServantMaster__getCount(
                                     (UserServantMaster_o *)Instance,
                                     &servantEquipSum[1],
                                     servantEquipSum,
                                     0,
                                     0LL),
        !v7) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = servantEquipSum[1], max_length == 1) )
    sub_1BCAA44(Instance, v9);
  result = v7;
  v7->m_Items[2] = servantEquipSum[0];
  return result;
}


// attributes: thunk
void __fastcall MyRoomData__initMyRoomData(MyRoomData_o *this, const MethodInfo *method)
{
  MyRoomData__setUserInfoData(this, method);
}


void __fastcall MyRoomData__setUserInfoData(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  MstProfileData_o *v9; // x21
  struct MstProfileData_o **p_mstInfoData; // x19
  __int64 ExpInfo; // x0
  const MethodInfo *v12; // x1
  Il2CppArrayBounds *name; // x1
  struct MstProfileData_o *v14; // x21
  struct MstProfileData_o *v15; // x8
  struct MstProfileData_o *v16; // x21
  int64_t v17; // x8
  struct MstProfileData_o *v18; // x21
  unsigned int v19; // w9
  struct MstProfileData_o *v20; // x8
  struct UserGameEntity_o *v21; // x10
  struct System_String_o *friendCode; // x1
  struct UserGameEntity_o *v23; // x8
  struct MstProfileData_o *v24; // x9
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-30h] BYREF
  int64_t exp; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B11A3D & 1) == 0 )
  {
    sub_1BCA7E0(&MstProfileData_TypeInfo, method, v2);
    byte_4B11A3D = 1;
  }
  lateExp = 0LL;
  exp = 0LL;
  barExp = 0.0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  p_usrData = &this->fields.usrData;
  sub_1BCA784(&this->fields.usrData, SelfUserGame);
  v9 = (MstProfileData_o *)sub_1BCAA2C(MstProfileData_TypeInfo, v6, v7, v8);
  MstProfileData___ctor(v9, 0LL);
  this->fields.mstInfoData = v9;
  p_mstInfoData = &this->fields.mstInfoData;
  ExpInfo = sub_1BCA784(p_mstInfoData, v9);
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = (__int64)*p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  name = (Il2CppArrayBounds *)(*p_usrData)->fields.name;
  *(_QWORD *)(ExpInfo + 16) = name;
  sub_1BCA784(ExpInfo + 16, name);
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v14 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v14->fields.genderType = *(_DWORD *)(ExpInfo + 76);
  v14->fields.userEquipId = UserGameEntity__getActiveUserEquipId((UserGameEntity_o *)ExpInfo, 0LL);
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v15 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v15->fields.userLv = *(_DWORD *)(ExpInfo + 80);
  v15->fields.birthDayVal = *(_QWORD *)(ExpInfo + 32);
  ExpInfo = UserGameEntity__getExpInfo((UserGameEntity_o *)ExpInfo, &exp, &lateExp, &barExp, 0LL);
  v16 = *p_mstInfoData;
  if ( (ExpInfo & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_25;
    v17 = lateExp;
    v16->fields.exp = exp;
    v16->fields.lateExp = v17;
    v16->fields.barExp = barExp;
  }
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = UserGameEntity__GetFriendPoint((UserGameEntity_o *)ExpInfo, 0LL);
  if ( !v16 )
    goto LABEL_25;
  v16->fields.friendPoint = ExpInfo;
  v18 = *p_mstInfoData;
  ExpInfo = MyRoomData__getUserFriendSum((MyRoomData_o *)ExpInfo, v12);
  if ( !v18 )
    goto LABEL_25;
  v18->fields.currentFriendNum = ExpInfo;
  if ( !*p_usrData )
    goto LABEL_25;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  (*p_mstInfoData)->fields.maxFriendNum = (*p_usrData)->fields.friendKeep;
  ExpInfo = (__int64)MyRoomData__getUsrSvtNum((MyRoomData_o *)ExpInfo, v12);
  if ( !ExpInfo )
    goto LABEL_25;
  v19 = *(_DWORD *)(ExpInfo + 24);
  if ( !v19 )
    goto LABEL_26;
  v20 = *p_mstInfoData;
  if ( !*p_mstInfoData || (v20->fields.currentSvtNum = *(_DWORD *)(ExpInfo + 32), (v21 = *p_usrData) == 0LL) )
LABEL_25:
    sub_1BCAA3C(ExpInfo, v12);
  v20->fields.maxSvtNum = v21->fields.svtKeep;
  if ( v19 <= 1 )
LABEL_26:
    sub_1BCAA44(ExpInfo, v12);
  v20->fields.currentSvtEpNum = *(_DWORD *)(ExpInfo + 36);
  v20->fields.maxSvtEqNum = v21->fields.svtEquipKeep;
  friendCode = v21->fields.friendCode;
  v20->fields.friendCode = friendCode;
  ExpInfo = sub_1BCA784(&v20->fields.friendCode, friendCode);
  v23 = *p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v24 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v24->fields.currentQp = v23->fields.qp;
  v24->fields.currentMana = v23->fields.mana;
  v24->fields.currentStone = v23->fields.stone;
  v24->fields.currentRareMana = v23->fields.rarePri;
}


void __fastcall MyRoomData__setUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_1BCA784(&this->fields.usrData, SelfUserGame);
}