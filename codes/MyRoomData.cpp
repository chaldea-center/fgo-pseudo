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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct UserGameEntity_o *usrData; // x8

  if ( (byte_42B1392 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1392 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance )
  {
    sub_B52A5C(Instance, v4);
  }
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Instance, usrData->fields.userId, 0LL);
}


ServantEntity_o *__fastcall MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  ServantEntity_o *result; // x0

  if ( (byte_42B138F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B138F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  result = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                svtId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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

  if ( (byte_42B1390 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1390 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance
    || (Instance = (char *)UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)Instance,
                             usrData->fields.userId,
                             hSvtId,
                             0LL)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  v8 = *(_QWORD *)(Instance + 100);
  v9 = *(_QWORD *)(Instance + 108);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
}


ServantLimitEntity_o *__fastcall MyRoomData__getSvtLimitData(
        MyRoomData_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  ServantLimitEntity_o *result; // x0

  if ( (byte_42B1391 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1391 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v7);
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0LL);
  return result;
}


int32_t __fastcall MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42B138C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B138C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v3);
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
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42B138B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B138B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  return UserExpMaster__getEntityFromLevel((UserExpMaster_o *)Instance, currentLv + 1, 0LL);
}


UserServantEntity_o *__fastcall MyRoomData__getUsrSvtData(
        MyRoomData_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  UserServantEntity_o *result; // x0

  if ( (byte_42B138E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B138E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  result = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result,
             usrSvtId,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return result;
}


System_Int32_array *__fastcall MyRoomData__getUsrSvtNum(MyRoomData_o *this, const MethodInfo *method)
{
  System_Int32_array *v2; // x19
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *result; // x0
  __int64 v7; // x0
  int32_t servantEquipSum; // [xsp+8h] [xbp-8h] BYREF
  int32_t servantSum; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_42B138D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B138D = 1;
  }
  servantSum = 0;
  servantEquipSum = 0;
  v2 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 2LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserServantMaster__getCount(
                                      (UserServantMaster_o *)Instance,
                                      &servantSum,
                                      &servantEquipSum,
                                      0,
                                      0LL),
        !v2) )
  {
    sub_B52A5C(Instance, v4);
  }
  max_length = v2->max_length;
  if ( !max_length || (v2->m_Items[1] = servantSum, max_length == 1) )
  {
    v7 = sub_B52A88(Instance);
    sub_B52A28(v7, 0LL);
  }
  result = v2;
  v2->m_Items[2] = servantEquipSum;
  return result;
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
  MstProfileData_o *v11; // x21
  int64_t *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **name; // x1
  int64_t v28; // x21
  int64_t v29; // x21
  int64_t v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **friendCode; // x1
  __int64 v38; // x0
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t lateExp; // [xsp+8h] [xbp-28h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42B138A & 1) == 0 )
  {
    sub_B52984(&MstProfileData_TypeInfo);
    byte_42B138A = 1;
  }
  exp = 0LL;
  lateExp = 0LL;
  barExp = 0.0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  p_usrData = &this->fields.usrData;
  sub_B52920((BattleServantConfConponent_o *)p_usrData, (System_Int32_array **)SelfUserGame, v5, v6, v7, v8, v9, v10);
  v11 = (MstProfileData_o *)sub_B52A54(MstProfileData_TypeInfo);
  MstProfileData___ctor(v11, 0LL);
  v12 = (int64_t *)(p_usrData + 3);
  p_usrData[3] = (struct UserGameEntity_o *)v11;
  sub_B52920((BattleServantConfConponent_o *)(p_usrData + 3), (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
  if ( !*p_usrData )
    goto LABEL_44;
  ActiveUserEquipId = (int64_t)p_usrData[3];
  if ( !ActiveUserEquipId )
    goto LABEL_44;
  name = (System_Int32_array **)(*p_usrData)->fields.name;
  *(_QWORD *)(ActiveUserEquipId + 16) = name;
  sub_B52920((BattleServantConfConponent_o *)(ActiveUserEquipId + 16), name, v21, v22, v23, v24, v25, v26);
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v12 )
    goto LABEL_44;
  *(_DWORD *)(*v12 + 32) = (*p_usrData)->fields.genderType;
  ActiveUserEquipId = (int64_t)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_44;
  v28 = *v12;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId((UserGameEntity_o *)ActiveUserEquipId, 0LL);
  if ( !v28 )
    goto LABEL_44;
  *(_QWORD *)(v28 + 40) = ActiveUserEquipId;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v12 )
    goto LABEL_44;
  *(_DWORD *)(*v12 + 48) = (*p_usrData)->fields.lv;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v12 )
    goto LABEL_44;
  *(_QWORD *)(*v12 + 24) = (*p_usrData)->fields.birthDay;
  ActiveUserEquipId = (int64_t)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_44;
  ActiveUserEquipId = UserGameEntity__getExpInfo((UserGameEntity_o *)ActiveUserEquipId, &exp, &lateExp, &barExp, 0LL);
  if ( (ActiveUserEquipId & 1) != 0 )
  {
    if ( !*v12 )
      goto LABEL_44;
    *(_QWORD *)(*v12 + 56) = exp;
    if ( !*v12 )
      goto LABEL_44;
    *(_QWORD *)(*v12 + 64) = lateExp;
    if ( !*v12 )
      goto LABEL_44;
    *(float *)(*v12 + 72) = barExp;
  }
  ActiveUserEquipId = (int64_t)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_44;
  v29 = *v12;
  ActiveUserEquipId = UserGameEntity__GetFriendPoint((UserGameEntity_o *)ActiveUserEquipId, 0LL);
  if ( !v29 )
    goto LABEL_44;
  *(_DWORD *)(v29 + 96) = ActiveUserEquipId;
  v30 = *v12;
  ActiveUserEquipId = MyRoomData__getUserFriendSum((MyRoomData_o *)ActiveUserEquipId, v20);
  if ( !v30 )
    goto LABEL_44;
  *(_DWORD *)(v30 + 100) = ActiveUserEquipId;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v12 )
    goto LABEL_44;
  *(_DWORD *)(*v12 + 104) = (*p_usrData)->fields.friendKeep;
  ActiveUserEquipId = (int64_t)MyRoomData__getUsrSvtNum((MyRoomData_o *)ActiveUserEquipId, v20);
  if ( !ActiveUserEquipId )
    goto LABEL_44;
  if ( !*(_DWORD *)(ActiveUserEquipId + 24) )
    goto LABEL_45;
  if ( !*v12 || (*(_DWORD *)(*v12 + 108) = *(_DWORD *)(ActiveUserEquipId + 32), !*p_usrData) || !*v12 )
