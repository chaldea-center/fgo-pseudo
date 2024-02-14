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
  DataManager_o *Instance; // x0
  struct UserGameEntity_o *usrData; // x8

  if ( (byte_4213DCB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4213DCB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance )
  {
    sub_B0D97C(Instance);
  }
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Instance, usrData->fields.userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ServantEntity_o *result; // x0

  if ( (byte_4213DC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4213DC8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  result = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                svtId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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

  if ( (byte_4213DC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&hSvtId);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4213DC9 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance
    || (Instance = (char *)UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)Instance,
                             usrData->fields.userId,
                             hSvtId,
                             0LL)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  v9 = *(_QWORD *)(Instance + 100);
  v10 = *(_QWORD *)(Instance + 108);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
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

  if ( (byte_4213DCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4213DCA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0LL);
  return result;
}


int32_t __fastcall MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  DataManager_o *Instance; // x0

  if ( (byte_4213DC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4213DC5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0

  if ( (byte_4213DC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserExpMaster___, *(_QWORD *)&currentLv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4213DC4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *result; // x0

  if ( (byte_4213DC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4213DC7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  result = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result,
             usrSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return result;
}


System_Int32_array *__fastcall MyRoomData__getUsrSvtNum(MyRoomData_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_Int32_array *v4; // x19
  DataManager_o *Instance; // x0
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *result; // x0
  __int64 v8; // x0
  int32_t servantEquipSum; // [xsp+8h] [xbp-8h] BYREF
  int32_t servantSum; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_4213DC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&int___TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4213DC6 = 1;
  }
  servantSum = 0;
  servantEquipSum = 0;
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserServantMaster__getCount(
                                      (UserServantMaster_o *)Instance,
                                      &servantSum,
                                      &servantEquipSum,
                                      0,
                                      0LL),
        !v4) )
  {
    sub_B0D97C(Instance);
  }
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = servantSum, max_length == 1) )
  {
    v8 = sub_B0D9A8(Instance);
    sub_B0D948(v8, 0LL);
  }
  result = v4;
  v4->m_Items[2] = servantEquipSum;
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
  MstProfileData_o *v13; // x21
  int64_t *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int64_t ActiveUserEquipId; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **name; // x1
  int64_t v29; // x21
  int64_t v30; // x21
  const MethodInfo *v31; // x1
  int64_t v32; // x21
  const MethodInfo *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **friendCode; // x1
  __int64 v41; // x0
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t lateExp; // [xsp+8h] [xbp-28h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4213DC3 & 1) == 0 )
  {
    sub_B0D8A4(&MstProfileData_TypeInfo, method);
    byte_4213DC3 = 1;
  }
  exp = 0LL;
  lateExp = 0LL;
  barExp = 0.0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  p_usrData = &this->fields.usrData;
  sub_B0D840((BattleServantConfConponent_o *)p_usrData, (System_Int32_array **)SelfUserGame, v5, v6, v7, v8, v9, v10);
  v13 = (MstProfileData_o *)sub_B0D974(MstProfileData_TypeInfo, v11, v12);
  MstProfileData___ctor(v13, 0LL);
  v14 = (int64_t *)(p_usrData + 3);
  p_usrData[3] = (struct UserGameEntity_o *)v13;
  sub_B0D840((BattleServantConfConponent_o *)(p_usrData + 3), (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
  if ( !*p_usrData )
    goto LABEL_44;
  ActiveUserEquipId = (int64_t)p_usrData[3];
  if ( !ActiveUserEquipId )
    goto LABEL_44;
  name = (System_Int32_array **)(*p_usrData)->fields.name;
  *(_QWORD *)(ActiveUserEquipId + 16) = name;
  sub_B0D840((BattleServantConfConponent_o *)(ActiveUserEquipId + 16), name, v22, v23, v24, v25, v26, v27);
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 32) = (*p_usrData)->fields.genderType;
  ActiveUserEquipId = (int64_t)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_44;
  v29 = *v14;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId((UserGameEntity_o *)ActiveUserEquipId, 0LL);
  if ( !v29 )
    goto LABEL_44;
  *(_QWORD *)(v29 + 40) = ActiveUserEquipId;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 48) = (*p_usrData)->fields.lv;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_QWORD *)(*v14 + 24) = (*p_usrData)->fields.birthDay;
  ActiveUserEquipId = (int64_t)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_44;
  ActiveUserEquipId = UserGameEntity__getExpInfo((UserGameEntity_o *)ActiveUserEquipId, &exp, &lateExp, &barExp, 0LL);
  if ( (ActiveUserEquipId & 1) != 0 )
  {
    if ( !*v14 )
      goto LABEL_44;
    *(_QWORD *)(*v14 + 56) = exp;
    if ( !*v14 )
      goto LABEL_44;
    *(_QWORD *)(*v14 + 64) = lateExp;
    if ( !*v14 )
      goto LABEL_44;
    *(float *)(*v14 + 72) = barExp;
  }
  ActiveUserEquipId = (int64_t)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_44;
  v30 = *v14;
  ActiveUserEquipId = UserGameEntity__GetFriendPoint((UserGameEntity_o *)ActiveUserEquipId, 0LL);
  if ( !v30 )
    goto LABEL_44;
  *(_DWORD *)(v30 + 96) = ActiveUserEquipId;
  v32 = *v14;
  ActiveUserEquipId = MyRoomData__getUserFriendSum((MyRoomData_o *)ActiveUserEquipId, v31);
  if ( !v32 )
    goto LABEL_44;
  *(_DWORD *)(v32 + 100) = ActiveUserEquipId;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 104) = (*p_usrData)->fields.friendKeep;
  ActiveUserEquipId = (int64_t)MyRoomData__getUsrSvtNum((MyRoomData_o *)ActiveUserEquipId, v33);
  if ( !ActiveUserEquipId )
    goto LABEL_44;
  if ( !*(_DWORD *)(ActiveUserEquipId + 24) )
    goto LABEL_45;
  if ( !*v14 || (*(_DWORD *)(*v14 + 108) = *(_DWORD *)(ActiveUserEquipId + 32), !*p_usrData) || !*v14 )
LABEL_44:
    sub_B0D97C(ActiveUserEquipId);
  *(_DWORD *)(*v14 + 112) = (*p_usrData)->fields.svtKeep;
  if ( *(_DWORD *)(ActiveUserEquipId + 24) <= 1u )
  {
LABEL_45:
    v41 = sub_B0D9A8(ActiveUserEquipId);
    sub_B0D948(v41, 0LL);
  }
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 116) = *(_DWORD *)(ActiveUserEquipId + 36);
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 120) = (*p_usrData)->fields.svtEquipKeep;
  if ( !*p_usrData )
    goto LABEL_44;
  ActiveUserEquipId = *v14;
  if ( !*v14 )
    goto LABEL_44;
  friendCode = (System_Int32_array **)(*p_usrData)->fields.friendCode;
  *(_QWORD *)(ActiveUserEquipId + 128) = friendCode;
  sub_B0D840((BattleServantConfConponent_o *)(ActiveUserEquipId + 128), friendCode, v34, v35, v36, v37, v38, v39);
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 136) = (*p_usrData)->fields.qp;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 140) = (*p_usrData)->fields.mana;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 144) = (*p_usrData)->fields.stone;
  if ( !*p_usrData || !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 148) = (*p_usrData)->fields.rarePri;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}