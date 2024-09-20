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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct UserGameEntity_o *usrData; // x8

  if ( (byte_4A56A53 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56A53 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance )
  {
    sub_1B8880C(Instance, v4);
  }
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Instance, usrData->fields.userId, 0LL);
}


ServantEntity_o *__fastcall MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantEntity_o *result; // x0

  if ( (byte_4A56A50 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56A50 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  result = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                svtId,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  return result;
}


int32_t __fastcall MyRoomData__getSvtFriendshipLv(MyRoomData_o *this, int32_t hSvtId, const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v6; // x1
  struct UserGameEntity_o *usrData; // x8
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4A56A51 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56A51 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance
    || (Instance = (char *)UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)Instance,
                             usrData->fields.userId,
                             hSvtId,
                             0LL)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  v8 = *(_QWORD *)(Instance + 100);
  v9 = *(_QWORD *)(Instance + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
}


ServantLimitEntity_o *__fastcall MyRoomData__getSvtLimitData(
        MyRoomData_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ServantLimitEntity_o *result; // x0

  if ( (byte_4A56A52 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56A52 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0LL);
  return result;
}


int32_t __fastcall MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A56A4D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56A4D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v3);
  }
  return TblFriendMaster__GetFriendSum((TblFriendMaster_o *)Instance, 0LL);
}


UserGameEntity_o *__fastcall MyRoomData__getUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  return this->fields.usrData;
}


UserExpEntity_o *__fastcall MyRoomData__getUsrNextExpData(
        MyRoomData_o *this,
        int32_t currentLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A56A4C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56A4C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  return UserExpMaster__getEntityFromLevel((UserExpMaster_o *)Instance, currentLv + 1, 0LL);
}


UserServantEntity_o *__fastcall MyRoomData__getUsrSvtData(
        MyRoomData_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  UserServantEntity_o *result; // x0

  if ( (byte_4A56A4F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56A4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  result = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                    usrSvtId,
                                    (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return result;
}


System_Int32_array *__fastcall MyRoomData__getUsrSvtNum(MyRoomData_o *this, const MethodInfo *method)
{
  System_Int32_array *v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *result; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A56A4E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56A4E = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v2 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 2LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserServantMaster__getCount(
                                     (UserServantMaster_o *)Instance,
                                     &servantEquipSum[1],
                                     servantEquipSum,
                                     0,
                                     0LL),
        !v2) )
  {
    sub_1B8880C(Instance, v4);
  }
  max_length = v2->max_length;
  if ( !max_length || (v2->m_Items[1] = servantEquipSum[1], max_length == 1) )
    sub_1B88814(Instance, v4);
  result = v2;
  v2->m_Items[2] = servantEquipSum[0];
  return result;
}


// attributes: thunk
void __fastcall MyRoomData__initMyRoomData(MyRoomData_o *this, const MethodInfo *method)
{
  MyRoomData__setUserInfoData(this, method);
}


void __fastcall MyRoomData__setUserInfoData(MyRoomData_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x20
  MstProfileData_o *v5; // x21
  struct MstProfileData_o **p_mstInfoData; // x19
  __int64 ExpInfo; // x0
  const MethodInfo *v8; // x1
  Il2CppArrayBounds *name; // x1
  struct MstProfileData_o *v10; // x21
  struct MstProfileData_o *v11; // x8
  struct MstProfileData_o *v12; // x21
  int64_t v13; // x8
  struct MstProfileData_o *v14; // x21
  unsigned int v15; // w9
  struct MstProfileData_o *v16; // x8
  struct UserGameEntity_o *v17; // x10
  struct System_String_o *friendCode; // x1
  struct UserGameEntity_o *v19; // x8
  struct MstProfileData_o *v20; // x9
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-30h] BYREF
  int64_t exp; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A56A4B & 1) == 0 )
  {
    sub_1B885B0(&MstProfileData_TypeInfo);
    byte_4A56A4B = 1;
  }
  lateExp = 0LL;
  exp = 0LL;
  barExp = 0.0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  p_usrData = &this->fields.usrData;
  sub_1B88554(&this->fields.usrData, SelfUserGame);
  v5 = (MstProfileData_o *)sub_1B887FC(MstProfileData_TypeInfo);
  MstProfileData___ctor(v5, 0LL);
  this->fields.mstInfoData = v5;
  p_mstInfoData = &this->fields.mstInfoData;
  ExpInfo = sub_1B88554(p_mstInfoData, v5);
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = (__int64)*p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  name = (Il2CppArrayBounds *)(*p_usrData)->fields.name;
  *(_QWORD *)(ExpInfo + 16) = name;
  sub_1B88554(ExpInfo + 16, name);
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v10 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v10->fields.genderType = *(_DWORD *)(ExpInfo + 76);
  v10->fields.userEquipId = UserGameEntity__getActiveUserEquipId((UserGameEntity_o *)ExpInfo, 0LL);
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v11 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v11->fields.userLv = *(_DWORD *)(ExpInfo + 80);
  v11->fields.birthDayVal = *(_QWORD *)(ExpInfo + 32);
  ExpInfo = UserGameEntity__getExpInfo((UserGameEntity_o *)ExpInfo, &exp, &lateExp, &barExp, 0LL);
  v12 = *p_mstInfoData;
  if ( (ExpInfo & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_25;
    v13 = lateExp;
    v12->fields.exp = exp;
    v12->fields.lateExp = v13;
    v12->fields.barExp = barExp;
  }
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = UserGameEntity__GetFriendPoint((UserGameEntity_o *)ExpInfo, 0LL);
  if ( !v12 )
    goto LABEL_25;
  v12->fields.friendPoint = ExpInfo;
  v14 = *p_mstInfoData;
  ExpInfo = MyRoomData__getUserFriendSum((MyRoomData_o *)ExpInfo, v8);
  if ( !v14 )
    goto LABEL_25;
  v14->fields.currentFriendNum = ExpInfo;
  if ( !*p_usrData )
    goto LABEL_25;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  (*p_mstInfoData)->fields.maxFriendNum = (*p_usrData)->fields.friendKeep;
  ExpInfo = (__int64)MyRoomData__getUsrSvtNum((MyRoomData_o *)ExpInfo, v8);
  if ( !ExpInfo )
    goto LABEL_25;
  v15 = *(_DWORD *)(ExpInfo + 24);
  if ( !v15 )
    goto LABEL_26;
  v16 = *p_mstInfoData;
  if ( !*p_mstInfoData || (v16->fields.currentSvtNum = *(_DWORD *)(ExpInfo + 32), (v17 = *p_usrData) == 0LL) )
LABEL_25:
    sub_1B8880C(ExpInfo, v8);
  v16->fields.maxSvtNum = v17->fields.svtKeep;
  if ( v15 <= 1 )
LABEL_26:
    sub_1B88814(ExpInfo, v8);
  v16->fields.currentSvtEpNum = *(_DWORD *)(ExpInfo + 36);
  v16->fields.maxSvtEqNum = v17->fields.svtEquipKeep;
  friendCode = v17->fields.friendCode;
  v16->fields.friendCode = friendCode;
  ExpInfo = sub_1B88554(&v16->fields.friendCode, friendCode);
  v19 = *p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v20 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v20->fields.currentQp = v19->fields.qp;
  v20->fields.currentMana = v19->fields.mana;
  v20->fields.currentStone = v19->fields.stone;
  v20->fields.currentRareMana = v19->fields.rarePri;
}


void __fastcall MyRoomData__setUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_1B88554(&this->fields.usrData, SelfUserGame);
}