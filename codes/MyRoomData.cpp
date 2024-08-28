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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct UserGameEntity_o *usrData; // x8

  if ( (byte_4A0458F & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A0458F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance )
  {
    sub_1B68930(Instance, v5);
  }
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Instance, usrData->fields.userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ServantEntity_o *result; // x0

  if ( (byte_4A0458C & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0458C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v7);
  result = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                svtId,
                                (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomData__getSvtFriendshipLv(MyRoomData_o *this, int32_t hSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  char *Instance; // x0
  __int64 v8; // x1
  struct UserGameEntity_o *usrData; // x8
  __int64 v10; // x19
  __int64 v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A0458D & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&hSvtId);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A0458D = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance
    || (Instance = (char *)UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)Instance,
                             usrData->fields.userId,
                             hSvtId,
                             0LL)) == 0LL )
  {
    sub_1B68930(Instance, v8);
  }
  v10 = *(_QWORD *)(Instance + 100);
  v11 = *(_QWORD *)(Instance + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitEntity_o *__fastcall MyRoomData__getSvtLimitData(
        MyRoomData_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  ServantLimitEntity_o *result; // x0

  if ( (byte_4A0458E & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A0458E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v8);
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0LL);
  return result;
}


int32_t __fastcall MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A04589 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A04589 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A04588 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserExpMaster___, *(_QWORD *)&currentLv);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A04588 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v6);
  }
  return UserExpMaster__getEntityFromLevel((UserExpMaster_o *)Instance, currentLv + 1, 0LL);
}


UserServantEntity_o *__fastcall MyRoomData__getUsrSvtData(
        MyRoomData_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  UserServantEntity_o *result; // x0

  if ( (byte_4A0458B & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0458B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v7);
  result = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                    usrSvtId,
                                    (const MethodInfo_30E466C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return result;
}


System_Int32_array *__fastcall MyRoomData__getUsrSvtNum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_Int32_array *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *result; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A0458A & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B686D4(&int___TypeInfo, v2);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A0458A = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v4 = (System_Int32_array *)sub_1B6877C(int___TypeInfo, 2LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserServantMaster__getCount(
                                     (UserServantMaster_o *)Instance,
                                     &servantEquipSum[1],
                                     servantEquipSum,
                                     0,
                                     0LL),
        !v4) )
  {
    sub_1B68930(Instance, v6);
  }
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = servantEquipSum[1], max_length == 1) )
    sub_1B68938(Instance, v6);
  result = v4;
  v4->m_Items[2] = servantEquipSum[0];
  return result;
}


// attributes: thunk
void __fastcall MyRoomData__initMyRoomData(MyRoomData_o *this, const MethodInfo *method)
{
  MyRoomData__setUserInfoData(this, method);
}


void __fastcall MyRoomData__setUserInfoData(MyRoomData_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o **p_usrData; // x20
  MstProfileData_o *v4; // x21
  struct MstProfileData_o **p_mstInfoData; // x19
  __int64 ExpInfo; // x0
  const MethodInfo *v7; // x1
  struct MstProfileData_o *v8; // x21
  struct MstProfileData_o *v9; // x8
  struct MstProfileData_o *v10; // x21
  int64_t v11; // x8
  struct MstProfileData_o *v12; // x21
  unsigned int v13; // w9
  struct MstProfileData_o *v14; // x8
  struct UserGameEntity_o *v15; // x10
  struct UserGameEntity_o *v16; // x8
  struct MstProfileData_o *v17; // x9
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-30h] BYREF
  int64_t exp; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A04587 & 1) == 0 )
  {
    sub_1B686D4(&MstProfileData_TypeInfo, method);
    byte_4A04587 = 1;
  }
  lateExp = 0LL;
  exp = 0LL;
  barExp = 0.0;
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  sub_1B68678(&this->fields.usrData);
  v4 = (MstProfileData_o *)sub_1B68920(MstProfileData_TypeInfo);
  MstProfileData___ctor(v4, 0LL);
  this->fields.mstInfoData = v4;
  p_mstInfoData = &this->fields.mstInfoData;
  ExpInfo = sub_1B68678(p_mstInfoData);
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = (__int64)*p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  *(_QWORD *)(ExpInfo + 16) = (*p_usrData)->fields.name;
  sub_1B68678(ExpInfo + 16);
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v8 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v8->fields.genderType = *(_DWORD *)(ExpInfo + 76);
  v8->fields.userEquipId = UserGameEntity__getActiveUserEquipId((UserGameEntity_o *)ExpInfo, 0LL);
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v9 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v9->fields.userLv = *(_DWORD *)(ExpInfo + 80);
  v9->fields.birthDayVal = *(_QWORD *)(ExpInfo + 32);
  ExpInfo = UserGameEntity__getExpInfo((UserGameEntity_o *)ExpInfo, &exp, &lateExp, &barExp, 0LL);
  v10 = *p_mstInfoData;
  if ( (ExpInfo & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_25;
    v11 = lateExp;
    v10->fields.exp = exp;
    v10->fields.lateExp = v11;
    v10->fields.barExp = barExp;
  }
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = UserGameEntity__GetFriendPoint((UserGameEntity_o *)ExpInfo, 0LL);
  if ( !v10 )
    goto LABEL_25;
  v10->fields.friendPoint = ExpInfo;
  v12 = *p_mstInfoData;
  ExpInfo = MyRoomData__getUserFriendSum((MyRoomData_o *)ExpInfo, v7);
  if ( !v12 )
    goto LABEL_25;
  v12->fields.currentFriendNum = ExpInfo;
  if ( !*p_usrData )
    goto LABEL_25;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  (*p_mstInfoData)->fields.maxFriendNum = (*p_usrData)->fields.friendKeep;
  ExpInfo = (__int64)MyRoomData__getUsrSvtNum((MyRoomData_o *)ExpInfo, v7);
  if ( !ExpInfo )
    goto LABEL_25;
  v13 = *(_DWORD *)(ExpInfo + 24);
  if ( !v13 )
    goto LABEL_26;
  v14 = *p_mstInfoData;
  if ( !*p_mstInfoData || (v14->fields.currentSvtNum = *(_DWORD *)(ExpInfo + 32), (v15 = *p_usrData) == 0LL) )
LABEL_25:
    sub_1B68930(ExpInfo, v7);
  v14->fields.maxSvtNum = v15->fields.svtKeep;
  if ( v13 <= 1 )
LABEL_26:
    sub_1B68938(ExpInfo, v7);
  v14->fields.currentSvtEpNum = *(_DWORD *)(ExpInfo + 36);
  v14->fields.maxSvtEqNum = v15->fields.svtEquipKeep;
  v14->fields.friendCode = v15->fields.friendCode;
  ExpInfo = sub_1B68678(&v14->fields.friendCode);
  v16 = *p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v17 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v17->fields.currentQp = v16->fields.qp;
  v17->fields.currentMana = v16->fields.mana;
  v17->fields.currentStone = v16->fields.stone;
  v17->fields.currentRareMana = v16->fields.rarePri;
}


void __fastcall MyRoomData__setUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  sub_1B68678(&this->fields.usrData);
}