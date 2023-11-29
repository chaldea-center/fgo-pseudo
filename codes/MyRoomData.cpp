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
  WebViewManager_o *Instance; // x0
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *usrData; // x8

  if ( (byte_40F9AE2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F9AE2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !MasterData_WarQuestSelectionMaster )
  {
    sub_B170D4();
  }
  return UserPresentBoxMaster__getVaildList(MasterData_WarQuestSelectionMaster, usrData->fields.userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ServantEntity_o *result; // x0

  if ( (byte_40F9ADF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F9ADF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  result = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                svtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomData__getSvtFriendshipLv(MyRoomData_o *this, int32_t hSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *usrData; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v11; // x19
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F9AE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&hSvtId);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F9AE0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !MasterData_WarQuestSelectionMaster
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             usrData->fields.userId,
                             hSvtId,
                             0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v11 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
  v12 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitEntity_o *__fastcall MyRoomData__getSvtLimitData(
        MyRoomData_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  ServantLimitEntity_o *result; // x0

  if ( (byte_40F9AE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F9AE1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0LL);
  return result;
}


int32_t __fastcall MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F9ADC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F9ADC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserExpMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F9ADB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserExpMaster___, *(_QWORD *)&currentLv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F9ADB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserExpMaster__getEntityFromLevel(MasterData_WarQuestSelectionMaster, currentLv + 1, 0LL);
}


UserServantEntity_o *__fastcall MyRoomData__getUsrSvtData(
        MyRoomData_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *result; // x0

  if ( (byte_40F9ADE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F9ADE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  result = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result,
             usrSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return result;
}


System_Int32_array *__fastcall MyRoomData__getUsrSvtNum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Int32_array *v5; // x19
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 Count; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *result; // x0
  int32_t servantEquipSum; // [xsp+8h] [xbp-8h] BYREF
  int32_t servantSum; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_40F9ADD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F9ADD = 1;
  }
  servantSum = 0;
  servantEquipSum = 0;
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v2);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Count = UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantSum, &servantEquipSum, 0, 0LL),
        !v5) )
  {
    sub_B170D4();
  }
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = servantSum, max_length == 1) )
  {
    sub_B17100(Count, v9, v10);
    sub_B170A0();
  }
  result = v5;
  v5->m_Items[2] = servantEquipSum;
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
  struct UserGameEntity_o **p_usrData; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  MstProfileData_o *v15; // x21
  struct UserGameEntity_o **v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UserGameEntity_o *v29; // x0
  System_Int32_array **name; // x1
  struct UserGameEntity_o *v31; // x21
  int64_t ActiveUserEquipId; // x0
  struct UserGameEntity_o *v33; // x21
  MyRoomData_o *FriendPoint; // x0
  const MethodInfo *v35; // x1
  struct UserGameEntity_o *v36; // x21
  MyRoomData_o *UserFriendSum; // x0
  const MethodInfo *v38; // x1
  System_Int32_array *UsrSvtNum; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct UserGameEntity_o *v47; // x0
  System_Int32_array **friendCode; // x1
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t lateExp; // [xsp+8h] [xbp-28h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F9ADA & 1) == 0 )
  {
    sub_B16FFC(&MstProfileData_TypeInfo, method);
    byte_40F9ADA = 1;
  }
  exp = 0LL;
  lateExp = 0LL;
  barExp = 0.0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  p_usrData = &this->fields.usrData;
  sub_B16F98((BattleServantConfConponent_o *)p_usrData, (System_Int32_array **)SelfUserGame, v5, v6, v7, v8, v9, v10);
  v15 = (MstProfileData_o *)sub_B170CC(MstProfileData_TypeInfo, v11, v12, v13, v14);
  MstProfileData___ctor(v15, 0LL);
  v16 = p_usrData + 3;
  p_usrData[3] = (struct UserGameEntity_o *)v15;
  sub_B16F98((BattleServantConfConponent_o *)(p_usrData + 3), (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
  if ( !*p_usrData )
    goto LABEL_44;
  v29 = p_usrData[3];
  if ( !v29 )
    goto LABEL_44;
  name = (System_Int32_array **)(*p_usrData)->fields.name;
  v29->fields.userId = (int64_t)name;
  sub_B16F98((BattleServantConfConponent_o *)&v29->fields, name, v23, v24, v25, v26, v27, v28);
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v16 )
    goto LABEL_44;
  LODWORD((*v16)->fields.birthDay) = (*p_usrData)->fields.genderType;
  if ( !*p_usrData )
    goto LABEL_44;
  v31 = *v16;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(*p_usrData, 0LL);
  if ( !v31 )
    goto LABEL_44;
  *(_QWORD *)&v31->fields.actMax = ActiveUserEquipId;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v16 )
    goto LABEL_44;
  LODWORD((*v16)->fields.actRecoverAt) = (*p_usrData)->fields.lv;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v16 )
    goto LABEL_44;
  (*v16)->fields.name = (struct System_String_o *)(*p_usrData)->fields.birthDay;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( UserGameEntity__getExpInfo(*p_usrData, &exp, &lateExp, &barExp, 0LL) )
  {
    if ( !*v16 )
      goto LABEL_44;
    *(_QWORD *)&(*v16)->fields.carryOverActPoint = exp;
    if ( !*v16 )
      goto LABEL_44;
    (*v16)->fields.rpRecoverAt = lateExp;
    if ( !*v16 )
      goto LABEL_44;
    *(float *)&(*v16)->fields.carryOverRaidPoint = barExp;
  }
  if ( !*p_usrData )
    goto LABEL_44;
  v33 = *v16;
  FriendPoint = (MyRoomData_o *)UserGameEntity__GetFriendPoint(*p_usrData, 0LL);
  if ( !v33 )
    goto LABEL_44;
  v33->fields.qp = (int)FriendPoint;
  v36 = *v16;
  UserFriendSum = (MyRoomData_o *)MyRoomData__getUserFriendSum(FriendPoint, v35);
  if ( !v36 )
    goto LABEL_44;
  v36->fields.costMax = (int)UserFriendSum;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v16 )
    goto LABEL_44;
  LODWORD((*v16)->fields.friendCode) = (*p_usrData)->fields.friendKeep;
  UsrSvtNum = MyRoomData__getUsrSvtNum(UserFriendSum, v38);
  if ( !UsrSvtNum )
    goto LABEL_44;
  if ( !UsrSvtNum->max_length )
    goto LABEL_45;
  if ( !*v16 || (HIDWORD((*v16)->fields.friendCode) = UsrSvtNum->m_Items[1], !*p_usrData) || !*v16 )
