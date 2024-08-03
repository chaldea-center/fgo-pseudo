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
  struct UserGameEntity_o *usrData; // x8

  if ( (byte_49F7D90 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49F7D90 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance )
  {
    sub_1B64324(Instance);
  }
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Instance, usrData->fields.userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  ServantEntity_o *result; // x0

  if ( (byte_49F7D8D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F7D8D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  result = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                svtId,
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomData__getSvtFriendshipLv(MyRoomData_o *this, int32_t hSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  char *Instance; // x0
  struct UserGameEntity_o *usrData; // x8
  __int64 v9; // x19
  __int64 v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49F7D8E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&hSvtId);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F7D8E = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance
    || (Instance = (char *)UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)Instance,
                             usrData->fields.userId,
                             hSvtId,
                             0LL)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v9 = *(_QWORD *)(Instance + 100);
  v10 = *(_QWORD *)(Instance + 108);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
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
  ServantLimitEntity_o *result; // x0

  if ( (byte_49F7D8F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F7D8F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0LL);
  return result;
}


int32_t __fastcall MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F7D8A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F7D8A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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

  if ( (byte_49F7D89 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserExpMaster___, *(_QWORD *)&currentLv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49F7D89 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  UserServantEntity_o *result; // x0

  if ( (byte_49F7D8C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F7D8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  result = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                    usrSvtId,
                                    (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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

  if ( (byte_49F7D8B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&int___TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49F7D8B = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 2LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserServantMaster__getCount(
                                     (UserServantMaster_o *)Instance,
                                     &servantEquipSum[1],
                                     servantEquipSum,
                                     0,
                                     0LL),
        !v4) )
  {
    sub_1B64324(Instance);
  }
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = servantEquipSum[1], max_length == 1) )
    sub_1B6432C(Instance, v6);
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
  __int64 v4; // x1
  __int64 v5; // x2
  MstProfileData_o *v6; // x21
  struct MstProfileData_o **p_mstInfoData; // x19
  __int64 ExpInfo; // x0
  struct MstProfileData_o *v9; // x21
  struct MstProfileData_o *v10; // x8
  struct MstProfileData_o *v11; // x21
  int64_t v12; // x8
  const MethodInfo *v13; // x1
  struct MstProfileData_o *v14; // x21
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  unsigned int v17; // w9
  struct MstProfileData_o *v18; // x8
  struct UserGameEntity_o *v19; // x10
  struct UserGameEntity_o *v20; // x8
  struct MstProfileData_o *v21; // x9
  float barExp; // [xsp+Ch] [xbp-34h] BYREF
  int64_t lateExp; // [xsp+10h] [xbp-30h] BYREF
  int64_t exp; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F7D88 & 1) == 0 )
  {
    sub_1B640C8(&MstProfileData_TypeInfo, method);
    byte_49F7D88 = 1;
  }
  lateExp = 0LL;
  exp = 0LL;
  barExp = 0.0;
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  sub_1B6406C(&this->fields.usrData);
  v6 = (MstProfileData_o *)sub_1B64314(MstProfileData_TypeInfo, v4, v5);
  MstProfileData___ctor(v6, 0LL);
  this->fields.mstInfoData = v6;
  p_mstInfoData = &this->fields.mstInfoData;
  ExpInfo = sub_1B6406C(p_mstInfoData);
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = (__int64)*p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  *(_QWORD *)(ExpInfo + 16) = (*p_usrData)->fields.name;
  sub_1B6406C(ExpInfo + 16);
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v9 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v9->fields.genderType = *(_DWORD *)(ExpInfo + 76);
  v9->fields.userEquipId = UserGameEntity__getActiveUserEquipId((UserGameEntity_o *)ExpInfo, 0LL);
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v10 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v10->fields.userLv = *(_DWORD *)(ExpInfo + 80);
  v10->fields.birthDayVal = *(_QWORD *)(ExpInfo + 32);
  ExpInfo = UserGameEntity__getExpInfo((UserGameEntity_o *)ExpInfo, &exp, &lateExp, &barExp, 0LL);
  v11 = *p_mstInfoData;
  if ( (ExpInfo & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_25;
    v12 = lateExp;
    v11->fields.exp = exp;
    v11->fields.lateExp = v12;
    v11->fields.barExp = barExp;
  }
  ExpInfo = (__int64)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  ExpInfo = UserGameEntity__GetFriendPoint((UserGameEntity_o *)ExpInfo, 0LL);
  if ( !v11 )
    goto LABEL_25;
  v11->fields.friendPoint = ExpInfo;
  v14 = *p_mstInfoData;
  ExpInfo = MyRoomData__getUserFriendSum((MyRoomData_o *)ExpInfo, v13);
  if ( !v14 )
    goto LABEL_25;
  v14->fields.currentFriendNum = ExpInfo;
  if ( !*p_usrData )
    goto LABEL_25;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  (*p_mstInfoData)->fields.maxFriendNum = (*p_usrData)->fields.friendKeep;
  ExpInfo = (__int64)MyRoomData__getUsrSvtNum((MyRoomData_o *)ExpInfo, v15);
  if ( !ExpInfo )
    goto LABEL_25;
  v17 = *(_DWORD *)(ExpInfo + 24);
  if ( !v17 )
    goto LABEL_26;
  v18 = *p_mstInfoData;
  if ( !*p_mstInfoData || (v18->fields.currentSvtNum = *(_DWORD *)(ExpInfo + 32), (v19 = *p_usrData) == 0LL) )
LABEL_25:
    sub_1B64324(ExpInfo);
  v18->fields.maxSvtNum = v19->fields.svtKeep;
  if ( v17 <= 1 )
LABEL_26:
    sub_1B6432C(ExpInfo, v16);
  v18->fields.currentSvtEpNum = *(_DWORD *)(ExpInfo + 36);
  v18->fields.maxSvtEqNum = v19->fields.svtEquipKeep;
  v18->fields.friendCode = v19->fields.friendCode;
  ExpInfo = sub_1B6406C(&v18->fields.friendCode);
  v20 = *p_usrData;
  if ( !*p_usrData )
    goto LABEL_25;
  v21 = *p_mstInfoData;
  if ( !*p_mstInfoData )
    goto LABEL_25;
  v21->fields.currentQp = v20->fields.qp;
  v21->fields.currentMana = v20->fields.mana;
  v21->fields.currentStone = v20->fields.stone;
  v21->fields.currentRareMana = v20->fields.rarePri;
}


void __fastcall MyRoomData__setUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  this->fields.usrData = UserGameMaster__getSelfUserGame(0LL);
  sub_1B6406C(&this->fields.usrData);
}