LABEL_44:
    sub_B52A5C(ActiveUserEquipId, v20);
  *(_DWORD *)(*v12 + 112) = (*p_usrData)->fields.svtKeep;
  if ( *(_DWORD *)(ActiveUserEquipId + 24) <= 1u )
  {
LABEL_45:
    v38 = sub_B52A88(ActiveUserEquipId);
    sub_B52A28(v38, 0LL);
  }
  if ( !*v12 )
    goto LABEL_44;
  *(_DWORD *)(*v12 + 116) = *(_DWORD *)(ActiveUserEquipId + 36);
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v12 )
    goto LABEL_44;
  *(_DWORD *)(*v12 + 120) = (*p_usrData)->fields.svtEquipKeep;
  if ( !*p_usrData )
    goto LABEL_44;
  ActiveUserEquipId = *v12;
  if ( !*v12 )
    goto LABEL_44;
  friendCode = (System_Int32_array **)(*p_usrData)->fields.friendCode;
  *(_QWORD *)(ActiveUserEquipId + 128) = friendCode;
  sub_B52920((BattleServantConfConponent_o *)(ActiveUserEquipId + 128), friendCode, v31, v32, v33, v34, v35, v36);
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v12 )
    goto LABEL_44;
  *(_DWORD *)(*v12 + 136) = (*p_usrData)->fields.qp;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v12 )
    goto LABEL_44;
  *(_DWORD *)(*v12 + 140) = (*p_usrData)->fields.mana;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v12 )
    goto LABEL_44;
  *(_DWORD *)(*v12 + 144) = (*p_usrData)->fields.stone;
  if ( !*p_usrData || !*v12 )
    goto LABEL_44;
  *(_DWORD *)(*v12 + 148) = (*p_usrData)->fields.rarePri;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}