LABEL_44:
    sub_B170D4();
  LODWORD((*v16)->fields.favoriteUserSvtId) = (*p_usrData)->fields.svtKeep;
  if ( UsrSvtNum->max_length <= 1 )
  {
LABEL_45:
    sub_B17100(UsrSvtNum, v40, v41);
    sub_B170A0();
  }
  if ( !*v16 )
    goto LABEL_44;
  HIDWORD((*v16)->fields.favoriteUserSvtId) = UsrSvtNum->m_Items[2];
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v16 )
    goto LABEL_44;
  LODWORD((*v16)->fields.pushUserSvtId) = (*p_usrData)->fields.svtEquipKeep;
  if ( !*p_usrData )
    goto LABEL_44;
  v47 = *v16;
  if ( !*v16 )
    goto LABEL_44;
  friendCode = (System_Int32_array **)(*p_usrData)->fields.friendCode;
  *(_QWORD *)&v47->fields.grade = friendCode;
  sub_B16F98((BattleServantConfConponent_o *)&v47->fields.grade, friendCode, v41, v42, v43, v44, v45, v46);
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v16 )
    goto LABEL_44;
  LODWORD((*v16)->fields.commandSpellRecoverAt) = (*p_usrData)->fields.qp;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v16 )
    goto LABEL_44;
  HIDWORD((*v16)->fields.commandSpellRecoverAt) = (*p_usrData)->fields.mana;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v16 )
    goto LABEL_44;
  (*v16)->fields.svtKeep = (*p_usrData)->fields.stone;
  if ( !*p_usrData || !*v16 )
    goto LABEL_44;
  (*v16)->fields.svtEquipKeep = (*p_usrData)->fields.rarePri;
}


void __fastcall MyRoomData__setUsrData(MyRoomData_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}